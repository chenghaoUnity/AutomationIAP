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

// Firebase.Database.Internal.Core.WriteTree
struct WriteTree_t736318673;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.UserWriteRecord
struct UserWriteRecord_t388677579;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1450018638;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.UserWriteRecord>
struct IList_1_t929618180;
// Firebase.Database.Internal.Core.Utilities.Predicate`1<Firebase.Database.Internal.Core.UserWriteRecord>
struct Predicate_1_t3200809552;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V994563358.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_U388677579.h"

// System.Void Firebase.Database.Internal.Core.WriteTree::.ctor()
extern "C"  void WriteTree__ctor_m3410222132 (WriteTree_t736318673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.WriteTreeRef Firebase.Database.Internal.Core.WriteTree::ChildWrites(Firebase.Database.Internal.Core.Path)
extern "C"  WriteTreeRef_t351426802 * WriteTree_ChildWrites_m897899228 (WriteTree_t736318673 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.WriteTree::AddOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,System.Int64,System.Boolean)
extern "C"  void WriteTree_AddOverwrite_m1309428311 (WriteTree_t736318673 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___snap1, int64_t ___writeId2, bool ___visible3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.WriteTree::AddMerge(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,System.Int64)
extern "C"  void WriteTree_AddMerge_m3141793892 (WriteTree_t736318673 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___changedChildren1, int64_t ___writeId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.UserWriteRecord Firebase.Database.Internal.Core.WriteTree::GetWrite(System.Int64)
extern "C"  UserWriteRecord_t388677579 * WriteTree_GetWrite_m1141380337 (WriteTree_t736318673 * __this, int64_t ___writeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.WriteTree::RemoveWrite(System.Int64)
extern "C"  bool WriteTree_RemoveWrite_m4045369051 (WriteTree_t736318673 * __this, int64_t ___writeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTree::CalcCompleteEventCache(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,System.Collections.Generic.IList`1<System.Int64>,System.Boolean)
extern "C"  Node_t2640059010 * WriteTree_CalcCompleteEventCache_m3997749286 (WriteTree_t736318673 * __this, Path_t2568473163 * ___treePath0, Node_t2640059010 * ___completeServerCache1, Il2CppObject* ___writeIdsToExclude2, bool ___includeHiddenWrites3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTree::CalcCompleteEventChildren(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * WriteTree_CalcCompleteEventChildren_m3944449555 (WriteTree_t736318673 * __this, Path_t2568473163 * ___treePath0, Node_t2640059010 * ___completeServerChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTree::CalcEventCacheAfterServerOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * WriteTree_CalcEventCacheAfterServerOverwrite_m3662781761 (WriteTree_t736318673 * __this, Path_t2568473163 * ___treePath0, Path_t2568473163 * ___childPath1, Node_t2640059010 * ___existingEventSnap2, Node_t2640059010 * ___existingServerSnap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTree::CalcCompleteChild(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.View.CacheNode)
extern "C"  Node_t2640059010 * WriteTree_CalcCompleteChild_m3375911810 (WriteTree_t736318673 * __this, Path_t2568473163 * ___treePath0, ChildKey_t1197802383 * ___childKey1, CacheNode_t994563358 * ___existingServerSnap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTree::ShadowingWrite(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * WriteTree_ShadowingWrite_m3866915004 (WriteTree_t736318673 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.WriteTree::CalcNextNodeAfterPost(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.NamedNode,System.Boolean,Firebase.Database.Internal.Snapshot.Index)
extern "C"  NamedNode_t787885785 * WriteTree_CalcNextNodeAfterPost_m1798380811 (WriteTree_t736318673 * __this, Path_t2568473163 * ___treePath0, Node_t2640059010 * ___completeServerData1, NamedNode_t787885785 * ___post2, bool ___reverse3, Index_t2425062456 * ___index4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.WriteTree::RecordContainsPath(Firebase.Database.Internal.Core.UserWriteRecord,Firebase.Database.Internal.Core.Path)
extern "C"  bool WriteTree_RecordContainsPath_m4095057741 (WriteTree_t736318673 * __this, UserWriteRecord_t388677579 * ___writeRecord0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.WriteTree::ResetTree()
extern "C"  void WriteTree_ResetTree_m4175641349 (WriteTree_t736318673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.WriteTree::LayerTree(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.UserWriteRecord>,Firebase.Database.Internal.Core.Utilities.Predicate`1<Firebase.Database.Internal.Core.UserWriteRecord>,Firebase.Database.Internal.Core.Path)
extern "C"  CompoundWrite_t496419158 * WriteTree_LayerTree_m661656796 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___writes0, Predicate_1_t3200809552 * ___filter1, Path_t2568473163 * ___treeRoot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.WriteTree::.cctor()
extern "C"  void WriteTree__cctor_m2844062357 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
