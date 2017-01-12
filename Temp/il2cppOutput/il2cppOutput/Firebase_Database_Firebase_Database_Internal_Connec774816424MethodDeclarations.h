#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut
struct OutstandingPut_t774816424;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::.ctor(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void OutstandingPut__ctor_m2809580906 (OutstandingPut_t774816424 * __this, String_t* ___action0, Il2CppObject* ___request1, Il2CppObject * ___onComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::GetAction()
extern "C"  String_t* OutstandingPut_GetAction_m2928469464 (OutstandingPut_t774816424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::GetRequest()
extern "C"  Il2CppObject* OutstandingPut_GetRequest_m120980777 (OutstandingPut_t774816424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.IRequestResultCallback Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut::GetOnComplete()
extern "C"  Il2CppObject * OutstandingPut_GetOnComplete_m2611103387 (OutstandingPut_t774816424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
