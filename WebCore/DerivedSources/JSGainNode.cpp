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

#if ENABLE(WEB_AUDIO)

#include "JSGainNode.h"

#include "AudioParam.h"
#include "GainNode.h"
#include "JSAudioParam.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSGainNodeTableValues[] =
{
    { "gain", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsGainNodeGain), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsGainNodeConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSGainNodeTable = { 4, 3, JSGainNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSGainNodeConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSGainNodeConstructorTable = { 1, 0, JSGainNodeConstructorTableValues, 0 };
const ClassInfo JSGainNodeConstructor::s_info = { "GainNodeConstructor", &Base::s_info, &JSGainNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSGainNodeConstructor) };

JSGainNodeConstructor::JSGainNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSGainNodeConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSGainNodePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSGainNodeConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSGainNodeConstructor, JSDOMWrapper>(exec, JSGainNodeConstructorTable, jsCast<JSGainNodeConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSGainNodePrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSGainNodePrototypeTable = { 1, 0, JSGainNodePrototypeTableValues, 0 };
const ClassInfo JSGainNodePrototype::s_info = { "GainNodePrototype", &Base::s_info, &JSGainNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSGainNodePrototype) };

JSObject* JSGainNodePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSGainNode>(vm, globalObject);
}

const ClassInfo JSGainNode::s_info = { "GainNode", &Base::s_info, &JSGainNodeTable, 0 , CREATE_METHOD_TABLE(JSGainNode) };

JSGainNode::JSGainNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<GainNode> impl)
    : JSAudioNode(structure, globalObject, impl)
{
}

void JSGainNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSGainNode::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSGainNodePrototype::create(vm, globalObject, JSGainNodePrototype::createStructure(vm, globalObject, JSAudioNodePrototype::self(vm, globalObject)));
}

bool JSGainNode::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSGainNode* thisObject = jsCast<JSGainNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSGainNode, Base>(exec, JSGainNodeTable, thisObject, propertyName, slot);
}

JSValue jsGainNodeGain(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSGainNode* castedThis = jsCast<JSGainNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    GainNode& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.gain()));
    return result;
}


JSValue jsGainNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSGainNode* domObject = jsCast<JSGainNode*>(asObject(slotBase));
    return JSGainNode::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSGainNode::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSGainNodeConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7GainNode@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore8GainNodeE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, GainNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSGainNode>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7GainNode@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore8GainNodeE[2];
#if COMPILER(CLANG)
    // If this fails GainNode does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(GainNode), GainNode_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // GainNode has subclasses. If GainNode has subclasses that get passed
    // to toJS() we currently require GainNode you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<GainNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSGainNode>(exec, globalObject, impl);
}


}

#endif // ENABLE(WEB_AUDIO)
