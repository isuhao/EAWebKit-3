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
#include "JSHTMLIsIndexElement.h"

#include "HTMLFormElement.h"
#include "HTMLIsIndexElement.h"
#include "HTMLNames.h"
#include "JSHTMLFormElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLIsIndexElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLIsIndexElementTableValues[] =
{
    { "form", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIsIndexElementForm), (intptr_t)0 THUNK_GENERATOR(0) },
    { "prompt", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIsIndexElementPrompt), (intptr_t)setJSHTMLIsIndexElementPrompt THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIsIndexElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLIsIndexElementTable = { 8, 7, JSHTMLIsIndexElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLIsIndexElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLIsIndexElementConstructorTable = { 1, 0, JSHTMLIsIndexElementConstructorTableValues, 0 };
class JSHTMLIsIndexElementConstructor : public DOMConstructorObject {
private:
    JSHTMLIsIndexElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLIsIndexElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLIsIndexElementConstructor* ptr = new (JSC::allocateCell<JSHTMLIsIndexElementConstructor>(*exec->heap())) JSHTMLIsIndexElementConstructor(structure, globalObject);
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

const ClassInfo JSHTMLIsIndexElementConstructor::s_info = { "HTMLIsIndexElementConstructor", &DOMConstructorObject::s_info, &JSHTMLIsIndexElementConstructorTable, 0 };

JSHTMLIsIndexElementConstructor::JSHTMLIsIndexElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLIsIndexElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLIsIndexElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLIsIndexElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIsIndexElementConstructor, JSDOMWrapper>(exec, &JSHTMLIsIndexElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLIsIndexElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLIsIndexElementConstructor, JSDOMWrapper>(exec, &JSHTMLIsIndexElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLIsIndexElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLIsIndexElementPrototypeTable = { 1, 0, JSHTMLIsIndexElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLIsIndexElementPrototype::s_info = { "HTMLIsIndexElementPrototype", &JSC::JSNonFinalObject::s_info, &JSHTMLIsIndexElementPrototypeTable, 0 };

JSObject* JSHTMLIsIndexElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLIsIndexElement>(exec, globalObject);
}

const ClassInfo JSHTMLIsIndexElement::s_info = { "HTMLIsIndexElement", &JSHTMLInputElement::s_info, &JSHTMLIsIndexElementTable, 0 };

JSHTMLIsIndexElement::JSHTMLIsIndexElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLIsIndexElement> impl)
    : JSHTMLInputElement(structure, globalObject, impl)
{
}

void JSHTMLIsIndexElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLIsIndexElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLIsIndexElementPrototype::create(exec->globalData(), globalObject, JSHTMLIsIndexElementPrototype::createStructure(exec->globalData(), globalObject, JSHTMLInputElementPrototype::self(exec, globalObject)));
}

bool JSHTMLIsIndexElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLIsIndexElement, Base>(exec, &JSHTMLIsIndexElementTable, this, propertyName, slot);
}

bool JSHTMLIsIndexElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLIsIndexElement, Base>(exec, &JSHTMLIsIndexElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLIsIndexElementForm(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIsIndexElement* castedThis = static_cast<JSHTMLIsIndexElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIsIndexElement* imp = static_cast<HTMLIsIndexElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->form()));
    return result;
}


JSValue jsHTMLIsIndexElementPrompt(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIsIndexElement* castedThis = static_cast<JSHTMLIsIndexElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIsIndexElement* imp = static_cast<HTMLIsIndexElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::promptAttr));
    return result;
}


JSValue jsHTMLIsIndexElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIsIndexElement* domObject = static_cast<JSHTMLIsIndexElement*>(asObject(slotBase));
    return JSHTMLIsIndexElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLIsIndexElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLIsIndexElement, Base>(exec, propertyName, value, &JSHTMLIsIndexElementTable, this, slot);
}

void setJSHTMLIsIndexElementPrompt(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIsIndexElement* castedThis = static_cast<JSHTMLIsIndexElement*>(thisObject);
    HTMLIsIndexElement* imp = static_cast<HTMLIsIndexElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::promptAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLIsIndexElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLIsIndexElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
