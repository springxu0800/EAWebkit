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

#ifndef JSSVGPathSegCurvetoQuadraticSmoothAbs_h
#define JSSVGPathSegCurvetoQuadraticSmoothAbs_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include "SVGPathSegCurvetoQuadraticSmoothAbs.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPathSegCurvetoQuadraticSmoothAbs : public JSSVGPathSeg {
public:
    typedef JSSVGPathSeg Base;
    static JSSVGPathSegCurvetoQuadraticSmoothAbs* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoQuadraticSmoothAbs> impl)
    {
        JSSVGPathSegCurvetoQuadraticSmoothAbs* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothAbs>(globalObject->vm().heap)) JSSVGPathSegCurvetoQuadraticSmoothAbs(structure, globalObject, impl);
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
    SVGPathSegCurvetoQuadraticSmoothAbs& impl() const
    {
        return static_cast<SVGPathSegCurvetoQuadraticSmoothAbs&>(Base::impl());
    }
protected:
    JSSVGPathSegCurvetoQuadraticSmoothAbs(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathSegCurvetoQuadraticSmoothAbs>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype>(vm.heap)) JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSSVGPathSegCurvetoQuadraticSmoothAbsPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor>(vm.heap)) JSSVGPathSegCurvetoQuadraticSmoothAbsConstructor(structure, globalObject);
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

JSC::JSValue jsSVGPathSegCurvetoQuadraticSmoothAbsX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticSmoothAbsX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoQuadraticSmoothAbsY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoQuadraticSmoothAbsY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoQuadraticSmoothAbsConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
