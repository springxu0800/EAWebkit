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
#include "JSEntity.h"

#include "Entity.h"
#include "URL.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSEntityTableValues[] =
{
    { "publicId", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntityPublicId), (intptr_t)0 },
    { "systemId", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntitySystemId), (intptr_t)0 },
    { "notationName", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntityNotationName), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEntityConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEntityTable = { 10, 7, JSEntityTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSEntityConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEntityConstructorTable = { 1, 0, JSEntityConstructorTableValues, 0 };
const ClassInfo JSEntityConstructor::s_info = { "EntityConstructor", &Base::s_info, &JSEntityConstructorTable, 0, CREATE_METHOD_TABLE(JSEntityConstructor) };

JSEntityConstructor::JSEntityConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSEntityConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSEntityPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSEntityConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEntityConstructor, JSDOMWrapper>(exec, JSEntityConstructorTable, jsCast<JSEntityConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSEntityPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSEntityPrototypeTable = { 1, 0, JSEntityPrototypeTableValues, 0 };
const ClassInfo JSEntityPrototype::s_info = { "EntityPrototype", &Base::s_info, &JSEntityPrototypeTable, 0, CREATE_METHOD_TABLE(JSEntityPrototype) };

JSObject* JSEntityPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEntity>(vm, globalObject);
}

const ClassInfo JSEntity::s_info = { "Entity", &Base::s_info, &JSEntityTable, 0 , CREATE_METHOD_TABLE(JSEntity) };

JSEntity::JSEntity(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Entity> impl)
    : JSNode(structure, globalObject, impl)
{
}

void JSEntity::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSEntity::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSEntityPrototype::create(vm, globalObject, JSEntityPrototype::createStructure(vm, globalObject, JSNodePrototype::self(vm, globalObject)));
}

bool JSEntity::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEntity* thisObject = jsCast<JSEntity*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSEntity, Base>(exec, JSEntityTable, thisObject, propertyName, slot);
}

JSValue jsEntityPublicId(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntity* castedThis = jsCast<JSEntity*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entity& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.publicId());
    return result;
}


JSValue jsEntitySystemId(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntity* castedThis = jsCast<JSEntity*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entity& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.systemId());
    return result;
}


JSValue jsEntityNotationName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntity* castedThis = jsCast<JSEntity*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Entity& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.notationName());
    return result;
}


JSValue jsEntityConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEntity* domObject = jsCast<JSEntity*>(asObject(slotBase));
    return JSEntity::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSEntity::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEntityConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
