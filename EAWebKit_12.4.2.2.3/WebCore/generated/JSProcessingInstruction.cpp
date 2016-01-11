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
#include "JSProcessingInstruction.h"

#include "JSStyleSheet.h"
#include "KURL.h"
#include "ProcessingInstruction.h"
#include "StyleSheet.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSProcessingInstruction);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSProcessingInstructionTableValues[] =
{
    { "target", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProcessingInstructionTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "data", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProcessingInstructionData), (intptr_t)setJSProcessingInstructionData THUNK_GENERATOR(0) },
    { "sheet", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProcessingInstructionSheet), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsProcessingInstructionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSProcessingInstructionTable = { 8, 7, JSProcessingInstructionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSProcessingInstructionConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSProcessingInstructionConstructorTable = { 1, 0, JSProcessingInstructionConstructorTableValues, 0 };
class JSProcessingInstructionConstructor : public DOMConstructorObject {
private:
    JSProcessingInstructionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSProcessingInstructionConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSProcessingInstructionConstructor* ptr = new (JSC::allocateCell<JSProcessingInstructionConstructor>(*exec->heap())) JSProcessingInstructionConstructor(structure, globalObject);
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

const ClassInfo JSProcessingInstructionConstructor::s_info = { "ProcessingInstructionConstructor", &DOMConstructorObject::s_info, &JSProcessingInstructionConstructorTable, 0 };

JSProcessingInstructionConstructor::JSProcessingInstructionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSProcessingInstructionConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSProcessingInstructionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSProcessingInstructionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSProcessingInstructionConstructor, JSDOMWrapper>(exec, &JSProcessingInstructionConstructorTable, this, propertyName, slot);
}

bool JSProcessingInstructionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSProcessingInstructionConstructor, JSDOMWrapper>(exec, &JSProcessingInstructionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSProcessingInstructionPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSProcessingInstructionPrototypeTable = { 1, 0, JSProcessingInstructionPrototypeTableValues, 0 };
const ClassInfo JSProcessingInstructionPrototype::s_info = { "ProcessingInstructionPrototype", &JSC::JSNonFinalObject::s_info, &JSProcessingInstructionPrototypeTable, 0 };

JSObject* JSProcessingInstructionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSProcessingInstruction>(exec, globalObject);
}

const ClassInfo JSProcessingInstruction::s_info = { "ProcessingInstruction", &JSNode::s_info, &JSProcessingInstructionTable, 0 };

JSProcessingInstruction::JSProcessingInstruction(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ProcessingInstruction> impl)
    : JSNode(structure, globalObject, impl)
{
}

void JSProcessingInstruction::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSProcessingInstruction::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSProcessingInstructionPrototype::create(exec->globalData(), globalObject, JSProcessingInstructionPrototype::createStructure(exec->globalData(), globalObject, JSNodePrototype::self(exec, globalObject)));
}

bool JSProcessingInstruction::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSProcessingInstruction, Base>(exec, &JSProcessingInstructionTable, this, propertyName, slot);
}

bool JSProcessingInstruction::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSProcessingInstruction, Base>(exec, &JSProcessingInstructionTable, this, propertyName, descriptor);
}

JSValue jsProcessingInstructionTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->target());
    return result;
}


JSValue jsProcessingInstructionData(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->data());
    return result;
}


JSValue jsProcessingInstructionSheet(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->sheet()));
    return result;
}


JSValue jsProcessingInstructionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSProcessingInstruction* domObject = static_cast<JSProcessingInstruction*>(asObject(slotBase));
    return JSProcessingInstruction::getConstructor(exec, domObject->globalObject());
}

void JSProcessingInstruction::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    lookupPut<JSProcessingInstruction, Base>(exec, propertyName, value, &JSProcessingInstructionTable, this, slot);
}

void setJSProcessingInstructionData(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSProcessingInstruction* castedThis = static_cast<JSProcessingInstruction*>(thisObject);
    ProcessingInstruction* imp = static_cast<ProcessingInstruction*>(castedThis->impl());
    ExceptionCode ec = 0;
    imp->setData(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}


JSValue JSProcessingInstruction::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSProcessingInstructionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}