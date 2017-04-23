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

#if ENABLE(MEDIA_STREAM)

#include "JSRTCDataChannel.h"

#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "RTCDataChannel.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSRTCDataChannelTableValues[] =
{
    { "label", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelLabel), (intptr_t)0 },
    { "ordered", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelOrdered), (intptr_t)0 },
    { "maxRetransmitTime", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelMaxRetransmitTime), (intptr_t)0 },
    { "maxRetransmits", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelMaxRetransmits), (intptr_t)0 },
    { "protocol", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelProtocol), (intptr_t)0 },
    { "negotiated", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelNegotiated), (intptr_t)0 },
    { "id", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelId), (intptr_t)0 },
    { "readyState", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelReadyState), (intptr_t)0 },
    { "bufferedAmount", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelBufferedAmount), (intptr_t)0 },
    { "binaryType", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelBinaryType), (intptr_t)setJSRTCDataChannelBinaryType },
    { "onopen", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelOnopen), (intptr_t)setJSRTCDataChannelOnopen },
    { "onerror", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelOnerror), (intptr_t)setJSRTCDataChannelOnerror },
    { "onclose", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelOnclose), (intptr_t)setJSRTCDataChannelOnclose },
    { "onmessage", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRTCDataChannelOnmessage), (intptr_t)setJSRTCDataChannelOnmessage },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRTCDataChannelTable = { 35, 31, JSRTCDataChannelTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSRTCDataChannelPrototypeTableValues[] =
{
    { "send", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCDataChannelPrototypeFunctionSend), (intptr_t)1 },
    { "close", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCDataChannelPrototypeFunctionClose), (intptr_t)0 },
    { "addEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCDataChannelPrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCDataChannelPrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsRTCDataChannelPrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSRTCDataChannelPrototypeTable = { 16, 15, JSRTCDataChannelPrototypeTableValues, 0 };
const ClassInfo JSRTCDataChannelPrototype::s_info = { "RTCDataChannelPrototype", &Base::s_info, &JSRTCDataChannelPrototypeTable, 0, CREATE_METHOD_TABLE(JSRTCDataChannelPrototype) };

JSObject* JSRTCDataChannelPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRTCDataChannel>(vm, globalObject);
}

bool JSRTCDataChannelPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRTCDataChannelPrototype* thisObject = jsCast<JSRTCDataChannelPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSRTCDataChannelPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSRTCDataChannel::s_info = { "RTCDataChannel", &Base::s_info, &JSRTCDataChannelTable, 0 , CREATE_METHOD_TABLE(JSRTCDataChannel) };

JSRTCDataChannel::JSRTCDataChannel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RTCDataChannel> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSRTCDataChannel::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSRTCDataChannel::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSRTCDataChannelPrototype::create(vm, globalObject, JSRTCDataChannelPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSRTCDataChannel::destroy(JSC::JSCell* cell)
{
    JSRTCDataChannel* thisObject = static_cast<JSRTCDataChannel*>(cell);
    thisObject->JSRTCDataChannel::~JSRTCDataChannel();
}

JSRTCDataChannel::~JSRTCDataChannel()
{
    releaseImplIfNotNull();
}

bool JSRTCDataChannel::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSRTCDataChannel* thisObject = jsCast<JSRTCDataChannel*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSRTCDataChannel, Base>(exec, JSRTCDataChannelTable, thisObject, propertyName, slot);
}

JSValue jsRTCDataChannelLabel(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.label());
    return result;
}


JSValue jsRTCDataChannelOrdered(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.ordered());
    return result;
}


JSValue jsRTCDataChannelMaxRetransmitTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsNumber(impl.maxRetransmitTime());
    return result;
}


JSValue jsRTCDataChannelMaxRetransmits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsNumber(impl.maxRetransmits());
    return result;
}


JSValue jsRTCDataChannelProtocol(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.protocol());
    return result;
}


JSValue jsRTCDataChannelNegotiated(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.negotiated());
    return result;
}


JSValue jsRTCDataChannelId(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsNumber(impl.id());
    return result;
}


JSValue jsRTCDataChannelReadyState(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.readyState());
    return result;
}


