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

// Firebase.Database.Internal.Snapshot.StringNode
struct StringNode_t813221359;
// System.String
struct String_t;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Snapshot.LeafNode
struct LeafNode_t3399591604;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1041335204.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh373297280.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps3399591604.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.StringNode::.ctor(System.String,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void StringNode__ctor_m3477987252 (StringNode_t813221359 * __this, String_t* ___value0, Node_t2640059010 * ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.Internal.Snapshot.StringNode::GetValue()
extern "C"  Il2CppObject * StringNode_GetValue_m1290448647 (StringNode_t813221359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.StringNode::GetHashRepresentation(Firebase.Database.Internal.Snapshot.Node/HashVersion)
extern "C"  String_t* StringNode_GetHashRepresentation_m20468727 (StringNode_t813221359 * __this, int32_t ___version0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.StringNode::UpdatePriority(Firebase.Database.Internal.Snapshot.Node)
extern "C"  Node_t2640059010 * StringNode_UpdatePriority_m797946571 (StringNode_t813221359 * __this, Node_t2640059010 * ___priority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.LeafNode/LeafType Firebase.Database.Internal.Snapshot.StringNode::GetLeafType()
extern "C"  int32_t StringNode_GetLeafType_m966563338 (StringNode_t813221359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.StringNode::CompareLeafValues(Firebase.Database.Internal.Snapshot.LeafNode)
extern "C"  int32_t StringNode_CompareLeafValues_m525632773 (StringNode_t813221359 * __this, LeafNode_t3399591604 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.StringNode::Equals(System.Object)
extern "C"  bool StringNode_Equals_m2192265290 (StringNode_t813221359 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.StringNode::GetHashCode()
extern "C"  int32_t StringNode_GetHashCode_m1670648266 (StringNode_t813221359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
