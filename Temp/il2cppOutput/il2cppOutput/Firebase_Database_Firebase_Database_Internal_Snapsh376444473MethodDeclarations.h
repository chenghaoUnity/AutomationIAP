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

// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Collection.ImmutableSortedSet`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct ImmutableSortedSet_1_t447195634;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IEnumerator_1_t2558376908;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2425062456.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Snapshot.IndexedNode::.ctor(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Index)
extern "C"  void IndexedNode__ctor_m2244876491 (IndexedNode_t376444473 * __this, Node_t2640059010 * ___node0, Index_t2425062456 * ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.IndexedNode::.ctor(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Index,Firebase.Database.Internal.Collection.ImmutableSortedSet`1<Firebase.Database.Internal.Snapshot.NamedNode>)
extern "C"  void IndexedNode__ctor_m811834440 (IndexedNode_t376444473 * __this, Node_t2640059010 * ___node0, Index_t2425062456 * ___index1, ImmutableSortedSet_1_t447195634 * ___indexed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.IndexedNode::GetEnumerator()
extern "C"  Il2CppObject* IndexedNode_GetEnumerator_m3587197985 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Firebase.Database.Internal.Snapshot.IndexedNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * IndexedNode_System_Collections_IEnumerable_GetEnumerator_m3174154014 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.IndexedNode::EnsureIndexed()
extern "C"  void IndexedNode_EnsureIndexed_m3348850944 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Snapshot.IndexedNode::From(Firebase.Database.Internal.Snapshot.Node)
extern "C"  IndexedNode_t376444473 * IndexedNode_From_m2256161007 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Snapshot.IndexedNode::From(Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Index)
extern "C"  IndexedNode_t376444473 * IndexedNode_From_m1778257646 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, Index_t2425062456 * ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.IndexedNode::GetNode()
extern "C"  Node_t2640059010 * IndexedNode_GetNode_m149568411 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.IndexedNode::ReverseIterator()
extern "C"  Il2CppObject* IndexedNode_ReverseIterator_m236357937 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Snapshot.IndexedNode::UpdateChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  IndexedNode_t376444473 * IndexedNode_UpdateChild_m4181337564 (IndexedNode_t376444473 * __this, ChildKey_t1197802383 * ___key0, Node_t2640059010 * ___child1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.IndexedNode Firebase.Database.Internal.Snapshot.IndexedNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  IndexedNode_t376444473 * IndexedNode_UpdatePriority_m302815360 (IndexedNode_t376444473 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.IndexedNode::GetFirstChild()
extern "C"  NamedNode_t787885785 * IndexedNode_GetFirstChild_m89574866 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.IndexedNode::GetLastChild()
extern "C"  NamedNode_t787885785 * IndexedNode_GetLastChild_m628254410 (IndexedNode_t376444473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.IndexedNode::GetPredecessorChildName(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node,Firebase.Database.Internal.Snapshot.Index)
extern "C"  ChildKey_t1197802383 * IndexedNode_GetPredecessorChildName_m2564351046 (IndexedNode_t376444473 * __this, ChildKey_t1197802383 * ___childKey0, Node_t2640059010 * ___childNode1, Index_t2425062456 * ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.IndexedNode::.cctor()
extern "C"  void IndexedNode__cctor_m1437743558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
