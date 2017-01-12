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

// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.NamedNode::.ctor(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void NamedNode__ctor_m2189993508 (NamedNode_t787885785 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.NamedNode::GetMinNode()
extern "C"  NamedNode_t787885785 * NamedNode_GetMinNode_m2657461628 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.NamedNode::GetMaxNode()
extern "C"  NamedNode_t787885785 * NamedNode_GetMaxNode_m1872068050 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.NamedNode::GetName()
extern "C"  ChildKey_t1197802383 * NamedNode_GetName_m1759854033 (NamedNode_t787885785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.NamedNode::GetNode()
extern "C"  Node_t2640059010 * NamedNode_GetNode_m2847318167 (NamedNode_t787885785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.NamedNode::ToString()
extern "C"  String_t* NamedNode_ToString_m2249381192 (NamedNode_t787885785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.NamedNode::Equals(System.Object)
extern "C"  bool NamedNode_Equals_m2834669432 (NamedNode_t787885785 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.NamedNode::GetHashCode()
extern "C"  int32_t NamedNode_GetHashCode_m699828704 (NamedNode_t787885785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.NamedNode::.cctor()
extern "C"  void NamedNode__cctor_m3072805994 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
