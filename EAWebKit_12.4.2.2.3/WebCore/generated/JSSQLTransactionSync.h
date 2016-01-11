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

#ifndef JSSQLTransactionSync_h
#define JSSQLTransactionSync_h

#if ENABLE(DATABASE)

#include "JSDOMBinding.h"
#include "SQLTransactionSync.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSQLTransactionSync : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSSQLTransactionSync* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLTransactionSync> impl)
    {
        JSSQLTransactionSync* ptr = new (JSC::allocateCell<JSSQLTransactionSync>(globalObject->globalData().heap)) JSSQLTransactionSync(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }


    // Custom functions
    JSC::JSValue executeSql(JSC::ExecState*);
    SQLTransactionSync* impl() const { return m_impl.get(); }

private:
    RefPtr<SQLTransactionSync> m_impl;
protected:
    JSSQLTransactionSync(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SQLTransactionSync>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SQLTransactionSync*);
SQLTransactionSync* toSQLTransactionSync(JSC::JSValue);

class JSSQLTransactionSyncPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSQLTransactionSyncPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSQLTransactionSyncPrototype* ptr = new (JSC::allocateCell<JSSQLTransactionSyncPrototype>(globalData.heap)) JSSQLTransactionSyncPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSQLTransactionSyncPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSQLTransactionSyncPrototypeFunctionExecuteSql(JSC::ExecState*);

} // namespace WebCore

#endif // ENABLE(DATABASE)

#endif
