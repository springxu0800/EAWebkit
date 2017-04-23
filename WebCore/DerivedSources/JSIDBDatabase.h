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

#ifndef JSIDBDatabase_h
#define JSIDBDatabase_h

#if ENABLE(INDEXED_DATABASE)

#include "IDBDatabase.h"
#include "JSDOMBinding.h"
#include "JSEventTarget.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSIDBDatabase : public JSEventTarget {
public:
    typedef JSEventTarget Base;
    static JSIDBDatabase* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBDatabase> impl)
    {
        JSIDBDatabase* ptr = new (NotNull, JSC::allocateCell<JSIDBDatabase>(globalObject->vm().heap)) JSIDBDatabase(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);


    // Custom functions
    JSC::JSValue createObjectStore(JSC::ExecState*);
    IDBDatabase& impl() const
    {
        return static_cast<IDBDatabase&>(Base::impl());
    }
protected:
    JSIDBDatabase(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<IDBDatabase>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSIDBDatabaseOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, IDBDatabase*)
{
    DEFINE_STATIC_LOCAL(JSIDBDatabaseOwner, jsIDBDatabaseOwner, ());
    return &jsIDBDatabaseOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, IDBDatabase*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, IDBDatabase*);
IDBDatabase* toIDBDatabase(JSC::JSValue);

class JSIDBDatabasePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSIDBDatabasePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSIDBDatabasePrototype* ptr = new (NotNull, JSC::allocateCell<JSIDBDatabasePrototype>(vm.heap)) JSIDBDatabasePrototype(vm, globalObject, structure);
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
    JSIDBDatabasePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSIDBDatabaseConstructor : public DOMConstructorObject {
private:
    JSIDBDatabaseConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSIDBDatabaseConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSIDBDatabaseConstructor* ptr = new (NotNull, JSC::allocateCell<JSIDBDatabaseConstructor>(vm.heap)) JSIDBDatabaseConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionCreateObjectStore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionDeleteObjectStore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionTransaction(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionClose(JSC::ExecState*);
// Attributes

JSC::JSValue jsIDBDatabaseName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseVersion(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseObjectStoreNames(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsIDBDatabaseOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSIDBDatabaseOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsIDBDatabaseOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSIDBDatabaseOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsIDBDatabaseOnversionchange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSIDBDatabaseOnversionchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsIDBDatabaseConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)

#endif
