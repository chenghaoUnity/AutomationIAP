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

// Firebase.Database.Internal.Core.Operation.Merge
struct Merge_t4207088346;
// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1017554386.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Core.Operation.Merge::.ctor(Firebase.Database.Internal.Core.Operation.OperationSource,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  void Merge__ctor_m2639358568 (Merge_t4207088346 * __this, OperationSource_t1017554386 * ___source0, Path_t2568473163 * ___path1, CompoundWrite_t496419158 * ___children2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.Operation.Merge::GetChildren()
extern "C"  CompoundWrite_t496419158 * Merge_GetChildren_m2023169664 (Merge_t4207088346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.Operation Firebase.Database.Internal.Core.Operation.Merge::OperationForChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Operation_t3598067969 * Merge_OperationForChild_m231305201 (Merge_t4207088346 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Operation.Merge::ToString()
extern "C"  String_t* Merge_ToString_m2661196037 (Merge_t4207088346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
