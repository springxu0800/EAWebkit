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

#ifndef JSWorkerNavigator_h
#define JSWorkerNavigator_h

#if ENABLE(WORKERS)

#include "JSDOMBinding.h"
#include "WorkerNavigator.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWorkerNavigator : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWorkerNavigator* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WorkerNavigator> impl)
    {
        JSWorkerNavigator* ptr = new (NotNull, JSC::allocateCell<JSWorkerNavigator>(globalObject->vm().heap)) JSWorkerNavigator(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSWorkerNavigator();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    WorkerNavigator& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    WorkerNavigator* m_impl;
protected:
    JSWorkerNavigator(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WorkerNavigator>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSWorkerNavigatorOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, WorkerNavigator*)
{
    DEFINE_STATIC_LOCAL(JSWorkerNavigatorOwner, jsWorkerNavigatorOwner, ());
    return &jsWorkerNavigatorOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, WorkerNavigator*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WorkerNavigator*);
WorkerNavigator* toWorkerNavigator(JSC::JSValue);

class JSWorkerNavigatorPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSWorkerNavigatorPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWorkerNavigatorPrototype* ptr = new (NotNull, JSC::allocateCell<JSWorkerNavigatorPrototype>(vm.heap)) JSWorkerNavigatorPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWorkerNavigatorPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsWorkerNavigatorAppName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerNavigatorAppVersion(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerNavigatorPlatform(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerNavigatorUserAgent(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerNavigatorOnLine(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(QUOTA)
JSC::JSValue jsWorkerNavigatorWebkitTemporaryStorage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(QUOTA)
JSC::JSValue jsWorkerNavigatorWebkitPersistentStorage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif

} // namespace WebCore

#endif // ENABLE(WORKERS)

#endif
