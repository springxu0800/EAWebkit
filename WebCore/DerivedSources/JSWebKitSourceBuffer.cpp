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

#if ENABLE(MEDIA_SOURCE)

#include "JSWebKitSourceBuffer.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSTimeRanges.h"
#include "TimeRanges.h"
#include "WebKitSourceBuffer.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitSourceBufferTableValues[] =
{
    { "buffered", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitSourceBufferBuffered), (intptr_t)0 },
    { "timestampOffset", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitSourceBufferTimestampOffset), (intptr_t)setJSWebKitSourceBufferTimestampOffset },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitSourceBufferConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitSourceBufferTable = { 8, 7, JSWebKitSourceBufferTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitSourceBufferConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitSourceBufferConstructorTable = { 1, 0, JSWebKitSourceBufferConstructorTableValues, 0 };
const ClassInfo JSWebKitSourceBufferConstructor::s_info = { "WebKitSourceBufferConstructor", &Base::s_info, &JSWebKitSourceBufferConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitSourceBufferConstructor) };

JSWebKitSourceBufferConstructor::JSWebKitSourceBufferConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitSourceBufferConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitSourceBufferPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitSourceBufferConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitSourceBufferConstructor, JSDOMWrapper>(exec, JSWebKitSourceBufferConstructorTable, jsCast<JSWebKitSourceBufferConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitSourceBufferPrototypeTableValues[] =
{
    { "append", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitSourceBufferPrototypeFunctionAppend), (intptr_t)1 },
    { "abort", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsWebKitSourceBufferPrototypeFunctionAbort), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitSourceBufferPrototypeTable = { 4, 3, JSWebKitSourceBufferPrototypeTableValues, 0 };
const ClassInfo JSWebKitSourceBufferPrototype::s_info = { "WebKitSourceBufferPrototype", &Base::s_info, &JSWebKitSourceBufferPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitSourceBufferPrototype) };

JSObject* JSWebKitSourceBufferPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitSourceBuffer>(vm, globalObject);
}

bool JSWebKitSourceBufferPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitSourceBufferPrototype* thisObject = jsCast<JSWebKitSourceBufferPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSWebKitSourceBufferPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSWebKitSourceBuffer::s_info = { "WebKitSourceBuffer", &Base::s_info, &JSWebKitSourceBufferTable, 0 , CREATE_METHOD_TABLE(JSWebKitSourceBuffer) };

JSWebKitSourceBuffer::JSWebKitSourceBuffer(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitSourceBuffer> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebKitSourceBuffer::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebKitSourceBuffer::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitSourceBufferPrototype::create(vm, globalObject, JSWebKitSourceBufferPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSWebKitSourceBuffer::destroy(JSC::JSCell* cell)
{
    JSWebKitSourceBuffer* thisObject = static_cast<JSWebKitSourceBuffer*>(cell);
    thisObject->JSWebKitSourceBuffer::~JSWebKitSourceBuffer();
}

JSWebKitSourceBuffer::~JSWebKitSourceBuffer()
{
    releaseImplIfNotNull();
}

bool JSWebKitSourceBuffer::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitSourceBuffer* thisObject = jsCast<JSWebKitSourceBuffer*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSWebKitSourceBuffer, Base>(exec, JSWebKitSourceBufferTable, thisObject, propertyName, slot);
}

JSValue jsWebKitSourceBufferBuffered(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitSourceBuffer* castedThis = jsCast<JSWebKitSourceBuffer*>(asObject(slotBase));
    ExceptionCode ec = 0;
    WebKitSourceBuffer& impl = castedThis->impl();
    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.buffered(ec)));
    setDOMException(exec, ec);
    return result;
}


JSValue jsWebKitSourceBufferTimestampOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitSourceBuffer* castedThis = jsCast<JSWebKitSourceBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitSourceBuffer& impl = castedThis->impl();
    JSValue result = jsNumber(impl.timestampOffset());
    return result;
}


JSValue jsWebKitSourceBufferConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitSourceBuffer* domObject = jsCast<JSWebKitSourceBuffer*>(asObject(slotBase));
    return JSWebKitSourceBuffer::getConstructor(exec->vm(), domObject->globalObject());
}

void JSWebKitSourceBuffer::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSWebKitSourceBuffer* thisObject = jsCast<JSWebKitSourceBuffer*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSWebKitSourceBuffer, Base>(exec, propertyName, value, JSWebKitSourceBufferTable, thisObject, slot);
}

void setJSWebKitSourceBufferTimestampOffset(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitSourceBuffer* castedThis = jsCast<JSWebKitSourceBuffer*>(thisObject);
    WebKitSourceBuffer& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setTimestampOffset(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSWebKitSourceBuffer::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitSourceBufferConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsWebKitSourceBufferPrototypeFunctionAppend(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitSourceBuffer::info()))
        return throwVMTypeError(exec);
    JSWebKitSourceBuffer* castedThis = jsCast<JSWebKitSourceBuffer*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitSourceBuffer::info());
    WebKitSourceBuffer& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    RefPtr<Uint8Array> data(toUint8Array(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.append(data.get(), ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebKitSourceBufferPrototypeFunctionAbort(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSWebKitSourceBuffer::info()))
        return throwVMTypeError(exec);
    JSWebKitSourceBuffer* castedThis = jsCast<JSWebKitSourceBuffer*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSWebKitSourceBuffer::info());
    WebKitSourceBuffer& impl = castedThis->impl();
    ExceptionCode ec = 0;
    impl.abort(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSWebKitSourceBuffer* jsWebKitSourceBuffer)
{
    if (jsWebKitSourceBuffer->hasCustomProperties())
        return true;
    return false;
}

bool JSWebKitSourceBufferOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebKitSourceBuffer* jsWebKitSourceBuffer = jsCast<JSWebKitSourceBuffer*>(handle.get().asCell());
    if (!isObservable(jsWebKitSourceBuffer))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebKitSourceBufferOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebKitSourceBuffer* jsWebKitSourceBuffer = jsCast<JSWebKitSourceBuffer*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebKitSourceBuffer->impl(), jsWebKitSourceBuffer);
    jsWebKitSourceBuffer->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebKitSourceBuffer@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore18WebKitSourceBufferE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebKitSourceBuffer* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebKitSourceBuffer>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebKitSourceBuffer@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore18WebKitSourceBufferE[2];
#if COMPILER(CLANG)
    // If this fails WebKitSourceBuffer does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebKitSourceBuffer), WebKitSourceBuffer_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebKitSourceBuffer has subclasses. If WebKitSourceBuffer has subclasses that get passed
    // to toJS() we currently require WebKitSourceBuffer you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebKitSourceBuffer>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebKitSourceBuffer>(exec, globalObject, impl);
}

WebKitSourceBuffer* toWebKitSourceBuffer(JSC::JSValue value)
{
    return value.inherits(JSWebKitSourceBuffer::info()) ? &jsCast<JSWebKitSourceBuffer*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(MEDIA_SOURCE)
