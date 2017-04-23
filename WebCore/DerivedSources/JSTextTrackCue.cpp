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

#if ENABLE(VIDEO_TRACK)

#include "JSTextTrackCue.h"

#include "DocumentFragment.h"
#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocumentFragment.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSTextTrack.h"
#include "TextTrack.h"
#include "TextTrackCue.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSTextTrackCueTableValues[] =
{
    { "track", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueTrack), (intptr_t)0 },
    { "id", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueId), (intptr_t)setJSTextTrackCueId },
    { "startTime", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueStartTime), (intptr_t)setJSTextTrackCueStartTime },
    { "endTime", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueEndTime), (intptr_t)setJSTextTrackCueEndTime },
    { "pauseOnExit", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCuePauseOnExit), (intptr_t)setJSTextTrackCuePauseOnExit },
    { "vertical", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueVertical), (intptr_t)setJSTextTrackCueVertical },
    { "snapToLines", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueSnapToLines), (intptr_t)setJSTextTrackCueSnapToLines },
    { "line", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueLine), (intptr_t)setJSTextTrackCueLine },
    { "position", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCuePosition), (intptr_t)setJSTextTrackCuePosition },
    { "size", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueSize), (intptr_t)setJSTextTrackCueSize },
    { "align", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueAlign), (intptr_t)setJSTextTrackCueAlign },
    { "text", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueText), (intptr_t)setJSTextTrackCueText },
    { "onenter", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueOnenter), (intptr_t)setJSTextTrackCueOnenter },
    { "onexit", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueOnexit), (intptr_t)setJSTextTrackCueOnexit },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTextTrackCueConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSTextTrackCueTable = { 34, 31, JSTextTrackCueTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSTextTrackCueConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSTextTrackCueConstructorTable = { 1, 0, JSTextTrackCueConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSTextTrackCueConstructor::constructJSTextTrackCue(ExecState* exec)
{
    JSTextTrackCueConstructor* castedThis = jsCast<JSTextTrackCueConstructor*>(exec->callee());
    if (exec->argumentCount() < 3)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    double startTime(exec->argument(0).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    double endTime(exec->argument(1).toNumber(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& text(exec->argument(2).isEmpty() ? String() : exec->argument(2).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "TextTrackCue constructor associated document is unavailable"));
    RefPtr<TextTrackCue> object = TextTrackCue::create(context, startTime, endTime, text);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSTextTrackCueConstructor::s_info = { "TextTrackCueConstructor", &Base::s_info, &JSTextTrackCueConstructorTable, 0, CREATE_METHOD_TABLE(JSTextTrackCueConstructor) };

JSTextTrackCueConstructor::JSTextTrackCueConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTextTrackCueConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSTextTrackCuePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(3), ReadOnly | DontDelete | DontEnum);
}

bool JSTextTrackCueConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTextTrackCueConstructor, JSDOMWrapper>(exec, JSTextTrackCueConstructorTable, jsCast<JSTextTrackCueConstructor*>(object), propertyName, slot);
}

ConstructType JSTextTrackCueConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSTextTrackCue;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSTextTrackCuePrototypeTableValues[] =
{
    { "getCueAsHTML", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTextTrackCuePrototypeFunctionGetCueAsHTML), (intptr_t)0 },
    { "addEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTextTrackCuePrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTextTrackCuePrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsTextTrackCuePrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSTextTrackCuePrototypeTable = { 8, 7, JSTextTrackCuePrototypeTableValues, 0 };
const ClassInfo JSTextTrackCuePrototype::s_info = { "TextTrackCuePrototype", &Base::s_info, &JSTextTrackCuePrototypeTable, 0, CREATE_METHOD_TABLE(JSTextTrackCuePrototype) };

JSObject* JSTextTrackCuePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTextTrackCue>(vm, globalObject);
}

bool JSTextTrackCuePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTextTrackCuePrototype* thisObject = jsCast<JSTextTrackCuePrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSTextTrackCuePrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSTextTrackCue::s_info = { "TextTrackCue", &Base::s_info, &JSTextTrackCueTable, 0 , CREATE_METHOD_TABLE(JSTextTrackCue) };

JSTextTrackCue::JSTextTrackCue(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TextTrackCue> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSTextTrackCue::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSTextTrackCue::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSTextTrackCuePrototype::create(vm, globalObject, JSTextTrackCuePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSTextTrackCue::destroy(JSC::JSCell* cell)
{
    JSTextTrackCue* thisObject = static_cast<JSTextTrackCue*>(cell);
    thisObject->JSTextTrackCue::~JSTextTrackCue();
}

JSTextTrackCue::~JSTextTrackCue()
{
    releaseImplIfNotNull();
}

bool JSTextTrackCue::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSTextTrackCue* thisObject = jsCast<JSTextTrackCue*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSTextTrackCue, Base>(exec, JSTextTrackCueTable, thisObject, propertyName, slot);
}

JSValue jsTextTrackCueTrack(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.track()));
    return result;
}


JSValue jsTextTrackCueId(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.id());
    return result;
}


