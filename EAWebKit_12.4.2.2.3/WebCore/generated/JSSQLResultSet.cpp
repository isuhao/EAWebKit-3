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

#if ENABLE(DATABASE)

#include "JSSQLResultSet.h"

#include "JSSQLResultSetRowList.h"
#include "SQLResultSet.h"
#include "SQLResultSetRowList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSQLResultSet);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSQLResultSetTableValues[] =
{
    { "rows", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLResultSetRows), (intptr_t)0 THUNK_GENERATOR(0) },
    { "insertId", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLResultSetInsertId), (intptr_t)0 THUNK_GENERATOR(0) },
    { "rowsAffected", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSQLResultSetRowsAffected), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSQLResultSetTable = { 9, 7, JSSQLResultSetTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSQLResultSetPrototypeTableValues[] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSQLResultSetPrototypeTable = { 1, 0, JSSQLResultSetPrototypeTableValues, 0 };
static const HashTable* getJSSQLResultSetPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSSQLResultSetPrototypeTable);
}

const ClassInfo JSSQLResultSetPrototype::s_info = { "SQLResultSetPrototype", &JSC::JSNonFinalObject::s_info, 0, getJSSQLResultSetPrototypeTable };

JSObject* JSSQLResultSetPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSQLResultSet>(exec, globalObject);
}

static const HashTable* getJSSQLResultSetTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSSQLResultSetTable);
}

const ClassInfo JSSQLResultSet::s_info = { "SQLResultSet", &JSDOMWrapper::s_info, 0, getJSSQLResultSetTable };

JSSQLResultSet::JSSQLResultSet(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLResultSet> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
}

void JSSQLResultSet::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSSQLResultSet::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSQLResultSetPrototype::create(exec->globalData(), globalObject, JSSQLResultSetPrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSSQLResultSet::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueSlot<JSSQLResultSet, Base>(exec, getJSSQLResultSetTable(exec), this, propertyName, slot);
}

bool JSSQLResultSet::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    ASSERT_GC_OBJECT_INHERITS(this, &s_info);
    return getStaticValueDescriptor<JSSQLResultSet, Base>(exec, getJSSQLResultSetTable(exec), this, propertyName, descriptor);
}

JSValue jsSQLResultSetRows(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSQLResultSet* castedThis = static_cast<JSSQLResultSet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SQLResultSet* imp = static_cast<SQLResultSet*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->rows()));
    return result;
}


JSValue jsSQLResultSetInsertId(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSQLResultSet* castedThis = static_cast<JSSQLResultSet*>(asObject(slotBase));
    ExceptionCode ec = 0;
    SQLResultSet* imp = static_cast<SQLResultSet*>(castedThis->impl());
    JSC::JSValue result = jsNumber(imp->insertId(ec));
    setDOMException(exec, ec);
    return result;
}


JSValue jsSQLResultSetRowsAffected(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSQLResultSet* castedThis = static_cast<JSSQLResultSet*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SQLResultSet* imp = static_cast<SQLResultSet*>(castedThis->impl());
    JSValue result = jsNumber(imp->rowsAffected());
    return result;
}


JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SQLResultSet* impl)
{
    return wrap<JSSQLResultSet>(exec, globalObject, impl);
}

SQLResultSet* toSQLResultSet(JSC::JSValue value)
{
    return value.inherits(&JSSQLResultSet::s_info) ? static_cast<JSSQLResultSet*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(DATABASE)
