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

// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t929877234;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_DataSnapshot1287895350.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"

// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
extern "C"  void ValueChangedEventArgs__ctor_m1835146407 (ValueChangedEventArgs_t929877234 * __this, DataSnapshot_t1287895350 * ___snapshot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
extern "C"  void ValueChangedEventArgs__ctor_m3583709364 (ValueChangedEventArgs_t929877234 * __this, DatabaseError_t1067746743 * ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::get_Snapshot()
extern "C"  DataSnapshot_t1287895350 * ValueChangedEventArgs_get_Snapshot_m3919753613 (ValueChangedEventArgs_t929877234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
extern "C"  void ValueChangedEventArgs_set_Snapshot_m2100584778 (ValueChangedEventArgs_t929877234 * __this, DataSnapshot_t1287895350 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::get_DatabaseError()
extern "C"  DatabaseError_t1067746743 * ValueChangedEventArgs_get_DatabaseError_m3460624193 (ValueChangedEventArgs_t929877234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
extern "C"  void ValueChangedEventArgs_set_DatabaseError_m2906851762 (ValueChangedEventArgs_t929877234 * __this, DatabaseError_t1067746743 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
