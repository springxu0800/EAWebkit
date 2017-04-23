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

#if ENABLE(METER_ELEMENT)

#include "JSHTMLMeterElement.h"

#include "HTMLMeterElement.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLMeterElementTableValues[] =
{
    { "value", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementValue), (intptr_t)setJSHTMLMeterElementValue },
    { "min", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementMin), (intptr_t)setJSHTMLMeterElementMin },
    { "max", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementMax), (intptr_t)setJSHTMLMeterElementMax },
    { "low", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementLow), (intptr_t)setJSHTMLMeterElementLow },
    { "high", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementHigh), (intptr_t)setJSHTMLMeterElementHigh },
    { "optimum", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementOptimum), (intptr_t)setJSHTMLMeterElementOptimum },
    { "labels", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementLabels), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLMeterElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLMeterElementTable = { 16, 15, JSHTMLMeterElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLMeterElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLMeterElementConstructorTable = { 1, 0, JSHTMLMeterElementConstructorTableValues, 0 };
const ClassInfo JSHTMLMeterElementConstructor::s_info = { "HTMLMeterElementConstructor", &Base::s_info, &JSHTMLMeterElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLMeterElementConstructor) };

JSHTMLMeterElementConstructor::JSHTMLMeterElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLMeterElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLMeterElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLMeterElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMeterElementConstructor, JSDOMWrapper>(exec, JSHTMLMeterElementConstructorTable, jsCast<JSHTMLMeterElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMeterElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLMeterElementPrototypeTable = { 1, 0, JSHTMLMeterElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLMeterElementPrototype::s_info = { "HTMLMeterElementPrototype", &Base::s_info, &JSHTMLMeterElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLMeterElementPrototype) };

JSObject* JSHTMLMeterElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLMeterElement>(vm, globalObject);
}

const ClassInfo JSHTMLMeterElement::s_info = { "HTMLMeterElement", &Base::s_info, &JSHTMLMeterElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLMeterElement) };

JSHTMLMeterElement::JSHTMLMeterElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMeterElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLMeterElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLMeterElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLMeterElementPrototype::create(vm, globalObject, JSHTMLMeterElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLMeterElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLMeterElement* thisObject = jsCast<JSHTMLMeterElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLMeterElement, Base>(exec, JSHTMLMeterElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLMeterElementValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.value());
    return result;
}


JSValue jsHTMLMeterElementMin(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.min());
    return result;
}


JSValue jsHTMLMeterElementMax(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.max());
    return result;
}


JSValue jsHTMLMeterElementLow(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.low());
    return result;
}


JSValue jsHTMLMeterElementHigh(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.high());
    return result;
}


JSValue jsHTMLMeterElementOptimum(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = jsNumber(impl.optimum());
    return result;
}


JSValue jsHTMLMeterElementLabels(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLMeterElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.labels()));
    return result;
}


JSValue jsHTMLMeterElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLMeterElement* domObject = jsCast<JSHTMLMeterElement*>(asObject(slotBase));
    return JSHTMLMeterElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLMeterElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLMeterElement* thisObject = jsCast<JSHTMLMeterElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLMeterElement, Base>(exec, propertyName, value, JSHTMLMeterElementTable, thisObject, slot);
}

void setJSHTMLMeterElementValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setValue(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementMin(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setMin(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementMax(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setMax(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementLow(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setLow(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementHigh(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setHigh(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSHTMLMeterElementOptimum(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLMeterElement* castedThis = jsCast<JSHTMLMeterElement*>(thisObject);
    HTMLMeterElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    double nativeValue(value.toNumber(exec));
    if (exec->hadException())
        return;
    impl.setOptimum(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSHTMLMeterElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLMeterElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(METER_ELEMENT)
