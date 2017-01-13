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

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen
struct OutstandingListen_t67058648;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec
struct ListenQuerySpec_t2050960365;
// Firebase.Database.Internal.Connection.IListenHashProvider
struct IListenHashProvider_t1509816543;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2050960365.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"

// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::.ctor(Firebase.Database.Internal.Connection.IRequestResultCallback,Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec,System.Nullable`1<System.Int64>,Firebase.Database.Internal.Connection.IListenHashProvider)
extern "C"  void OutstandingListen__ctor_m1599423618 (OutstandingListen_t67058648 * __this, Il2CppObject * ___callback0, ListenQuerySpec_t2050960365 * ___query1, Nullable_1_t3467111648  ___tag2, Il2CppObject * ___hashFunction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::GetQuery()
extern "C"  ListenQuerySpec_t2050960365 * OutstandingListen_GetQuery_m1951619991 (OutstandingListen_t67058648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int64> Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::GetTag()
extern "C"  Nullable_1_t3467111648  OutstandingListen_GetTag_m3950176279 (OutstandingListen_t67058648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.IListenHashProvider Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::GetHashFunction()
extern "C"  Il2CppObject * OutstandingListen_GetHashFunction_m3846683624 (OutstandingListen_t67058648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::ToString()
extern "C"  String_t* OutstandingListen_ToString_m283461558 (OutstandingListen_t67058648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
