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

// Firebase.Database.Internal.Snapshot.LongNode
struct LongNode_t1794667560;
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

// System.Void Firebase.Database.Internal.Snapshot.LongNode::.ctor(System.Int64,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void LongNode__ctor_m1057963765 (LongNode_t1794667560 * __this, int64_t ___value0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.LongNode::GetValue()
extern "C"  Il2CppObject * LongNode_GetValue_m3123936676 (LongNode_t1794667560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.LongNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* LongNode_GetHashRepresentation_m3498522966 (LongNode_t1794667560 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LongNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * LongNode_UpdatePriority_m4031619280 (LongNode_t1794667560 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.LeafNode/LeafType Firebase.Database.Internal.Snapshot.LongNode::GetLeafType()
extern "C"  int32_t LongNode_GetLeafType_m2306070499 (LongNode_t1794667560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.LongNode::CompareLeafValues(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int32_t LongNode_CompareLeafValues_m3553290990 (LongNode_t1794667560 * __this, LeafNode_t3399591604 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.LongNode::Equals(System.Object)
extern "C"  bool LongNode_Equals_m2087415685 (LongNode_t1794667560 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.LongNode::GetHashCode()
extern "C"  int32_t LongNode_GetHashCode_m1218031915 (LongNode_t1794667560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
