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

#ifndef JSHTMLMediaElement_h
#define JSHTMLMediaElement_h

#if ENABLE(VIDEO)

#include "HTMLMediaElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include "JSNode.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLMediaElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLMediaElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLMediaElement> impl)
    {
        JSHTMLMediaElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLMediaElement>(globalObject->vm().heap)) JSHTMLMediaElement(structure, globalObject, impl);
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

    // Custom attributes
    void setController(JSC::ExecState*, JSC::JSValue);
    HTMLMediaElement& impl() const
    {
        return static_cast<HTMLMediaElement&>(Base::impl());
    }
protected:
    JSHTMLMediaElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLMediaElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSHTMLMediaElementOwner : public JSNodeOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, HTMLMediaElement*)
{
    DEFINE_STATIC_LOCAL(JSHTMLMediaElementOwner, jsHTMLMediaElementOwner, ());
    return &jsHTMLMediaElementOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, HTMLMediaElement*)
{
    return &world;
}

HTMLMediaElement* toHTMLMediaElement(JSC::JSValue);

class JSHTMLMediaElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSHTMLMediaElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLMediaElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLMediaElementPrototype>(vm.heap)) JSHTMLMediaElementPrototype(vm, globalObject, structure);
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
    JSHTMLMediaElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLMediaElementConstructor : public DOMConstructorObject {
private:
    JSHTMLMediaElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLMediaElementConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLMediaElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLMediaElementConstructor>(vm.heap)) JSHTMLMediaElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionLoad(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionCanPlayType(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionPlay(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLMediaElementPrototypeFunctionPause(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLMediaElementError(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementSrc(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementCurrentSrc(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementNetworkState(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementPreload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementPreload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementBuffered(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementReadyState(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementSeeking(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementCurrentTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementCurrentTime(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementInitialTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementStartTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementDuration(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementPaused(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementDefaultPlaybackRate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementDefaultPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementPlaybackRate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementPlaybackRate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementPlayed(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementSeekable(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementEnded(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementAutoplay(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementAutoplay(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementLoop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementLoop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementControls(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementControls(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementVolume(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementVolume(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementMuted(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementMuted(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementDefaultMuted(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementDefaultMuted(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementWebkitPreservesPitch(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementWebkitPreservesPitch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementWebkitHasClosedCaptions(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementWebkitClosedCaptionsVisible(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementWebkitClosedCaptionsVisible(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#if ENABLE(MEDIA_STATISTICS)
JSC::JSValue jsHTMLMediaElementWebkitAudioDecodedByteCount(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(MEDIA_STATISTICS)
JSC::JSValue jsHTMLMediaElementWebkitVideoDecodedByteCount(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(ENCRYPTED_MEDIA) || ENABLE(ENCRYPTED_MEDIA_V2)
JSC::JSValue jsHTMLMediaElementOnwebkitneedkey(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementOnwebkitneedkey(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsHTMLMediaElementMediaGroup(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementMediaGroup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementController(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLMediaElementController(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLMediaElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsHTMLMediaElementNETWORK_EMPTY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementNETWORK_IDLE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementNETWORK_LOADING(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementNETWORK_NO_SOURCE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementHAVE_NOTHING(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementHAVE_METADATA(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementHAVE_CURRENT_DATA(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementHAVE_FUTURE_DATA(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLMediaElementHAVE_ENOUGH_DATA(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(VIDEO)

#endif
