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

#ifndef JSWebGLRenderbuffer_h
#define JSWebGLRenderbuffer_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include "WebGLRenderbuffer.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWebGLRenderbuffer : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWebGLRenderbuffer* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLRenderbuffer> impl)
    {
        JSWebGLRenderbuffer* ptr = new (NotNull, JSC::allocateCell<JSWebGLRenderbuffer>(globalObject->vm().heap)) JSWebGLRenderbuffer(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSWebGLRenderbuffer();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    WebGLRenderbuffer& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    WebGLRenderbuffer* m_impl;
protected:
    JSWebGLRenderbuffer(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebGLRenderbuffer>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSWebGLRenderbufferOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, WebGLRenderbuffer*)
{
    DEFINE_STATIC_LOCAL(JSWebGLRenderbufferOwner, jsWebGLRenderbufferOwner, ());
    return &jsWebGLRenderbufferOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, WebGLRenderbuffer*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WebGLRenderbuffer*);
WebGLRenderbuffer* toWebGLRenderbuffer(JSC::JSValue);

class JSWebGLRenderbufferPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSWebGLRenderbufferPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebGLRenderbufferPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebGLRenderbufferPrototype>(vm.heap)) JSWebGLRenderbufferPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSWebGLRenderbufferPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebGLRenderbufferConstructor : public DOMConstructorObject {
private:
    JSWebGLRenderbufferConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLRenderbufferConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLRenderbufferConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebGLRenderbufferConstructor>(vm.heap)) JSWebGLRenderbufferConstructor(structure, globalObject);
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

// Attributes

JSC::JSValue jsWebGLRenderbufferConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
