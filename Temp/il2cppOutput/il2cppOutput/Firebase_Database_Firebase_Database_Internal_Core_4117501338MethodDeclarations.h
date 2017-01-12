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

// Firebase.Database.Internal.Core.View.Filter.LimitedFilter
struct LimitedFilter_t4117501338;
// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
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
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1740384518.h"

// System.Void Firebase.Database.Internal.Core.View.Filter.LimitedFilter::.ctor(Firebase.Database.Internal.Core.View.QueryParams)
extern "C"  void LimitedFilter__ctor_m2866945673 (LimitedFilter_t4117501338 * __this, QueryParams_t526937568 * ___params0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.LimitedFilter::UpdateChild(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * LimitedFilter_UpdateChild_m2555294902 (LimitedFilter_t4117501338 * __this, IndexedNode_t376444473 * ___snap0, ChildKey_t1197802383 * ___key1, Node_t2640059010 * ___newChild2, Path_t2568473163 * ___affectedPath3, Il2CppObject * ___source4, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.LimitedFilter::FullLimitUpdateChild(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * LimitedFilter_FullLimitUpdateChild_m1081598319 (LimitedFilter_t4117501338 * __this, IndexedNode_t376444473 * ___oldIndexed0, ChildKey_t1197802383 * ___childKey1, Node_t2640059010 * ___childSnap2, Il2CppObject * ___source3, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.LimitedFilter::UpdateFullNode(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * LimitedFilter_UpdateFullNode_m1874091208 (LimitedFilter_t4117501338 * __this, IndexedNode_t376444473 * ___oldSnap0, IndexedNode_t376444473 * ___newSnap1, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.LimitedFilter::UpdatePriority(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.Node)
extern "C"  IndexedNode_t376444473 * LimitedFilter_UpdatePriority_m31277231 (LimitedFilter_t4117501338 * __this, IndexedNode_t376444473 * ___oldSnap0, Node_t2640059010 * ___newPriority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter Firebase.Database.Internal.Core.View.Filter.LimitedFilter::GetIndexedFilter()
extern "C"  NodeFilter_t1410970950 * LimitedFilter_GetIndexedFilter_m825847899 (LimitedFilter_t4117501338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.Filter.LimitedFilter::GetIndex()
extern "C"  Index_t2425062456 * LimitedFilter_GetIndex_m2058918066 (LimitedFilter_t4117501338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.Filter.LimitedFilter::FiltersNodes()
extern "C"  bool LimitedFilter_FiltersNodes_m662071794 (LimitedFilter_t4117501338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
