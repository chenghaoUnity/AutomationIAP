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

// Firebase.Database.Internal.Snapshot.PriorityIndex
struct PriorityIndex_t3332049502;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.PriorityIndex::.ctor()
extern "C"  void PriorityIndex__ctor_m3692973932 (PriorityIndex_t3332049502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.PriorityIndex Firebase.Database.Internal.Snapshot.PriorityIndex::GetInstance()
extern "C"  PriorityIndex_t3332049502 * PriorityIndex_GetInstance_m2118838445 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.PriorityIndex::Compare(Firebase.Database.Internal.Snapshot.NamedNode,Firebase.Database.Internal.Snapshot.NamedNode)
extern "C"  int32_t PriorityIndex_Compare_m678713563 (PriorityIndex_t3332049502 * __this, NamedNode_t787885785 * ___a0, NamedNode_t787885785 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.PriorityIndex::IsDefinedOn(Firebase.Database.Internal.Snapshot.Node)
extern "C"  bool PriorityIndex_IsDefinedOn_m2315845943 (PriorityIndex_t3332049502 * __this, Node_t2640059010 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.PriorityIndex::MakePost(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  NamedNode_t787885785 * PriorityIndex_MakePost_m3144440934 (PriorityIndex_t3332049502 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.PriorityIndex::MaxPost()
extern "C"  NamedNode_t787885785 * PriorityIndex_MaxPost_m3441257129 (PriorityIndex_t3332049502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.PriorityIndex::GetQueryDefinition()
extern "C"  String_t* PriorityIndex_GetQueryDefinition_m4229923152 (PriorityIndex_t3332049502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.PriorityIndex::Equals(System.Object)
extern "C"  bool PriorityIndex_Equals_m3496534391 (PriorityIndex_t3332049502 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.PriorityIndex::GetHashCode()
extern "C"  int32_t PriorityIndex_GetHashCode_m2106101689 (PriorityIndex_t3332049502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.PriorityIndex::ToString()
extern "C"  String_t* PriorityIndex_ToString_m3835264013 (PriorityIndex_t3332049502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.PriorityIndex::.cctor()
extern "C"  void PriorityIndex__cctor_m1399722177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
