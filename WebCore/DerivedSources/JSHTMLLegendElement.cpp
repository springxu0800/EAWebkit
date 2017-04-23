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
#include "JSHTMLLegendElement.h"

#include "HTMLFormElement.h"
#include "HTMLLegendElement.h"
#include "HTMLNames.h"
#include "JSHTMLFormElement.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLLegendElementTableValues[] =
{
    { "form", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLegendElementForm), (intptr_t)0 },
    { "align", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLegendElementAlign), (intptr_t)setJSHTMLLegendElementAlign },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLegendElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLLegendElementTable = { 9, 7, JSHTMLLegendElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLLegendElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLLegendElementConstructorTable = { 1, 0, JSHTMLLegendElementConstructorTableValues, 0 };
const ClassInfo JSHTMLLegendElementConstructor::s_info = { "HTMLLegendElementConstructor", &Base::s_info, &JSHTMLLegendElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLLegendElementConstructor) };

JSHTMLLegendElementConstructor::JSHTMLLegendElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLLegendElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLLegendElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLLegendElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLegendElementConstructor, JSDOMWrapper>(exec, JSHTMLLegendElementConstructorTable, jsCast<JSHTMLLegendElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLLegendElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLLegendElementPrototypeTable = { 1, 0, JSHTMLLegendElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLLegendElementPrototype::s_info = { "HTMLLegendElementPrototype", &Base::s_info, &JSHTMLLegendElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLLegendElementPrototype) };

JSObject* JSHTMLLegendElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLLegendElement>(vm, globalObject);
}

const ClassInfo JSHTMLLegendElement::s_info = { "HTMLLegendElement", &Base::s_info, &JSHTMLLegendElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLLegendElement) };

JSHTMLLegendElement::JSHTMLLegendElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLLegendElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLLegendElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLLegendElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLLegendElementPrototype::create(vm, globalObject, JSHTMLLegendElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLLegendElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLLegendElement* thisObject = jsCast<JSHTMLLegendElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLLegendElement, Base>(exec, JSHTMLLegendElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLLegendElementForm(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLegendElement* castedThis = jsCast<JSHTMLLegendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLegendElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.form()));
    return result;
}


JSValue jsHTMLLegendElementAlign(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLegendElement* castedThis = jsCast<JSHTMLLegendElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLegendElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLLegendElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLegendElement* domObject = jsCast<JSHTMLLegendElement*>(asObject(slotBase));
    return JSHTMLLegendElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLLegendElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLLegendElement* thisObject = jsCast<JSHTMLLegendElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLLegendElement, Base>(exec, propertyName, value, JSHTMLLegendElementTable, thisObject, slot);
}

void setJSHTMLLegendElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLegendElement* castedThis = jsCast<JSHTMLLegendElement*>(thisObject);
    HTMLLegendElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::alignAttr, nativeValue);
}


JSValue JSHTMLLegendElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLLegendElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
