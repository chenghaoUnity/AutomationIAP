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

// Firebase.Database.Internal.Snapshot.LeafNode
struct LeafNode_t3399591604;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IEnumerator_1_t2558376908;
// Firebase.Database.Internal.Snapshot.LongNode
struct LongNode_t1794667560;
// Firebase.Database.Internal.Snapshot.DoubleNode
struct DoubleNode_t4188338151;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1041335204.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1794667560.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps4188338151.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"

// System.Void Firebase.Database.Internal.Snapshot.LeafNode::.ctor(Firebase.Database.Internal.Snapshot.Node)
extern "C"  void LeafNode__ctor_m789809555 (LeafNode_t3399591604 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.LeafNode::HasChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  bool LeafNode_HasChild_m33306686 (LeafNode_t3399591604 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.LeafNode::IsLeafNode()
extern "C"  bool LeafNode_IsLeafNode_m1072585386 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LeafNode::GetPriority()
extern "C"  Node_t2640059010 * LeafNode_GetPriority_m2335098276 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LeafNode::GetChild(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * LeafNode_GetChild_m3600325157 (LeafNode_t3399591604 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LeafNode::UpdateChild(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * LeafNode_UpdateChild_m4115017113 (LeafNode_t3399591604 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.LeafNode::IsEmpty()
extern "C"  bool LeafNode_IsEmpty_m2596580907 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.LeafNode::GetChildCount()
extern "C"  int32_t LeafNode_GetChildCount_m3793834117 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.LeafNode::GetPredecessorChildKey(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  ChildKey_t1197802383 * LeafNode_GetPredecessorChildKey_m2732505129 (LeafNode_t3399591604 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LeafNode::GetImmediateChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Node_t2640059010 * LeafNode_GetImmediateChild_m258688151 (LeafNode_t3399591604 * __this, ChildKey_t1197802383 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.LeafNode::GetValue(System.Boolean)
extern "C"  Il2CppObject * LeafNode_GetValue_m3080726995 (LeafNode_t3399591604 * __this, bool ___useExportFormat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LeafNode::UpdateImmediateChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * LeafNode_UpdateImmediateChild_m1313185583 (LeafNode_t3399591604 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.LeafNode::GetHash()
extern "C"  String_t* LeafNode_GetHash_m3333555769 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.LeafNode::GetPriorityHash(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* LeafNode_GetPriorityHash_m751636467 (LeafNode_t3399591604 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.LeafNode::GetEnumerator()
extern "C"  Il2CppObject* LeafNode_GetEnumerator_m1717309934 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.LeafNode::ReverseIterator()
extern "C"  Il2CppObject* LeafNode_ReverseIterator_m2439942804 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.LeafNode::CompareLongDoubleNodes(Firebase.Database.Internal.Snapshot.LongNode,Firebase.Database.Internal.Snapshot.DoubleNode)
extern "C"  int32_t LeafNode_CompareLongDoubleNodes_m1096979620 (Il2CppObject * __this /* static, unused */, LongNode_t1794667560 * ___longNode0, DoubleNode_t4188338151 * ___doubleNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.LeafNode::CompareTo(Firebase.Database.Internal.Snapshot.Node)
extern "C"  int32_t LeafNode_CompareTo_m3684705973 (LeafNode_t3399591604 * __this, Node_t2640059010 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.LeafNode::LeafCompare(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int32_t LeafNode_LeafCompare_m346191514 (LeafNode_t3399591604 * __this, LeafNode_t3399591604 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.LeafNode::ToString()
extern "C"  String_t* LeafNode_ToString_m297609451 (LeafNode_t3399591604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
