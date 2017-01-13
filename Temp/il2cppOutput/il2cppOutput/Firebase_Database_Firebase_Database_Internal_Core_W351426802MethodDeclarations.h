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

// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.WriteTree
struct WriteTree_t736318673;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1450018638;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_W736318673.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_V994563358.h"

// System.Void Firebase.Database.Internal.Core.WriteTreeRef::.ctor(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.WriteTree)
extern "C"  void WriteTreeRef__ctor_m2181956765 (WriteTreeRef_t351426802 * __this, Path_t2568473163 * ___path0, WriteTree_t736318673 * ___writeTree1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::CalcCompleteEventCache(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * WriteTreeRef_CalcCompleteEventCache_m257042554 (WriteTreeRef_t351426802 * __this, Node_t2640059010 * ___completeServerCache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::CalcCompleteEventCache(Firebase.Database.Internal.Snapshot.Node,System.Collections.Generic.IList`1<System.Int64>)
extern "C"  Node_t2640059010 * WriteTreeRef_CalcCompleteEventCache_m3502122293 (WriteTreeRef_t351426802 * __this, Node_t2640059010 * ___completeServerCache0, Il2CppObject* ___writeIdsToExclude1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::CalcCompleteEventCache(Firebase.Database.Internal.Snapshot.Node,System.Collections.Generic.IList`1<System.Int64>,System.Boolean)
extern "C"  Node_t2640059010 * WriteTreeRef_CalcCompleteEventCache_m1192170330 (WriteTreeRef_t351426802 * __this, Node_t2640059010 * ___completeServerCache0, Il2CppObject* ___writeIdsToExclude1, bool ___includeHiddenWrites2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::CalcCompleteEventChildren(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * WriteTreeRef_CalcCompleteEventChildren_m617723591 (WriteTreeRef_t351426802 * __this, Node_t2640059010 * ___completeServerChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::CalcEventCacheAfterServerOverwrite(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * WriteTreeRef_CalcEventCacheAfterServerOverwrite_m472396469 (WriteTreeRef_t351426802 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___existingEventSnap1, Node_t2640059010 * ___existingServerSnap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::ShadowingWrite(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * WriteTreeRef_ShadowingWrite_m1293853737 (WriteTreeRef_t351426802 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Core.WriteTreeRef::CalcNextNodeAfterPost(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.NamedNode,System.Boolean,Firebase.Database.Internal.Snapshot.Index)
extern "C"  NamedNode_t787885785 * WriteTreeRef_CalcNextNodeAfterPost_m3798836731 (WriteTreeRef_t351426802 * __this, Node_t2640059010 * ___completeServerData0, NamedNode_t787885785 * ___startPost1, bool ___reverse2, Index_t2425062456 * ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.WriteTreeRef::CalcCompleteChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Core.View.CacheNode)
extern "C"  Node_t2640059010 * WriteTreeRef_CalcCompleteChild_m3343029772 (WriteTreeRef_t351426802 * __this, ChildKey_t1197802383 * ___childKey0, CacheNode_t994563358 * ___existingServerCache1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.WriteTreeRef Firebase.Database.Internal.Core.WriteTreeRef::Child(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  WriteTreeRef_t351426802 * WriteTreeRef_Child_m138419830 (WriteTreeRef_t351426802 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
