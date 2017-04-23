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

#ifndef JSTreeWalker_h
#define JSTreeWalker_h

#include "JSDOMBinding.h"
#include "TreeWalker.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSTreeWalker : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSTreeWalker* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TreeWalker> impl)
    {
        JSTreeWalker* ptr = new (NotNull, JSC::allocateCell<JSTreeWalker>(globalObject->vm().heap)) JSTreeWalker(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSTreeWalker();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    TreeWalker& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    TreeWalker* m_impl;
protected:
    JSTreeWalker(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<TreeWalker>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSTreeWalkerOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, TreeWalker*)
{
    DEFINE_STATIC_LOCAL(JSTreeWalkerOwner, jsTreeWalkerOwner, ());
    return &jsTreeWalkerOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, TreeWalker*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TreeWalker*);
TreeWalker* toTreeWalker(JSC::JSValue);

class JSTreeWalkerPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSTreeWalkerPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTreeWalkerPrototype* ptr = new (NotNull, JSC::allocateCell<JSTreeWalkerPrototype>(vm.heap)) JSTreeWalkerPrototype(vm, globalObject, structure);
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
    JSTreeWalkerPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSTreeWalkerConstructor : public DOMConstructorObject {
private:
    JSTreeWalkerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSTreeWalkerConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSTreeWalkerConstructor* ptr = new (NotNull, JSC::allocateCell<JSTreeWalkerConstructor>(vm.heap)) JSTreeWalkerConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionParentNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionFirstChild(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionLastChild(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousSibling(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextSibling(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionPreviousNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTreeWalkerPrototypeFunctionNextNode(JSC::ExecState*);
// Attributes

JSC::JSValue jsTreeWalkerRoot(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTreeWalkerWhatToShow(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTreeWalkerFilter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTreeWalkerExpandEntityReferences(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsTreeWalkerCurrentNode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSTreeWalkerCurrentNode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsTreeWalkerConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
