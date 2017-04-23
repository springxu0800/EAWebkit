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
#include "JSMediaQueryList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSMediaQueryListListener.h"
#include "MediaQueryList.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMediaQueryListTableValues[] =
{
    { "media", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaQueryListMedia), (intptr_t)0 },
    { "matches", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMediaQueryListMatches), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaQueryListTable = { 4, 3, JSMediaQueryListTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSMediaQueryListPrototypeTableValues[] =
{
    { "addListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaQueryListPrototypeFunctionAddListener), (intptr_t)0 },
    { "removeListener", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsMediaQueryListPrototypeFunctionRemoveListener), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSMediaQueryListPrototypeTable = { 4, 3, JSMediaQueryListPrototypeTableValues, 0 };
const ClassInfo JSMediaQueryListPrototype::s_info = { "MediaQueryListPrototype", &Base::s_info, &JSMediaQueryListPrototypeTable, 0, CREATE_METHOD_TABLE(JSMediaQueryListPrototype) };

JSObject* JSMediaQueryListPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMediaQueryList>(vm, globalObject);
}

bool JSMediaQueryListPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaQueryListPrototype* thisObject = jsCast<JSMediaQueryListPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSMediaQueryListPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSMediaQueryList::s_info = { "MediaQueryList", &Base::s_info, &JSMediaQueryListTable, 0 , CREATE_METHOD_TABLE(JSMediaQueryList) };

JSMediaQueryList::JSMediaQueryList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaQueryList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMediaQueryList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSMediaQueryList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSMediaQueryListPrototype::create(vm, globalObject, JSMediaQueryListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSMediaQueryList::destroy(JSC::JSCell* cell)
{
    JSMediaQueryList* thisObject = static_cast<JSMediaQueryList*>(cell);
    thisObject->JSMediaQueryList::~JSMediaQueryList();
}

JSMediaQueryList::~JSMediaQueryList()
{
    releaseImplIfNotNull();
}

bool JSMediaQueryList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMediaQueryList* thisObject = jsCast<JSMediaQueryList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSMediaQueryList, Base>(exec, JSMediaQueryListTable, thisObject, propertyName, slot);
}

JSValue jsMediaQueryListMedia(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaQueryList* castedThis = jsCast<JSMediaQueryList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaQueryList& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.media());
    return result;
}


JSValue jsMediaQueryListMatches(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMediaQueryList* castedThis = jsCast<JSMediaQueryList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MediaQueryList& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.matches());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsMediaQueryListPrototypeFunctionAddListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaQueryList::info()))
        return throwVMTypeError(exec);
    JSMediaQueryList* castedThis = jsCast<JSMediaQueryList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaQueryList::info());
    MediaQueryList& impl = castedThis->impl();
    RefPtr<MediaQueryListListener> listener;
    if (!exec->argument(0).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(0).isFunction())
            return throwVMTypeError(exec);
        listener = JSMediaQueryListListener::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    }
    impl.addListener(listener);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsMediaQueryListPrototypeFunctionRemoveListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSMediaQueryList::info()))
        return throwVMTypeError(exec);
    JSMediaQueryList* castedThis = jsCast<JSMediaQueryList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSMediaQueryList::info());
    MediaQueryList& impl = castedThis->impl();
    RefPtr<MediaQueryListListener> listener;
    if (!exec->argument(0).isUndefinedOrNull()) {
        if (!exec->uncheckedArgument(0).isFunction())
            return throwVMTypeError(exec);
        listener = JSMediaQueryListListener::create(asObject(exec->uncheckedArgument(0)), castedThis->globalObject());
    }
    impl.removeListener(listener);
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSMediaQueryList* jsMediaQueryList)
{
    if (jsMediaQueryList->hasCustomProperties())
        return true;
    return false;
}

bool JSMediaQueryListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMediaQueryList* jsMediaQueryList = jsCast<JSMediaQueryList*>(handle.get().asCell());
    if (!isObservable(jsMediaQueryList))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMediaQueryListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMediaQueryList* jsMediaQueryList = jsCast<JSMediaQueryList*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsMediaQueryList->impl(), jsMediaQueryList);
    jsMediaQueryList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MediaQueryList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMediaQueryList>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MediaQueryList.
    COMPILE_ASSERT(!__is_polymorphic(MediaQueryList), MediaQueryList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<MediaQueryList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMediaQueryList>(exec, globalObject, impl);
}

MediaQueryList* toMediaQueryList(JSC::JSValue value)
{
    return value.inherits(JSMediaQueryList::info()) ? &jsCast<JSMediaQueryList*>(asObject(value))->impl() : 0;
}

}
