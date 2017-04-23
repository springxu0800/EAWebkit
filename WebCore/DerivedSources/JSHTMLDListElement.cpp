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
#include "JSHTMLDListElement.h"

#include "HTMLDListElement.h"
#include "HTMLNames.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLDListElementTableValues[] =
{
    { "compact", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDListElementCompact), (intptr_t)setJSHTMLDListElementCompact },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLDListElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLDListElementTable = { 4, 3, JSHTMLDListElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLDListElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLDListElementConstructorTable = { 1, 0, JSHTMLDListElementConstructorTableValues, 0 };
const ClassInfo JSHTMLDListElementConstructor::s_info = { "HTMLDListElementConstructor", &Base::s_info, &JSHTMLDListElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLDListElementConstructor) };

JSHTMLDListElementConstructor::JSHTMLDListElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLDListElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLDListElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLDListElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDListElementConstructor, JSDOMWrapper>(exec, JSHTMLDListElementConstructorTable, jsCast<JSHTMLDListElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLDListElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLDListElementPrototypeTable = { 1, 0, JSHTMLDListElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLDListElementPrototype::s_info = { "HTMLDListElementPrototype", &Base::s_info, &JSHTMLDListElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLDListElementPrototype) };

JSObject* JSHTMLDListElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLDListElement>(vm, globalObject);
}

const ClassInfo JSHTMLDListElement::s_info = { "HTMLDListElement", &Base::s_info, &JSHTMLDListElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLDListElement) };

JSHTMLDListElement::JSHTMLDListElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLDListElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLDListElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLDListElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLDListElementPrototype::create(vm, globalObject, JSHTMLDListElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLDListElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLDListElement* thisObject = jsCast<JSHTMLDListElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLDListElement, Base>(exec, JSHTMLDListElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLDListElementCompact(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLDListElement* castedThis = jsCast<JSHTMLDListElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLDListElement& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::compactAttr));
    return result;
}


JSValue jsHTMLDListElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLDListElement* domObject = jsCast<JSHTMLDListElement*>(asObject(slotBase));
    return JSHTMLDListElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLDListElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLDListElement* thisObject = jsCast<JSHTMLDListElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLDListElement, Base>(exec, propertyName, value, JSHTMLDListElementTable, thisObject, slot);
}

void setJSHTMLDListElementCompact(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLDListElement* castedThis = jsCast<JSHTMLDListElement*>(thisObject);
    HTMLDListElement& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::compactAttr, nativeValue);
}


JSValue JSHTMLDListElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLDListElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
