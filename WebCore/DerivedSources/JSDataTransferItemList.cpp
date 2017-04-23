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

#if ENABLE(DATA_TRANSFER_ITEMS)

#include "JSDataTransferItemList.h"

#include "DataTransferItem.h"
#include "DataTransferItemList.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDataTransferItem.h"
#include "JSFile.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDataTransferItemListTableValues[] =
{
    { "length", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDataTransferItemListLength), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDataTransferItemListTable = { 2, 1, JSDataTransferItemListTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSDataTransferItemListPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemListPrototypeFunctionItem), (intptr_t)0 },
    { "clear", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemListPrototypeFunctionClear), (intptr_t)0 },
    { "add", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsDataTransferItemListPrototypeFunctionAdd), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSDataTransferItemListPrototypeTable = { 9, 7, JSDataTransferItemListPrototypeTableValues, 0 };
const ClassInfo JSDataTransferItemListPrototype::s_info = { "DataTransferItemListPrototype", &Base::s_info, &JSDataTransferItemListPrototypeTable, 0, CREATE_METHOD_TABLE(JSDataTransferItemListPrototype) };

JSObject* JSDataTransferItemListPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDataTransferItemList>(vm, globalObject);
}

bool JSDataTransferItemListPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDataTransferItemListPrototype* thisObject = jsCast<JSDataTransferItemListPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSDataTransferItemListPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSDataTransferItemList::s_info = { "DataTransferItemList", &Base::s_info, &JSDataTransferItemListTable, 0 , CREATE_METHOD_TABLE(JSDataTransferItemList) };

JSDataTransferItemList::JSDataTransferItemList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DataTransferItemList> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDataTransferItemList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSDataTransferItemList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSDataTransferItemListPrototype::create(vm, globalObject, JSDataTransferItemListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSDataTransferItemList::destroy(JSC::JSCell* cell)
{
    JSDataTransferItemList* thisObject = static_cast<JSDataTransferItemList*>(cell);
    thisObject->JSDataTransferItemList::~JSDataTransferItemList();
}

JSDataTransferItemList::~JSDataTransferItemList()
{
    releaseImplIfNotNull();
}

bool JSDataTransferItemList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDataTransferItemList* thisObject = jsCast<JSDataTransferItemList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSDataTransferItemList>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSDataTransferItemList, Base>(exec, JSDataTransferItemListTable, thisObject, propertyName, slot);
}

bool JSDataTransferItemList::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSDataTransferItemList* thisObject = jsCast<JSDataTransferItemList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsDataTransferItemListLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDataTransferItemList* castedThis = jsCast<JSDataTransferItemList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DataTransferItemList& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return result;
}


void JSDataTransferItemList::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSDataTransferItemList* thisObject = jsCast<JSDataTransferItemList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSDataTransferItemList::info()))
        return throwVMTypeError(exec);
    JSDataTransferItemList* castedThis = jsCast<JSDataTransferItemList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    DataTransferItemList& impl = castedThis->impl();
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSDataTransferItemList::info()))
        return throwVMTypeError(exec);
    JSDataTransferItemList* castedThis = jsCast<JSDataTransferItemList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    DataTransferItemList& impl = castedThis->impl();
    impl.clear();
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSDataTransferItemList::info()))
        return throwVMTypeError(exec);
    JSDataTransferItemList* castedThis = jsCast<JSDataTransferItemList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    DataTransferItemList& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    File* file(toFile(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.add(file);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSDataTransferItemList::info()))
        return throwVMTypeError(exec);
    JSDataTransferItemList* castedThis = jsCast<JSDataTransferItemList*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSDataTransferItemList::info());
    DataTransferItemList& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& data(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& type(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.add(data, type, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDataTransferItemListPrototypeFunctionAdd(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isNull() || (arg0.isObject() && asObject(arg0)->inherits(JSFile::info())))))
        return jsDataTransferItemListPrototypeFunctionAdd1(exec);
    if (argsCount == 0 || argsCount == 1 || argsCount == 2)
        return jsDataTransferItemListPrototypeFunctionAdd2(exec);
    return throwVMTypeError(exec);
}


JSValue JSDataTransferItemList::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSDataTransferItemList* thisObj = jsCast<JSDataTransferItemList*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, info());
    return toJS(exec, thisObj->globalObject(), thisObj->impl().item(index));
}

static inline bool isObservable(JSDataTransferItemList* jsDataTransferItemList)
{
    if (jsDataTransferItemList->hasCustomProperties())
        return true;
    return false;
}

bool JSDataTransferItemListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDataTransferItemList* jsDataTransferItemList = jsCast<JSDataTransferItemList*>(handle.get().asCell());
    if (!isObservable(jsDataTransferItemList))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDataTransferItemListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDataTransferItemList* jsDataTransferItemList = jsCast<JSDataTransferItemList*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsDataTransferItemList->impl(), jsDataTransferItemList);
    jsDataTransferItemList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DataTransferItemList* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDataTransferItemList>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DataTransferItemList.
    COMPILE_ASSERT(!__is_polymorphic(DataTransferItemList), DataTransferItemList_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DataTransferItemList>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDataTransferItemList>(exec, globalObject, impl);
}

DataTransferItemList* toDataTransferItemList(JSC::JSValue value)
{
    return value.inherits(JSDataTransferItemList::info()) ? &jsCast<JSDataTransferItemList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(DATA_TRANSFER_ITEMS)
