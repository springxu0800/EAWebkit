/*
 * Copyright (C) 2003 Apple Computer, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef BINDINGS_C_INSTANCE_H_
#define BINDINGS_C_INSTANCE_H_

#if ENABLE(NETSCAPE_PLUGIN_API)

#include "BridgeJSC.h"
#include "runtime_root.h"
#include <wtf/PassRefPtr.h>
#include <wtf/text/WTFString.h>

typedef struct NPObject NPObject;

namespace JSC {

namespace Bindings {

class CClass;

class CInstance : public Instance {
public:
    static PassRefPtr<CInstance> create(NPObject* object, PassRefPtr<RootObject> rootObject)
    {
        return adoptRef(new CInstance(object, rootObject));
    }

    static void setGlobalException(String);
    static void moveGlobalExceptionToExecState(ExecState*);

    virtual ~CInstance();

    virtual Class *getClass() const OVERRIDE;

    virtual JSValue valueOf(ExecState*) const OVERRIDE;
    virtual JSValue defaultValue(ExecState*, PreferredPrimitiveType) const OVERRIDE;

    virtual JSValue getMethod(ExecState*, PropertyName) OVERRIDE;
    virtual JSValue invokeMethod(ExecState*, RuntimeMethod*) OVERRIDE;
    virtual bool supportsInvokeDefaultMethod() const OVERRIDE;
    virtual JSValue invokeDefaultMethod(ExecState*) OVERRIDE;

    virtual bool supportsConstruct() const OVERRIDE;
    virtual JSValue invokeConstruct(ExecState*, const ArgList&) OVERRIDE;

    virtual void getPropertyNames(ExecState*, PropertyNameArray&) OVERRIDE;

    JSValue stringValue(ExecState*) const;
    JSValue numberValue(ExecState*) const;
    JSValue booleanValue() const;

    NPObject *getObject() const { return _object; }

private:
    CInstance(NPObject*, PassRefPtr<RootObject>);

    virtual RuntimeObject* newRuntimeObject(ExecState*) OVERRIDE;
    bool toJSPrimitive(ExecState*, const char*, JSValue&) const;


    mutable CClass *_class;
    NPObject *_object;
};

} // namespace Bindings

} // namespace JSC

#endif // ENABLE(NETSCAPE_PLUGIN_API)

#endif
