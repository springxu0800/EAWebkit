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
#include "JSConsole.h"

#include "Console.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "ScriptArguments.h"
#include "ScriptCallStackFactory.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(JAVASCRIPT_DEBUGGER)
#include "JSScriptProfile.h"
#include "ScriptProfile.h"
#include <runtime/JSArray.h>
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSConsoleTableValues[] =
{
#if ENABLE(JAVASCRIPT_DEBUGGER)
    { "profiles", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsConsoleProfiles), (intptr_t)0 },
#endif
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSConsoleTable = { 2, 1, JSConsoleTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSConsolePrototypeTableValues[] =
{
    { "debug", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionDebug), (intptr_t)0 },
    { "error", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionError), (intptr_t)0 },
    { "info", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionInfo), (intptr_t)0 },
    { "log", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionLog), (intptr_t)0 },
    { "warn", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionWarn), (intptr_t)0 },
    { "dir", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionDir), (intptr_t)0 },
    { "dirxml", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionDirxml), (intptr_t)0 },
    { "table", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTable), (intptr_t)0 },
    { "trace", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTrace), (intptr_t)0 },
    { "assert", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionAssert), (intptr_t)1 },
    { "count", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionCount), (intptr_t)0 },
#if ENABLE(JAVASCRIPT_DEBUGGER)
    { "profile", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionProfile), (intptr_t)0 },
#endif
#if ENABLE(JAVASCRIPT_DEBUGGER)
    { "profileEnd", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionProfileEnd), (intptr_t)0 },
#endif
    { "time", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTime), (intptr_t)1 },
    { "timeEnd", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTimeEnd), (intptr_t)1 },
    { "timeStamp", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionTimeStamp), (intptr_t)0 },
    { "group", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionGroup), (intptr_t)0 },
    { "groupCollapsed", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionGroupCollapsed), (intptr_t)0 },
    { "groupEnd", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionGroupEnd), (intptr_t)0 },
    { "clear", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsConsolePrototypeFunctionClear), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSConsolePrototypeTable = { 66, 63, JSConsolePrototypeTableValues, 0 };
const ClassInfo JSConsolePrototype::s_info = { "ConsolePrototype", &Base::s_info, &JSConsolePrototypeTable, 0, CREATE_METHOD_TABLE(JSConsolePrototype) };

JSObject* JSConsolePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSConsole>(vm, globalObject);
}

bool JSConsolePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSConsolePrototype* thisObject = jsCast<JSConsolePrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSConsolePrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSConsole::s_info = { "Console", &Base::s_info, &JSConsoleTable, 0 , CREATE_METHOD_TABLE(JSConsole) };

JSConsole::JSConsole(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Console> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSConsole::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSConsole::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSConsolePrototype::create(vm, globalObject, JSConsolePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSConsole::destroy(JSC::JSCell* cell)
{
    JSConsole* thisObject = static_cast<JSConsole*>(cell);
    thisObject->JSConsole::~JSConsole();
}

JSConsole::~JSConsole()
{
    releaseImplIfNotNull();
}

bool JSConsole::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSConsole* thisObject = jsCast<JSConsole*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSConsole, Base>(exec, JSConsoleTable, thisObject, propertyName, slot);
}

#if ENABLE(JAVASCRIPT_DEBUGGER)
JSValue jsConsoleProfiles(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Console& impl = castedThis->impl();
    JSValue result = jsArray(exec, castedThis->globalObject(), impl.profiles());
    return result;
}

#endif

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDebug(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.debug(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionError(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.error(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionInfo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.info(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionLog(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.log(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionWarn(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.warn(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDir(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.dir(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDirxml(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.dirxml(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTable(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.table(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTrace(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.trace(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionAssert(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 1));
    bool condition(exec->argument(0).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.assertCondition(exec, scriptArguments.release(), condition);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionCount(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.count(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

#if ENABLE(JAVASCRIPT_DEBUGGER)
EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionProfile(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        impl.profile(exec);
        return JSValue::encode(jsUndefined());
    }

    const String& title(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.profile(exec, title);
    return JSValue::encode(jsUndefined());
}

#endif

#if ENABLE(JAVASCRIPT_DEBUGGER)
EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionProfileEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        impl.profileEnd(exec);
        return JSValue::encode(jsUndefined());
    }

    const String& title(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.profileEnd(exec, title);
    return JSValue::encode(jsUndefined());
}

#endif

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTime(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& title(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.time(title);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTimeEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& title(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.timeEnd(exec, title);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTimeStamp(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.timeStamp(scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroup(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.group(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroupCollapsed(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.groupCollapsed(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroupEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    impl.groupEnd();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSConsole::info()))
        return throwVMTypeError(exec);
    JSConsole* castedThis = jsCast<JSConsole*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSConsole::info());
    Console& impl = castedThis->impl();
    RefPtr<ScriptArguments> scriptArguments(createScriptArguments(exec, 0));
    impl.clear(exec, scriptArguments.release());
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSConsole* jsConsole)
{
    if (jsConsole->hasCustomProperties())
        return true;
    return false;
}

bool JSConsoleOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSConsole* jsConsole = jsCast<JSConsole*>(handle.get().asCell());
    if (!isObservable(jsConsole))
        return false;
    Frame* root = jsConsole->impl().frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSConsoleOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSConsole* jsConsole = jsCast<JSConsole*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsConsole->impl(), jsConsole);
    jsConsole->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7Console@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore7ConsoleE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Console* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSConsole>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7Console@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore7ConsoleE[2];
#if COMPILER(CLANG)
    // If this fails Console does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(Console), Console_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // Console has subclasses. If Console has subclasses that get passed
    // to toJS() we currently require Console you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<Console>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSConsole>(exec, globalObject, impl);
}

Console* toConsole(JSC::JSValue value)
{
    return value.inherits(JSConsole::info()) ? &jsCast<JSConsole*>(asObject(value))->impl() : 0;
}

}
