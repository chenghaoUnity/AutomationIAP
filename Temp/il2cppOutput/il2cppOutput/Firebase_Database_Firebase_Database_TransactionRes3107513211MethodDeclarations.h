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

// Firebase.Database.TransactionResult
struct TransactionResult_t3107513211;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// System.Void Firebase.Database.TransactionResult::.ctor(System.Boolean,Firebase.Database.Internal.Snapshot.Node)
extern "C"  void TransactionResult__ctor_m3675941714 (TransactionResult_t3107513211 * __this, bool ___success0, Node_t2640059010 * ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.TransactionResult Firebase.Database.TransactionResult::Abort()
extern "C"  TransactionResult_t3107513211 * TransactionResult_Abort_m4100384024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.TransactionResult::get_IsSuccess()
extern "C"  bool TransactionResult_get_IsSuccess_m4089932392 (TransactionResult_t3107513211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.TransactionResult::set_IsSuccess(System.Boolean)
extern "C"  void TransactionResult_set_IsSuccess_m2588346787 (TransactionResult_t3107513211 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.TransactionResult::GetNode()
extern "C"  Node_t2640059010 * TransactionResult_GetNode_m3691402376 (TransactionResult_t3107513211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
