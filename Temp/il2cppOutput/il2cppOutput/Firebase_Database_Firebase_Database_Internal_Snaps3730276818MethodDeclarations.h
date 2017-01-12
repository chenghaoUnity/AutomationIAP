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

// Firebase.Database.Internal.Snapshot.DeferredValueNode
struct DeferredValueNode_t3730276818;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
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

// System.Void Firebase.Database.Internal.Snapshot.DeferredValueNode::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void DeferredValueNode__ctor_m1416259215 (DeferredValueNode_t3730276818 * __this, Il2CppObject* ___value0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.DeferredValueNode::GetValue()
extern "C"  Il2CppObject * DeferredValueNode_GetValue_m61168146 (DeferredValueNode_t3730276818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.DeferredValueNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* DeferredValueNode_GetHashRepresentation_m1679354588 (DeferredValueNode_t3730276818 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.DeferredValueNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * DeferredValueNode_UpdatePriority_m1360680792 (DeferredValueNode_t3730276818 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.LeafNode/LeafType Firebase.Database.Internal.Snapshot.DeferredValueNode::GetLeafType()
extern "C"  int32_t DeferredValueNode_GetLeafType_m172906121 (DeferredValueNode_t3730276818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.DeferredValueNode::CompareLeafValues(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int32_t DeferredValueNode_CompareLeafValues_m3948215042 (DeferredValueNode_t3730276818 * __this, LeafNode_t3399591604 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.DeferredValueNode::Equals(System.Object)
extern "C"  bool DeferredValueNode_Equals_m2481271507 (DeferredValueNode_t3730276818 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.DeferredValueNode::GetHashCode()
extern "C"  int32_t DeferredValueNode_GetHashCode_m1981051305 (DeferredValueNode_t3730276818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
