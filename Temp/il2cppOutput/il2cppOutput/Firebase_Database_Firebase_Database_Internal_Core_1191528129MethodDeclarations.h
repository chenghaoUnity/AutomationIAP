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

// Firebase.Database.Internal.Core.Operation.Overwrite
struct Overwrite_t1191528129;
// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1017554386.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Core.Operation.Overwrite::.ctor(Firebase.Database.Internal.Core.Operation.OperationSource,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void Overwrite__ctor_m1768233184 (Overwrite_t1191528129 * __this, OperationSource_t1017554386 * ___source0, Path_t2568473163 * ___path1, Node_t2640059010 * ___snapshot2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.Operation.Overwrite::GetSnapshot()
extern "C"  Node_t2640059010 * Overwrite_GetSnapshot_m3446623559 (Overwrite_t1191528129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.Operation Firebase.Database.Internal.Core.Operation.Overwrite::OperationForChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Operation_t3598067969 * Overwrite_OperationForChild_m3503454166 (Overwrite_t1191528129 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Operation.Overwrite::ToString()
extern "C"  String_t* Overwrite_ToString_m3611848556 (Overwrite_t1191528129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
