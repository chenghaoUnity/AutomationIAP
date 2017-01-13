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

// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// Firebase.Database.Internal.Snapshot.IndexedNode
struct IndexedNode_t376444473;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_t1580022395;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_DatabaseRefere1167676104.h"
#include "Firebase_Database_Firebase_Database_Internal_Snapsh376444473.h"

// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.DatabaseReference,Firebase.Database.Internal.Snapshot.IndexedNode)
extern "C"  void DataSnapshot__ctor_m2738426863 (DataSnapshot_t1287895350 * __this, DatabaseReference_t1167676104 * ___ref0, IndexedNode_t376444473 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.DataSnapshot::get_Value()
extern "C"  Il2CppObject * DataSnapshot_get_Value_m2448007898 (DataSnapshot_t1287895350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseReference Firebase.Database.DataSnapshot::get_Reference()
extern "C"  DatabaseReference_t1167676104 * DataSnapshot_get_Reference_m2513779032 (DataSnapshot_t1287895350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DataSnapshot::set_Reference(Firebase.Database.DatabaseReference)
extern "C"  void DataSnapshot_set_Reference_m1609048013 (DataSnapshot_t1287895350 * __this, DatabaseReference_t1167676104 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DataSnapshot::get_Key()
extern "C"  String_t* DataSnapshot_get_Key_m2120664702 (DataSnapshot_t1287895350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
extern "C"  Il2CppObject* DataSnapshot_get_Children_m1718839175 (DataSnapshot_t1287895350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
extern "C"  Il2CppObject * DataSnapshot_GetValue_m142545042 (DataSnapshot_t1287895350 * __this, bool ___useExportFormat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DataSnapshot::ToString()
extern "C"  String_t* DataSnapshot_ToString_m1790645916 (DataSnapshot_t1287895350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
