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

#include "JSSVGAnimatedInteger.h"

#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGAnimatedInteger);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedIntegerTableValues[] =
{
    { "baseVal", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedIntegerBaseVal), (intptr_t)setJSSVGAnimatedIntegerBaseVal THUNK_GENERATOR(0) },
    { "animVal", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedIntegerAnimVal), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimatedIntegerConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedIntegerTable = { 8, 7, JSSVGAnimatedIntegerTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedIntegerConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedIntegerConstructorTable = { 1, 0, JSSVGAnimatedIntegerConstructorTableValues, 0 };
class JSSVGAnimatedIntegerConstructor : public DOMConstructorObject {
private:
    JSSVGAnimatedIntegerConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGAnimatedIntegerConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGAnimatedIntegerConstructor* ptr = new (JSC::allocateCell<JSSVGAnimatedIntegerConstructor>(*exec->heap())) JSSVGAnimatedIntegerConstructor(structure, globalObject);
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

const ClassInfo JSSVGAnimatedIntegerConstructor::s_info = { "SVGAnimatedIntegerConstructor", &DOMConstructorObject::s_info, &JSSVGAnimatedIntegerConstructorTable, 0 };

JSSVGAnimatedIntegerConstructor::JSSVGAnimatedIntegerConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimatedIntegerConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGAnimatedIntegerPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGAnimatedIntegerConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimatedIntegerConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedIntegerConstructorTable, this, propertyName, slot);
}

bool JSSVGAnimatedIntegerConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimatedIntegerConstructor, JSDOMWrapper>(exec, &JSSVGAnimatedIntegerConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGAnimatedIntegerPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGAnimatedIntegerPrototypeTable = { 1, 0, JSSVGAnimatedIntegerPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimatedIntegerPrototype::s_info = { "SVGAnimatedIntegerPrototype", &JSC::JSNonFinalObject::s_info, &JSSVGAnimatedIntegerPrototypeTable, 0 };

JSObject* JSSVGAnimatedIntegerPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimatedInteger>(exec, globalObject);
}

const ClassInfo JSSVGAnimatedInteger::s_info = { "SVGAnimatedInteger", &JSDOMWrapper::s_info, &JSSVGAnimatedIntegerTable, 0 };

JSSVGAnimatedInteger::JSSVGAnimatedInteger(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimatedInteger> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSVGAnimatedInteger::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimatedInteger::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimatedIntegerPrototype::create(exec->globalData(), globalObject, JSSVGAnimatedIntegerPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSSVGAnimatedInteger::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSVGAnimatedInteger, Base>(exec, &JSSVGAnimatedIntegerTable, this, propertyName, slot);
}

bool JSSVGAnimatedInteger::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSVGAnimatedInteger, Base>(exec, &JSSVGAnimatedIntegerTable, this, propertyName, descriptor);
}

JSValue jsSVGAnimatedIntegerBaseVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedInteger* castedThis = static_cast<JSSVGAnimatedInteger*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedInteger* imp = static_cast<SVGAnimatedInteger*>(castedThis->impl());
    JSValue result = jsNumber(imp->baseVal());
    return result;
}


JSValue jsSVGAnimatedIntegerAnimVal(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedInteger* castedThis = static_cast<JSSVGAnimatedInteger*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGAnimatedInteger* imp = static_cast<SVGAnimatedInteger*>(castedThis->impl());
    JSValue result = jsNumber(imp->animVal());
    return result;
}


JSValue jsSVGAnimatedIntegerConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGAnimatedInteger* domObject = static_cast<JSSVGAnimatedInteger*>(asObject(slotBase));
    return JSSVGAnimatedInteger::getConstructor(exec, domObject->globalObject());
}

void JSSVGAnimatedInteger::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSSVGAnimatedInteger, Base>(exec, propertyName, value, &JSSVGAnimatedIntegerTable, this, slot);
}

void setJSSVGAnimatedIntegerBaseVal(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGAnimatedInteger* castedThis = static_cast<JSSVGAnimatedInteger*>(thisObject);
    SVGAnimatedInteger* imp = static_cast<SVGAnimatedInteger*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setBaseVal(value.toInt32(exec), ec);
    setDOMException(exec, ec);
}


JSValue JSSVGAnimatedInteger::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimatedIntegerConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGAnimatedInteger* impl)
{
    return wrap<JSSVGAnimatedInteger>(exec, globalObject, impl);
}

SVGAnimatedInteger* toSVGAnimatedInteger(JSC::JSValue value)
{
    return value.inherits(&JSSVGAnimatedInteger::s_info) ? static_cast<JSSVGAnimatedInteger*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
