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

#if ENABLE(WEB_AUDIO)

#include "JSAudioNode.h"

#include "AudioContext.h"
#include "AudioNode.h"
#include "JSAudioContext.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSAudioNode);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioNodeTableValues[] =
{
    { "context", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioNodeContext), (intptr_t)0 THUNK_GENERATOR(0) },
    { "numberOfInputs", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioNodeNumberOfInputs), (intptr_t)0 THUNK_GENERATOR(0) },
    { "numberOfOutputs", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioNodeNumberOfOutputs), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsAudioNodeConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioNodeTable = { 8, 7, JSAudioNodeTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioNodeConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioNodeConstructorTable = { 1, 0, JSAudioNodeConstructorTableValues, 0 };
class JSAudioNodeConstructor : public DOMConstructorObject {
private:
    JSAudioNodeConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSAudioNodeConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSAudioNodeConstructor* ptr = new (JSC::allocateCell<JSAudioNodeConstructor>(*exec->heap())) JSAudioNodeConstructor(structure, globalObject);
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

const ClassInfo JSAudioNodeConstructor::s_info = { "AudioNodeConstructor", &DOMConstructorObject::s_info, &JSAudioNodeConstructorTable, 0 };

JSAudioNodeConstructor::JSAudioNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSAudioNodeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSAudioNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSAudioNodeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSAudioNodeConstructor, JSDOMWrapper>(exec, &JSAudioNodeConstructorTable, this, propertyName, slot);
}

bool JSAudioNodeConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSAudioNodeConstructor, JSDOMWrapper>(exec, &JSAudioNodeConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSAudioNodePrototypeTableValues[] =
{
    { "connect", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioNodePrototypeFunctionConnect), (intptr_t)3 THUNK_GENERATOR(0) },
    { "disconnect", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsAudioNodePrototypeFunctionDisconnect), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSAudioNodePrototypeTable = { 4, 3, JSAudioNodePrototypeTableValues, 0 };
const ClassInfo JSAudioNodePrototype::s_info = { "AudioNodePrototype", &JSC::JSNonFinalObject::s_info, &JSAudioNodePrototypeTable, 0 };

JSObject* JSAudioNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSAudioNode>(exec, globalObject);
}

bool JSAudioNodePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSAudioNodePrototypeTable, this, propertyName, slot);
}

bool JSAudioNodePrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSAudioNodePrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSAudioNode::s_info = { "AudioNode", &JSDOMWrapper::s_info, &JSAudioNodeTable, 0 };

JSAudioNode::JSAudioNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<AudioNode> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSAudioNode::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSAudioNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSAudioNodePrototype::create(exec->globalData(), globalObject, JSAudioNodePrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSAudioNode::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSAudioNode, Base>(exec, &JSAudioNodeTable, this, propertyName, slot);
}

bool JSAudioNode::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSAudioNode, Base>(exec, &JSAudioNodeTable, this, propertyName, descriptor);
}

JSValue jsAudioNodeContext(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioNode* castedThis = static_cast<JSAudioNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioNode* imp = static_cast<AudioNode*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->context()));
    return result;
}


JSValue jsAudioNodeNumberOfInputs(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioNode* castedThis = static_cast<JSAudioNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioNode* imp = static_cast<AudioNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->numberOfInputs());
    return result;
}


JSValue jsAudioNodeNumberOfOutputs(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioNode* castedThis = static_cast<JSAudioNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    AudioNode* imp = static_cast<AudioNode*>(castedThis->impl());
    JSValue result = jsNumber(imp->numberOfOutputs());
    return result;
}


JSValue jsAudioNodeConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSAudioNode* domObject = static_cast<JSAudioNode*>(asObject(slotBase));
    return JSAudioNode::getConstructor(exec, domObject->globalObject());
}

JSValue JSAudioNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSAudioNodeConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionConnect(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioNode::s_info))
        return throwVMTypeError(exec);
    JSAudioNode* castedThis = static_cast<JSAudioNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioNode::s_info);
    return JSValue::encode(castedThis->connect(exec));
}

EncodedJSValue JSC_HOST_CALL jsAudioNodePrototypeFunctionDisconnect(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSAudioNode::s_info))
        return throwVMTypeError(exec);
    JSAudioNode* castedThis = static_cast<JSAudioNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSAudioNode::s_info);
    return JSValue::encode(castedThis->disconnect(exec));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, AudioNode* impl)
{
    return wrap<JSAudioNode>(exec, globalObject, impl);
}

AudioNode* toAudioNode(JSC::JSValue value)
{
    return value.inherits(&JSAudioNode::s_info) ? static_cast<JSAudioNode*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEB_AUDIO)