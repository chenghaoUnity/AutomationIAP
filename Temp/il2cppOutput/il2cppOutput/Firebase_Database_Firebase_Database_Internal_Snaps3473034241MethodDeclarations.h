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

// Firebase.Database.Internal.Snapshot.EmptyNode
struct EmptyNode_t3473034241;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IEnumerator_1_t2558376908;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1041335204.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.EmptyNode::.ctor()
extern "C"  void EmptyNode__ctor_m1234710847 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.EmptyNode Firebase.Database.Internal.Snapshot.EmptyNode::Empty()
extern "C"  EmptyNode_t3473034241 * EmptyNode_Empty_m947584335 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.EmptyNode::IsLeafNode()
extern "C"  bool EmptyNode_IsLeafNode_m2089360083 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.EmptyNode::GetPriority()
extern "C"  Node_t2640059010 * EmptyNode_GetPriority_m3468541347 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.EmptyNode::GetChild(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * EmptyNode_GetChild_m1664868392 (EmptyNode_t3473034241 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.EmptyNode::GetImmediateChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Node_t2640059010 * EmptyNode_GetImmediateChild_m3338031866 (EmptyNode_t3473034241 * __this, ChildKey_t1197802383 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.EmptyNode::UpdateImmediateChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * EmptyNode_UpdateImmediateChild_m2170558738 (EmptyNode_t3473034241 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.EmptyNode::UpdateChild(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * EmptyNode_UpdateChild_m2815893714 (EmptyNode_t3473034241 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.EmptyNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * EmptyNode_UpdatePriority_m838408467 (EmptyNode_t3473034241 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.EmptyNode::HasChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  bool EmptyNode_HasChild_m884684225 (EmptyNode_t3473034241 * __this, ChildKey_t1197802383 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.EmptyNode::IsEmpty()
extern "C"  bool EmptyNode_IsEmpty_m2832684276 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.EmptyNode::GetChildCount()
extern "C"  int32_t EmptyNode_GetChildCount_m1797358896 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.EmptyNode::GetValue()
extern "C"  Il2CppObject * EmptyNode_GetValue_m812042387 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.EmptyNode::GetValue(System.Boolean)
extern "C"  Il2CppObject * EmptyNode_GetValue_m4099929806 (EmptyNode_t3473034241 * __this, bool ___useExportFormat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.EmptyNode::GetPredecessorChildKey(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  ChildKey_t1197802383 * EmptyNode_GetPredecessorChildKey_m2176502130 (EmptyNode_t3473034241 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.EmptyNode::GetHash()
extern "C"  String_t* EmptyNode_GetHash_m2405894310 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.EmptyNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* EmptyNode_GetHashRepresentation_m3242796091 (EmptyNode_t3473034241 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.EmptyNode::GetEnumerator()
extern "C"  Il2CppObject* EmptyNode_GetEnumerator_m2377864575 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.EmptyNode::ReverseIterator()
extern "C"  Il2CppObject* EmptyNode_ReverseIterator_m730866355 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.EmptyNode::CompareTo(Firebase.Database.Internal.Snapshot.Node)
extern "C"  int32_t EmptyNode_CompareTo_m1972195546 (EmptyNode_t3473034241 * __this, Node_t2640059010 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.EmptyNode::Equals(System.Object)
extern "C"  bool EmptyNode_Equals_m3704779016 (EmptyNode_t3473034241 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.EmptyNode::GetHashCode()
extern "C"  int32_t EmptyNode_GetHashCode_m567332320 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.EmptyNode::ToString()
extern "C"  String_t* EmptyNode_ToString_m182005008 (EmptyNode_t3473034241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.EmptyNode::.cctor()
extern "C"  void EmptyNode__cctor_m3781136622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
