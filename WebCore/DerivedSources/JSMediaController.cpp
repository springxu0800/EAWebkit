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

#if ENABLE(VIDEO)

#include "JSMediaController.h"

#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSTimeRanges.h"
#include "MediaController.h"
#include "TimeRanges.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMediaControllerTableValues[] =
{
    { "buffered", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerBuffered), (intptr_t)0 },
    { "seekable", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerSeekable), (intptr_t)0 },
    { "duration", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerDuration), (intptr_t)0 },
    { "currentTime", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerCurrentTime), (intptr_t)setJSMediaControllerCurrentTime },
    { "paused", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPaused), (intptr_t)0 },
    { "played", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPlayed), (intptr_t)0 },
    { "playbackState", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPlaybackState), (intptr_t)0 },
    { "defaultPlaybackRate", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerDefaultPlaybackRate), (intptr_t)setJSMediaControllerDefaultPlaybackRate },
    { "playbackRate", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerPlaybackRate), (intptr_t)setJSMediaControllerPlaybackRate },
    { "volume", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerVolume), (intptr_t)setJSMediaControllerVolume },
    { "muted", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerMuted), (intptr_t)setJSMediaControllerMuted },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaControllerConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaControllerTable = { 34, 31, JSMediaControllerTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSMediaControllerConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaControllerConstructorTable = { 1, 0, JSMediaControllerConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSMediaControllerConstructor::constructJSMediaController(ExecState* exec)
{
    JSMediaControllerConstructor* castedThis = jsCast<JSMediaControllerConstructor*>(exec->callee());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "MediaController constructor associated document is unavailable"));
    RefPtr<MediaController> object = MediaController::create(context);
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSMediaControllerConstructor::s_info = { "MediaControllerConstructor", &Base::s_info, &JSMediaControllerConstructorTable, 0, CREATE_METHOD_TABLE(JSMediaControllerConstructor) };

JSMediaControllerConstructor::JSMediaControllerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSMediaControllerConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSMediaControllerPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSMediaControllerConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSMediaControllerConstructor, JSDOMWrapper>(exec, JSMediaControllerConstructorTable, jsCast<JSMediaControllerConstructor*>(object), propertyName, slot);
}

ConstructType JSMediaControllerConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSMediaController;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSMediaControllerPrototypeTableValues[] =
{
    { "play", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionPlay), (intptr_t)0 },
    { "pause", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionPause), (intptr_t)0 },
    { "unpause", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionUnpause), (intptr_t)0 },
    { "addEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionAddEventListener), (intptr_t)2 },
    { "removeEventListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionRemoveEventListener), (intptr_t)2 },
    { "dispatchEvent", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaControllerPrototypeFunctionDispatchEvent), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaControllerPrototypeTable = { 17, 15, JSMediaControllerPrototypeTableValues, 0 };
const ClassInfo JSMediaControllerPrototype::s_info = { "MediaControllerPrototype", &Base::s_info, &JSMediaControllerPrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaControllerPrototype) };

JSObject* JSMediaControllerPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaController>(vm, globalObject);
}

bool JSMediaControllerPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaControllerPrototype* thisObject = jsCast<JSMediaControllerPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSMediaControllerPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSMediaController::s_info = { "MediaController", &Base::s_info, &JSMediaControllerTable, 0 , CREATE_METHOD_TABLE(JSMediaController) };

JSMediaController::JSMediaController(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaController> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMediaController::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSMediaController::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaControllerPrototype::create(vm, globalObject, JSMediaControllerPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSMediaController::destroy(JSC::JSCell* cell)
{
    JSMediaController* thisObject = static_cast<JSMediaController*>(cell);
    thisObject->JSMediaController::~JSMediaController();
}

JSMediaController::~JSMediaController()
{
    releaseImplIfNotNull();
}

bool JSMediaController::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaController* thisObject = jsCast<JSMediaController*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaController, Base>(exec, JSMediaControllerTable, thisObject, propertyName, slot);
}

JSValue jsMediaControllerBuffered(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.buffered()));
    return result;
}


