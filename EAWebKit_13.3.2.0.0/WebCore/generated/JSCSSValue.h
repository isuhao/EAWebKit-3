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

#ifndef JSCSSValue_h
#define JSCSSValue_h

#include "CSSValue.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSCSSValue : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSCSSValue* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSValue> impl)
    {
        JSCSSValue* ptr = new (JSC::allocateCell<JSCSSValue>(globalObject->globalData().heap)) JSCSSValue(structure, globalObject, impl);
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
    CSSValue* impl() const { return m_impl.get(); }

private:
    RefPtr<CSSValue> m_impl;
protected:
    JSCSSValue(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CSSValue>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSCSSValueOwner : public JSC::WeakHandleOwner {
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, CSSValue*)
{
    DEFINE_STATIC_LOCAL(JSCSSValueOwner, jsCSSValueOwner, ());
    return &jsCSSValueOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, CSSValue*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, CSSValue*);
CSSValue* toCSSValue(JSC::JSValue);

class JSCSSValuePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSCSSValuePrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSValuePrototype* ptr = new (JSC::allocateCell<JSCSSValuePrototype>(globalData.heap)) JSCSSValuePrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSCSSValuePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Attributes

JSC::JSValue jsCSSValueCssText(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSCSSValueCssText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCSSValueCssValueType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSValueConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsCSSValueCSS_INHERIT(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSValueCSS_PRIMITIVE_VALUE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSValueCSS_VALUE_LIST(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsCSSValueCSS_CUSTOM(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif