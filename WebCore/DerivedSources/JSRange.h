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

#ifndef JSRange_h
#define JSRange_h

#include "JSDOMBinding.h"
#include "Range.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSRange : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSRange* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Range> impl)
    {
        JSRange* ptr = new (NotNull, JSC::allocateCell<JSRange>(globalObject->vm().heap)) JSRange(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSRange();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    Range& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    Range* m_impl;
protected:
    JSRange(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Range>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSRangeOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, Range*)
{
    DEFINE_STATIC_LOCAL(JSRangeOwner, jsRangeOwner, ());
    return &jsRangeOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, Range*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Range*);
Range* toRange(JSC::JSValue);

class JSRangePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSRangePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRangePrototype* ptr = new (NotNull, JSC::allocateCell<JSRangePrototype>(vm.heap)) JSRangePrototype(vm, globalObject, structure);
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
    JSRangePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSRangeConstructor : public DOMConstructorObject {
private:
    JSRangeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSRangeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSRangeConstructor* ptr = new (NotNull, JSC::allocateCell<JSRangeConstructor>(vm.heap)) JSRangeConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSetStart(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSetEnd(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSetStartBefore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSetStartAfter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSetEndBefore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSetEndAfter(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionCollapse(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSelectNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSelectNodeContents(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionCompareBoundaryPoints(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionDeleteContents(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionExtractContents(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionCloneContents(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionInsertNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionSurroundContents(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionCloneRange(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionToString(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionDetach(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionGetClientRects(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionGetBoundingClientRect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionCreateContextualFragment(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionIntersectsNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionCompareNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionComparePoint(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionIsPointInRange(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRangePrototypeFunctionExpand(JSC::ExecState*);
// Attributes

JSC::JSValue jsRangeStartContainer(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeStartOffset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeEndContainer(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeEndOffset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeCollapsed(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeCommonAncestorContainer(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsRangeSTART_TO_START(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeSTART_TO_END(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeEND_TO_END(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeEND_TO_START(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeNODE_BEFORE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeNODE_AFTER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeNODE_BEFORE_AND_AFTER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsRangeNODE_INSIDE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
