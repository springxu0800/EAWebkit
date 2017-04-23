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

#if ENABLE(WORKERS)

#include "JSDedicatedWorkerGlobalScope.h"

#include "DedicatedWorkerGlobalScope.h"
#include "EventListener.h"
#include "JSEventListener.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(WORKERS)
#include "JSDedicatedWorkerGlobalScope.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDedicatedWorkerGlobalScopeTableValues[] =
{
    { "onmessage", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDedicatedWorkerGlobalScopeOnmessage), (intptr_t)setJSDedicatedWorkerGlobalScopeOnmessage },
#if ENABLE(WORKERS)
    { "DedicatedWorkerGlobalScope", DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor), (intptr_t)setJSDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDedicatedWorkerGlobalScopeConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDedicatedWorkerGlobalScopeTable = { 8, 7, JSDedicatedWorkerGlobalScopeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDedicatedWorkerGlobalScopeConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDedicatedWorkerGlobalScopeConstructorTable = { 1, 0, JSDedicatedWorkerGlobalScopeConstructorTableValues, 0 };
static const HashTable& getJSDedicatedWorkerGlobalScopeConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSDedicatedWorkerGlobalScopeConstructorTable);
}

const ClassInfo JSDedicatedWorkerGlobalScopeConstructor::s_info = { "DedicatedWorkerGlobalScopeConstructor", &Base::s_info, 0, getJSDedicatedWorkerGlobalScopeConstructorTable, CREATE_METHOD_TABLE(JSDedicatedWorkerGlobalScopeConstructor) };

JSDedicatedWorkerGlobalScopeConstructor::JSDedicatedWorkerGlobalScopeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDedicatedWorkerGlobalScopeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, globalObject->prototype(), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDedicatedWorkerGlobalScopeConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDedicatedWorkerGlobalScopeConstructor, JSDOMWrapper>(exec, getJSDedicatedWorkerGlobalScopeConstructorTable(exec), jsCast<JSDedicatedWorkerGlobalScopeConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSDedicatedWorkerGlobalScopePrototypeTableValues[] =
{
    { "postMessage", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDedicatedWorkerGlobalScopePrototypeFunctionPostMessage), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDedicatedWorkerGlobalScopePrototypeTable = { 2, 1, JSDedicatedWorkerGlobalScopePrototypeTableValues, 0 };
static const HashTable& getJSDedicatedWorkerGlobalScopePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSDedicatedWorkerGlobalScopePrototypeTable);
}

const ClassInfo JSDedicatedWorkerGlobalScopePrototype::s_info = { "DedicatedWorkerGlobalScopePrototype", &Base::s_info, 0, getJSDedicatedWorkerGlobalScopePrototypeTable, CREATE_METHOD_TABLE(JSDedicatedWorkerGlobalScopePrototype) };

bool JSDedicatedWorkerGlobalScopePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDedicatedWorkerGlobalScopePrototype* thisObject = jsCast<JSDedicatedWorkerGlobalScopePrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, getJSDedicatedWorkerGlobalScopePrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSDedicatedWorkerGlobalScopeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSDedicatedWorkerGlobalScopeTable);
}

const ClassInfo JSDedicatedWorkerGlobalScope::s_info = { "DedicatedWorkerGlobalScope", &Base::s_info, 0, getJSDedicatedWorkerGlobalScopeTable , CREATE_METHOD_TABLE(JSDedicatedWorkerGlobalScope) };

JSDedicatedWorkerGlobalScope::JSDedicatedWorkerGlobalScope(VM& vm, Structure* structure, PassRefPtr<DedicatedWorkerGlobalScope> impl)
    : JSWorkerGlobalScope(vm, structure, impl)
{
}

bool JSDedicatedWorkerGlobalScope::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDedicatedWorkerGlobalScope* thisObject = jsCast<JSDedicatedWorkerGlobalScope*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSDedicatedWorkerGlobalScope, Base>(exec, getJSDedicatedWorkerGlobalScopeTable(exec), thisObject, propertyName, slot);
}

JSValue jsDedicatedWorkerGlobalScopeOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DedicatedWorkerGlobalScope& impl = castedThis->impl();
    if (EventListener* listener = impl.onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(&impl))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(WORKERS)
JSValue jsDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(slotBase));
    return JSDedicatedWorkerGlobalScope::getConstructor(exec->vm(), castedThis->globalObject());
}

#endif

JSValue jsDedicatedWorkerGlobalScopeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDedicatedWorkerGlobalScope* domObject = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(slotBase));
    return JSDedicatedWorkerGlobalScope::getConstructor(exec->vm(), domObject->globalObject());
}

void JSDedicatedWorkerGlobalScope::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSDedicatedWorkerGlobalScope* thisObject = jsCast<JSDedicatedWorkerGlobalScope*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSDedicatedWorkerGlobalScope, Base>(exec, propertyName, value, getJSDedicatedWorkerGlobalScopeTable(exec), thisObject, slot);
}

void setJSDedicatedWorkerGlobalScopeOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(thisObject);
    DedicatedWorkerGlobalScope& impl = castedThis->impl();
    impl.setOnmessage(createJSAttributeEventListener(exec, value, thisObject));
}


#if ENABLE(WORKERS)
void setJSDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    // Shadowing a built-in constructor
    jsCast<JSDedicatedWorkerGlobalScope*>(thisObject)->putDirect(exec->vm(), Identifier(exec, "DedicatedWorkerGlobalScope"), value);
}

#endif

JSValue JSDedicatedWorkerGlobalScope::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDedicatedWorkerGlobalScopeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDedicatedWorkerGlobalScopePrototypeFunctionPostMessage(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSDedicatedWorkerGlobalScope::info()))
        return throwVMTypeError(exec);
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDedicatedWorkerGlobalScope::info());
    return JSValue::encode(castedThis->postMessage(exec));
}

DedicatedWorkerGlobalScope* toDedicatedWorkerGlobalScope(JSC::JSValue value)
{
    return value.inherits(JSDedicatedWorkerGlobalScope::info()) ? &jsCast<JSDedicatedWorkerGlobalScope*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WORKERS)
