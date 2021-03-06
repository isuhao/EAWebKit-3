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

#ifndef JSFloat32Array_h
#define JSFloat32Array_h

#include "Float32Array.h"
#include "JSArrayBufferView.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSFloat32Array : public JSArrayBufferView {
public:
    typedef JSArrayBufferView Base;
    static JSFloat32Array* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Float32Array> impl)
    {
        JSFloat32Array* ptr = new (JSC::allocateCell<JSFloat32Array>(globalObject->globalData().heap)) JSFloat32Array(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual bool getOwnPropertySlot(JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual void put(JSC::ExecState*, unsigned propertyName, JSC::JSValue);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    virtual void getOwnPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue set(JSC::ExecState*);
    Float32Array* impl() const
    {
        return static_cast<Float32Array*>(Base::impl());
    }
protected:
    JSFloat32Array(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Float32Array>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
    JSC::JSValue getByIndex(JSC::ExecState*, unsigned index);
    void indexSetter(JSC::ExecState*, unsigned index, JSC::JSValue);
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Float32Array*);
Float32Array* toFloat32Array(JSC::JSValue);

class JSFloat32ArrayPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSFloat32ArrayPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSFloat32ArrayPrototype* ptr = new (JSC::allocateCell<JSFloat32ArrayPrototype>(globalData.heap)) JSFloat32ArrayPrototype(globalData, globalObject, structure);
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
    JSFloat32ArrayPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSFloat32ArrayConstructor : public DOMConstructorObject {
private:
    JSFloat32ArrayConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSFloat32ArrayConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSFloat32ArrayConstructor* ptr = new (JSC::allocateCell<JSFloat32ArrayConstructor>(*exec->heap())) JSFloat32ArrayConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSFloat32Array(JSC::ExecState*);
    virtual JSC::ConstructType getConstructData(JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsFloat32ArrayPrototypeFunctionSubarray(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsFloat32ArrayPrototypeFunctionSet(JSC::ExecState*);
// Attributes

JSC::JSValue jsFloat32ArrayLength(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsFloat32ArrayConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsFloat32ArrayBYTES_PER_ELEMENT(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
