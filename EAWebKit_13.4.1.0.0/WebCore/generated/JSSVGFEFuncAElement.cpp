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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEFuncAElement.h"

#include "SVGFEFuncAElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEFuncAElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncAElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFuncAElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncAElementTable = { 2, 1, JSSVGFEFuncAElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncAElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncAElementConstructorTable = { 1, 0, JSSVGFEFuncAElementConstructorTableValues, 0 };
class JSSVGFEFuncAElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEFuncAElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEFuncAElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEFuncAElementConstructor* ptr = new (JSC::allocateCell<JSSVGFEFuncAElementConstructor>(*exec->heap())) JSSVGFEFuncAElementConstructor(structure, globalObject);
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

const ClassInfo JSSVGFEFuncAElementConstructor::s_info = { "SVGFEFuncAElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEFuncAElementConstructorTable, 0 };

JSSVGFEFuncAElementConstructor::JSSVGFEFuncAElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEFuncAElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEFuncAElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEFuncAElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFuncAElementConstructor, JSDOMWrapper>(exec, &JSSVGFEFuncAElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEFuncAElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFuncAElementConstructor, JSDOMWrapper>(exec, &JSSVGFEFuncAElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncAElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncAElementPrototypeTable = { 1, 0, JSSVGFEFuncAElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEFuncAElementPrototype::s_info = { "SVGFEFuncAElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGFEFuncAElementPrototypeTable, 0 };

JSObject* JSSVGFEFuncAElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEFuncAElement>(exec, globalObject);
}

const ClassInfo JSSVGFEFuncAElement::s_info = { "SVGFEFuncAElement", &JSSVGComponentTransferFunctionElement::s_info, &JSSVGFEFuncAElementTable, 0 };

JSSVGFEFuncAElement::JSSVGFEFuncAElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEFuncAElement> impl)
    : JSSVGComponentTransferFunctionElement(structure, globalObject, impl)
{
}

void JSSVGFEFuncAElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEFuncAElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEFuncAElementPrototype::create(exec->globalData(), globalObject, JSSVGFEFuncAElementPrototype::createStructure(exec->globalData(), globalObject, JSSVGComponentTransferFunctionElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEFuncAElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGFEFuncAElement, Base>(exec, &JSSVGFEFuncAElementTable, this, propertyName, slot);
}

bool JSSVGFEFuncAElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGFEFuncAElement, Base>(exec, &JSSVGFEFuncAElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEFuncAElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFuncAElement* domObject = static_cast<JSSVGFEFuncAElement*>(asObject(slotBase));
    return JSSVGFEFuncAElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEFuncAElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEFuncAElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)