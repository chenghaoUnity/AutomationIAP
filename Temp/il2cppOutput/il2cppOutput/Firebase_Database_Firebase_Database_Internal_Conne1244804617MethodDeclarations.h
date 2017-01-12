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

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941
struct ConnectionRequestCallback941_t1244804617;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl
struct PersistentConnectionImpl_t1099507887;
// System.String
struct String_t;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut
struct OutstandingPut_t774816424;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne1099507887.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Connec774816424.h"

// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::.ctor(Firebase.Database.Internal.Connection.PersistentConnectionImpl,System.String,System.Int64,Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void ConnectionRequestCallback941__ctor_m317026139 (ConnectionRequestCallback941_t1244804617 * __this, PersistentConnectionImpl_t1099507887 * ___enclosing0, String_t* ___action1, int64_t ___putId2, OutstandingPut_t774816424 * ___put3, Il2CppObject * ___onComplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::OnResponse(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ConnectionRequestCallback941_OnResponse_m4147403114 (ConnectionRequestCallback941_t1244804617 * __this, Il2CppObject* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
