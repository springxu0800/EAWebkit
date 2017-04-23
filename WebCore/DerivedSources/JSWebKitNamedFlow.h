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

#ifndef JSWebKitNamedFlow_h
#define JSWebKitNamedFlow_h

#include "JSDOMBinding.h"
#include "WebKitNamedFlow.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebKitNamedFlow : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebKitNamedFlow* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitNamedFlow> impl)
    {
        JSWebKitNamedFlow* ptr = new (NotNull, JSC::allocateCell<JSWebKitNamedFlow>(globalObject->vm().heap)) JSWebKitNamedFlow(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSWebKitNamedFlow();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    WebKitNamedFlow& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    WebKitNamedFlow* m_impl;
protected:
    JSWebKitNamedFlow(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebKitNamedFlow>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSWebKitNamedFlowOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, WebKitNamedFlow*)
{
    DEFINE_STATIC_LOCAL(JSWebKitNamedFlowOwner, jsWebKitNamedFlowOwner, ());
    return &jsWebKitNamedFlowOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, WebKitNamedFlow*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebKitNamedFlow*);
WebKitNamedFlow* toWebKitNamedFlow(JSC::JSValue);

class JSWebKitNamedFlowPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSWebKitNamedFlowPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitNamedFlowPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitNamedFlowPrototype>(vm.heap)) JSWebKitNamedFlowPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebKitNamedFlowPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionGetRegionsByContent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionGetRegions(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionGetContent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsWebKitNamedFlowPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsWebKitNamedFlowName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebKitNamedFlowOverset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebKitNamedFlowFirstEmptyRegionIndex(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif