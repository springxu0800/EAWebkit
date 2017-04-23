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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBObjectStore.h"

#include "DOMStringList.h"
#include "ExceptionCode.h"
#include "IDBAny.h"
#include "IDBIndex.h"
#include "IDBObjectStore.h"
#include "IDBRequest.h"
#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include "JSDOMStringList.h"
#include "JSIDBAny.h"
#include "JSIDBIndex.h"
#include "JSIDBKeyRange.h"
#include "JSIDBRequest.h"
#include "JSIDBTransaction.h"
#include "URL.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSIDBObjectStoreTableValues[] =
{
    { "name", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreName), (intptr_t)0 },
    { "keyPath", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreKeyPath), (intptr_t)0 },
    { "indexNames", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreIndexNames), (intptr_t)0 },
    { "transaction", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreTransaction), (intptr_t)0 },
    { "autoIncrement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreAutoIncrement), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSIDBObjectStoreTable = { 18, 15, JSIDBObjectStoreTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSIDBObjectStoreConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSIDBObjectStoreConstructorTable = { 1, 0, JSIDBObjectStoreConstructorTableValues, 0 };
static const HashTable& getJSIDBObjectStoreConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSIDBObjectStoreConstructorTable);
}

const ClassInfo JSIDBObjectStoreConstructor::s_info = { "IDBObjectStoreConstructor", &Base::s_info, 0, getJSIDBObjectStoreConstructorTable, CREATE_METHOD_TABLE(JSIDBObjectStoreConstructor) };

JSIDBObjectStoreConstructor::JSIDBObjectStoreConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSIDBObjectStoreConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSIDBObjectStorePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSIDBObjectStoreConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBObjectStoreConstructor, JSDOMWrapper>(exec, getJSIDBObjectStoreConstructorTable(exec), jsCast<JSIDBObjectStoreConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSIDBObjectStorePrototypeTableValues[] =
{
    { "put", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionPut), (intptr_t)1 },
    { "add", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionAdd), (intptr_t)1 },
    { "delete", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionDelete), (intptr_t)1 },
    { "get", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionGet), (intptr_t)1 },
    { "clear", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionClear), (intptr_t)0 },
    { "openCursor", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionOpenCursor), (intptr_t)0 },
    { "createIndex", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionCreateIndex), (intptr_t)2 },
    { "index", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionIndex), (intptr_t)1 },
    { "deleteIndex", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionDeleteIndex), (intptr_t)1 },
    { "count", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStorePrototypeFunctionCount), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSIDBObjectStorePrototypeTable = { 34, 31, JSIDBObjectStorePrototypeTableValues, 0 };
static const HashTable& getJSIDBObjectStorePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSIDBObjectStorePrototypeTable);
}

const ClassInfo JSIDBObjectStorePrototype::s_info = { "IDBObjectStorePrototype", &Base::s_info, 0, getJSIDBObjectStorePrototypeTable, CREATE_METHOD_TABLE(JSIDBObjectStorePrototype) };

JSObject* JSIDBObjectStorePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBObjectStore>(vm, globalObject);
}

bool JSIDBObjectStorePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBObjectStorePrototype* thisObject = jsCast<JSIDBObjectStorePrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, getJSIDBObjectStorePrototypeTable(exec), thisObject, propertyName, slot);
}

static const HashTable& getJSIDBObjectStoreTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), JSIDBObjectStoreTable);
}

const ClassInfo JSIDBObjectStore::s_info = { "IDBObjectStore", &Base::s_info, 0, getJSIDBObjectStoreTable , CREATE_METHOD_TABLE(JSIDBObjectStore) };

JSIDBObjectStore::JSIDBObjectStore(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBObjectStore> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSIDBObjectStore::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSIDBObjectStore::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSIDBObjectStorePrototype::create(vm, globalObject, JSIDBObjectStorePrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSIDBObjectStore::destroy(JSC::JSCell* cell)
{
    JSIDBObjectStore* thisObject = static_cast<JSIDBObjectStore*>(cell);
    thisObject->JSIDBObjectStore::~JSIDBObjectStore();
}

JSIDBObjectStore::~JSIDBObjectStore()
{
    releaseImplIfNotNull();
}

bool JSIDBObjectStore::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSIDBObjectStore* thisObject = jsCast<JSIDBObjectStore*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSIDBObjectStore, Base>(exec, getJSIDBObjectStoreTable(exec), thisObject, propertyName, slot);
}

JSValue jsIDBObjectStoreName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore& impl = castedThis->impl();
    JSValue result = jsStringOrNull(exec, impl.name());
    return result;
}


JSValue jsIDBObjectStoreKeyPath(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.keyPathAny()));
    return result;
}


JSValue jsIDBObjectStoreIndexNames(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.indexNames()));
    return result;
}


JSValue jsIDBObjectStoreTransaction(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.transaction()));
    return result;
}


JSValue jsIDBObjectStoreAutoIncrement(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStore& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.autoIncrement());
    return result;
}


JSValue jsIDBObjectStoreConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSIDBObjectStore* domObject = jsCast<JSIDBObjectStore*>(asObject(slotBase));
    return JSIDBObjectStore::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSIDBObjectStore::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBObjectStoreConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionPut(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptValue value(exec->vm(), exec->argument(0));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.put(exec, value, ec)));
        setDOMException(exec, ec);
        if (exec->hadException())
            return JSValue::encode(jsUndefined());
        return JSValue::encode(result);
    }

    ScriptValue key(exec->vm(), exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.put(exec, value, key, ec)));
    setDOMException(exec, ec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionAdd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptValue value(exec->vm(), exec->argument(0));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.add(exec, value, ec)));
        setDOMException(exec, ec);
        if (exec->hadException())
            return JSValue::encode(jsUndefined());
        return JSValue::encode(result);
    }

    ScriptValue key(exec->vm(), exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.add(exec, value, key, ec)));
    setDOMException(exec, ec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionDelete1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    IDBKeyRange* keyRange(toIDBKeyRange(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.deleteFunction(scriptContext, keyRange, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionDelete2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    ScriptValue key(exec->vm(), exec->argument(0));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.deleteFunction(scriptContext, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionDelete(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSIDBKeyRange::info())))))
        return jsIDBObjectStorePrototypeFunctionDelete1(exec);
    if (argsCount == 1)
        return jsIDBObjectStorePrototypeFunctionDelete2(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionGet1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    IDBKeyRange* key(toIDBKeyRange(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.get(scriptContext, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionGet2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    ScriptValue key(exec->vm(), exec->argument(0));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.get(scriptContext, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionGet(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSIDBKeyRange::info())))))
        return jsIDBObjectStorePrototypeFunctionGet1(exec);
    if (argsCount == 1)
        return jsIDBObjectStorePrototypeFunctionGet2(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.clear(scriptContext, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionOpenCursor1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.openCursor(scriptContext, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    IDBKeyRange* range(toIDBKeyRange(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.openCursor(scriptContext, range, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    const String& direction(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.openCursor(scriptContext, range, direction, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionOpenCursor2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    ScriptValue key(exec->vm(), exec->argument(0));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.openCursor(scriptContext, key, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    const String& direction(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.openCursor(scriptContext, key, direction, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionOpenCursor(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if (argsCount == 0 || (argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSIDBKeyRange::info())))) || (argsCount == 2 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSIDBKeyRange::info())))))
        return jsIDBObjectStorePrototypeFunctionOpenCursor1(exec);
    if (argsCount == 1 || argsCount == 2)
        return jsIDBObjectStorePrototypeFunctionOpenCursor2(exec);
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionCreateIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    return JSValue::encode(castedThis->createIndex(exec));
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.index(name, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionDeleteIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.deleteIndex(name, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionCount1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.count(scriptContext, ec)));
        setDOMException(exec, ec);
        return JSValue::encode(result);
    }

    IDBKeyRange* range(toIDBKeyRange(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.count(scriptContext, range, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionCount2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSIDBObjectStore::info()))
        return throwVMTypeError(exec);
    JSIDBObjectStore* castedThis = jsCast<JSIDBObjectStore*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSIDBObjectStore::info());
    IDBObjectStore& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    ScriptValue key(exec->vm(), exec->argument(0));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.count(scriptContext, key, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStorePrototypeFunctionCount(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if (argsCount == 0 || (argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSIDBKeyRange::info())))))
        return jsIDBObjectStorePrototypeFunctionCount1(exec);
    if (argsCount == 1)
        return jsIDBObjectStorePrototypeFunctionCount2(exec);
    return throwVMTypeError(exec);
}

static inline bool isObservable(JSIDBObjectStore* jsIDBObjectStore)
{
    if (jsIDBObjectStore->hasCustomProperties())
        return true;
    return false;
}

bool JSIDBObjectStoreOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSIDBObjectStore* jsIDBObjectStore = jsCast<JSIDBObjectStore*>(handle.get().asCell());
    if (!isObservable(jsIDBObjectStore))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBObjectStoreOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSIDBObjectStore* jsIDBObjectStore = jsCast<JSIDBObjectStore*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsIDBObjectStore->impl(), jsIDBObjectStore);
    jsIDBObjectStore->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBObjectStore* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSIDBObjectStore>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to IDBObjectStore.
    COMPILE_ASSERT(!__is_polymorphic(IDBObjectStore), IDBObjectStore_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<IDBObjectStore>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSIDBObjectStore>(exec, globalObject, impl);
}

IDBObjectStore* toIDBObjectStore(JSC::JSValue value)
{
    return value.inherits(JSIDBObjectStore::info()) ? &jsCast<JSIDBObjectStore*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
