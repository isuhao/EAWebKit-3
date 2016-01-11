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
#include "JSHTMLOptGroupElement.h"

#include "HTMLNames.h"
#include "HTMLOptGroupElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLOptGroupElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLOptGroupElementTableValues[] =
{
    { "disabled", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOptGroupElementDisabled), (intptr_t)setJSHTMLOptGroupElementDisabled THUNK_GENERATOR(0) },
    { "label", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOptGroupElementLabel), (intptr_t)setJSHTMLOptGroupElementLabel THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLOptGroupElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLOptGroupElementTable = { 10, 7, JSHTMLOptGroupElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLOptGroupElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLOptGroupElementConstructorTable = { 1, 0, JSHTMLOptGroupElementConstructorTableValues, 0 };
class JSHTMLOptGroupElementConstructor : public DOMConstructorObject {
private:
    JSHTMLOptGroupElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLOptGroupElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLOptGroupElementConstructor* ptr = new (JSC::allocateCell<JSHTMLOptGroupElementConstructor>(*exec->heap())) JSHTMLOptGroupElementConstructor(structure, globalObject);
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

const ClassInfo JSHTMLOptGroupElementConstructor::s_info = { "HTMLOptGroupElementConstructor", &DOMConstructorObject::s_info, &JSHTMLOptGroupElementConstructorTable, 0 };

JSHTMLOptGroupElementConstructor::JSHTMLOptGroupElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLOptGroupElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLOptGroupElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLOptGroupElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLOptGroupElementConstructor, JSDOMWrapper>(exec, &JSHTMLOptGroupElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLOptGroupElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLOptGroupElementConstructor, JSDOMWrapper>(exec, &JSHTMLOptGroupElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLOptGroupElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLOptGroupElementPrototypeTable = { 1, 0, JSHTMLOptGroupElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLOptGroupElementPrototype::s_info = { "HTMLOptGroupElementPrototype", &JSC::JSNonFinalObject::s_info, &JSHTMLOptGroupElementPrototypeTable, 0 };

JSObject* JSHTMLOptGroupElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLOptGroupElement>(exec, globalObject);
}

const ClassInfo JSHTMLOptGroupElement::s_info = { "HTMLOptGroupElement", &JSHTMLElement::s_info, &JSHTMLOptGroupElementTable, 0 };

JSHTMLOptGroupElement::JSHTMLOptGroupElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLOptGroupElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLOptGroupElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLOptGroupElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLOptGroupElementPrototype::create(exec->globalData(), globalObject, JSHTMLOptGroupElementPrototype::createStructure(exec->globalData(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLOptGroupElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLOptGroupElement, Base>(exec, &JSHTMLOptGroupElementTable, this, propertyName, slot);
}

bool JSHTMLOptGroupElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLOptGroupElement, Base>(exec, &JSHTMLOptGroupElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLOptGroupElementDisabled(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLOptGroupElement* castedThis = static_cast<JSHTMLOptGroupElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLOptGroupElement* imp = static_cast<HTMLOptGroupElement*>(castedThis->impl());
    JSValue result = jsBoolean(imp->hasAttribute(WebCore::HTMLNames::disabledAttr));
    return result;
}


JSValue jsHTMLOptGroupElementLabel(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLOptGroupElement* castedThis = static_cast<JSHTMLOptGroupElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLOptGroupElement* imp = static_cast<HTMLOptGroupElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::labelAttr));
    return result;
}


JSValue jsHTMLOptGroupElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLOptGroupElement* domObject = static_cast<JSHTMLOptGroupElement*>(asObject(slotBase));
    return JSHTMLOptGroupElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLOptGroupElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLOptGroupElement, Base>(exec, propertyName, value, &JSHTMLOptGroupElementTable, this, slot);
}

void setJSHTMLOptGroupElementDisabled(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLOptGroupElement* castedThis = static_cast<JSHTMLOptGroupElement*>(thisObject);
    HTMLOptGroupElement* imp = static_cast<HTMLOptGroupElement*>(castedThis->impl());
    imp->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, value.toBoolean(exec));
}


void setJSHTMLOptGroupElementLabel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLOptGroupElement* castedThis = static_cast<JSHTMLOptGroupElement*>(thisObject);
    HTMLOptGroupElement* imp = static_cast<HTMLOptGroupElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::labelAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLOptGroupElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLOptGroupElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
