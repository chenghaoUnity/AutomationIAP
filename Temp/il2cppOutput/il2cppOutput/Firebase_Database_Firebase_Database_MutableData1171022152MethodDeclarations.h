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

// Firebase.Database.MutableData
struct MutableData_t1171022152;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.SnapshotHolder
struct SnapshotHolder_t2504102480;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2504102480.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.MutableData::.ctor(Firebase.Database.Internal.Snapshot.Node)
extern "C"  void MutableData__ctor_m12949434 (MutableData_t1171022152 * __this, Node_t2640059010 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.MutableData::.ctor(Firebase.Database.Internal.Core.SnapshotHolder,Firebase.Database.Internal.Core.Path)
extern "C"  void MutableData__ctor_m28786096 (MutableData_t1171022152 * __this, SnapshotHolder_t2504102480 * ___holder0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.MutableData::get_Value()
extern "C"  Il2CppObject * MutableData_get_Value_m469405018 (MutableData_t1171022152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.MutableData::GetNode()
extern "C"  Node_t2640059010 * MutableData_GetNode_m2230266525 (MutableData_t1171022152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.MutableData::Equals(System.Object)
extern "C"  bool MutableData_Equals_m1137990824 (MutableData_t1171022152 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.MutableData::GetHashCode()
extern "C"  int32_t MutableData_GetHashCode_m3726839500 (MutableData_t1171022152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.MutableData::ToString()
extern "C"  String_t* MutableData_ToString_m4071835804 (MutableData_t1171022152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
