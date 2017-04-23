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
#include "JSCompositionEvent.h"

#include "CompositionEvent.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDictionary.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCompositionEventTableValues[] =
{
    { "data", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCompositionEventData), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCompositionEventConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCompositionEventTable = { 4, 3, JSCompositionEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCompositionEventConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCompositionEventConstructorTable = { 1, 0, JSCompositionEventConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSCompositionEventConstructor::constructJSCompositionEvent(ExecState* exec)
{
    JSCompositionEventConstructor* jsConstructor = jsCast<JSCompositionEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->value(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    CompositionEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillCompositionEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<CompositionEvent> event = CompositionEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillCompositionEventInit(CompositionEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillUIEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("data", eventInit.data))
        return false;
    return true;
}

const ClassInfo JSCompositionEventConstructor::s_info = { "CompositionEventConstructor", &Base::s_info, &JSCompositionEventConstructorTable, 0, CREATE_METHOD_TABLE(JSCompositionEventConstructor) };

JSCompositionEventConstructor::JSCompositionEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCompositionEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCompositionEventPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSCompositionEventConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCompositionEventConstructor, JSDOMWrapper>(exec, JSCompositionEventConstructorTable, jsCast<JSCompositionEventConstructor*>(object), propertyName, slot);
}

#if ENABLE(DOM4_EVENTS_CONSTRUCTOR)
ConstructType JSCompositionEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSCompositionEvent;
    return ConstructTypeHost;
}
#endif // ENABLE(DOM4_EVENTS_CONSTRUCTOR)

/* Hash table for prototype */

static const HashTableValue JSCompositionEventPrototypeTableValues[] =
{
    { "initCompositionEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCompositionEventPrototypeFunctionInitCompositionEvent), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCompositionEventPrototypeTable = { 2, 1, JSCompositionEventPrototypeTableValues, 0 };
const ClassInfo JSCompositionEventPrototype::s_info = { "CompositionEventPrototype", &Base::s_info, &JSCompositionEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSCompositionEventPrototype) };

JSObject* JSCompositionEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCompositionEvent>(vm, globalObject);
}

bool JSCompositionEventPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCompositionEventPrototype* thisObject = jsCast<JSCompositionEventPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSCompositionEventPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSCompositionEvent::s_info = { "CompositionEvent", &Base::s_info, &JSCompositionEventTable, 0 , CREATE_METHOD_TABLE(JSCompositionEvent) };

JSCompositionEvent::JSCompositionEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CompositionEvent> impl)
    : JSUIEvent(structure, globalObject, impl)
{
}

void JSCompositionEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSCompositionEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCompositionEventPrototype::create(vm, globalObject, JSCompositionEventPrototype::createStructure(vm, globalObject, JSUIEventPrototype::self(vm, globalObject)));
}

bool JSCompositionEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCompositionEvent* thisObject = jsCast<JSCompositionEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSCompositionEvent, Base>(exec, JSCompositionEventTable, thisObject, propertyName, slot);
}

JSValue jsCompositionEventData(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCompositionEvent* castedThis = jsCast<JSCompositionEvent*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CompositionEvent& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.data());
    return result;
}


JSValue jsCompositionEventConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCompositionEvent* domObject = jsCast<JSCompositionEvent*>(asObject(slotBase));
    return JSCompositionEvent::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSCompositionEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCompositionEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCompositionEventPrototypeFunctionInitCompositionEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCompositionEvent::info()))
        return throwVMTypeError(exec);
    JSCompositionEvent* castedThis = jsCast<JSCompositionEvent*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCompositionEvent::info());
    CompositionEvent& impl = castedThis->impl();
    const String& typeArg(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubbleArg(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelableArg(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    DOMWindow* viewArg(toDOMWindow(exec->argument(3)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& dataArg(exec->argument(4).isEmpty() ? String() : exec->argument(4).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.initCompositionEvent(typeArg, canBubbleArg, cancelableArg, viewArg, dataArg);
    return JSValue::encode(jsUndefined());
}


}