JSValue jsTextTrackCueStartTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsNumber(impl.startTime());
    return result;
}


JSValue jsTextTrackCueEndTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsNumber(impl.endTime());
    return result;
}


JSValue jsTextTrackCuePauseOnExit(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.pauseOnExit());
    return result;
}


JSValue jsTextTrackCueVertical(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.vertical());
    return result;
}


JSValue jsTextTrackCueSnapToLines(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.snapToLines());
    return result;
}


JSValue jsTextTrackCueLine(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsNumber(impl.line());
    return result;
}


JSValue jsTextTrackCuePosition(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsNumber(impl.position());
    return result;
}


JSValue jsTextTrackCueSize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsNumber(impl.size());
    return result;
}


JSValue jsTextTrackCueAlign(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.align());
    return result;
}


JSValue jsTextTrackCueText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.text());
    return result;
}


JSValue jsTextTrackCueOnenter(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    if (EventListener* listener = impl.onenter()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsTextTrackCueOnexit(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TextTrackCue& impl = castedThis->impl();
    if (EventListener* listener = impl.onexit()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsTextTrackCueConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSTextTrackCue* domObject = jsCast<JSTextTrackCue*>(asObject(slotBase));
    return JSTextTrackCue::getConstructor(exec->vm(), domObject->globalObject());
}

void JSTextTrackCue::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSTextTrackCue* thisObject = jsCast<JSTextTrackCue*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSTextTrackCue, Base>(exec, propertyName, value, JSTextTrackCueTable, thisObject, slot);
}

void setJSTextTrackCueId(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setId(nativeValue);
}


void setJSTextTrackCueStartTime(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setStartTime(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCueEndTime(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setEndTime(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCuePauseOnExit(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setPauseOnExit(nativeValue);
}


void setJSTextTrackCueVertical(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setVertical(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCueSnapToLines(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setSnapToLines(nativeValue);
}


void setJSTextTrackCueLine(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setLine(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCuePosition(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setPosition(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCueSize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int nativeValue(toInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setSize(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCueAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setAlign(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSTextTrackCueText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setText(nativeValue);
}


void setJSTextTrackCueOnenter(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    impl.setOnenter(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSTextTrackCueOnexit(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(thisObject);
    TextTrackCue& impl = castedThis->impl();
    impl.setOnexit(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSTextTrackCue::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTextTrackCueConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTextTrackCuePrototypeFunctionGetCueAsHTML(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSTextTrackCue::info()))
        return throwVMTypeError(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTextTrackCue::info());
    TextTrackCue& impl = castedThis->impl();

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getCueAsHTML()));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsTextTrackCuePrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSTextTrackCue::info()))
        return throwVMTypeError(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTextTrackCue::info());
    TextTrackCue& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTextTrackCuePrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSTextTrackCue::info()))
        return throwVMTypeError(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTextTrackCue::info());
    TextTrackCue& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsTextTrackCuePrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSTextTrackCue::info()))
        return throwVMTypeError(exec);
    JSTextTrackCue* castedThis = jsCast<JSTextTrackCue*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTextTrackCue::info());
    TextTrackCue& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSTextTrackCueOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSTextTrackCue* jsTextTrackCue = jsCast<JSTextTrackCue*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTextTrackCue->impl(), jsTextTrackCue);
    jsTextTrackCue->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TextTrackCue* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSTextTrackCue>(exec, impl))
        return result;
    ReportMemoryCost<TextTrackCue>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSTextTrackCue>(exec, globalObject, impl);
}

TextTrackCue* toTextTrackCue(JSC::JSValue value)
{
    return value.inherits(JSTextTrackCue::info()) ? &jsCast<JSTextTrackCue*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(VIDEO_TRACK)
