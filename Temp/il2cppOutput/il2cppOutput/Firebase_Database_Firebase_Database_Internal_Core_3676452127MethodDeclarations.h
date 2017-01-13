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

// Firebase.Database.Internal.Core.View.ViewProcessor
struct ViewProcessor_t3676452127;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter
struct NodeFilter_t1410970950;
// Firebase.Database.Internal.Core.View.ViewProcessor/ProcessorResult
struct ProcessorResult_t3891512348;
// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>
struct IList_1_t1180527849;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource
struct ICompleteChildSource_t716019391;
// Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator
struct ChildChangeAccumulator_t1740384518;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>
struct ImmutableTree_1_t368550071;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1410970950.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V983378685.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W351426802.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1740384518.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"

// System.Void Firebase.Database.Internal.Core.View.ViewProcessor::.ctor(Firebase.Database.Internal.Core.View.Filter.NodeFilter)
extern "C"  void ViewProcessor__ctor_m1624241612 (ViewProcessor_t3676452127 * __this, NodeFilter_t1410970950 * ___filter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewProcessor/ProcessorResult Firebase.Database.Internal.Core.View.ViewProcessor::ApplyOperation(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Operation.Operation,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node)
extern "C"  ProcessorResult_t3891512348 * ViewProcessor_ApplyOperation_m1647752452 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___oldViewCache0, Operation_t3598067969 * ___operation1, WriteTreeRef_t351426802 * ___writesCache2, Node_t2640059010 * ___optCompleteCache3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.ViewProcessor::MaybeAddValueEvent(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.View.ViewCache,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Change>)
extern "C"  void ViewProcessor_MaybeAddValueEvent_m1365353167 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___oldViewCache0, ViewCache_t983378685 * ___newViewCache1, Il2CppObject* ___accumulator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::GenerateEventCacheAfterServerEvent(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Core.View.Filter.NodeFilter/ICompleteChildSource,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_GenerateEventCacheAfterServerEvent_m2408544051 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___viewCache0, Path_t2568473163 * ___changePath1, WriteTreeRef_t351426802 * ___writesCache2, Il2CppObject * ___source3, ChildChangeAccumulator_t1740384518 * ___accumulator4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::ApplyServerOverwrite(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node,System.Boolean,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_ApplyServerOverwrite_m4128566157 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___oldViewCache0, Path_t2568473163 * ___changePath1, Node_t2640059010 * ___changedSnap2, WriteTreeRef_t351426802 * ___writesCache3, Node_t2640059010 * ___optCompleteCache4, bool ___filterServerNode5, ChildChangeAccumulator_t1740384518 * ___accumulator6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::ApplyUserOverwrite(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_ApplyUserOverwrite_m1884457918 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___oldViewCache0, Path_t2568473163 * ___changePath1, Node_t2640059010 * ___changedSnap2, WriteTreeRef_t351426802 * ___writesCache3, Node_t2640059010 * ___optCompleteCache4, ChildChangeAccumulator_t1740384518 * ___accumulator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.ViewProcessor::CacheHasChild(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  bool ViewProcessor_CacheHasChild_m3036896625 (Il2CppObject * __this /* static, unused */, ViewCache_t983378685 * ___viewCache0, ChildKey_t1197802383 * ___childKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::ApplyUserMerge(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_ApplyUserMerge_m1092456574 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___viewCache0, Path_t2568473163 * ___path1, CompoundWrite_t496419158 * ___changedChildren2, WriteTreeRef_t351426802 * ___writesCache3, Node_t2640059010 * ___serverCache4, ChildChangeAccumulator_t1740384518 * ___accumulator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::ApplyServerMerge(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node,System.Boolean,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_ApplyServerMerge_m1496899797 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___viewCache0, Path_t2568473163 * ___path1, CompoundWrite_t496419158 * ___changedChildren2, WriteTreeRef_t351426802 * ___writesCache3, Node_t2640059010 * ___serverCache4, bool ___filterServerNode5, ChildChangeAccumulator_t1740384518 * ___accumulator6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::AckUserWrite(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_AckUserWrite_m1719183623 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___viewCache0, Path_t2568473163 * ___ackPath1, ImmutableTree_1_t368550071 * ___affectedTree2, WriteTreeRef_t351426802 * ___writesCache3, Node_t2640059010 * ___optCompleteCache4, ChildChangeAccumulator_t1740384518 * ___accumulator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::RevertUserWrite(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_RevertUserWrite_m910308261 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___viewCache0, Path_t2568473163 * ___path1, WriteTreeRef_t351426802 * ___writesCache2, Node_t2640059010 * ___optCompleteServerCache3, ChildChangeAccumulator_t1740384518 * ___accumulator4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.ViewProcessor::ListenComplete(Firebase.Database.Internal.Core.View.ViewCache,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.WriteTreeRef,Firebase.Database.Internal.Core.View.Filter.ChildChangeAccumulator)
extern "C"  ViewCache_t983378685 * ViewProcessor_ListenComplete_m2722455942 (ViewProcessor_t3676452127 * __this, ViewCache_t983378685 * ___viewCache0, Path_t2568473163 * ___path1, WriteTreeRef_t351426802 * ___writesCache2, ChildChangeAccumulator_t1740384518 * ___accumulator3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.View.ViewProcessor::.cctor()
extern "C"  void ViewProcessor__cctor_m1062459988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
