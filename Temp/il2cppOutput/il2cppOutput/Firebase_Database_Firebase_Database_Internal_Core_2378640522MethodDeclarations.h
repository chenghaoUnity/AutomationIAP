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

// Firebase.Database.Internal.Core.Operation.ListenComplete
struct ListenComplete_t2378640522;
// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1017554386.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Core.Operation.ListenComplete::.ctor(Firebase.Database.Internal.Core.Operation.OperationSource,Firebase.Database.Internal.Core.Path)
extern "C"  void ListenComplete__ctor_m4175218180 (ListenComplete_t2378640522 * __this, OperationSource_t1017554386 * ___source0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.Operation Firebase.Database.Internal.Core.Operation.ListenComplete::OperationForChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Operation_t3598067969 * ListenComplete_OperationForChild_m2428592125 (ListenComplete_t2378640522 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Operation.ListenComplete::ToString()
extern "C"  String_t* ListenComplete_ToString_m3155801241 (ListenComplete_t2378640522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
