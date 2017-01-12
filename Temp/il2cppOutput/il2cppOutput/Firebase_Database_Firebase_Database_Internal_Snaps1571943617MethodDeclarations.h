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

// Firebase.Database.Internal.Snapshot.PathIndex
struct PathIndex_t1571943617;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Snapshot.NamedNode
struct NamedNode_t787885785;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh787885785.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.PathIndex::.ctor(Firebase.Database.Internal.Core.Path)
extern "C"  void PathIndex__ctor_m1413966928 (PathIndex_t1571943617 * __this, Path_t2568473163 * ___indexPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.PathIndex::IsDefinedOn(Firebase.Database.Internal.Snapshot.Node)
extern "C"  bool PathIndex_IsDefinedOn_m4256258660 (PathIndex_t1571943617 * __this, Node_t2640059010 * ___snapshot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.PathIndex::Compare(Firebase.Database.Internal.Snapshot.NamedNode,Firebase.Database.Internal.Snapshot.NamedNode)
extern "C"  int32_t PathIndex_Compare_m2235911392 (PathIndex_t1571943617 * __this, NamedNode_t787885785 * ___a0, NamedNode_t787885785 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.PathIndex::MakePost(Firebase.Database.Internal.Snapshot.ChildKey,Firebase.Database.Internal.Snapshot.Node)
extern "C"  NamedNode_t787885785 * PathIndex_MakePost_m4057411489 (PathIndex_t1571943617 * __this, ChildKey_t1197802383 * ___name0, Node_t2640059010 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.NamedNode Firebase.Database.Internal.Snapshot.PathIndex::MaxPost()
extern "C"  NamedNode_t787885785 * PathIndex_MaxPost_m259493454 (PathIndex_t1571943617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.PathIndex::GetQueryDefinition()
extern "C"  String_t* PathIndex_GetQueryDefinition_m3866410629 (PathIndex_t1571943617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.PathIndex::Equals(System.Object)
extern "C"  bool PathIndex_Equals_m1739740792 (PathIndex_t1571943617 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.PathIndex::GetHashCode()
extern "C"  int32_t PathIndex_GetHashCode_m84195560 (PathIndex_t1571943617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
