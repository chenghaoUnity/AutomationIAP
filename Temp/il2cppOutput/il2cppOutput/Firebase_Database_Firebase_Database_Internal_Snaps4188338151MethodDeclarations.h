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

// Firebase.Database.Internal.Snapshot.DoubleNode
struct DoubleNode_t4188338151;
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

// System.Void Firebase.Database.Internal.Snapshot.DoubleNode::.ctor(System.Double,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void DoubleNode__ctor_m2797035764 (DoubleNode_t4188338151 * __this, double ___value0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.DoubleNode::GetValue()
extern "C"  Il2CppObject * DoubleNode_GetValue_m1673321967 (DoubleNode_t4188338151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.DoubleNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* DoubleNode_GetHashRepresentation_m1159109183 (DoubleNode_t4188338151 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.DoubleNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * DoubleNode_UpdatePriority_m1537948147 (DoubleNode_t4188338151 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.LeafNode/LeafType Firebase.Database.Internal.Snapshot.DoubleNode::GetLeafType()
extern "C"  int32_t DoubleNode_GetLeafType_m1063166718 (DoubleNode_t4188338151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.DoubleNode::CompareLeafValues(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int32_t DoubleNode_CompareLeafValues_m3316601969 (DoubleNode_t4188338151 * __this, LeafNode_t3399591604 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.DoubleNode::Equals(System.Object)
extern "C"  bool DoubleNode_Equals_m4009485410 (DoubleNode_t4188338151 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.DoubleNode::GetHashCode()
extern "C"  int32_t DoubleNode_GetHashCode_m2330346902 (DoubleNode_t4188338151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
