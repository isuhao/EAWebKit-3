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

#if ENABLE(WEBGL)

#include "JSWebGLBuffer.h"

#include "WebGLBuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLBuffer);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLBufferTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLBufferConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLBufferTable = { 2, 1, JSWebGLBufferTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLBufferConstructorTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLBufferConstructorTable = { 1, 0, JSWebGLBufferConstructorTableValues, 0 };
class JSWebGLBufferConstructor : public DOMConstructorObject {
private:
    JSWebGLBufferConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebGLBufferConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebGLBufferConstructor* ptr = new (JSC::allocateCell<JSWebGLBufferConstructor>(*exec->heap())) JSWebGLBufferConstructor(structure, globalObject);
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

const ClassInfo JSWebGLBufferConstructor::s_info = { "WebGLBufferConstructor", &DOMConstructorObject::s_info, &JSWebGLBufferConstructorTable, 0 };

JSWebGLBufferConstructor::JSWebGLBufferConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLBufferConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSWebGLBufferPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSWebGLBufferConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLBufferConstructor, JSDOMWrapper>(exec, &JSWebGLBufferConstructorTable, this, propertyName, slot);
}

bool JSWebGLBufferConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLBufferConstructor, JSDOMWrapper>(exec, &JSWebGLBufferConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLBufferPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLBufferPrototypeTable = { 1, 0, JSWebGLBufferPrototypeTableValues, 0 };
const ClassInfo JSWebGLBufferPrototype::s_info = { "WebGLBufferPrototype", &JSC::JSNonFinalObject::s_info, &JSWebGLBufferPrototypeTable, 0 };

JSObject* JSWebGLBufferPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLBuffer>(exec, globalObject);
}

const ClassInfo JSWebGLBuffer::s_info = { "WebGLBuffer", &JSDOMWrapper::s_info, &JSWebGLBufferTable, 0 };

JSWebGLBuffer::JSWebGLBuffer(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLBuffer> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSWebGLBuffer::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLBuffer::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebGLBufferPrototype::create(exec->globalData(), globalObject, JSWebGLBufferPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSWebGLBuffer::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSWebGLBuffer, Base>(exec, &JSWebGLBufferTable, this, propertyName, slot);
}

bool JSWebGLBuffer::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSWebGLBuffer, Base>(exec, &JSWebGLBufferTable, this, propertyName, descriptor);
}

JSValue jsWebGLBufferConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWebGLBuffer* domObject = static_cast<JSWebGLBuffer*>(asObject(slotBase));
    return JSWebGLBuffer::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLBuffer::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLBufferConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLBuffer* impl)
{
    return wrap<JSWebGLBuffer>(exec, globalObject, impl);
}

WebGLBuffer* toWebGLBuffer(JSC::JSValue value)
{
    return value.inherits(&JSWebGLBuffer::s_info) ? static_cast<JSWebGLBuffer*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)