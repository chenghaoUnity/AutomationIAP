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

// Firebase.Database.Internal.Core.Repo/Runnable1028
struct Runnable1028_t2584253343;
// Firebase.Database.Internal.Core.Repo/TransactionData
struct TransactionData_t2143512465;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2143512465.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_DataSnapshot1287895350.h"

// System.Void Firebase.Database.Internal.Core.Repo/Runnable1028::.ctor(Firebase.Database.Internal.Core.Repo/TransactionData,Firebase.Database.DatabaseError,Firebase.Database.DataSnapshot)
extern "C"  void Runnable1028__ctor_m2818008026 (Runnable1028_t2584253343 * __this, TransactionData_t2143512465 * ___transaction0, DatabaseError_t1067746743 * ___callbackError1, DataSnapshot_t1287895350 * ___snapshot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo/Runnable1028::Run()
extern "C"  void Runnable1028_Run_m2480588641 (Runnable1028_t2584253343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
