/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

	Copyright (C) 2011 Electronic Arts, Inc. All rights reserved.
	
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
#include "JSHTMLIFrameElement.h"

#include "DOMWindow.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "HTMLIFrameElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "JSSVGDocument.h"
#include "KURL.h"
#include "SVGDocument.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

//+EAWebKitChange
//10/14/2011
// Put some guards around the features that can be disabled.
//-EAWebKitChange

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLIFrameElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLIFrameElementTableValues[] =
{
    { "align", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementAlign), (intptr_t)setJSHTMLIFrameElementAlign THUNK_GENERATOR(0) },
    { "frameBorder", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementFrameBorder), (intptr_t)setJSHTMLIFrameElementFrameBorder THUNK_GENERATOR(0) },
    { "height", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementHeight), (intptr_t)setJSHTMLIFrameElementHeight THUNK_GENERATOR(0) },
    { "longDesc", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementLongDesc), (intptr_t)setJSHTMLIFrameElementLongDesc THUNK_GENERATOR(0) },
    { "marginHeight", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginHeight), (intptr_t)setJSHTMLIFrameElementMarginHeight THUNK_GENERATOR(0) },
    { "marginWidth", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementMarginWidth), (intptr_t)setJSHTMLIFrameElementMarginWidth THUNK_GENERATOR(0) },
    { "name", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementName), (intptr_t)setJSHTMLIFrameElementName THUNK_GENERATOR(0) },
    { "sandbox", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSandbox), (intptr_t)setJSHTMLIFrameElementSandbox THUNK_GENERATOR(0) },
    { "scrolling", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementScrolling), (intptr_t)setJSHTMLIFrameElementScrolling THUNK_GENERATOR(0) },
    { "src", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementSrc), (intptr_t)setJSHTMLIFrameElementSrc THUNK_GENERATOR(0) },
    { "width", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementWidth), (intptr_t)setJSHTMLIFrameElementWidth THUNK_GENERATOR(0) },
    { "contentDocument", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentDocument), (intptr_t)0 THUNK_GENERATOR(0) },
    { "contentWindow", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementContentWindow), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLIFrameElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLIFrameElementTable = { 36, 31, JSHTMLIFrameElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLIFrameElementConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLIFrameElementConstructorTable = { 1, 0, JSHTMLIFrameElementConstructorTableValues, 0 };
class JSHTMLIFrameElementConstructor : public DOMConstructorObject {
private:
    JSHTMLIFrameElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLIFrameElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLIFrameElementConstructor* ptr = new (JSC::allocateCell<JSHTMLIFrameElementConstructor>(*exec->heap())) JSHTMLIFrameElementConstructor(structure, globalObject);
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

const ClassInfo JSHTMLIFrameElementConstructor::s_info = { "HTMLIFrameElementConstructor", &DOMConstructorObject::s_info, &JSHTMLIFrameElementConstructorTable, 0 };

JSHTMLIFrameElementConstructor::JSHTMLIFrameElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLIFrameElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSHTMLIFrameElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLIFrameElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLIFrameElementConstructor, JSDOMWrapper>(exec, &JSHTMLIFrameElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLIFrameElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLIFrameElementConstructor, JSDOMWrapper>(exec, &JSHTMLIFrameElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLIFrameElementPrototypeTableValues[] =
{
#if ENABLE(SVG)
    { "getSVGDocument", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLIFrameElementPrototypeFunctionGetSVGDocument), (intptr_t)0 THUNK_GENERATOR(0) },
#endif
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLIFrameElementPrototypeTable = { 2, 1, JSHTMLIFrameElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLIFrameElementPrototype::s_info = { "HTMLIFrameElementPrototype", &JSC::JSNonFinalObject::s_info, &JSHTMLIFrameElementPrototypeTable, 0 };

JSObject* JSHTMLIFrameElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLIFrameElement>(exec, globalObject);
}

bool JSHTMLIFrameElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLIFrameElementPrototypeTable, this, propertyName, slot);
}

bool JSHTMLIFrameElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLIFrameElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLIFrameElement::s_info = { "HTMLIFrameElement", &JSHTMLElement::s_info, &JSHTMLIFrameElementTable, 0 };

JSHTMLIFrameElement::JSHTMLIFrameElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLIFrameElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLIFrameElement::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLIFrameElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLIFrameElementPrototype::create(exec->globalData(), globalObject, JSHTMLIFrameElementPrototype::createStructure(exec->globalData(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLIFrameElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSHTMLIFrameElement, Base>(exec, &JSHTMLIFrameElementTable, this, propertyName, slot);
}

bool JSHTMLIFrameElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSHTMLIFrameElement, Base>(exec, &JSHTMLIFrameElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLIFrameElementAlign(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::alignAttr));
    return result;
}


JSValue jsHTMLIFrameElementFrameBorder(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::frameborderAttr));
    return result;
}


JSValue jsHTMLIFrameElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::heightAttr));
    return result;
}


JSValue jsHTMLIFrameElementLongDesc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::longdescAttr));
    return result;
}


JSValue jsHTMLIFrameElementMarginHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::marginheightAttr));
    return result;
}


JSValue jsHTMLIFrameElementMarginWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::marginwidthAttr));
    return result;
}


JSValue jsHTMLIFrameElementName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::nameAttr));
    return result;
}


JSValue jsHTMLIFrameElementSandbox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::sandboxAttr));
    return result;
}


JSValue jsHTMLIFrameElementScrolling(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::scrollingAttr));
    return result;
}


JSValue jsHTMLIFrameElementSrc(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getURLAttribute(WebCore::HTMLNames::srcAttr));
    return result;
}


JSValue jsHTMLIFrameElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::widthAttr));
    return result;
}


JSValue jsHTMLIFrameElementContentDocument(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    return checkNodeSecurity(exec, imp->contentDocument()) ? toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->contentDocument())) : jsUndefined();
}


JSValue jsHTMLIFrameElementContentWindow(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->contentWindow()));
    return result;
}


JSValue jsHTMLIFrameElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLIFrameElement* domObject = static_cast<JSHTMLIFrameElement*>(asObject(slotBase));
    return JSHTMLIFrameElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLIFrameElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSHTMLIFrameElement, Base>(exec, propertyName, value, &JSHTMLIFrameElementTable, this, slot);
}

void setJSHTMLIFrameElementAlign(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementFrameBorder(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::frameborderAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::heightAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementLongDesc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::longdescAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementMarginHeight(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::marginheightAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementMarginWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::marginwidthAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::nameAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementSandbox(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::sandboxAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementScrolling(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::scrollingAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementSrc(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::srcAttr, valueToStringWithNullCheck(exec, value));
}


void setJSHTMLIFrameElementWidth(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(thisObject);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck(exec, value));
}


JSValue JSHTMLIFrameElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLIFrameElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(SVG)
EncodedJSValue JSC_HOST_CALL jsHTMLIFrameElementPrototypeFunctionGetSVGDocument(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLIFrameElement::s_info))
        return throwVMTypeError(exec);
    JSHTMLIFrameElement* castedThis = static_cast<JSHTMLIFrameElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSHTMLIFrameElement::s_info);
    HTMLIFrameElement* imp = static_cast<HTMLIFrameElement*>(castedThis->impl());
    ExceptionCode ec = 0;
    if (!checkNodeSecurity(exec, imp->getSVGDocument(ec)))
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getSVGDocument(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}
#endif

}
