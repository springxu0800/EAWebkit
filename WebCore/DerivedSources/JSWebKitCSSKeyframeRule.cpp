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
#include "JSWebKitCSSKeyframeRule.h"

#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "StylePropertySet.h"
#include "URL.h"
#include "WebKitCSSKeyframeRule.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitCSSKeyframeRuleTableValues[] =
{
    { "keyText", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSKeyframeRuleKeyText), (intptr_t)setJSWebKitCSSKeyframeRuleKeyText },
    { "style", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSKeyframeRuleStyle), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSKeyframeRuleConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframeRuleTable = { 9, 7, JSWebKitCSSKeyframeRuleTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitCSSKeyframeRuleConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframeRuleConstructorTable = { 1, 0, JSWebKitCSSKeyframeRuleConstructorTableValues, 0 };
const ClassInfo JSWebKitCSSKeyframeRuleConstructor::s_info = { "WebKitCSSKeyframeRuleConstructor", &Base::s_info, &JSWebKitCSSKeyframeRuleConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSKeyframeRuleConstructor) };

JSWebKitCSSKeyframeRuleConstructor::JSWebKitCSSKeyframeRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitCSSKeyframeRuleConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitCSSKeyframeRulePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitCSSKeyframeRuleConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSKeyframeRuleConstructor, JSDOMWrapper>(exec, JSWebKitCSSKeyframeRuleConstructorTable, jsCast<JSWebKitCSSKeyframeRuleConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSKeyframeRulePrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframeRulePrototypeTable = { 1, 0, JSWebKitCSSKeyframeRulePrototypeTableValues, 0 };
const ClassInfo JSWebKitCSSKeyframeRulePrototype::s_info = { "WebKitCSSKeyframeRulePrototype", &Base::s_info, &JSWebKitCSSKeyframeRulePrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSKeyframeRulePrototype) };

JSObject* JSWebKitCSSKeyframeRulePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSKeyframeRule>(vm, globalObject);
}

const ClassInfo JSWebKitCSSKeyframeRule::s_info = { "WebKitCSSKeyframeRule", &Base::s_info, &JSWebKitCSSKeyframeRuleTable, 0 , CREATE_METHOD_TABLE(JSWebKitCSSKeyframeRule) };

JSWebKitCSSKeyframeRule::JSWebKitCSSKeyframeRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSKeyframeRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
}

void JSWebKitCSSKeyframeRule::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebKitCSSKeyframeRule::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitCSSKeyframeRulePrototype::create(vm, globalObject, JSWebKitCSSKeyframeRulePrototype::createStructure(vm, globalObject, JSCSSRulePrototype::self(vm, globalObject)));
}

bool JSWebKitCSSKeyframeRule::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitCSSKeyframeRule* thisObject = jsCast<JSWebKitCSSKeyframeRule*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSWebKitCSSKeyframeRule, Base>(exec, JSWebKitCSSKeyframeRuleTable, thisObject, propertyName, slot);
}

JSValue jsWebKitCSSKeyframeRuleKeyText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSKeyframeRule* castedThis = jsCast<JSWebKitCSSKeyframeRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSKeyframeRule& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.keyText());
    return result;
}


JSValue jsWebKitCSSKeyframeRuleStyle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSKeyframeRule* castedThis = jsCast<JSWebKitCSSKeyframeRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSKeyframeRule& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.style()));
    return result;
}


JSValue jsWebKitCSSKeyframeRuleConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSKeyframeRule* domObject = jsCast<JSWebKitCSSKeyframeRule*>(asObject(slotBase));
    return JSWebKitCSSKeyframeRule::getConstructor(exec->vm(), domObject->globalObject());
}

void JSWebKitCSSKeyframeRule::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSWebKitCSSKeyframeRule* thisObject = jsCast<JSWebKitCSSKeyframeRule*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSWebKitCSSKeyframeRule, Base>(exec, propertyName, value, JSWebKitCSSKeyframeRuleTable, thisObject, slot);
}

void setJSWebKitCSSKeyframeRuleKeyText(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebKitCSSKeyframeRule* castedThis = jsCast<JSWebKitCSSKeyframeRule*>(thisObject);
    WebKitCSSKeyframeRule& impl = castedThis->impl();
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl.setKeyText(nativeValue);
}


JSValue JSWebKitCSSKeyframeRule::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSKeyframeRuleConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}
