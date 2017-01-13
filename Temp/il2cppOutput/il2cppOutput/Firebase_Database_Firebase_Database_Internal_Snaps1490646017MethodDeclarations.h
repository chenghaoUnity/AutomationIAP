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

// Firebase.Database.Internal.Snapshot.ChildrenNode
struct ChildrenNode_t1490646017;
// Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>
struct ImmutableSortedMap_2_t44887423;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor
struct ChildVisitor_t394951299;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IEnumerator_1_t2558376908;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1041335204.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh394951299.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::.ctor()
extern "C"  void ChildrenNode__ctor_m272623857 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::.ctor(Firebase.Database.Internal.Collection.ImmutableSortedMap`2<Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node>,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void ChildrenNode__ctor_m3609448583 (ChildrenNode_t1490646017 * __this, ImmutableSortedMap_2_t44887423 * ___children0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildrenNode::HasChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  bool ChildrenNode_HasChild_m2806944019 (ChildrenNode_t1490646017 * __this, ChildKey_t1197802383 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildrenNode::IsEmpty()
extern "C"  bool ChildrenNode_IsEmpty_m3399093328 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.ChildrenNode::GetChildCount()
extern "C"  int32_t ChildrenNode_GetChildCount_m954792916 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.ChildrenNode::GetValue()
extern "C"  Il2CppObject * ChildrenNode_GetValue_m1623386957 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.ChildrenNode::GetValue(System.Boolean)
extern "C"  Il2CppObject * ChildrenNode_GetValue_m2143364540 (ChildrenNode_t1490646017 * __this, bool ___useExportFormat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildrenNode::GetPredecessorChildKey(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  ChildKey_t1197802383 * ChildrenNode_GetPredecessorChildKey_m3711605408 (ChildrenNode_t1490646017 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.ChildrenNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* ChildrenNode_GetHashRepresentation_m3246918525 (ChildrenNode_t1490646017 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.ChildrenNode::GetHash()
extern "C"  String_t* ChildrenNode_GetHash_m354461148 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildrenNode::IsLeafNode()
extern "C"  bool ChildrenNode_IsLeafNode_m3085425409 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::GetPriority()
extern "C"  Node_t2640059010 * ChildrenNode_GetPriority_m3180057173 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * ChildrenNode_UpdatePriority_m715583933 (ChildrenNode_t1490646017 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::GetImmediateChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Node_t2640059010 * ChildrenNode_GetImmediateChild_m1110450090 (ChildrenNode_t1490646017 * __this, ChildKey_t1197802383 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::GetChild(Firebase.Database.Internal.Core.Path)
extern "C"  Node_t2640059010 * ChildrenNode_GetChild_m460791508 (ChildrenNode_t1490646017 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::ForEachChild(Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor)
extern "C"  void ChildrenNode_ForEachChild_m2826056712 (ChildrenNode_t1490646017 * __this, ChildVisitor_t394951299 * ___visitor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::ForEachChild(Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor,System.Boolean)
extern "C"  void ChildrenNode_ForEachChild_m4171321929 (ChildrenNode_t1490646017 * __this, ChildVisitor_t394951299 * ___visitor0, bool ___includePriority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildrenNode::GetFirstChildKey()
extern "C"  ChildKey_t1197802383 * ChildrenNode_GetFirstChildKey_m3474539681 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildrenNode::GetLastChildKey()
extern "C"  ChildKey_t1197802383 * ChildrenNode_GetLastChildKey_m3535041337 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::UpdateChild(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * ChildrenNode_UpdateChild_m1808338354 (ChildrenNode_t1490646017 * __this, Path_t2568473163 * ___path0, Node_t2640059010 * ___newChildNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.ChildrenNode::GetEnumerator()
extern "C"  Il2CppObject* ChildrenNode_GetEnumerator_m792583465 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.Internal.Snapshot.ChildrenNode::ReverseIterator()
extern "C"  Il2CppObject* ChildrenNode_ReverseIterator_m1837272665 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.ChildrenNode::UpdateImmediateChild(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * ChildrenNode_UpdateImmediateChild_m927698234 (ChildrenNode_t1490646017 * __this, ChildKey_t1197802383 * ___key0, Node_t2640059010 * ___newChildNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.ChildrenNode::CompareTo(Firebase.Database.Internal.Snapshot.Node)
extern "C"  int32_t ChildrenNode_CompareTo_m2833530710 (ChildrenNode_t1490646017 * __this, Node_t2640059010 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildrenNode::Equals(System.Object)
extern "C"  bool ChildrenNode_Equals_m107855192 (ChildrenNode_t1490646017 * __this, Il2CppObject * ___otherObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.ChildrenNode::GetHashCode()
extern "C"  int32_t ChildrenNode_GetHashCode_m124265496 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.ChildrenNode::ToString()
extern "C"  String_t* ChildrenNode_ToString_m931434250 (ChildrenNode_t1490646017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::AddIndentation(System.Text.StringBuilder,System.Int32)
extern "C"  void ChildrenNode_AddIndentation_m3355515440 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___builder0, int32_t ___indentation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::ToStringExpr(System.Text.StringBuilder,System.Int32)
extern "C"  void ChildrenNode_ToStringExpr_m1577206773 (ChildrenNode_t1490646017 * __this, StringBuilder_t1221177846 * ___builder0, int32_t ___indentation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildrenNode::.cctor()
extern "C"  void ChildrenNode__cctor_m939920402 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
