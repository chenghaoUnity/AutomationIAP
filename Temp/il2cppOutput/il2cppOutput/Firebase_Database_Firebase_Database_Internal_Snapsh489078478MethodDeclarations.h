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

// Firebase.Database.Internal.Snapshot.BooleanNode
struct BooleanNode_t489078478;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Firebase.Database.Internal.Snapshot.LeafNode
struct LeafNode_t3399591604;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1041335204.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh373297280.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.BooleanNode::.ctor(System.Boolean,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void BooleanNode__ctor_m2311505436 (BooleanNode_t489078478 * __this, bool ___value0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.BooleanNode::GetValue()
extern "C"  Il2CppObject * BooleanNode_GetValue_m2845135782 (BooleanNode_t489078478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.BooleanNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* BooleanNode_GetHashRepresentation_m3478108872 (BooleanNode_t489078478 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.BooleanNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * BooleanNode_UpdatePriority_m613315564 (BooleanNode_t489078478 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.LeafNode/LeafType Firebase.Database.Internal.Snapshot.BooleanNode::GetLeafType()
extern "C"  int32_t BooleanNode_GetLeafType_m1476460645 (BooleanNode_t489078478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.BooleanNode::CompareLeafValues(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int32_t BooleanNode_CompareLeafValues_m115491694 (BooleanNode_t489078478 * __this, LeafNode_t3399591604 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.BooleanNode::Equals(System.Object)
extern "C"  bool BooleanNode_Equals_m2723986687 (BooleanNode_t489078478 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.BooleanNode::GetHashCode()
extern "C"  int32_t BooleanNode_GetHashCode_m655659029 (BooleanNode_t489078478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
