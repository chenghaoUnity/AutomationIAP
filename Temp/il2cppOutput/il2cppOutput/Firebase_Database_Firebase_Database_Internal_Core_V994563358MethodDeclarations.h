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

// Firebase.Database.Internal.Core.View.CacheNode
struct CacheNode_t994563358;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Core.View.CacheNode::.ctor(Firebase.Database.Internal.Snapshot.IndexedNode,System.Boolean,System.Boolean)
extern "C"  void CacheNode__ctor_m1571779182 (CacheNode_t994563358 * __this, IndexedNode_t376444473 * ___node0, bool ___fullyInitialized1, bool ___filtered2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.CacheNode::IsFullyInitialized()
extern "C"  bool CacheNode_IsFullyInitialized_m507930568 (CacheNode_t994563358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.CacheNode::IsFiltered()
extern "C"  bool CacheNode_IsFiltered_m1567477777 (CacheNode_t994563358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.CacheNode::IsCompleteForPath(Firebase.Database.Internal.Core.Path)
extern "C"  bool CacheNode_IsCompleteForPath_m4195536050 (CacheNode_t994563358 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.View.CacheNode::IsCompleteForChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  bool CacheNode_IsCompleteForChild_m1148332672 (CacheNode_t994563358 * __this, ChildKey_t1197802383 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.CacheNode::GetNode()
extern "C"  Node_t2640059010 * CacheNode_GetNode_m2656821676 (CacheNode_t994563358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Core.View.CacheNode::GetIndexedNode()
extern "C"  IndexedNode_t376444473 * CacheNode_GetIndexedNode_m2883931096 (CacheNode_t994563358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
