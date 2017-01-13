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

// Firebase.Database.Internal.Connection.CompoundHash
struct CompoundHash_t1429582413;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.String>>
struct IList_1_t3111101435;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.Connection.CompoundHash::.ctor(System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.String>>,System.Collections.Generic.IList`1<System.String>)
extern "C"  void CompoundHash__ctor_m1704456562 (CompoundHash_t1429582413 * __this, Il2CppObject* ___posts0, Il2CppObject* ___hashes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Collections.Generic.IList`1<System.String>> Firebase.Database.Internal.Connection.CompoundHash::GetPosts()
extern "C"  Il2CppObject* CompoundHash_GetPosts_m508611847 (CompoundHash_t1429582413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.CompoundHash::GetHashes()
extern "C"  Il2CppObject* CompoundHash_GetHashes_m4052531611 (CompoundHash_t1429582413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