JSValue jsMediaControllerSeekable(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.seekable()));
    return result;
}


JSValue jsMediaControllerDuration(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsNumber(impl.duration());
    return result;
}


JSValue jsMediaControllerCurrentTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsNumber(impl.currentTime());
    return result;
}


JSValue jsMediaControllerPaused(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.paused());
    return result;
}


JSValue jsMediaControllerPlayed(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.played()));
    return result;
}


JSValue jsMediaControllerPlaybackState(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.playbackState());
    return result;
}


JSValue jsMediaControllerDefaultPlaybackRate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsNumber(impl.defaultPlaybackRate());
    return result;
}


JSValue jsMediaControllerPlaybackRate(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsNumber(impl.playbackRate());
    return result;
}


JSValue jsMediaControllerVolume(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsNumber(impl.volume());
    return result;
}


JSValue jsMediaControllerMuted(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaController& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.muted());
    return result;
}


JSValue jsMediaControllerConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaController* domObject = jsCast<JSMediaController*>(asObject(slotBase));
    return JSMediaController::getConstructor(exec->vm(), domObject->globalObject());
}

void JSMediaController::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSMediaController* thisObject = jsCast<JSMediaController*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSMediaController, Base>(exec, propertyName, value, JSMediaControllerTable, thisObject, slot);
}

void setJSMediaControllerCurrentTime(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(thisObject);
    MediaController& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setCurrentTime(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSMediaControllerDefaultPlaybackRate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(thisObject);
    MediaController& impl = castedThis->impl();
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setDefaultPlaybackRate(nativeValue);
}


void setJSMediaControllerPlaybackRate(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(thisObject);
    MediaController& impl = castedThis->impl();
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setPlaybackRate(nativeValue);
}


void setJSMediaControllerVolume(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(thisObject);
    MediaController& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setVolume(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSMediaControllerMuted(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(thisObject);
    MediaController& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setMuted(nativeValue);
}


JSValue JSMediaController::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSMediaControllerConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionPlay(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaController::info()))
        return throwVMTypeError(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    MediaController& impl = castedThis->impl();
    impl.play();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionPause(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaController::info()))
        return throwVMTypeError(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    MediaController& impl = castedThis->impl();
    impl.pause();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionUnpause(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaController::info()))
        return throwVMTypeError(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    MediaController& impl = castedThis->impl();
    impl.unpause();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaController::info()))
        return throwVMTypeError(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    MediaController& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaController::info()))
        return throwVMTypeError(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    MediaController& impl = castedThis->impl();
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl.removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaControllerPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaController::info()))
        return throwVMTypeError(exec);
    JSMediaController* castedThis = jsCast<JSMediaController*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaController::info());
    MediaController& impl = castedThis->impl();
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

void JSMediaController::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSMediaController* thisObject = jsCast<JSMediaController*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl().visitJSEventListeners(visitor);
}

static inline bool isObservable(JSMediaController* jsMediaController)
{
    if (jsMediaController->hasCustomProperties())
        return true;
    if (jsMediaController->impl().hasEventListeners())
        return true;
    return false;
}

bool JSMediaControllerOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMediaController* jsMediaController = jsCast<JSMediaController*>(handle.get().asCell());
    if (jsMediaController->impl().isFiringEventListeners())
        return true;
    if (!isObservable(jsMediaController))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaControllerOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMediaController* jsMediaController = jsCast<JSMediaController*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaController->impl(), jsMediaController);
    jsMediaController->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7MediaController@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore15MediaControllerE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaController* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaController>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7MediaController@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore15MediaControllerE[2];
#if COMPILER(CLANG)
    // If this fails MediaController does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(MediaController), MediaController_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // MediaController has subclasses. If MediaController has subclasses that get passed
    // to toJS() we currently require MediaController you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<MediaController>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaController>(exec, globalObject, impl);
}

MediaController* toMediaController(JSC::JSValue value)
{
    return value.inherits(JSMediaController::info()) ? &jsCast<JSMediaController*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(VIDEO)
