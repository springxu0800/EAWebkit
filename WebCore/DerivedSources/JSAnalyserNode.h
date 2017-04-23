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

#ifndef JSAnalyserNode_h
#define JSAnalyserNode_h

#if ENABLE(WEB_AUDIO)

#include "AnalyserNode.h"
#include "JSAudioNode.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSAnalyserNode : public JSAudioNode {
public:
    typedef JSAudioNode Base;
    static JSAnalyserNode* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AnalyserNode> impl)
    {
        JSAnalyserNode* ptr = new (NotNull, JSC::allocateCell<JSAnalyserNode>(globalObject->vm().heap)) JSAnalyserNode(structure, globalObject, impl);
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
    AnalyserNode& impl() const
    {
        return static_cast<AnalyserNode&>(Base::impl());
    }
protected:
    JSAnalyserNode(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<AnalyserNode>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, AnalyserNode*);

class JSAnalyserNodePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSAnalyserNodePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSAnalyserNodePrototype* ptr = new (NotNull, JSC::allocateCell<JSAnalyserNodePrototype>(vm.heap)) JSAnalyserNodePrototype(vm, globalObject, structure);
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
    JSAnalyserNodePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSAnalyserNodeConstructor : public DOMConstructorObject {
private:
    JSAnalyserNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAnalyserNodeConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAnalyserNodeConstructor* ptr = new (NotNull, JSC::allocateCell<JSAnalyserNodeConstructor>(vm.heap)) JSAnalyserNodeConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsAnalyserNodePrototypeFunctionGetFloatFrequencyData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAnalyserNodePrototypeFunctionGetByteFrequencyData(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsAnalyserNodePrototypeFunctionGetByteTimeDomainData(JSC::ExecState*);
// Attributes

JSC::JSValue jsAnalyserNodeFftSize(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAnalyserNodeFftSize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAnalyserNodeFrequencyBinCount(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsAnalyserNodeMinDecibels(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAnalyserNodeMinDecibels(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAnalyserNodeMaxDecibels(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAnalyserNodeMaxDecibels(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAnalyserNodeSmoothingTimeConstant(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSAnalyserNodeSmoothingTimeConstant(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsAnalyserNodeConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
