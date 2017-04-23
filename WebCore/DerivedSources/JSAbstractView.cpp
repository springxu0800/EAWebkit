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
#include "JSAbstractView.h"

#include "AbstractView.h"
#include "Document.h"
#include "JSDocument.h"
#include "JSStyleMedia.h"
#include "StyleMedia.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSAbstractViewTableValues[] =
{
    { "document", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAbstractViewDocument), (intptr_t)0 },
    { "styleMedia", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAbstractViewStyleMedia), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSAbstractViewTable = { 4, 3, JSAbstractViewTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSAbstractViewPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSAbstractViewPrototypeTable = { 1, 0, JSAbstractViewPrototypeTableValues, 0 };
const ClassInfo JSAbstractViewPrototype::s_info = { "AbstractViewPrototype", &Base::s_info, &JSAbstractViewPrototypeTable, 0, CREATE_METHOD_TABLE(JSAbstractViewPrototype) };

JSObject* JSAbstractViewPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAbstractView>(vm, globalObject);
}

const ClassInfo JSAbstractView::s_info = { "AbstractView", &Base::s_info, &JSAbstractViewTable, 0 , CREATE_METHOD_TABLE(JSAbstractView) };

JSAbstractView::JSAbstractView(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AbstractView> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSAbstractView::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSAbstractView::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSAbstractViewPrototype::create(vm, globalObject, JSAbstractViewPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSAbstractView::destroy(JSC::JSCell* cell)
{
    JSAbstractView* thisObject = static_cast<JSAbstractView*>(cell);
    thisObject->JSAbstractView::~JSAbstractView();
}

JSAbstractView::~JSAbstractView()
{
    releaseImplIfNotNull();
}

bool JSAbstractView::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSAbstractView* thisObject = jsCast<JSAbstractView*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSAbstractView, Base>(exec, JSAbstractViewTable, thisObject, propertyName, slot);
}

JSValue jsAbstractViewDocument(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAbstractView* castedThis = jsCast<JSAbstractView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AbstractView& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.document()));
    return result;
}


JSValue jsAbstractViewStyleMedia(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSAbstractView* castedThis = jsCast<JSAbstractView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AbstractView& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.styleMedia()));
    return result;
}


static inline bool isObservable(JSAbstractView* jsAbstractView)
{
    if (jsAbstractView->hasCustomProperties())
        return true;
    return false;
}

bool JSAbstractViewOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSAbstractView* jsAbstractView = jsCast<JSAbstractView*>(handle.get().asCell());
    if (!isObservable(jsAbstractView))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSAbstractViewOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSAbstractView* jsAbstractView = jsCast<JSAbstractView*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsAbstractView->impl(), jsAbstractView);
    jsAbstractView->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7AbstractView@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore12AbstractViewE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AbstractView* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSAbstractView>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7AbstractView@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore12AbstractViewE[2];
#if COMPILER(CLANG)
    // If this fails AbstractView does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(AbstractView), AbstractView_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // AbstractView has subclasses. If AbstractView has subclasses that get passed
    // to toJS() we currently require AbstractView you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<AbstractView>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSAbstractView>(exec, globalObject, impl);
}

AbstractView* toAbstractView(JSC::JSValue value)
{
    return value.inherits(JSAbstractView::info()) ? &jsCast<JSAbstractView*>(asObject(value))->impl() : 0;
}

}
