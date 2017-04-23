/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(WEB_AUDIO)

#include "JSBiquadFilterNode.h"

#include "AudioParam.h"
#include "BiquadFilterNode.h"
#include "ExceptionCode.h"
#include "JSAudioParam.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSBiquadFilterNodeTableValues[] =
{
    { "type", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeType), (intptr_t)setJSBiquadFilterNodeType },
    { "frequency", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeFrequency), (intptr_t)0 },
    { "detune", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeDetune), (intptr_t)0 },
    { "Q", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeQ), (intptr_t)0 },
    { "gain", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeGain), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSBiquadFilterNodeTable = { 16, 15, JSBiquadFilterNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSBiquadFilterNodeConstructorTableValues[] =
{
    { "LOWPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeLOWPASS), (intptr_t)0 },
    { "HIGHPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeHIGHPASS), (intptr_t)0 },
    { "BANDPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeBANDPASS), (intptr_t)0 },
    { "LOWSHELF", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeLOWSHELF), (intptr_t)0 },
    { "HIGHSHELF", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeHIGHSHELF), (intptr_t)0 },
    { "PEAKING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodePEAKING), (intptr_t)0 },
    { "NOTCH", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeNOTCH), (intptr_t)0 },
    { "ALLPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeALLPASS), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSBiquadFilterNodeConstructorTable = { 18, 15, JSBiquadFilterNodeConstructorTableValues, 0 };

COMPILE_ASSERT(0 == BiquadFilterNode::LOWPASS, BiquadFilterNodeEnumLOWPASSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == BiquadFilterNode::HIGHPASS, BiquadFilterNodeEnumHIGHPASSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == BiquadFilterNode::BANDPASS, BiquadFilterNodeEnumBANDPASSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == BiquadFilterNode::LOWSHELF, BiquadFilterNodeEnumLOWSHELFIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == BiquadFilterNode::HIGHSHELF, BiquadFilterNodeEnumHIGHSHELFIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == BiquadFilterNode::PEAKING, BiquadFilterNodeEnumPEAKINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == BiquadFilterNode::NOTCH, BiquadFilterNodeEnumNOTCHIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == BiquadFilterNode::ALLPASS, BiquadFilterNodeEnumALLPASSIsWrongUseDoNotCheckConstants);

const ClassInfo JSBiquadFilterNodeConstructor::s_info = { "BiquadFilterNodeConstructor", &Base::s_info, &JSBiquadFilterNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSBiquadFilterNodeConstructor) };

JSBiquadFilterNodeConstructor::JSBiquadFilterNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSBiquadFilterNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSBiquadFilterNodePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSBiquadFilterNodeConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBiquadFilterNodeConstructor, JSDOMWrapper>(exec, JSBiquadFilterNodeConstructorTable, jsCast<JSBiquadFilterNodeConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSBiquadFilterNodePrototypeTableValues[] =
{
    { "LOWPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeLOWPASS), (intptr_t)0 },
    { "HIGHPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeHIGHPASS), (intptr_t)0 },
    { "BANDPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeBANDPASS), (intptr_t)0 },
    { "LOWSHELF", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeLOWSHELF), (intptr_t)0 },
    { "HIGHSHELF", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeHIGHSHELF), (intptr_t)0 },
    { "PEAKING", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodePEAKING), (intptr_t)0 },
    { "NOTCH", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeNOTCH), (intptr_t)0 },
    { "ALLPASS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBiquadFilterNodeALLPASS), (intptr_t)0 },
    { "getFrequencyResponse", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsBiquadFilterNodePrototypeFunctionGetFrequencyResponse), (intptr_t)3 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSBiquadFilterNodePrototypeTable = { 34, 31, JSBiquadFilterNodePrototypeTableValues, 0 };
const ClassInfo JSBiquadFilterNodePrototype::s_info = { "BiquadFilterNodePrototype", &Base::s_info, &JSBiquadFilterNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSBiquadFilterNodePrototype) };

JSObject* JSBiquadFilterNodePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBiquadFilterNode>(vm, globalObject);
}

bool JSBiquadFilterNodePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSBiquadFilterNodePrototype* thisObject = jsCast<JSBiquadFilterNodePrototype*>(object);
    return getStaticPropertySlot<JSBiquadFilterNodePrototype, JSObject>(exec, JSBiquadFilterNodePrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSBiquadFilterNode::s_info = { "BiquadFilterNode", &Base::s_info, &JSBiquadFilterNodeTable, 0 , CREATE_METHOD_TABLE(JSBiquadFilterNode) };

JSBiquadFilterNode::JSBiquadFilterNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<BiquadFilterNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSBiquadFilterNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSBiquadFilterNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSBiquadFilterNodePrototype::create(vm, globalObject, JSBiquadFilterNodePrototype::createStructure(vm, globalObject, JSAudioNodePrototype::self(vm, globalObject)));
}

bool JSBiquadFilterNode::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSBiquadFilterNode* thisObject = jsCast<JSBiquadFilterNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSBiquadFilterNode, Base>(exec, JSBiquadFilterNodeTable, thisObject, propertyName, slot);
}

JSValue jsBiquadFilterNodeType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBiquadFilterNode* castedThis = jsCast<JSBiquadFilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BiquadFilterNode& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return result;
}


JSValue jsBiquadFilterNodeFrequency(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBiquadFilterNode* castedThis = jsCast<JSBiquadFilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BiquadFilterNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.frequency()));
    return result;
}


