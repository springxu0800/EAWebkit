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
#include "JSHTMLIFrameElement.h"

#include "DOMWindow.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "HTMLIFrameElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "JSSVGDocument.h"
#include "SVGDocument.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLIFrameElementTableValues[] =
{
    { "align", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementAlign), (intptr_t)setJSHTMLIFrameElementAlign },
    { "frameBorder", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementFrameBorder), (intptr_t)setJSHTMLIFrameElementFrameBorder },
    { "height", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementHeight), (intptr_t)setJSHTMLIFrameElementHeight },
    { "longDesc", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementLongDesc), (intptr_t)setJSHTMLIFrameElementLongDesc },
    { "marginHeight", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginHeight), (intptr_t)setJSHTMLIFrameElementMarginHeight },
    { "marginWidth", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginWidth), (intptr_t)setJSHTMLIFrameElementMarginWidth },
    { "name", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementName), (intptr_t)setJSHTMLIFrameElementName },
    { "sandbox", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSandbox), (intptr_t)setJSHTMLIFrameElementSandbox },
#if ENABLE(IFRAME_SEAMLESS)
    { "seamless", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSeamless), (intptr_t)setJSHTMLIFrameElementSeamless },
#endif
    { "scrolling", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementScrolling), (intptr_t)setJSHTMLIFrameElementScrolling },
    { "src", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSrc), (intptr_t)setJSHTMLIFrameElementSrc },
    { "srcdoc", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSrcdoc), (intptr_t)setJSHTMLIFrameElementSrcdoc },
    { "width", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementWidth), (intptr_t)setJSHTMLIFrameElementWidth },
    { "contentDocument", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentDocument), (intptr_t)0 },
    { "contentWindow", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentWindow), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLIFrameElementTable = { 37, 31, JSHTMLIFrameElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLIFrameElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLIFrameElementConstructorTable = { 1, 0, JSHTMLIFrameElementConstructorTableValues, 0 };
const ClassInfo JSHTMLIFrameElementConstructor::s_info = { "HTMLIFrameElementConstructor", &Base::s_info, &JSHTMLIFrameElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLIFrameElementConstructor) };

JSHTMLIFrameElementConstructor::JSHTMLIFrameElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLIFrameElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLIFrameElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLIFrameElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIFrameElementConstructor, JSDOMWrapper>(exec, JSHTMLIFrameElementConstructorTable, jsCast<JSHTMLIFrameElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLIFrameElementPrototypeTableValues[] =
{
    { "getSVGDocument", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLIFrameElementPrototypeFunctionGetSVGDocument), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLIFrameElementPrototypeTable = { 2, 1, JSHTMLIFrameElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLIFrameElementPrototype::s_info = { "HTMLIFrameElementPrototype", &Base::s_info, &JSHTMLIFrameElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLIFrameElementPrototype) };

JSObject* JSHTMLIFrameElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLIFrameElement>(vm, globalObject);
}

bool JSHTMLIFrameElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLIFrameElementPrototype* thisObject = jsCast<JSHTMLIFrameElementPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSHTMLIFrameElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSHTMLIFrameElement::s_info = { "HTMLIFrameElement", &Base::s_info, &JSHTMLIFrameElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLIFrameElement) };

JSHTMLIFrameElement::JSHTMLIFrameElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLIFrameElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLIFrameElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLIFrameElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLIFrameElementPrototype::create(vm, globalObject, JSHTMLIFrameElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLIFrameElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLIFrameElement* thisObject = jsCast<JSHTMLIFrameElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLIFrameElement, Base>(exec, JSHTMLIFrameElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLIFrameElementAlign(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLIFrameElementFrameBorder(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::frameborderAttr));
    return result;
}


JSValue jsHTMLIFrameElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::heightAttr));
    return result;
}


JSValue jsHTMLIFrameElementLongDesc(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::longdescAttr));
    return result;
}


JSValue jsHTMLIFrameElementMarginHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::marginheightAttr));
    return result;
}


JSValue jsHTMLIFrameElementMarginWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::marginwidthAttr));
    return result;
}


JSValue jsHTMLIFrameElementName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return result;
}


JSValue jsHTMLIFrameElementSandbox(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::sandboxAttr));
    return result;
}


#if ENABLE(IFRAME_SEAMLESS)
JSValue jsHTMLIFrameElementSeamless(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::seamlessAttr));
    return result;
}

#endif

JSValue jsHTMLIFrameElementScrolling(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::scrollingAttr));
    return result;
}


JSValue jsHTMLIFrameElementSrc(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getURLAttribute(WebCore::HTMLNames::srcAttr));
    return result;
}


JSValue jsHTMLIFrameElementSrcdoc(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::srcdocAttr));
    return result;
}


JSValue jsHTMLIFrameElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}


JSValue jsHTMLIFrameElementContentDocument(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    HTMLIFrameElement& impl = castedThis->impl();
    return shouldAllowAccessToNode(exec, impl.contentDocument()) ? toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.contentDocument())) : jsNull();
}


JSValue jsHTMLIFrameElementContentWindow(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.contentWindow()));
    return result;
}


JSValue jsHTMLIFrameElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLIFrameElement* domObject = jsCast<JSHTMLIFrameElement*>(asObject(slotBase));
    return JSHTMLIFrameElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLIFrameElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLIFrameElement* thisObject = jsCast<JSHTMLIFrameElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLIFrameElement, Base>(exec, propertyName, value, JSHTMLIFrameElementTable, thisObject, slot);
}

void setJSHTMLIFrameElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::alignAttr, nativeValue);
}


void setJSHTMLIFrameElementFrameBorder(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::frameborderAttr, nativeValue);
}


void setJSHTMLIFrameElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::heightAttr, nativeValue);
}


void setJSHTMLIFrameElementLongDesc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::longdescAttr, nativeValue);
}


void setJSHTMLIFrameElementMarginHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::marginheightAttr, nativeValue);
}


void setJSHTMLIFrameElementMarginWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::marginwidthAttr, nativeValue);
}


void setJSHTMLIFrameElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLIFrameElementSandbox(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::sandboxAttr, nativeValue);
}


#if ENABLE(IFRAME_SEAMLESS)
void setJSHTMLIFrameElementSeamless(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::seamlessAttr, nativeValue);
}

#endif

void setJSHTMLIFrameElementScrolling(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::scrollingAttr, nativeValue);
}


void setJSHTMLIFrameElementSrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::srcAttr, nativeValue);
}


void setJSHTMLIFrameElementSrcdoc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::srcdocAttr, nativeValue);
}


void setJSHTMLIFrameElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::widthAttr, nativeValue);
}


JSValue JSHTMLIFrameElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLIFrameElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSHTMLIFrameElement::info()))
        return throwVMTypeError(exec);
    JSHTMLIFrameElement* castedThis = jsCast<JSHTMLIFrameElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLIFrameElement::info());
    HTMLIFrameElement& impl = castedThis->impl();
    ExceptionCode ec = 0;
    if (!shouldAllowAccessToNode(exec, impl.getSVGDocument(ec)))
        return JSValue::encode(jsNull());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getSVGDocument(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}
