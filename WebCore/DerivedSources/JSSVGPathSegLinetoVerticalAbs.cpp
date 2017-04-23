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

#include "JSSVGPathSegLinetoVerticalAbs.h"

#include "SVGPathSegLinetoVerticalAbs.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegLinetoVerticalAbsTableValues[] =
{
    { "y", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalAbsY), (intptr_t)setJSSVGPathSegLinetoVerticalAbsY },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoVerticalAbsConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoVerticalAbsTable = { 4, 3, JSSVGPathSegLinetoVerticalAbsTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegLinetoVerticalAbsConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoVerticalAbsConstructorTable = { 1, 0, JSSVGPathSegLinetoVerticalAbsConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoVerticalAbsConstructor::s_info = { "SVGPathSegLinetoVerticalAbsConstructor", &Base::s_info, &JSSVGPathSegLinetoVerticalAbsConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalAbsConstructor) };

JSSVGPathSegLinetoVerticalAbsConstructor::JSSVGPathSegLinetoVerticalAbsConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegLinetoVerticalAbsConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGPathSegLinetoVerticalAbsPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegLinetoVerticalAbsConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoVerticalAbsConstructor, JSDOMWrapper>(exec, JSSVGPathSegLinetoVerticalAbsConstructorTable, jsCast<JSSVGPathSegLinetoVerticalAbsConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegLinetoVerticalAbsPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGPathSegLinetoVerticalAbsPrototypeTable = { 1, 0, JSSVGPathSegLinetoVerticalAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoVerticalAbsPrototype::s_info = { "SVGPathSegLinetoVerticalAbsPrototype", &Base::s_info, &JSSVGPathSegLinetoVerticalAbsPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalAbsPrototype) };

JSObject* JSSVGPathSegLinetoVerticalAbsPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoVerticalAbs>(vm, globalObject);
}

const ClassInfo JSSVGPathSegLinetoVerticalAbs::s_info = { "SVGPathSegLinetoVerticalAbs", &Base::s_info, &JSSVGPathSegLinetoVerticalAbsTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegLinetoVerticalAbs) };

JSSVGPathSegLinetoVerticalAbs::JSSVGPathSegLinetoVerticalAbs(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoVerticalAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegLinetoVerticalAbs::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGPathSegLinetoVerticalAbs::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGPathSegLinetoVerticalAbsPrototype::create(vm, globalObject, JSSVGPathSegLinetoVerticalAbsPrototype::createStructure(vm, globalObject, JSSVGPathSegPrototype::self(vm, globalObject)));
}

bool JSSVGPathSegLinetoVerticalAbs::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegLinetoVerticalAbs* thisObject = jsCast<JSSVGPathSegLinetoVerticalAbs*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGPathSegLinetoVerticalAbs, Base>(exec, JSSVGPathSegLinetoVerticalAbsTable, thisObject, propertyName, slot);
}

JSValue jsSVGPathSegLinetoVerticalAbsY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegLinetoVerticalAbs* castedThis = jsCast<JSSVGPathSegLinetoVerticalAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoVerticalAbs& impl = castedThis->impl();
    JSValue result = jsNumber(impl.y());
    return result;
}


JSValue jsSVGPathSegLinetoVerticalAbsConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegLinetoVerticalAbs* domObject = jsCast<JSSVGPathSegLinetoVerticalAbs*>(asObject(slotBase));
    return JSSVGPathSegLinetoVerticalAbs::getConstructor(exec->vm(), domObject->globalObject());
}

void JSSVGPathSegLinetoVerticalAbs::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegLinetoVerticalAbs* thisObject = jsCast<JSSVGPathSegLinetoVerticalAbs*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSSVGPathSegLinetoVerticalAbs, Base>(exec, propertyName, value, JSSVGPathSegLinetoVerticalAbsTable, thisObject, slot);
}

void setJSSVGPathSegLinetoVerticalAbsY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegLinetoVerticalAbs* castedThis = jsCast<JSSVGPathSegLinetoVerticalAbs*>(thisObject);
    SVGPathSegLinetoVerticalAbs& impl = castedThis->impl();
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl.setY(nativeValue);
}


JSValue JSSVGPathSegLinetoVerticalAbs::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoVerticalAbsConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
