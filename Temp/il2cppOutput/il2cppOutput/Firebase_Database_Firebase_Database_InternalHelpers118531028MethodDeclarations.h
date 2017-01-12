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

// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// Firebase.Database.MutableData
struct MutableData_t1171022152;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1244308462.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_DatabaseRefere1167676104.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// Firebase.Database.DatabaseReference Firebase.Database.InternalHelpers::CreateReference(Firebase.Database.Internal.Core.Repo,Firebase.Database.Internal.Core.Path)
extern "C"  DatabaseReference_t1167676104 * InternalHelpers_CreateReference_m2112627482 (Il2CppObject * __this /* static, unused */, Repo_t1244308462 * ___repo0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DataSnapshot Firebase.Database.InternalHelpers::CreateDataSnapshot(Firebase.Database.DatabaseReference,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  DataSnapshot_t1287895350 * InternalHelpers_CreateDataSnapshot_m1702392954 (Il2CppObject * __this /* static, unused */, DatabaseReference_t1167676104 * ___ref0, IndexedNode_t376444473 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.MutableData Firebase.Database.InternalHelpers::CreateMutableData(Firebase.Database.Internal.Snapshot.Node)
extern "C"  MutableData_t1171022152 * InternalHelpers_CreateMutableData_m3737098547 (Il2CppObject * __this /* static, unused */, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
