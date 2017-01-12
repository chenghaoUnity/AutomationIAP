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

// Firebase.Database.Internal.Core.View.Filter.RangedFilter
struct RangedFilter_t4273066827;
// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource
struct ICompleteChildSource_t716019391;
// Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator
struct ChildChangeAccumulator_t1740384518;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter
struct NodeFilter_t1410970950;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V526937568.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1740384518.h"

// System.Void Firebase.Database.Internal.Core.View.Filter.RangedFilter::.ctor(Firebase.Database.Internal.Core.View.QueryParams)
extern "C"  void RangedFilter__ctor_m2701080242 (RangedFilter_t4273066827 * __this, QueryParams_t526937568 * ___params0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::GetStartPost()
extern "C"  NamedNode_t787885785 * RangedFilter_GetStartPost_m841158244 (RangedFilter_t4273066827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::GetEndPost()
extern "C"  NamedNode_t787885785 * RangedFilter_GetEndPost_m2536445285 (RangedFilter_t4273066827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::GetStartPost(Firebase.Database.Internal.Core.View.QueryParams)
extern "C"  NamedNode_t787885785 * RangedFilter_GetStartPost_m2614573859 (Il2CppObject * __this /* static, unused */, QueryParams_t526937568 * ___params0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::GetEndPost(Firebase.Database.Internal.Core.View.QueryParams)
extern "C"  NamedNode_t787885785 * RangedFilter_GetEndPost_m997426276 (Il2CppObject * __this /* static, unused */, QueryParams_t526937568 * ___params0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.Filter.RangedFilter::Matches(Firebase.Database.Internal.Snapshot.NamedNode)
extern "C"  bool RangedFilter_Matches_m2840755354 (RangedFilter_t4273066827 * __this, NamedNode_t787885785 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::UpdateChild(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * RangedFilter_UpdateChild_m2743155407 (RangedFilter_t4273066827 * __this, IndexedNode_t376444473 * ___snap0, ChildKey_t1197802383 * ___key1, Node_t2640059010 * ___newChild2, Path_t2568473163 * ___affectedPath3, Il2CppObject * ___source4, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::UpdateFullNode(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * RangedFilter_UpdateFullNode_m3867338991 (RangedFilter_t4273066827 * __this, IndexedNode_t376444473 * ___oldSnap0, IndexedNode_t376444473 * ___newSnap1, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.RangedFilter::UpdatePriority(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.Node)
extern "C"  IndexedNode_t376444473 * RangedFilter_UpdatePriority_m2191391726 (RangedFilter_t4273066827 * __this, IndexedNode_t376444473 * ___oldSnap0, Node_t2640059010 * ___newPriority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter Firebase.Database.Internal.Core.View.Filter.RangedFilter::GetIndexedFilter()
extern "C"  NodeFilter_t1410970950 * RangedFilter_GetIndexedFilter_m2626716546 (RangedFilter_t4273066827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.Filter.RangedFilter::GetIndex()
extern "C"  Index_t2425062456 * RangedFilter_GetIndex_m3168002037 (RangedFilter_t4273066827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.Filter.RangedFilter::FiltersNodes()
extern "C"  bool RangedFilter_FiltersNodes_m1457153831 (RangedFilter_t4273066827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