JSValue jsBiquadFilterNodeDetune(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBiquadFilterNode* castedThis = jsCast<JSBiquadFilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BiquadFilterNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.detune()));
    return result;
}


JSValue jsBiquadFilterNodeQ(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBiquadFilterNode* castedThis = jsCast<JSBiquadFilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BiquadFilterNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.q()));
    return result;
}


JSValue jsBiquadFilterNodeGain(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBiquadFilterNode* castedThis = jsCast<JSBiquadFilterNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    BiquadFilterNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.gain()));
    return result;
}


JSValue jsBiquadFilterNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSBiquadFilterNode* domObject = jsCast<JSBiquadFilterNode*>(asObject(slotBase));
    return JSBiquadFilterNode::getConstructor(exec->vm(), domObject->globalObject());
}

void JSBiquadFilterNode::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSBiquadFilterNode* thisObject = jsCast<JSBiquadFilterNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSBiquadFilterNode, Base>(exec, propertyName, value, JSBiquadFilterNodeTable, thisObject, slot);
}

void setJSBiquadFilterNodeType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    jsCast<JSBiquadFilterNode*>(thisObject)->setType(exec, value);
}


JSValue JSBiquadFilterNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBiquadFilterNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsBiquadFilterNodePrototypeFunctionGetFrequencyResponse(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSBiquadFilterNode::info()))
        return throwVMTypeError(exec);
    JSBiquadFilterNode* castedThis = jsCast<JSBiquadFilterNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSBiquadFilterNode::info());
    BiquadFilterNode& impl = castedThis->impl();
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    RefPtr<Float32Array> frequencyHz(toFloat32Array(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<Float32Array> magResponse(toFloat32Array(exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<Float32Array> phaseResponse(toFloat32Array(exec->argument(2)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.getFrequencyResponse(frequencyHz.get(), magResponse.get(), phaseResponse.get());
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsBiquadFilterNodeLOWPASS(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsBiquadFilterNodeHIGHPASS(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsBiquadFilterNodeBANDPASS(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsBiquadFilterNodeLOWSHELF(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsBiquadFilterNodeHIGHSHELF(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsBiquadFilterNodePEAKING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsBiquadFilterNodeNOTCH(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsBiquadFilterNodeALLPASS(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7BiquadFilterNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16BiquadFilterNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, BiquadFilterNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSBiquadFilterNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7BiquadFilterNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16BiquadFilterNodeE[2];
#if COMPILER(CLANG)
    // If this fails BiquadFilterNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(BiquadFilterNode), BiquadFilterNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // BiquadFilterNode has subclasses. If BiquadFilterNode has subclasses that get passed
    // to toJS() we currently require BiquadFilterNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<BiquadFilterNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSBiquadFilterNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
