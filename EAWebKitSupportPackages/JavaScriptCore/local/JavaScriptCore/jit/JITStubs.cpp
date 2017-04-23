/*
 * Copyright (C) 2008, 2009, 2013 Apple Inc. All rights reserved.
 * Copyright (C) 2008 Cameron Zwarich <cwzwarich@uwaterloo.ca>
 * Copyright (C) Research In Motion Limited 2010, 2011. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#if ENABLE(JIT)
#include "JITStubs.h"

#include "Arguments.h"
#include "ArrayConstructor.h"
#include "CallFrame.h"
#include "CallFrameInlines.h"
#include "CodeBlock.h"
#include "CodeProfiling.h"
#include "CommonSlowPaths.h"
#include "DFGCompilationMode.h"
#include "DFGDriver.h"
#include "DFGOSREntry.h"
#include "DFGWorklist.h"
#include "Debugger.h"
#include "DeferGC.h"
#include "ErrorInstance.h"
#include "ExceptionHelpers.h"
#include "GetterSetter.h"
#include "Heap.h"
#include <wtf/InlineASM.h>
#include "JIT.h"
#include "JITExceptions.h"
#include "JITToDFGDeferredCompilationCallback.h"
#include "JSActivation.h"
#include "JSArray.h"
#include "JSFunction.h"
#include "JSGlobalObjectFunctions.h"
#include "JSNameScope.h"
#include "JSNotAnObject.h"
#include "JSPropertyNameIterator.h"
#include "JSString.h"
#include "JSWithScope.h"
#include "LegacyProfiler.h"
#include "NameInstance.h"
#include "ObjectConstructor.h"
#include "ObjectPrototype.h"
#include "Operations.h"
#include "Parser.h"
#include "RegExpObject.h"
#include "RegExpPrototype.h"
#include "Register.h"
#include "RepatchBuffer.h"
#include "SamplingTool.h"
#include "SlowPathCall.h"
#include "Strong.h"
#include "StructureRareDataInlines.h"
#include <wtf/StdLibExtras.h>
#include <stdarg.h>
#include <stdio.h>

using namespace std;

#if CPU(ARM_TRADITIONAL)
#include "JITStubsARM.h"
#elif CPU(ARM_THUMB2)
#include "JITStubsARMv7.h"
#elif CPU(MIPS)
#include "JITStubsMIPS.h"
#elif CPU(SH4)
#include "JITStubsSH4.h"
#elif CPU(X86)
#include "JITStubsX86.h"
#elif CPU(X86_64)
#include "JITStubsX86_64.h"
#else
#error "JIT not supported on this platform."
#endif

namespace JSC {

#if ENABLE(OPCODE_SAMPLING)
    #define CTI_SAMPLER stackFrame.vm->interpreter->sampler()
#else
    #define CTI_SAMPLER 0
#endif

void performPlatformSpecificJITAssertions(VM* vm)
{
    if (!vm->canUseJIT())
        return;

#if CPU(ARM_THUMB2)
    performARMv7JITAssertions();
#elif CPU(ARM_TRADITIONAL)
    performARMJITAssertions();
#elif CPU(MIPS)
    performMIPSJITAssertions();
#elif CPU(SH4)
    performSH4JITAssertions();
#endif
}

NEVER_INLINE static void tryCacheGetByID(CallFrame* callFrame, CodeBlock* codeBlock, ReturnAddressPtr returnAddress, JSValue baseValue, const Identifier& propertyName, const PropertySlot& slot, StructureStubInfo* stubInfo)
{
    ConcurrentJITLocker locker(codeBlock->m_lock);
    
    // FIXME: Write a test that proves we need to check for recursion here just
    // like the interpreter does, then add a check for recursion.

    // FIXME: Cache property access for immediates.
    if (!baseValue.isCell()) {
        ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_generic));
        return;
    }
    
    VM* vm = &callFrame->vm();

    if (isJSArray(baseValue) && propertyName == callFrame->propertyNames().length) {
        JIT::compilePatchGetArrayLength(callFrame->scope()->vm(), codeBlock, returnAddress);
        return;
    }
    
    if (isJSString(baseValue) && propertyName == callFrame->propertyNames().length) {
        // The tradeoff of compiling an patched inline string length access routine does not seem
        // to pay off, so we currently only do this for arrays.
        ctiPatchCallByReturnAddress(codeBlock, returnAddress, vm->getCTIStub(stringLengthTrampolineGenerator).code());
        return;
    }

    // Uncacheable: give up.
    if (!slot.isCacheable()) {
        stubInfo->accessType = access_get_by_id_generic;
        ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_generic));
        return;
    }

    JSCell* baseCell = baseValue.asCell();
    Structure* structure = baseCell->structure();

    if (structure->isUncacheableDictionary() || structure->typeInfo().prohibitsPropertyCaching()) {
        stubInfo->accessType = access_get_by_id_generic;
        ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_generic));
        return;
    }

    // Cache hit: Specialize instruction and ref Structures.

    if (slot.slotBase() == baseValue) {
        RELEASE_ASSERT(stubInfo->accessType == access_unset);
        if (!slot.isCacheableValue() || !MacroAssembler::isCompactPtrAlignedAddressOffset(maxOffsetRelativeToPatchedStorage(slot.cachedOffset())))
            ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_self_fail));
        else {
            JIT::patchGetByIdSelf(codeBlock, stubInfo, structure, slot.cachedOffset(), returnAddress);
            stubInfo->initGetByIdSelf(callFrame->vm(), codeBlock->ownerExecutable(), structure);
        }
        return;
    }

    if (structure->isDictionary()) {
        stubInfo->accessType = access_get_by_id_generic;
        ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_generic));
        return;
    }

    if (slot.slotBase() == structure->prototypeForLookup(callFrame)) {
        JSObject* slotBaseObject = asObject(slot.slotBase());
        size_t offset = slot.cachedOffset();

        if (structure->typeInfo().hasImpureGetOwnPropertySlot()) {
            stubInfo->accessType = access_get_by_id_generic;
            ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_generic));
            return;
        }
        
        // Since we're accessing a prototype in a loop, it's a good bet that it
        // should not be treated as a dictionary.
        if (slotBaseObject->structure()->isDictionary()) {
            slotBaseObject->flattenDictionaryObject(callFrame->vm());
            offset = slotBaseObject->structure()->get(callFrame->vm(), propertyName);
        }
        
        stubInfo->initGetByIdProto(callFrame->vm(), codeBlock->ownerExecutable(), structure, slotBaseObject->structure(), slot.isCacheableValue());

        ASSERT(!structure->isDictionary());
        ASSERT(!slotBaseObject->structure()->isDictionary());
        JIT::compileGetByIdProto(callFrame->scope()->vm(), callFrame, codeBlock, stubInfo, structure, slotBaseObject->structure(), propertyName, slot, offset, returnAddress);
        return;
    }

    PropertyOffset offset = slot.cachedOffset();
    size_t count = normalizePrototypeChainForChainAccess(callFrame, baseValue, slot.slotBase(), propertyName, offset);
    if (count == InvalidPrototypeChain) {
        stubInfo->accessType = access_get_by_id_generic;
        ctiPatchCallByReturnAddress(codeBlock, returnAddress, FunctionPtr(cti_op_get_by_id_generic));
        return;
    }

    StructureChain* prototypeChain = structure->prototypeChain(callFrame);
    stubInfo->initGetByIdChain(callFrame->vm(), codeBlock->ownerExecutable(), structure, prototypeChain, count, slot.isCacheableValue());
    JIT::compileGetByIdChain(callFrame->scope()->vm(), callFrame, codeBlock, stubInfo, structure, prototypeChain, count, propertyName, slot, offset, returnAddress);
}

#if !defined(NDEBUG)

extern "C" {

static void jscGeneratedNativeCode() 
{
    // When executing a JIT stub function (which might do an allocation), we hack the return address
    // to pretend to be executing this function, to keep stack logging tools from blowing out
    // memory.
}

}

struct StackHack {
    ALWAYS_INLINE StackHack(JITStackFrame& stackFrame) 
        : stackFrame(stackFrame)
        , savedReturnAddress(*stackFrame.returnAddressSlot())
    {
        if (!CodeProfiling::enabled())
            *stackFrame.returnAddressSlot() = ReturnAddressPtr(FunctionPtr(jscGeneratedNativeCode));
    }

    ALWAYS_INLINE ~StackHack() 
    { 
        *stackFrame.returnAddressSlot() = savedReturnAddress;
    }

    JITStackFrame& stackFrame;
    ReturnAddressPtr savedReturnAddress;
};

#define STUB_INIT_STACK_FRAME(stackFrame) JITStackFrame& stackFrame = *reinterpret_cast_ptr<JITStackFrame*>(STUB_ARGS); StackHack stackHack(stackFrame)
#define STUB_SET_RETURN_ADDRESS(returnAddress) stackHack.savedReturnAddress = ReturnAddressPtr(returnAddress)
#define STUB_RETURN_ADDRESS stackHack.savedReturnAddress

#else

#define STUB_INIT_STACK_FRAME(stackFrame) JITStackFrame& stackFrame = *reinterpret_cast_ptr<JITStackFrame*>(STUB_ARGS)
#define STUB_SET_RETURN_ADDRESS(returnAddress) *stackFrame.returnAddressSlot() = ReturnAddressPtr(returnAddress)
#define STUB_RETURN_ADDRESS *stackFrame.returnAddressSlot()

#endif

// The reason this is not inlined is to avoid having to do a PIC branch
// to get the address of the ctiVMThrowTrampoline function. It's also
// good to keep the code size down by leaving as much of the exception
// handling code out of line as possible.
static NEVER_INLINE void returnToThrowTrampoline(VM* vm, ReturnAddressPtr exceptionLocation, ReturnAddressPtr& returnAddressSlot)
{
    RELEASE_ASSERT(vm->exception());
    vm->exceptionLocation = exceptionLocation;
    returnAddressSlot = ReturnAddressPtr(FunctionPtr(ctiVMThrowTrampoline));
}

#define VM_THROW_EXCEPTION() \
    do { \
        VM_THROW_EXCEPTION_AT_END(); \
        return 0; \
    } while (0)
#define VM_THROW_EXCEPTION_AT_END() \
    do {\
        returnToThrowTrampoline(stackFrame.vm, STUB_RETURN_ADDRESS, STUB_RETURN_ADDRESS);\
    } while (0)

#define CHECK_FOR_EXCEPTION() \
    do { \
        if (UNLIKELY(stackFrame.vm->exception())) \
            VM_THROW_EXCEPTION(); \
    } while (0)
#define CHECK_FOR_EXCEPTION_AT_END() \
    do { \
        if (UNLIKELY(stackFrame.vm->exception())) \
            VM_THROW_EXCEPTION_AT_END(); \
    } while (0)
#define CHECK_FOR_EXCEPTION_VOID() \
    do { \
        if (UNLIKELY(stackFrame.vm->exception())) { \
            VM_THROW_EXCEPTION_AT_END(); \
            return; \
        } \
    } while (0)

class ErrorFunctor {
public:
    virtual ~ErrorFunctor() { }
    virtual JSValue operator()(ExecState*) = 0;
};

class ErrorWithExecFunctor : public ErrorFunctor {
public:
    typedef JSObject* (*Factory)(ExecState* exec);
    
    ErrorWithExecFunctor(Factory factory)
        : m_factory(factory)
    {
    }

    virtual JSValue operator()(ExecState* exec) OVERRIDE
    {
        return m_factory(exec);
    }

private:
    Factory m_factory;
};

class ErrorWithExecAndCalleeFunctor : public ErrorFunctor {
public:
    typedef JSObject* (*Factory)(ExecState* exec, JSValue callee);

    ErrorWithExecAndCalleeFunctor(Factory factory, JSValue callee)
        : m_factory(factory), m_callee(callee)
    {
    }

    virtual JSValue operator()(ExecState* exec) OVERRIDE
    {
        return m_factory(exec, m_callee);
    }
private:
    Factory m_factory;
    JSValue m_callee;
};

// Helper function for JIT stubs that may throw an exception in the middle of
// processing a function call. This function rolls back the stack to
// our caller, so exception processing can proceed from a valid state.
template<typename T> static T throwExceptionFromOpCall(JITStackFrame& jitStackFrame, CallFrame* newCallFrame, ReturnAddressPtr& returnAddressSlot, ErrorFunctor* createError = 0)
{
    CallFrame* callFrame = newCallFrame->callerFrame()->removeHostCallFrameFlag();
    jitStackFrame.callFrame = callFrame;
    ASSERT(callFrame);
    callFrame->vm().topCallFrame = callFrame;
    if (createError)
        callFrame->vm().throwException(callFrame, (*createError)(callFrame));
    ASSERT(callFrame->vm().exception());
    returnToThrowTrampoline(&callFrame->vm(), ReturnAddressPtr(newCallFrame->returnPC()), returnAddressSlot);
    return T();
}

// If the CPU specific header does not provide an implementation, use the default one here.
#ifndef DEFINE_STUB_FUNCTION
#define DEFINE_STUB_FUNCTION(rtype, op) rtype JIT_STUB cti_##op(STUB_ARGS_DECLARATION)
#endif

DEFINE_STUB_FUNCTION(void, handle_watchdog_timer)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    CallFrame* callFrame = stackFrame.callFrame;
    VM* vm = stackFrame.vm;
    if (UNLIKELY(vm->watchdog.didFire(callFrame))) {
        vm->throwException(callFrame, createTerminatedExecutionException(vm));
        VM_THROW_EXCEPTION_AT_END();
        return;
    }
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_generic)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;
    Identifier& ident = stackFrame.args[1].identifier();

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(callFrame, ident, slot);

    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    CallFrame* callFrame = stackFrame.callFrame;
    Identifier& ident = stackFrame.args[1].identifier();

    CodeBlock* codeBlock = stackFrame.callFrame->codeBlock();
    StructureStubInfo* stubInfo = &codeBlock->getStubInfo(STUB_RETURN_ADDRESS);
    AccessType accessType = static_cast<AccessType>(stubInfo->accessType);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(callFrame, ident, slot);
    
    if (accessType != static_cast<AccessType>(stubInfo->accessType))
        return JSValue::encode(result);

    if (!stubInfo->seenOnce())
        stubInfo->setSeen();
    else
        tryCacheGetByID(callFrame, codeBlock, STUB_RETURN_ADDRESS, baseValue, ident, slot, stubInfo);

    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_self_fail)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;
    Identifier& ident = stackFrame.args[1].identifier();

    CodeBlock* codeBlock = callFrame->codeBlock();
    StructureStubInfo* stubInfo = &codeBlock->getStubInfo(STUB_RETURN_ADDRESS);
    AccessType accessType = static_cast<AccessType>(stubInfo->accessType);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(callFrame, ident, slot);
    
    if (accessType != static_cast<AccessType>(stubInfo->accessType))
        return JSValue::encode(result);

    CHECK_FOR_EXCEPTION();

    ConcurrentJITLocker locker(codeBlock->m_lock);
    
    if (baseValue.isCell()
        && slot.isCacheable()
        && !baseValue.asCell()->structure()->isUncacheableDictionary()
        && slot.slotBase() == baseValue) {

        PolymorphicAccessStructureList* polymorphicStructureList;
        int listIndex = 1;

        if (stubInfo->accessType == access_unset)
            stubInfo->initGetByIdSelf(callFrame->vm(), codeBlock->ownerExecutable(), baseValue.asCell()->structure());

        if (stubInfo->accessType == access_get_by_id_self) {
            ASSERT(!stubInfo->stubRoutine);
            polymorphicStructureList = new PolymorphicAccessStructureList(callFrame->vm(), codeBlock->ownerExecutable(), 0, stubInfo->u.getByIdSelf.baseObjectStructure.get(), true);
            stubInfo->initGetByIdSelfList(polymorphicStructureList, 1);
        } else {
            polymorphicStructureList = stubInfo->u.getByIdSelfList.structureList;
            listIndex = stubInfo->u.getByIdSelfList.listSize;
        }
        if (listIndex < POLYMORPHIC_LIST_CACHE_SIZE) {
            stubInfo->u.getByIdSelfList.listSize++;
            JIT::compileGetByIdSelfList(callFrame->scope()->vm(), codeBlock, stubInfo, polymorphicStructureList, listIndex, baseValue.asCell()->structure(), ident, slot, slot.cachedOffset());

            if (listIndex == (POLYMORPHIC_LIST_CACHE_SIZE - 1))
                ctiPatchCallByReturnAddress(codeBlock, STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_generic));
        }
    } else
        ctiPatchCallByReturnAddress(callFrame->codeBlock(), STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_generic));
    return JSValue::encode(result);
}

static PolymorphicAccessStructureList* getPolymorphicAccessStructureListSlot(VM& vm, ScriptExecutable* owner, StructureStubInfo* stubInfo, int& listIndex)
{
    PolymorphicAccessStructureList* prototypeStructureList = 0;
    listIndex = 1;

    switch (stubInfo->accessType) {
    case access_get_by_id_proto:
        prototypeStructureList = new PolymorphicAccessStructureList(vm, owner, stubInfo->stubRoutine, stubInfo->u.getByIdProto.baseObjectStructure.get(), stubInfo->u.getByIdProto.prototypeStructure.get(), true);
        stubInfo->stubRoutine.clear();
        stubInfo->initGetByIdProtoList(prototypeStructureList, 2);
        break;
    case access_get_by_id_chain:
        prototypeStructureList = new PolymorphicAccessStructureList(vm, owner, stubInfo->stubRoutine, stubInfo->u.getByIdChain.baseObjectStructure.get(), stubInfo->u.getByIdChain.chain.get(), true);
        stubInfo->stubRoutine.clear();
        stubInfo->initGetByIdProtoList(prototypeStructureList, 2);
        break;
    case access_get_by_id_proto_list:
        prototypeStructureList = stubInfo->u.getByIdProtoList.structureList;
        listIndex = stubInfo->u.getByIdProtoList.listSize;
        if (listIndex < POLYMORPHIC_LIST_CACHE_SIZE)
            stubInfo->u.getByIdProtoList.listSize++;
        break;
    default:
        RELEASE_ASSERT_NOT_REACHED();
    }
    
    ASSERT(listIndex <= POLYMORPHIC_LIST_CACHE_SIZE);
    return prototypeStructureList;
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_getter_stub)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    CallFrame* callFrame = stackFrame.callFrame;
    JSValue result = callGetter(callFrame, stackFrame.args[1].jsObject(), stackFrame.args[0].jsObject());
    if (callFrame->hadException())
        returnToThrowTrampoline(&callFrame->vm(), stackFrame.args[2].returnAddress(), STUB_RETURN_ADDRESS);

    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_custom_stub)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    CallFrame* callFrame = stackFrame.callFrame;
    JSObject* slotBase = stackFrame.args[0].jsObject();
    PropertySlot::GetValueFunc getter = reinterpret_cast<PropertySlot::GetValueFunc>(stackFrame.args[1].asPointer);
    const Identifier& ident = stackFrame.args[2].identifier();
    JSValue result = getter(callFrame, slotBase, ident);
    if (callFrame->hadException())
        returnToThrowTrampoline(&callFrame->vm(), stackFrame.args[3].returnAddress(), STUB_RETURN_ADDRESS);
    
    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_proto_list)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;
    const Identifier& propertyName = stackFrame.args[1].identifier();

    CodeBlock* codeBlock = callFrame->codeBlock();
    StructureStubInfo* stubInfo = &codeBlock->getStubInfo(STUB_RETURN_ADDRESS);
    AccessType accessType = static_cast<AccessType>(stubInfo->accessType);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(callFrame, propertyName, slot);

    CHECK_FOR_EXCEPTION();

    if (accessType != static_cast<AccessType>(stubInfo->accessType)
        || !baseValue.isCell()
        || !slot.isCacheable()
        || baseValue.asCell()->structure()->isDictionary()
        || baseValue.asCell()->structure()->typeInfo().prohibitsPropertyCaching()) {
        ctiPatchCallByReturnAddress(callFrame->codeBlock(), STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_proto_fail));
        return JSValue::encode(result);
    }

    ConcurrentJITLocker locker(codeBlock->m_lock);
    
    Structure* structure = baseValue.asCell()->structure();

    JSObject* slotBaseObject = asObject(slot.slotBase());
    
    PropertyOffset offset = slot.cachedOffset();

    if (slot.slotBase() == baseValue)
        ctiPatchCallByReturnAddress(codeBlock, STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_proto_fail));
    else if (slot.slotBase() == baseValue.asCell()->structure()->prototypeForLookup(callFrame)) {
        ASSERT(!baseValue.asCell()->structure()->isDictionary());
        
        if (baseValue.asCell()->structure()->typeInfo().hasImpureGetOwnPropertySlot()) {
            ctiPatchCallByReturnAddress(codeBlock, STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_proto_fail));
            return JSValue::encode(result);
        }
        
        // Since we're accessing a prototype in a loop, it's a good bet that it
        // should not be treated as a dictionary.
        if (slotBaseObject->structure()->isDictionary()) {
            slotBaseObject->flattenDictionaryObject(callFrame->vm());
            offset = slotBaseObject->structure()->get(callFrame->vm(), propertyName);
        }

        int listIndex;
        PolymorphicAccessStructureList* prototypeStructureList = getPolymorphicAccessStructureListSlot(callFrame->vm(), codeBlock->ownerExecutable(), stubInfo, listIndex);
        if (listIndex < POLYMORPHIC_LIST_CACHE_SIZE) {
            JIT::compileGetByIdProtoList(callFrame->scope()->vm(), callFrame, codeBlock, stubInfo, prototypeStructureList, listIndex, structure, slotBaseObject->structure(), propertyName, slot, offset);

            if (listIndex == (POLYMORPHIC_LIST_CACHE_SIZE - 1))
                ctiPatchCallByReturnAddress(codeBlock, STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_proto_list_full));
        }
    } else {
        size_t count = normalizePrototypeChainForChainAccess(callFrame, baseValue, slot.slotBase(), propertyName, offset);
        if (count == InvalidPrototypeChain) {
            ctiPatchCallByReturnAddress(codeBlock, STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_proto_fail));
            return JSValue::encode(result);
        }
        
        ASSERT(!baseValue.asCell()->structure()->isDictionary());
        int listIndex;
        PolymorphicAccessStructureList* prototypeStructureList = getPolymorphicAccessStructureListSlot(callFrame->vm(), codeBlock->ownerExecutable(), stubInfo, listIndex);
        
        if (listIndex < POLYMORPHIC_LIST_CACHE_SIZE) {
            StructureChain* protoChain = structure->prototypeChain(callFrame);
            JIT::compileGetByIdChainList(callFrame->scope()->vm(), callFrame, codeBlock, stubInfo, prototypeStructureList, listIndex, structure, protoChain, count, propertyName, slot, offset);

            if (listIndex == (POLYMORPHIC_LIST_CACHE_SIZE - 1))
                ctiPatchCallByReturnAddress(codeBlock, STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_id_proto_list_full));
        }
    }

    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_proto_list_full)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(stackFrame.callFrame, stackFrame.args[1].identifier(), slot);

    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_proto_fail)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(stackFrame.callFrame, stackFrame.args[1].identifier(), slot);

    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_array_fail)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(stackFrame.callFrame, stackFrame.args[1].identifier(), slot);

    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_id_string_fail)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue baseValue = stackFrame.args[0].jsValue();
    PropertySlot slot(baseValue);
    JSValue result = baseValue.get(stackFrame.callFrame, stackFrame.args[1].identifier(), slot);

    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

#if ENABLE(DFG_JIT)
DEFINE_STUB_FUNCTION(void, optimize)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    
    // Defer GC so that it doesn't run between when we enter into this slow path and
    // when we figure out the state of our code block. This prevents a number of
    // awkward reentrancy scenarios, including:
    //
    // - The optimized version of our code block being jettisoned by GC right after
    //   we concluded that we wanted to use it.
    //
    // - An optimized version of our code block being installed just as we decided
    //   that it wasn't ready yet.
    //
    // This still leaves the following: anytime we return from cti_optimize, we may
    // GC, and the GC may either jettison the optimized version of our code block,
    // or it may install the optimized version of our code block even though we
    // concluded that it wasn't ready yet.
    //
    // Note that jettisoning won't happen if we already initiated OSR, because in
    // that case we would have already planted the optimized code block into the JS
    // stack.
    DeferGC deferGC(stackFrame.vm->heap);
    
    CallFrame* callFrame = stackFrame.callFrame;
    CodeBlock* codeBlock = callFrame->codeBlock();
    VM& vm = callFrame->vm();
    unsigned bytecodeIndex = stackFrame.args[0].int32();

    if (bytecodeIndex) {
        // If we're attempting to OSR from a loop, assume that this should be
        // separately optimized.
        codeBlock->m_shouldAlwaysBeInlined = false;
    }
    
    if (Options::verboseOSR()) {
        dataLog(
            *codeBlock, ": Entered optimize with bytecodeIndex = ", bytecodeIndex,
            ", executeCounter = ", codeBlock->jitExecuteCounter(),
            ", optimizationDelayCounter = ", codeBlock->reoptimizationRetryCounter(),
            ", exitCounter = ");
        if (codeBlock->hasOptimizedReplacement())
            dataLog(codeBlock->replacement()->osrExitCounter());
        else
            dataLog("N/A");
        dataLog("\n");
    }

    if (!codeBlock->checkIfOptimizationThresholdReached()) {
        codeBlock->updateAllPredictions();
        if (Options::verboseOSR())
            dataLog("Choosing not to optimize ", *codeBlock, " yet, because the threshold hasn't been reached.\n");
        return;
    }
    
    if (codeBlock->m_shouldAlwaysBeInlined) {
        codeBlock->updateAllPredictions();
        codeBlock->optimizeAfterWarmUp();
        if (Options::verboseOSR())
            dataLog("Choosing not to optimize ", *codeBlock, " yet, because m_shouldAlwaysBeInlined == true.\n");
        return;
    }
    
    // We cannot be in the process of asynchronous compilation and also have an optimized
    // replacement.
    ASSERT(
        !vm.worklist
        || !(vm.worklist->compilationState(DFG::CompilationKey(codeBlock, DFG::DFGMode)) != DFG::Worklist::NotKnown
             && codeBlock->hasOptimizedReplacement()));
    
    DFG::Worklist::State worklistState;
    if (vm.worklist) {
        // The call to DFG::Worklist::completeAllReadyPlansForVM() will complete all ready
        // (i.e. compiled) code blocks. But if it completes ours, we also need to know
        // what the result was so that we don't plow ahead and attempt OSR or immediate
        // reoptimization. This will have already also set the appropriate JIT execution
        // count threshold depending on what happened, so if the compilation was anything
        // but successful we just want to return early. See the case for worklistState ==
        // DFG::Worklist::Compiled, below.
        
        // Note that we could have alternatively just called Worklist::compilationState()
        // here, and if it returned Compiled, we could have then called
        // completeAndScheduleOSR() below. But that would have meant that it could take
        // longer for code blocks to be completed: they would only complete when *their*
        // execution count trigger fired; but that could take a while since the firing is
        // racy. It could also mean that code blocks that never run again after being
        // compiled would sit on the worklist until next GC. That's fine, but it's
        // probably a waste of memory. Our goal here is to complete code blocks as soon as
        // possible in order to minimize the chances of us executing baseline code after
        // optimized code is already available.
        
        worklistState = vm.worklist->completeAllReadyPlansForVM(
            vm, DFG::CompilationKey(codeBlock, DFG::DFGMode));
    } else
        worklistState = DFG::Worklist::NotKnown;
    
    if (worklistState == DFG::Worklist::Compiling) {
        // We cannot be in the process of asynchronous compilation and also have an optimized
        // replacement.
        RELEASE_ASSERT(!codeBlock->hasOptimizedReplacement());
        codeBlock->setOptimizationThresholdBasedOnCompilationResult(CompilationDeferred);
        return;
    }
    
    if (worklistState == DFG::Worklist::Compiled) {
        // If we don't have an optimized replacement but we did just get compiled, then
        // the compilation failed or was invalidated, in which case the execution count
        // thresholds have already been set appropriately by
        // CodeBlock::setOptimizationThresholdBasedOnCompilationResult() and we have
        // nothing left to do.
        if (!codeBlock->hasOptimizedReplacement()) {
            codeBlock->updateAllPredictions();
            if (Options::verboseOSR())
                dataLog("Code block ", *codeBlock, " was compiled but it doesn't have an optimized replacement.\n");
            return;
        }
    } else if (codeBlock->hasOptimizedReplacement()) {
        if (Options::verboseOSR())
            dataLog("Considering OSR ", *codeBlock, " -> ", *codeBlock->replacement(), ".\n");
        // If we have an optimized replacement, then it must be the case that we entered
        // cti_optimize from a loop. That's because if there's an optimized replacement,
        // then all calls to this function will be relinked to the replacement and so
        // the prologue OSR will never fire.
        
        // This is an interesting threshold check. Consider that a function OSR exits
        // in the middle of a loop, while having a relatively low exit count. The exit
        // will reset the execution counter to some target threshold, meaning that this
        // code won't be reached until that loop heats up for >=1000 executions. But then
        // we do a second check here, to see if we should either reoptimize, or just
        // attempt OSR entry. Hence it might even be correct for
        // shouldReoptimizeFromLoopNow() to always return true. But we make it do some
        // additional checking anyway, to reduce the amount of recompilation thrashing.
        if (codeBlock->replacement()->shouldReoptimizeFromLoopNow()) {
            if (Options::verboseOSR()) {
                dataLog(
                    "Triggering reoptimization of ", *codeBlock,
                    "(", *codeBlock->replacement(), ") (in loop).\n");
            }
            codeBlock->reoptimize();
            return;
        }
    } else {
        if (!codeBlock->shouldOptimizeNow()) {
            if (Options::verboseOSR()) {
                dataLog(
                    "Delaying optimization for ", *codeBlock,
                    " because of insufficient profiling.\n");
            }
            return;
        }
        
        if (Options::verboseOSR())
            dataLog("Triggering optimized compilation of ", *codeBlock, "\n");
        
        unsigned numVarsWithValues;
        if (bytecodeIndex)
            numVarsWithValues = codeBlock->m_numVars;
        else
            numVarsWithValues = 0;
        Operands<JSValue> mustHandleValues(
            codeBlock->numParameters(), numVarsWithValues);
        for (size_t i = 0; i < mustHandleValues.size(); ++i) {
            int operand = mustHandleValues.operandForIndex(i);
            if (operandIsArgument(operand)
                && !VirtualRegister(operand).toArgument()
                && codeBlock->codeType() == FunctionCode
                && codeBlock->specializationKind() == CodeForConstruct) {
                // Ugh. If we're in a constructor, the 'this' argument may hold garbage. It will
                // also never be used. It doesn't matter what we put into the value for this,
                // but it has to be an actual value that can be grokked by subsequent DFG passes,
                // so we sanitize it here by turning it into Undefined.
                mustHandleValues[i] = jsUndefined();
            } else
                mustHandleValues[i] = callFrame->uncheckedR(operand).jsValue();
        }
        
        CompilationResult result = DFG::compile(
            vm, codeBlock->newReplacement().get(), DFG::DFGMode, bytecodeIndex,
            mustHandleValues, JITToDFGDeferredCompilationCallback::create(),
            vm.ensureWorklist());
        
        if (result != CompilationSuccessful)
            return;
    }
    
    CodeBlock* optimizedCodeBlock = codeBlock->replacement();
    ASSERT(JITCode::isOptimizingJIT(optimizedCodeBlock->jitType()));
    
    if (void* address = DFG::prepareOSREntry(callFrame, optimizedCodeBlock, bytecodeIndex)) {
        if (Options::verboseOSR()) {
            dataLog(
                "Performing OSR ", *codeBlock, " -> ", *optimizedCodeBlock, ", address ",
                RawPointer((STUB_RETURN_ADDRESS).value()), " -> ", RawPointer(address), ".\n");
        }

        codeBlock->optimizeSoon();
        STUB_SET_RETURN_ADDRESS(address);
        return;
    }

    if (Options::verboseOSR()) {
        dataLog(
            "Optimizing ", *codeBlock, " -> ", *codeBlock->replacement(),
            " succeeded, OSR failed, after a delay of ",
            codeBlock->optimizationDelayCounter(), ".\n");
    }

    // Count the OSR failure as a speculation failure. If this happens a lot, then
    // reoptimize.
    optimizedCodeBlock->countOSRExit();
    
    // We are a lot more conservative about triggering reoptimization after OSR failure than
    // before it. If we enter the optimize_from_loop trigger with a bucket full of fail
    // already, then we really would like to reoptimize immediately. But this case covers
    // something else: there weren't many (or any) speculation failures before, but we just
    // failed to enter the speculative code because some variable had the wrong value or
    // because the OSR code decided for any spurious reason that it did not want to OSR
    // right now. So, we only trigger reoptimization only upon the more conservative (non-loop)
    // reoptimization trigger.
    if (optimizedCodeBlock->shouldReoptimizeNow()) {
        if (Options::verboseOSR()) {
            dataLog(
                "Triggering reoptimization of ", *codeBlock, " -> ",
                *codeBlock->replacement(), " (after OSR fail).\n");
        }
        codeBlock->reoptimize();
        return;
    }

    // OSR failed this time, but it might succeed next time! Let the code run a bit
    // longer and then try again.
    codeBlock->optimizeAfterWarmUp();
}
#endif // ENABLE(DFG_JIT)

DEFINE_STUB_FUNCTION(void, op_tear_off_activation)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    ASSERT(stackFrame.callFrame->codeBlock()->needsFullScopeChain());
    jsCast<JSActivation*>(stackFrame.args[0].jsValue())->tearOff(*stackFrame.vm);
}

DEFINE_STUB_FUNCTION(void, op_tear_off_arguments)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;
    ASSERT(callFrame->codeBlock()->usesArguments());
    Arguments* arguments = jsCast<Arguments*>(stackFrame.args[0].jsValue());
    if (JSValue activationValue = stackFrame.args[1].jsValue()) {
        arguments->didTearOffActivation(callFrame, jsCast<JSActivation*>(activationValue));
        return;
    }
    arguments->tearOff(callFrame);
}

DEFINE_STUB_FUNCTION(void, op_profile_will_call)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    if (LegacyProfiler* profiler = stackFrame.vm->enabledProfiler())
        profiler->willExecute(stackFrame.callFrame, stackFrame.args[0].jsValue());
}

DEFINE_STUB_FUNCTION(void, op_profile_did_call)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    if (LegacyProfiler* profiler = stackFrame.vm->enabledProfiler())
        profiler->didExecute(stackFrame.callFrame, stackFrame.args[0].jsValue());
}

static JSValue getByVal(
    CallFrame* callFrame, JSValue baseValue, JSValue subscript, ReturnAddressPtr returnAddress)
{
    if (LIKELY(baseValue.isCell() && subscript.isString())) {
        if (JSValue result = baseValue.asCell()->fastGetOwnProperty(callFrame, asString(subscript)->value(callFrame)))
            return result;
    }

    if (subscript.isUInt32()) {
        uint32_t i = subscript.asUInt32();
        if (isJSString(baseValue) && asString(baseValue)->canGetIndex(i)) {
            ctiPatchCallByReturnAddress(callFrame->codeBlock(), returnAddress, FunctionPtr(cti_op_get_by_val_string));
            return asString(baseValue)->getIndex(callFrame, i);
        }
        return baseValue.get(callFrame, i);
    }

    if (isName(subscript))
        return baseValue.get(callFrame, jsCast<NameInstance*>(subscript.asCell())->privateName());

    Identifier property(callFrame, subscript.toString(callFrame)->value(callFrame));
    return baseValue.get(callFrame, property);
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_val)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;

    JSValue baseValue = stackFrame.args[0].jsValue();
    JSValue subscript = stackFrame.args[1].jsValue();
    
    if (baseValue.isObject() && subscript.isInt32()) {
        // See if it's worth optimizing this at all.
        JSObject* object = asObject(baseValue);
        bool didOptimize = false;

        unsigned bytecodeOffset = callFrame->locationAsBytecodeOffset();
        ASSERT(bytecodeOffset);
        ByValInfo& byValInfo = callFrame->codeBlock()->getByValInfo(bytecodeOffset - 1);
        ASSERT(!byValInfo.stubRoutine);
        
        if (hasOptimizableIndexing(object->structure())) {
            // Attempt to optimize.
            JITArrayMode arrayMode = jitArrayModeForStructure(object->structure());
            if (arrayMode != byValInfo.arrayMode) {
                JIT::compileGetByVal(&callFrame->vm(), callFrame->codeBlock(), &byValInfo, STUB_RETURN_ADDRESS, arrayMode);
                didOptimize = true;
            }
        }
        
        if (!didOptimize) {
            // If we take slow path more than 10 times without patching then make sure we
            // never make that mistake again. Or, if we failed to patch and we have some object
            // that intercepts indexed get, then don't even wait until 10 times. For cases
            // where we see non-index-intercepting objects, this gives 10 iterations worth of
            // opportunity for us to observe that the get_by_val may be polymorphic.
            if (++byValInfo.slowPathCount >= 10
                || object->structure()->typeInfo().interceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero()) {
                // Don't ever try to optimize.
                RepatchBuffer repatchBuffer(callFrame->codeBlock());
                repatchBuffer.relinkCallerToFunction(STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_val_generic));
            }
        }
    }
    
    JSValue result = getByVal(callFrame, baseValue, subscript, STUB_RETURN_ADDRESS);
    CHECK_FOR_EXCEPTION();
    return JSValue::encode(result);
}
    
DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_val_generic)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;

    JSValue baseValue = stackFrame.args[0].jsValue();
    JSValue subscript = stackFrame.args[1].jsValue();
    
    JSValue result = getByVal(callFrame, baseValue, subscript, STUB_RETURN_ADDRESS);
    CHECK_FOR_EXCEPTION();
    return JSValue::encode(result);
}
    
DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_by_val_string)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    
    CallFrame* callFrame = stackFrame.callFrame;
    
    JSValue baseValue = stackFrame.args[0].jsValue();
    JSValue subscript = stackFrame.args[1].jsValue();
    
    JSValue result;
    
    if (LIKELY(subscript.isUInt32())) {
        uint32_t i = subscript.asUInt32();
        if (isJSString(baseValue) && asString(baseValue)->canGetIndex(i))
            result = asString(baseValue)->getIndex(callFrame, i);
        else {
            result = baseValue.get(callFrame, i);
            if (!isJSString(baseValue))
                ctiPatchCallByReturnAddress(callFrame->codeBlock(), STUB_RETURN_ADDRESS, FunctionPtr(cti_op_get_by_val));
        }
    } else if (isName(subscript))
        result = baseValue.get(callFrame, jsCast<NameInstance*>(subscript.asCell())->privateName());
    else {
        Identifier property(callFrame, subscript.toString(callFrame)->value(callFrame));
        result = baseValue.get(callFrame, property);
    }
    
    CHECK_FOR_EXCEPTION_AT_END();
    return JSValue::encode(result);
}

static void putByVal(CallFrame* callFrame, JSValue baseValue, JSValue subscript, JSValue value)
{
    if (LIKELY(subscript.isUInt32())) {
        uint32_t i = subscript.asUInt32();
        if (baseValue.isObject()) {
            JSObject* object = asObject(baseValue);
            if (object->canSetIndexQuickly(i))
                object->setIndexQuickly(callFrame->vm(), i, value);
            else
                object->methodTable()->putByIndex(object, callFrame, i, value, callFrame->codeBlock()->isStrictMode());
        } else
            baseValue.putByIndex(callFrame, i, value, callFrame->codeBlock()->isStrictMode());
    } else if (isName(subscript)) {
        PutPropertySlot slot(callFrame->codeBlock()->isStrictMode());
        baseValue.put(callFrame, jsCast<NameInstance*>(subscript.asCell())->privateName(), value, slot);
    } else {
        Identifier property(callFrame, subscript.toString(callFrame)->value(callFrame));
        if (!callFrame->vm().exception()) { // Don't put to an object if toString threw an exception.
            PutPropertySlot slot(callFrame->codeBlock()->isStrictMode());
            baseValue.put(callFrame, property, value, slot);
        }
    }
}

DEFINE_STUB_FUNCTION(void, op_put_by_val)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;

    JSValue baseValue = stackFrame.args[0].jsValue();
    JSValue subscript = stackFrame.args[1].jsValue();
    JSValue value = stackFrame.args[2].jsValue();
    
    if (baseValue.isObject() && subscript.isInt32()) {
        // See if it's worth optimizing at all.
        JSObject* object = asObject(baseValue);
        bool didOptimize = false;

        unsigned bytecodeOffset = callFrame->locationAsBytecodeOffset();
        ASSERT(bytecodeOffset);
        ByValInfo& byValInfo = callFrame->codeBlock()->getByValInfo(bytecodeOffset - 1);
        ASSERT(!byValInfo.stubRoutine);
        
        if (hasOptimizableIndexing(object->structure())) {
            // Attempt to optimize.
            JITArrayMode arrayMode = jitArrayModeForStructure(object->structure());
            if (arrayMode != byValInfo.arrayMode) {
                JIT::compilePutByVal(&callFrame->vm(), callFrame->codeBlock(), &byValInfo, STUB_RETURN_ADDRESS, arrayMode);
                didOptimize = true;
            }
        }

        if (!didOptimize) {
            // If we take slow path more than 10 times without patching then make sure we
            // never make that mistake again. Or, if we failed to patch and we have some object
            // that intercepts indexed get, then don't even wait until 10 times. For cases
            // where we see non-index-intercepting objects, this gives 10 iterations worth of
            // opportunity for us to observe that the get_by_val may be polymorphic.
            if (++byValInfo.slowPathCount >= 10
                || object->structure()->typeInfo().interceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero()) {
                // Don't ever try to optimize.
                RepatchBuffer repatchBuffer(callFrame->codeBlock());
                repatchBuffer.relinkCallerToFunction(STUB_RETURN_ADDRESS, FunctionPtr(cti_op_put_by_val_generic));
            }
        }
    }
    
    putByVal(callFrame, baseValue, subscript, value);

    CHECK_FOR_EXCEPTION_AT_END();
}

DEFINE_STUB_FUNCTION(void, op_put_by_val_generic)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;

    JSValue baseValue = stackFrame.args[0].jsValue();
    JSValue subscript = stackFrame.args[1].jsValue();
    JSValue value = stackFrame.args[2].jsValue();
    
    putByVal(callFrame, baseValue, subscript, value);

    CHECK_FOR_EXCEPTION_AT_END();
}

DEFINE_STUB_FUNCTION(void*, op_throw)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    stackFrame.vm->throwException(stackFrame.callFrame, stackFrame.args[0].jsValue()); 
    ExceptionHandler handler = genericUnwind(stackFrame.vm, stackFrame.callFrame, stackFrame.args[0].jsValue());
    STUB_SET_RETURN_ADDRESS(handler.catchRoutine);
    return handler.callFrame;
}

DEFINE_STUB_FUNCTION(void, op_push_with_scope)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSObject* o = stackFrame.args[0].jsValue().toObject(stackFrame.callFrame);
    CHECK_FOR_EXCEPTION_VOID();
    stackFrame.callFrame->setScope(JSWithScope::create(stackFrame.callFrame, o));
}

DEFINE_STUB_FUNCTION(void, op_pop_scope)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    stackFrame.callFrame->setScope(stackFrame.callFrame->scope()->next());
}

DEFINE_STUB_FUNCTION(void, op_push_name_scope)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSNameScope* scope = JSNameScope::create(stackFrame.callFrame, stackFrame.args[0].identifier(), stackFrame.args[1].jsValue(), stackFrame.args[2].int32());

    CallFrame* callFrame = stackFrame.callFrame;
    callFrame->setScope(scope);
}

DEFINE_STUB_FUNCTION(void, op_put_by_index)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;
    unsigned property = stackFrame.args[1].int32();

    JSValue arrayValue = stackFrame.args[0].jsValue();
    ASSERT(isJSArray(arrayValue));
    asArray(arrayValue)->putDirectIndex(callFrame, property, stackFrame.args[2].jsValue());
}

DEFINE_STUB_FUNCTION(void*, op_switch_imm)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue scrutinee = stackFrame.args[0].jsValue();
    unsigned tableIndex = stackFrame.args[1].int32();
    CallFrame* callFrame = stackFrame.callFrame;
    CodeBlock* codeBlock = callFrame->codeBlock();

    if (scrutinee.isInt32())
        return codeBlock->switchJumpTable(tableIndex).ctiForValue(scrutinee.asInt32()).executableAddress();
    if (scrutinee.isDouble() && scrutinee.asDouble() == static_cast<int32_t>(scrutinee.asDouble()))
        return codeBlock->switchJumpTable(tableIndex).ctiForValue(static_cast<int32_t>(scrutinee.asDouble())).executableAddress();
    return codeBlock->switchJumpTable(tableIndex).ctiDefault.executableAddress();
}

DEFINE_STUB_FUNCTION(void*, op_switch_char)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue scrutinee = stackFrame.args[0].jsValue();
    unsigned tableIndex = stackFrame.args[1].int32();
    CallFrame* callFrame = stackFrame.callFrame;
    CodeBlock* codeBlock = callFrame->codeBlock();

    void* result = codeBlock->switchJumpTable(tableIndex).ctiDefault.executableAddress();

    if (scrutinee.isString()) {
        StringImpl* value = asString(scrutinee)->value(callFrame).impl();
        if (value->length() == 1)
            result = codeBlock->switchJumpTable(tableIndex).ctiForValue((*value)[0]).executableAddress();
    }

    CHECK_FOR_EXCEPTION_AT_END();
    return result;
}

DEFINE_STUB_FUNCTION(void*, op_switch_string)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    JSValue scrutinee = stackFrame.args[0].jsValue();
    unsigned tableIndex = stackFrame.args[1].int32();
    CallFrame* callFrame = stackFrame.callFrame;
    CodeBlock* codeBlock = callFrame->codeBlock();

    void* result = codeBlock->stringSwitchJumpTable(tableIndex).ctiDefault.executableAddress();

    if (scrutinee.isString()) {
        StringImpl* value = asString(scrutinee)->value(callFrame).impl();
        result = codeBlock->stringSwitchJumpTable(tableIndex).ctiForValue(value).executableAddress();
    }

    CHECK_FOR_EXCEPTION_AT_END();
    return result;
}

DEFINE_STUB_FUNCTION(void, op_put_getter_setter)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;

    ASSERT(stackFrame.args[0].jsValue().isObject());
    JSObject* baseObj = asObject(stackFrame.args[0].jsValue());

    VM& vm = callFrame->vm();
    GetterSetter* accessor = GetterSetter::create(vm);

    JSValue getter = stackFrame.args[2].jsValue();
    JSValue setter = stackFrame.args[3].jsValue();
    ASSERT(getter.isObject() || getter.isUndefined());
    ASSERT(setter.isObject() || setter.isUndefined());
    ASSERT(getter.isObject() || setter.isObject());

    if (!getter.isUndefined())
        accessor->setGetter(vm, asObject(getter));
    if (!setter.isUndefined())
        accessor->setSetter(vm, asObject(setter));
    baseObj->putDirectAccessor(callFrame, stackFrame.args[1].identifier(), accessor, Accessor);
}

DEFINE_STUB_FUNCTION(void, op_throw_static_error)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;
    String message = errorDescriptionForValue(callFrame, stackFrame.args[0].jsValue())->value(callFrame);
    if (stackFrame.args[1].asInt32)
        stackFrame.vm->throwException(callFrame, createReferenceError(callFrame, message));
    else
        stackFrame.vm->throwException(callFrame, createTypeError(callFrame, message));
    VM_THROW_EXCEPTION_AT_END();
}

DEFINE_STUB_FUNCTION(void, op_debug)
{
    STUB_INIT_STACK_FRAME(stackFrame);

    CallFrame* callFrame = stackFrame.callFrame;

    int debugHookID = stackFrame.args[0].int32();
    stackFrame.vm->interpreter->debug(callFrame, static_cast<DebugHookID>(debugHookID));
}

DEFINE_STUB_FUNCTION(void*, vm_throw)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    VM* vm = stackFrame.vm;
    ExceptionHandler handler = genericUnwind(vm, stackFrame.callFrame, vm->exception());
    STUB_SET_RETURN_ADDRESS(handler.catchRoutine);
    return handler.callFrame;
}

#if USE(JSVALUE32_64)
EncodedExceptionHandler JIT_STUB cti_vm_handle_exception(CallFrame* callFrame)
{
    ASSERT(!callFrame->hasHostCallFrameFlag());
    if (!callFrame) {
        // The entire stack has already been unwound. Nothing more to handle.
        return encode(uncaughtExceptionHandler());
    }

    VM* vm = callFrame->codeBlock()->vm();
    vm->topCallFrame = callFrame;
    return encode(genericUnwind(vm, callFrame, vm->exception()));
}
#else
ExceptionHandler JIT_STUB cti_vm_handle_exception(CallFrame* callFrame)
{
    ASSERT(!callFrame->hasHostCallFrameFlag());
    if (!callFrame) {
        // The entire stack has already been unwound. Nothing more to handle.
        return uncaughtExceptionHandler();
    }

    VM* vm = callFrame->codeBlock()->vm();
    vm->topCallFrame = callFrame;
    return genericUnwind(vm, callFrame, vm->exception());
}
#endif

DEFINE_STUB_FUNCTION(EncodedJSValue, op_resolve_scope)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    ExecState* exec = stackFrame.callFrame;
    Instruction* pc = stackFrame.args[0].pc();

    const Identifier& ident = exec->codeBlock()->identifier(pc[2].u.operand);
    return JSValue::encode(JSScope::resolve(exec, exec->scope(), ident));
}

DEFINE_STUB_FUNCTION(EncodedJSValue, op_get_from_scope)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    ExecState* exec = stackFrame.callFrame;
    Instruction* pc = stackFrame.args[0].pc();

    const Identifier& ident = exec->codeBlock()->identifier(pc[3].u.operand);
    JSObject* scope = jsCast<JSObject*>(exec->uncheckedR(pc[2].u.operand).jsValue());
    ResolveModeAndType modeAndType(pc[4].u.operand);

    PropertySlot slot(scope);
    if (!scope->getPropertySlot(exec, ident, slot)) {
        if (modeAndType.mode() == ThrowIfNotFound) {
            exec->vm().throwException(exec, createUndefinedVariableError(exec, ident));
            VM_THROW_EXCEPTION();
        }
        return JSValue::encode(jsUndefined());
    }

    // Covers implicit globals. Since they don't exist until they first execute, we didn't know how to cache them at compile time.
    if (slot.isCacheableValue() && slot.slotBase() == scope && scope->structure()->propertyAccessesAreCacheable()) {
        if (modeAndType.type() == GlobalProperty || modeAndType.type() == GlobalPropertyWithVarInjectionChecks) {
            CodeBlock* codeBlock = exec->codeBlock();
            ConcurrentJITLocker locker(codeBlock->m_lock);
            pc[5].u.structure.set(exec->vm(), codeBlock->ownerExecutable(), scope->structure());
            pc[6].u.operand = slot.cachedOffset();
        }
    }

    return JSValue::encode(slot.getValue(exec, ident));
}

DEFINE_STUB_FUNCTION(void, op_put_to_scope)
{
    STUB_INIT_STACK_FRAME(stackFrame);
    ExecState* exec = stackFrame.callFrame;
    Instruction* pc = stackFrame.args[0].pc();

    CodeBlock* codeBlock = exec->codeBlock();
    const Identifier& ident = codeBlock->identifier(pc[2].u.operand);
    JSObject* scope = jsCast<JSObject*>(exec->uncheckedR(pc[1].u.operand).jsValue());
    JSValue value = exec->r(pc[3].u.operand).jsValue();
    ResolveModeAndType modeAndType = ResolveModeAndType(pc[4].u.operand);

    if (modeAndType.mode() == ThrowIfNotFound && !scope->hasProperty(exec, ident)) {
        exec->vm().throwException(exec, createUndefinedVariableError(exec, ident));
        VM_THROW_EXCEPTION_AT_END();
        return;
    }

    PutPropertySlot slot(codeBlock->isStrictMode());
    scope->methodTable()->put(scope, exec, ident, value, slot);
    
    if (exec->vm().exception()) {
        VM_THROW_EXCEPTION_AT_END();
        return;
    }

    // Covers implicit globals. Since they don't exist until they first execute, we didn't know how to cache them at compile time.
    if (modeAndType.type() == GlobalProperty || modeAndType.type() == GlobalPropertyWithVarInjectionChecks) {
        if (slot.isCacheable() && slot.base() == scope && scope->structure()->propertyAccessesAreCacheable()) {
            ConcurrentJITLocker locker(codeBlock->m_lock);
            pc[5].u.structure.set(exec->vm(), codeBlock->ownerExecutable(), scope->structure());
            pc[6].u.operand = slot.cachedOffset();
        }
    }
}

} // namespace JSC

#endif // ENABLE(JIT)
