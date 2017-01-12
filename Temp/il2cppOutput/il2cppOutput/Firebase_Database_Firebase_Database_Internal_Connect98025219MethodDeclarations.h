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

// Firebase.Database.Internal.Connection.RangeMerge
struct RangeMerge_t98025219;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Connection.RangeMerge::.ctor(System.Collections.Generic.IList`1<System.String>,System.Collections.Generic.IList`1<System.String>,System.Object)
extern "C"  void RangeMerge__ctor_m2745950217 (RangeMerge_t98025219 * __this, Il2CppObject* ___optExclusiveStart0, Il2CppObject* ___optInclusiveEnd1, Il2CppObject * ___snap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.RangeMerge::GetOptExclusiveStart()
extern "C"  Il2CppObject* RangeMerge_GetOptExclusiveStart_m2435161918 (RangeMerge_t98025219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.RangeMerge::GetOptInclusiveEnd()
extern "C"  Il2CppObject* RangeMerge_GetOptInclusiveEnd_m3193641263 (RangeMerge_t98025219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Connection.RangeMerge::GetSnap()
extern "C"  Il2CppObject * RangeMerge_GetSnap_m2627715430 (RangeMerge_t98025219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
