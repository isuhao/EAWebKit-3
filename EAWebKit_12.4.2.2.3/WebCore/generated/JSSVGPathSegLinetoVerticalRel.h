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

#ifndef JSSVGPathSegLinetoVerticalRel_h
#define JSSVGPathSegLinetoVerticalRel_h

#if ENABLE(SVG)

#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include "SVGPathSegLinetoVertical.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPathSegLinetoVerticalRel : public JSSVGPathSeg {
public:
    typedef JSSVGPathSeg Base;
    static JSSVGPathSegLinetoVerticalRel* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoVerticalRel> impl)
    {
        JSSVGPathSegLinetoVerticalRel* ptr = new (JSC::allocateCell<JSSVGPathSegLinetoVerticalRel>(globalObject->globalData().heap)) JSSVGPathSegLinetoVerticalRel(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGPathSegLinetoVerticalRel(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathSegLinetoVerticalRel>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGPathSegLinetoVerticalRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGPathSegLinetoVerticalRelPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegLinetoVerticalRelPrototype* ptr = new (JSC::allocateCell<JSSVGPathSegLinetoVerticalRelPrototype>(globalData.heap)) JSSVGPathSegLinetoVerticalRelPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGPathSegLinetoVerticalRelPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsSVGPathSegLinetoVerticalRelY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegLinetoVerticalRelY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegLinetoVerticalRelConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
