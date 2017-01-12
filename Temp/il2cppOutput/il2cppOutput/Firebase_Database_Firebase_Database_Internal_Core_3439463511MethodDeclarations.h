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

// Firebase.Database.Internal.Core.Operation.AckUserWrite
struct AckUserWrite_t3439463511;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>
struct ImmutableTree_1_t368550071;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"

// System.Void Firebase.Database.Internal.Core.Operation.AckUserWrite::.ctor(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>,System.Boolean)
extern "C"  void AckUserWrite__ctor_m2151284528 (AckUserWrite_t3439463511 * __this, Path_t2568473163 * ___path0, ImmutableTree_1_t368550071 * ___affectedTree1, bool ___revert2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>> Firebase.Database.Internal.Core.Operation.AckUserWrite::GetAffectedTree()
extern "C"  ImmutableTree_1_t368550071 * AckUserWrite_GetAffectedTree_m67680967 (AckUserWrite_t3439463511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Operation.AckUserWrite::IsRevert()
extern "C"  bool AckUserWrite_IsRevert_m1800055463 (AckUserWrite_t3439463511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Operation.Operation Firebase.Database.Internal.Core.Operation.AckUserWrite::OperationForChild(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Operation_t3598067969 * AckUserWrite_OperationForChild_m3879684362 (AckUserWrite_t3439463511 * __this, ChildKey_t1197802383 * ___childKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Operation.AckUserWrite::ToString()
extern "C"  String_t* AckUserWrite_ToString_m2062198956 (AckUserWrite_t3439463511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
