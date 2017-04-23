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

#if ENABLE(SVG)

#include "JSSVGViewSpec.h"

#include "JSSVGElement.h"
#include "JSSVGTransformList.h"
#include "SVGElement.h"
#include "SVGTransformList.h"
#include "SVGViewSpec.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGViewSpecTableValues[] =
{
    { "transform", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecTransform), (intptr_t)0 },
    { "viewTarget", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewTarget), (intptr_t)0 },
    { "viewBoxString", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewBoxString), (intptr_t)0 },
    { "preserveAspectRatioString", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecPreserveAspectRatioString), (intptr_t)0 },
    { "transformString", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecTransformString), (intptr_t)0 },
    { "viewTargetString", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewTargetString), (intptr_t)0 },
    { "zoomAndPan", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecZoomAndPan), (intptr_t)setJSSVGViewSpecZoomAndPan },
#if ENABLE(SVG)
    { "viewBox", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecViewBox), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "preserveAspectRatio", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecPreserveAspectRatio), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewSpecConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGViewSpecTable = { 33, 31, JSSVGViewSpecTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGViewSpecConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGViewSpecConstructorTable = { 1, 0, JSSVGViewSpecConstructorTableValues, 0 };
const ClassInfo JSSVGViewSpecConstructor::s_info = { "SVGViewSpecConstructor", &Base::s_info, &JSSVGViewSpecConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGViewSpecConstructor) };

JSSVGViewSpecConstructor::JSSVGViewSpecConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGViewSpecConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGViewSpecPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGViewSpecConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewSpecConstructor, JSDOMWrapper>(exec, JSSVGViewSpecConstructorTable, jsCast<JSSVGViewSpecConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGViewSpecPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGViewSpecPrototypeTable = { 1, 0, JSSVGViewSpecPrototypeTableValues, 0 };
const ClassInfo JSSVGViewSpecPrototype::s_info = { "SVGViewSpecPrototype", &Base::s_info, &JSSVGViewSpecPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGViewSpecPrototype) };

JSObject* JSSVGViewSpecPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGViewSpec>(vm, globalObject);
}

const ClassInfo JSSVGViewSpec::s_info = { "SVGViewSpec", &Base::s_info, &JSSVGViewSpecTable, 0 , CREATE_METHOD_TABLE(JSSVGViewSpec) };

JSSVGViewSpec::JSSVGViewSpec(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGViewSpec> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGViewSpec::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGViewSpec::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGViewSpecPrototype::create(vm, globalObject, JSSVGViewSpecPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSSVGViewSpec::destroy(JSC::JSCell* cell)
{
    JSSVGViewSpec* thisObject = static_cast<JSSVGViewSpec*>(cell);
    thisObject->JSSVGViewSpec::~JSSVGViewSpec();
}

JSSVGViewSpec::~JSSVGViewSpec()
{
    releaseImplIfNotNull();
}

bool JSSVGViewSpec::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGViewSpec* thisObject = jsCast<JSSVGViewSpec*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGViewSpec, Base>(exec, JSSVGViewSpecTable, thisObject, propertyName, slot);
}

JSValue jsSVGViewSpecTransform(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGTransformListPropertyTearOff*>(impl.transform())));
    return result;
}


JSValue jsSVGViewSpecViewTarget(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(static_cast<SVGElement*>(impl.viewTarget())));
    return result;
}


JSValue jsSVGViewSpecViewBoxString(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.viewBoxString());
    return result;
}


JSValue jsSVGViewSpecPreserveAspectRatioString(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.preserveAspectRatioString());
    return result;
}


JSValue jsSVGViewSpecTransformString(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.transformString());
    return result;
}


JSValue jsSVGViewSpecViewTargetString(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.viewTargetString());
    return result;
}


JSValue jsSVGViewSpecZoomAndPan(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    JSValue result = jsNumber(impl.zoomAndPan());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGViewSpecViewBox(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    RefPtr<SVGAnimatedRect> obj = impl.viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGViewSpecPreserveAspectRatio(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewSpec& impl = castedThis->impl();
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = impl.preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGViewSpecConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGViewSpec* domObject = jsCast<JSSVGViewSpec*>(asObject(slotBase));
    return JSSVGViewSpec::getConstructor(exec->vm(), domObject->globalObject());
}

void JSSVGViewSpec::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGViewSpec* thisObject = jsCast<JSSVGViewSpec*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSSVGViewSpec, Base>(exec, propertyName, value, JSSVGViewSpecTable, thisObject, slot);
}

void setJSSVGViewSpecZoomAndPan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGViewSpec* castedThis = jsCast<JSSVGViewSpec*>(thisObject);
    SVGViewSpec& impl = castedThis->impl();
    ExceptionCode ec = 0;
    unsigned short nativeValue(toUInt32(exec, value, NormalConversion));
    if (exec->hadException())
        return;
    impl.setZoomAndPan(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSSVGViewSpec::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGViewSpecConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSSVGViewSpec* jsSVGViewSpec)
{
    if (jsSVGViewSpec->hasCustomProperties())
        return true;
    return false;
}

bool JSSVGViewSpecOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSVGViewSpec* jsSVGViewSpec = jsCast<JSSVGViewSpec*>(handle.get().asCell());
    if (!isObservable(jsSVGViewSpec))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGViewSpecOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGViewSpec* jsSVGViewSpec = jsCast<JSSVGViewSpec*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGViewSpec->impl(), jsSVGViewSpec);
    jsSVGViewSpec->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7SVGViewSpec@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11SVGViewSpecE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGViewSpec* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGViewSpec>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7SVGViewSpec@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11SVGViewSpecE[2];
#if COMPILER(CLANG)
    // If this fails SVGViewSpec does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(SVGViewSpec), SVGViewSpec_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // SVGViewSpec has subclasses. If SVGViewSpec has subclasses that get passed
    // to toJS() we currently require SVGViewSpec you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<SVGViewSpec>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSVGViewSpec>(exec, globalObject, impl);
}

SVGViewSpec* toSVGViewSpec(JSC::JSValue value)
{
    return value.inherits(JSSVGViewSpec::info()) ? &jsCast<JSSVGViewSpec*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
