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

#ifndef JSAudioNode_h
#define JSAudioNode_h

#if ENABLE(WEB_AUDIO)

#include "AudioNode.h"
#include "JSDOMBinding.h"
#include "JSEventTarget.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSAudioNode : public JSEventTarget {
public:
    typedef JSEventTarget Base;
    static JSAudioNode* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioNode> impl)
    {
        JSAudioNode* ptr = new (NotNull, JSC::allocateCell<JSAudioNode>(globalObject->vm().heap)) JSAudioNode(structure, globalObject, impl);
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

    AudioNode& impl() const
    {
        return static_cast<AudioNode&>(Base::impl());
    }
protected:
    JSAudioNode(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AudioNode>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSAudioNodeOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, AudioNode*)
{
    DEFINE_STATIC_LOCAL(JSAudioNodeOwner, jsAudioNodeOwner, ());
    return &jsAudioNodeOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, AudioNode*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AudioNode*);
AudioNode* toAudioNode(JSC::JSValue);

class JSAudioNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSAudioNodePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAudioNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSAudioNodePrototype>(vm.heap)) JSAudioNodePrototype(vm, globalObject, structure);
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
    JSAudioNodePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSAudioNodeConstructor : public DOMConstructorObject {
private:
    JSAudioNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioNodeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSAudioNodeConstructor>(vm.heap)) JSAudioNodeConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionConnect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionDisconnect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsAudioNodeContext(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioNodeNumberOfInputs(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioNodeNumberOfOutputs(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAudioNodeChannelCount(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioNodeChannelCount(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioNodeChannelCountMode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioNodeChannelCountMode(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioNodeChannelInterpretation(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAudioNodeChannelInterpretation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAudioNodeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
