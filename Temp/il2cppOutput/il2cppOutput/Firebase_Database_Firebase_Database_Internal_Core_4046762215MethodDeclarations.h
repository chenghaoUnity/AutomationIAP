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

// Firebase.Database.Internal.Core.View.Filter.IndexedFilter
struct IndexedFilter_t4046762215;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
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

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1740384518.h"

// System.Void Firebase.Database.Internal.Core.View.Filter.IndexedFilter::.ctor(Firebase.Database.Internal.Snapshot.Index)
extern "C"  void IndexedFilter__ctor_m3676478736 (IndexedFilter_t4046762215 * __this, Index_t2425062456 * ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.IndexedFilter::UpdateChild(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * IndexedFilter_UpdateChild_m2403574723 (IndexedFilter_t4046762215 * __this, IndexedNode_t376444473 * ___indexedNode0, ChildKey_t1197802383 * ___key1, Node_t2640059010 * ___newChild2, Path_t2568473163 * ___affectedPath3, Il2CppObject * ___source4, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.IndexedFilter::UpdateFullNode(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  IndexedNode_t376444473 * IndexedFilter_UpdateFullNode_m188884491 (IndexedFilter_t4046762215 * __this, IndexedNode_t376444473 * ___oldSnap0, IndexedNode_t376444473 * ___newSnap1, ChildChangeAccumulator_t1740384518 * ___optChangeAccumulator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.Filter.IndexedFilter::UpdatePriority(Firebase.Database.Internal.Snapshot.IndexedNode,Firebase.Database.Internal.Snapshot.Node)
extern "C"  IndexedNode_t376444473 * IndexedFilter_UpdatePriority_m807154268 (IndexedFilter_t4046762215 * __this, IndexedNode_t376444473 * ___oldSnap0, Node_t2640059010 * ___newPriority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter Firebase.Database.Internal.Core.View.Filter.IndexedFilter::GetIndexedFilter()
extern "C"  NodeFilter_t1410970950 * IndexedFilter_GetIndexedFilter_m2171330086 (IndexedFilter_t4046762215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.Filter.IndexedFilter::GetIndex()
extern "C"  Index_t2425062456 * IndexedFilter_GetIndex_m251256357 (IndexedFilter_t4046762215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.Filter.IndexedFilter::FiltersNodes()
extern "C"  bool IndexedFilter_FiltersNodes_m2451301799 (IndexedFilter_t4046762215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
