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

#ifndef JSScriptProfile_h
#define JSScriptProfile_h

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "JSDOMBinding.h"
#include "ScriptProfile.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSScriptProfile : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSScriptProfile* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ScriptProfile> impl)
    {
        JSScriptProfile* ptr = new (NotNull, JSC::allocateCell<JSScriptProfile>(globalObject->vm().heap)) JSScriptProfile(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSScriptProfile();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    ScriptProfile& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    ScriptProfile* m_impl;
protected:
    JSScriptProfile(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<ScriptProfile>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSScriptProfileOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, ScriptProfile*)
{
    DEFINE_STATIC_LOCAL(JSScriptProfileOwner, jsScriptProfileOwner, ());
    return &jsScriptProfileOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, ScriptProfile*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, ScriptProfile*);
ScriptProfile* toScriptProfile(JSC::JSValue);

class JSScriptProfilePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSScriptProfilePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSScriptProfilePrototype* ptr = new (NotNull, JSC::allocateCell<JSScriptProfilePrototype>(vm.heap)) JSScriptProfilePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSScriptProfilePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsScriptProfileTitle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsScriptProfileUid(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsScriptProfileHead(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsScriptProfileIdleTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)

#endif
