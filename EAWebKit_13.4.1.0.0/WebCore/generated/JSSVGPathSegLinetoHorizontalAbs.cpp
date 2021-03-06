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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGPathSegLinetoHorizontalAbs.h"

#include "SVGPathSegLinetoHorizontal.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoHorizontalAbs);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoHorizontalAbsTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalAbsX), (intptr_t)setJSSVGPathSegLinetoHorizontalAbsX THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoHorizontalAbsConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalAbsTable = { 5, 3, JSSVGPathSegLinetoHorizontalAbsTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoHorizontalAbsConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalAbsConstructorTable = { 1, 0, JSSVGPathSegLinetoHorizontalAbsConstructorTableValues, 0 };
class JSSVGPathSegLinetoHorizontalAbsConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegLinetoHorizontalAbsConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegLinetoHorizontalAbsConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegLinetoHorizontalAbsConstructor* ptr = new (JSC::allocateCell<JSSVGPathSegLinetoHorizontalAbsConstructor>(*exec->heap())) JSSVGPathSegLinetoHorizontalAbsConstructor(structure, globalObject);
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
};

const ClassInfo JSSVGPathSegLinetoHorizontalAbsConstructor::s_info = { "SVGPathSegLinetoHorizontalAbsConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegLinetoHorizontalAbsConstructorTable, 0 };

JSSVGPathSegLinetoHorizontalAbsConstructor::JSSVGPathSegLinetoHorizontalAbsConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegLinetoHorizontalAbsConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegLinetoHorizontalAbsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegLinetoHorizontalAbsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoHorizontalAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegLinetoHorizontalAbsConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoHorizontalAbsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoHorizontalAbsConstructor, JSDOMWrapper>(exec, &JSSVGPathSegLinetoHorizontalAbsConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoHorizontalAbsPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoHorizontalAbsPrototypeTable = { 1, 0, JSSVGPathSegLinetoHorizontalAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoHorizontalAbsPrototype::s_info = { "SVGPathSegLinetoHorizontalAbsPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGPathSegLinetoHorizontalAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoHorizontalAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoHorizontalAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoHorizontalAbs::s_info = { "SVGPathSegLinetoHorizontalAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoHorizontalAbsTable, 0 };

JSSVGPathSegLinetoHorizontalAbs::JSSVGPathSegLinetoHorizontalAbs(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoHorizontalAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegLinetoHorizontalAbs::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegLinetoHorizontalAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegLinetoHorizontalAbsPrototype::create(exec->globalData(), globalObject, JSSVGPathSegLinetoHorizontalAbsPrototype::createStructure(exec->globalData(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoHorizontalAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGPathSegLinetoHorizontalAbs, Base>(exec, &JSSVGPathSegLinetoHorizontalAbsTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoHorizontalAbs::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegLinetoHorizontalAbs, Base>(exec, &JSSVGPathSegLinetoHorizontalAbsTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoHorizontalAbsX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoHorizontalAbs* castedThis = static_cast<JSSVGPathSegLinetoHorizontalAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoHorizontalAbs* imp = static_cast<SVGPathSegLinetoHorizontalAbs*>(castedThis->impl());
    JSValue result = jsNumber(imp->x());
    return result;
}


JSValue jsSVGPathSegLinetoHorizontalAbsConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoHorizontalAbs* domObject = static_cast<JSSVGPathSegLinetoHorizontalAbs*>(asObject(slotBase));
    return JSSVGPathSegLinetoHorizontalAbs::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegLinetoHorizontalAbs::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGPathSegLinetoHorizontalAbs, Base>(exec, propertyName, value, &JSSVGPathSegLinetoHorizontalAbsTable, this, slot);
}

void setJSSVGPathSegLinetoHorizontalAbsX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegLinetoHorizontalAbs* castedThis = static_cast<JSSVGPathSegLinetoHorizontalAbs*>(thisObject);
    SVGPathSegLinetoHorizontalAbs* imp = static_cast<SVGPathSegLinetoHorizontalAbs*>(castedThis->impl());
    imp->setX(value.toFloat(exec));
}


JSValue JSSVGPathSegLinetoHorizontalAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoHorizontalAbsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
