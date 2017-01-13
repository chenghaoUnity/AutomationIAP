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

// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter
struct NodeFilter_t1410970950;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.View.QueryParams::.ctor()
extern "C"  void QueryParams__ctor_m3958367438 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::HasStart()
extern "C"  bool QueryParams_HasStart_m3693710262 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.QueryParams::GetIndexStartValue()
extern "C"  Node_t2640059010 * QueryParams_GetIndexStartValue_m2951531679 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.QueryParams::GetIndexStartName()
extern "C"  ChildKey_t1197802383 * QueryParams_GetIndexStartName_m1282952898 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::HasEnd()
extern "C"  bool QueryParams_HasEnd_m4276835785 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.QueryParams::GetIndexEndValue()
extern "C"  Node_t2640059010 * QueryParams_GetIndexEndValue_m2488520680 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.QueryParams::GetIndexEndName()
extern "C"  ChildKey_t1197802383 * QueryParams_GetIndexEndName_m3524424749 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::HasLimit()
extern "C"  bool QueryParams_HasLimit_m3762130595 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::HasAnchoredLimit()
extern "C"  bool QueryParams_HasAnchoredLimit_m630490315 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.View.QueryParams::GetLimit()
extern "C"  int32_t QueryParams_GetLimit_m2903752785 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.QueryParams::GetIndex()
extern "C"  Index_t2425062456 * QueryParams_GetIndex_m1904487486 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QueryParams::Copy()
extern "C"  QueryParams_t526937568 * QueryParams_Copy_m552834043 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QueryParams::LimitToLast(System.Int32)
extern "C"  QueryParams_t526937568 * QueryParams_LimitToLast_m2633711863 (QueryParams_t526937568 * __this, int32_t ___limit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QueryParams::OrderBy(Firebase.Database.Internal.Snapshot.Index)
extern "C"  QueryParams_t526937568 * QueryParams_OrderBy_m2241784834 (QueryParams_t526937568 * __this, Index_t2425062456 * ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::IsViewFromLeft()
extern "C"  bool QueryParams_IsViewFromLeft_m2005572134 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Core.View.QueryParams::GetWireProtocolParams()
extern "C"  Il2CppObject* QueryParams_GetWireProtocolParams_m2509266132 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::LoadsAllData()
extern "C"  bool QueryParams_LoadsAllData_m1380493698 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::IsDefault()
extern "C"  bool QueryParams_IsDefault_m1217130985 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::IsValid()
extern "C"  bool QueryParams_IsValid_m957346466 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter Firebase.Database.Internal.Core.View.QueryParams::GetNodeFilter()
extern "C"  NodeFilter_t1410970950 * QueryParams_GetNodeFilter_m876054846 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.View.QueryParams::ToString()
extern "C"  String_t* QueryParams_ToString_m1721737335 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.QueryParams::Equals(System.Object)
extern "C"  bool QueryParams_Equals_m3083147289 (QueryParams_t526937568 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.View.QueryParams::GetHashCode()
extern "C"  int32_t QueryParams_GetHashCode_m1617863215 (QueryParams_t526937568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.QueryParams::.cctor()
extern "C"  void QueryParams__cctor_m2269162639 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
