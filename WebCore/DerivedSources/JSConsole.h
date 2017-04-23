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

#ifndef JSConsole_h
#define JSConsole_h

#include "Console.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSConsole : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSConsole* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Console> impl)
    {
        JSConsole* ptr = new (NotNull, JSC::allocateCell<JSConsole>(globalObject->vm().heap)) JSConsole(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSConsole();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    Console& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    Console* m_impl;
protected:
    JSConsole(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Console>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSConsoleOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, Console*)
{
    DEFINE_STATIC_LOCAL(JSConsoleOwner, jsConsoleOwner, ());
    return &jsConsoleOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, Console*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Console*);
Console* toConsole(JSC::JSValue);

class JSConsolePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSConsolePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSConsolePrototype* ptr = new (NotNull, JSC::allocateCell<JSConsolePrototype>(vm.heap)) JSConsolePrototype(vm, globalObject, structure);
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
    JSConsolePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDebug(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionError(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionInfo(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionLog(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionWarn(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDir(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionDirxml(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTable(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTrace(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionAssert(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionCount(JSC::ExecState*);
#if ENABLE(JAVASCRIPT_DEBUGGER)
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionProfile(JSC::ExecState*);
#endif
#if ENABLE(JAVASCRIPT_DEBUGGER)
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionProfileEnd(JSC::ExecState*);
#endif
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTime(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTimeEnd(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionTimeStamp(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroup(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroupCollapsed(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionGroupEnd(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsConsolePrototypeFunctionClear(JSC::ExecState*);
// Attributes

#if ENABLE(JAVASCRIPT_DEBUGGER)
JSC::JSValue jsConsoleProfiles(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif

} // namespace WebCore

#endif
