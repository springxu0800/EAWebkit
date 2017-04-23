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

#ifndef JSOfflineAudioCompletionEvent_h
#define JSOfflineAudioCompletionEvent_h

#if ENABLE(WEB_AUDIO)

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "OfflineAudioCompletionEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSOfflineAudioCompletionEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSOfflineAudioCompletionEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<OfflineAudioCompletionEvent> impl)
    {
        JSOfflineAudioCompletionEvent* ptr = new (NotNull, JSC::allocateCell<JSOfflineAudioCompletionEvent>(globalObject->vm().heap)) JSOfflineAudioCompletionEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    OfflineAudioCompletionEvent& impl() const
    {
        return static_cast<OfflineAudioCompletionEvent&>(Base::impl());
    }
protected:
    JSOfflineAudioCompletionEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<OfflineAudioCompletionEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, OfflineAudioCompletionEvent*);

class JSOfflineAudioCompletionEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSOfflineAudioCompletionEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSOfflineAudioCompletionEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSOfflineAudioCompletionEventPrototype>(vm.heap)) JSOfflineAudioCompletionEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSOfflineAudioCompletionEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSOfflineAudioCompletionEventConstructor : public DOMConstructorObject {
private:
    JSOfflineAudioCompletionEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSOfflineAudioCompletionEventConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSOfflineAudioCompletionEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSOfflineAudioCompletionEventConstructor>(vm.heap)) JSOfflineAudioCompletionEventConstructor(structure, globalObject);
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

JSC::JSValue jsOfflineAudioCompletionEventRenderedBuffer(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsOfflineAudioCompletionEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)

#endif
