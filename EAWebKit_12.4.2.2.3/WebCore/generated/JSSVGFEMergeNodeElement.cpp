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

#include "JSSVGFEMergeNodeElement.h"

#include "JSSVGAnimatedString.h"
#include "SVGFEMergeNodeElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEMergeNodeElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEMergeNodeElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMergeNodeElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMergeNodeElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEMergeNodeElementTable = { 4, 3, JSSVGFEMergeNodeElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEMergeNodeElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEMergeNodeElementConstructorTable = { 1, 0, JSSVGFEMergeNodeElementConstructorTableValues, 0 };
class JSSVGFEMergeNodeElementConstructor : public DOMConstructorObject {
private:
    JSSVGFEMergeNodeElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGFEMergeNodeElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGFEMergeNodeElementConstructor* ptr = new (JSC::allocateCell<JSSVGFEMergeNodeElementConstructor>(*exec->heap())) JSSVGFEMergeNodeElementConstructor(structure, globalObject);
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

const ClassInfo JSSVGFEMergeNodeElementConstructor::s_info = { "SVGFEMergeNodeElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEMergeNodeElementConstructorTable, 0 };

JSSVGFEMergeNodeElementConstructor::JSSVGFEMergeNodeElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEMergeNodeElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEMergeNodeElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEMergeNodeElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMergeNodeElementConstructor, JSDOMWrapper>(exec, &JSSVGFEMergeNodeElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEMergeNodeElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEMergeNodeElementConstructor, JSDOMWrapper>(exec, &JSSVGFEMergeNodeElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEMergeNodeElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEMergeNodeElementPrototypeTable = { 1, 0, JSSVGFEMergeNodeElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEMergeNodeElementPrototype::s_info = { "SVGFEMergeNodeElementPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGFEMergeNodeElementPrototypeTable, 0 };

JSObject* JSSVGFEMergeNodeElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEMergeNodeElement>(exec, globalObject);
}

const ClassInfo JSSVGFEMergeNodeElement::s_info = { "SVGFEMergeNodeElement", &JSSVGElement::s_info, &JSSVGFEMergeNodeElementTable, 0 };

JSSVGFEMergeNodeElement::JSSVGFEMergeNodeElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEMergeNodeElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEMergeNodeElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEMergeNodeElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEMergeNodeElementPrototype::create(exec->globalData(), globalObject, JSSVGFEMergeNodeElementPrototype::createStructure(exec->globalData(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEMergeNodeElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGFEMergeNodeElement, Base>(exec, &JSSVGFEMergeNodeElementTable, this, propertyName, slot);
}

bool JSSVGFEMergeNodeElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGFEMergeNodeElement, Base>(exec, &JSSVGFEMergeNodeElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEMergeNodeElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMergeNodeElement* castedThis = static_cast<JSSVGFEMergeNodeElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMergeNodeElement* imp = static_cast<SVGFEMergeNodeElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEMergeNodeElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMergeNodeElement* domObject = static_cast<JSSVGFEMergeNodeElement*>(asObject(slotBase));
    return JSSVGFEMergeNodeElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEMergeNodeElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEMergeNodeElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