JSValue jsRTCDataChannelBufferedAmount(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsNumber(impl.bufferedAmount());
    return result;
}


JSValue jsRTCDataChannelBinaryType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.binaryType());
    return result;
}


JSValue jsRTCDataChannelOnopen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    if (EventListener* listener = impl.onopen()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsRTCDataChannelOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    if (EventListener* listener = impl.onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsRTCDataChannelOnclose(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    if (EventListener* listener = impl.onclose()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsRTCDataChannelOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RTCDataChannel& impl = castedThis->impl();
    if (EventListener* listener = impl.onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


void JSRTCDataChannel::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSRTCDataChannel* thisObject = jsCast<JSRTCDataChannel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSRTCDataChannel, Base>(exec, propertyName, value, JSRTCDataChannelTable, thisObject, slot);
}

void setJSRTCDataChannelBinaryType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(thisObject);
    RTCDataChannel& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setBinaryType(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSRTCDataChannelOnopen(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(thisObject);
    RTCDataChannel& impl = castedThis->impl();
    impl.setOnopen(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSRTCDataChannelOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(thisObject);
    RTCDataChannel& impl = castedThis->impl();
    impl.setOnerror(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSRTCDataChannelOnclose(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(thisObject);
    RTCDataChannel& impl = castedThis->impl();
    impl.setOnclose(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSRTCDataChannelOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(thisObject);
    RTCDataChannel& impl = castedThis->impl();
    impl.setOnmessage(createJSAttributeEventListener(exec, value, thisObject));
}


static EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionSend1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ArrayBuffer* data(toArrayBuffer(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionSend2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    RefPtr<ArrayBufferView> data(toArrayBufferView(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.send(data.get(), ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionSend3(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Blob* data(toBlob(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionSend4(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& data(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionSend(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(JSArrayBuffer::info()))))
        return jsRTCDataChannelPrototypeFunctionSend1(exec);
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(JSArrayBufferView::info()))))
        return jsRTCDataChannelPrototypeFunctionSend2(exec);
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(JSBlob::info()))))
        return jsRTCDataChannelPrototypeFunctionSend3(exec);
    if (argsCount == 1)
        return jsRTCDataChannelPrototypeFunctionSend4(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    impl.close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsRTCDataChannelPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSRTCDataChannel::info()))
        return throwVMTypeError(exec);
    JSRTCDataChannel* castedThis = jsCast<JSRTCDataChannel*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSRTCDataChannel::info());
    RTCDataChannel& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.dispatchEvent(event, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSRTCDataChannel::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSRTCDataChannel* thisObject = jsCast<JSRTCDataChannel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

static inline bool isObservable(JSRTCDataChannel* jsRTCDataChannel)
{
    if (jsRTCDataChannel->hasCustomProperties())
        return true;
    if (jsRTCDataChannel->impl().hasEventListeners())
        return true;
    return false;
}

bool JSRTCDataChannelOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSRTCDataChannel* jsRTCDataChannel = jsCast<JSRTCDataChannel*>(handle.get().asCell());
    if (jsRTCDataChannel->impl().isFiringEventListeners())
        return true;
    if (!isObservable(jsRTCDataChannel))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSRTCDataChannelOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSRTCDataChannel* jsRTCDataChannel = jsCast<JSRTCDataChannel*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsRTCDataChannel->impl(), jsRTCDataChannel);
    jsRTCDataChannel->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7RTCDataChannel@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore14RTCDataChannelE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, RTCDataChannel* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSRTCDataChannel>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7RTCDataChannel@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore14RTCDataChannelE[2];
#if COMPILER(CLANG)
    // If this fails RTCDataChannel does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(RTCDataChannel), RTCDataChannel_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // RTCDataChannel has subclasses. If RTCDataChannel has subclasses that get passed
    // to toJS() we currently require RTCDataChannel you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<RTCDataChannel>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSRTCDataChannel>(exec, globalObject, impl);
}

RTCDataChannel* toRTCDataChannel(JSC::JSValue value)
{
    return value.inherits(JSRTCDataChannel::info()) ? &jsCast<JSRTCDataChannel*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(MEDIA_STREAM)
