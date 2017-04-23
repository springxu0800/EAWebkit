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

#include "JSNavigatorUserMediaError.h"

#include "NavigatorUserMediaError.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNavigatorUserMediaErrorTableValues[] =
{
    { "constraintName", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNavigatorUserMediaErrorConstraintName), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNavigatorUserMediaErrorTable = { 2, 1, JSNavigatorUserMediaErrorTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSNavigatorUserMediaErrorPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNavigatorUserMediaErrorPrototypeTable = { 1, 0, JSNavigatorUserMediaErrorPrototypeTableValues, 0 };
const ClassInfo JSNavigatorUserMediaErrorPrototype::s_info = { "NavigatorUserMediaErrorPrototype", &Base::s_info, &JSNavigatorUserMediaErrorPrototypeTable, 0, CREATE_METHOD_TABLE(JSNavigatorUserMediaErrorPrototype) };

JSObject* JSNavigatorUserMediaErrorPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNavigatorUserMediaError>(vm, globalObject);
}

const ClassInfo JSNavigatorUserMediaError::s_info = { "NavigatorUserMediaError", &Base::s_info, &JSNavigatorUserMediaErrorTable, 0 , CREATE_METHOD_TABLE(JSNavigatorUserMediaError) };

JSNavigatorUserMediaError::JSNavigatorUserMediaError(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NavigatorUserMediaError> impl)
    : JSDOMError(structure, globalObject, impl)
{
}

void JSNavigatorUserMediaError::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSNavigatorUserMediaError::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSNavigatorUserMediaErrorPrototype::create(vm, globalObject, JSNavigatorUserMediaErrorPrototype::createStructure(vm, globalObject, JSDOMErrorPrototype::self(vm, globalObject)));
}

bool JSNavigatorUserMediaError::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNavigatorUserMediaError* thisObject = jsCast<JSNavigatorUserMediaError*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSNavigatorUserMediaError, Base>(exec, JSNavigatorUserMediaErrorTable, thisObject, propertyName, slot);
}

JSValue jsNavigatorUserMediaErrorConstraintName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNavigatorUserMediaError* castedThis = jsCast<JSNavigatorUserMediaError*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NavigatorUserMediaError& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.constraintName());
    return result;
}


#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7NavigatorUserMediaError@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore23NavigatorUserMediaErrorE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NavigatorUserMediaError* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSNavigatorUserMediaError>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7NavigatorUserMediaError@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore23NavigatorUserMediaErrorE[2];
#if COMPILER(CLANG)
    // If this fails NavigatorUserMediaError does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(NavigatorUserMediaError), NavigatorUserMediaError_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // NavigatorUserMediaError has subclasses. If NavigatorUserMediaError has subclasses that get passed
    // to toJS() we currently require NavigatorUserMediaError you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<NavigatorUserMediaError>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSNavigatorUserMediaError>(exec, globalObject, impl);
}


}

#endif // ENABLE(MEDIA_STREAM)
