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

// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.RepoInfo
struct RepoInfo_t4079583710;
// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1318758358;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Connection.RangeMerge>
struct IList_1_t638965820;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// System.String
struct String_t;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;
// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t1450018638;
// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>
struct Tree_1_t3109747774;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>
struct IList_1_t2684453066;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4079583710.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3486154757.h"
#include "Firebase_Database_Firebase_Database_FirebaseDataba1318758358.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "Firebase_Database_Firebase_Database_DatabaseReferenc93014473.h"
#include "Firebase_Database_Firebase_Database_DatabaseError1067746743.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Core.Repo::.ctor(Firebase.Database.Internal.Core.RepoInfo,Firebase.Database.Internal.Core.Context,Firebase.Database.FirebaseDatabase)
extern "C"  void Repo__ctor_m265108600 (Repo_t1244308462 * __this, RepoInfo_t4079583710 * ___repoInfo0, Context_t3486154757 * ___ctx1, FirebaseDatabase_t1318758358 * ___firebaseDatabase2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnDataUpdate(System.Collections.Generic.IList`1<System.String>,System.Object,System.Boolean,System.Nullable`1<System.Int64>)
extern "C"  void Repo_OnDataUpdate_m1145147078 (Repo_t1244308462 * __this, Il2CppObject* ___pathSegments0, Il2CppObject * ___message1, bool ___isMerge2, Nullable_1_t3467111648  ___optTag3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnRangeMergeUpdate(System.Collections.Generic.IList`1<System.String>,System.Collections.Generic.IList`1<Firebase.Database.Internal.Connection.RangeMerge>,System.Nullable`1<System.Int64>)
extern "C"  void Repo_OnRangeMergeUpdate_m427301445 (Repo_t1244308462 * __this, Il2CppObject* ___pathSegments0, Il2CppObject* ___merges1, Nullable_1_t3467111648  ___tagNumber2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnConnect()
extern "C"  void Repo_OnConnect_m1823201404 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnDisconnect()
extern "C"  void Repo_OnDisconnect_m901068190 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnAuthStatus(System.Boolean)
extern "C"  void Repo_OnAuthStatus_m2043653239 (Repo_t1244308462 * __this, bool ___authOk0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnServerInfoUpdate(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Repo_OnServerInfoUpdate_m416260310 (Repo_t1244308462 * __this, Il2CppObject* ___updates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::DeferredInitialization()
extern "C"  void Repo_DeferredInitialization_m954833882 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::RestoreWrites(Firebase.Database.Internal.Core.Persistence.IPersistenceManager)
extern "C"  void Repo_RestoreWrites_m1089336723 (Repo_t1244308462 * __this, Il2CppObject * ___persistenceManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Repo::ToString()
extern "C"  String_t* Repo_ToString_m2845966028 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::ScheduleNow(Google.Sharpen.Runnable)
extern "C"  void Repo_ScheduleNow_m4057318837 (Repo_t1244308462 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::PostEvent(Google.Sharpen.Runnable)
extern "C"  void Repo_PostEvent_m1361361440 (Repo_t1244308462 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Core.Repo::GetServerTime()
extern "C"  int64_t Repo_GetServerTime_m1553030522 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::CallOnComplete(Firebase.Database.DatabaseReference/CompletionListener,Firebase.Database.DatabaseError,Firebase.Database.Internal.Core.Path)
extern "C"  void Repo_CallOnComplete_m372188836 (Repo_t1244308462 * __this, CompletionListener_t93014473 * ___onComplete0, DatabaseError_t1067746743 * ___error1, Path_t2568473163 * ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::AckWriteAndRerunTransactions(System.Int64,Firebase.Database.Internal.Core.Path,Firebase.Database.DatabaseError)
extern "C"  void Repo_AckWriteAndRerunTransactions_m2332899589 (Repo_t1244308462 * __this, int64_t ___writeId0, Path_t2568473163 * ___path1, DatabaseError_t1067746743 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::UpdateChildren(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite,Firebase.Database.DatabaseReference/CompletionListener,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Repo_UpdateChildren_m348888387 (Repo_t1244308462 * __this, Path_t2568473163 * ___path0, CompoundWrite_t496419158 * ___updates1, CompletionListener_t93014473 * ___onComplete2, Il2CppObject* ___unParsedUpdates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::RemoveEventCallback(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void Repo_RemoveEventCallback_m3307745599 (Repo_t1244308462 * __this, EventRegistration_t4222917807 * ___eventRegistration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::OnServerInfoUpdate(Firebase.Database.Internal.Snapshot.ChildKey,System.Object)
extern "C"  void Repo_OnServerInfoUpdate_m1544716358 (Repo_t1244308462 * __this, ChildKey_t1197802383 * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::AddEventCallback(Firebase.Database.Internal.Core.EventRegistration)
extern "C"  void Repo_AddEventCallback_m3722866814 (Repo_t1244308462 * __this, EventRegistration_t4222917807 * ___eventRegistration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::UpdateInfo(Firebase.Database.Internal.Snapshot.ChildKey,System.Object)
extern "C"  void Repo_UpdateInfo_m804342616 (Repo_t1244308462 * __this, ChildKey_t1197802383 * ___childKey0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Core.Repo::GetNextWriteId()
extern "C"  int64_t Repo_GetNextWriteId_m4287936085 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::RunOnDisconnectEvents()
extern "C"  void Repo_RunOnDisconnectEvents_m4165443366 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::WarnIfWriteFailed(System.String,Firebase.Database.Internal.Core.Path,Firebase.Database.DatabaseError)
extern "C"  void Repo_WarnIfWriteFailed_m3187740324 (Repo_t1244308462 * __this, String_t* ___writeType0, Path_t2568473163 * ___path1, DatabaseError_t1067746743 * ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.Repo::GetLatestState(Firebase.Database.Internal.Core.Path,System.Collections.Generic.IList`1<System.Int64>)
extern "C"  Node_t2640059010 * Repo_GetLatestState_m1321842707 (Repo_t1244308462 * __this, Path_t2568473163 * ___path0, Il2CppObject* ___excudeSets1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::SendAllReadyTransactions()
extern "C"  void Repo_SendAllReadyTransactions_m3443316520 (Repo_t1244308462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::SendReadyTransactions(Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>)
extern "C"  void Repo_SendReadyTransactions_m34132656 (Repo_t1244308462 * __this, Tree_1_t3109747774 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::SendTransactionQueue(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>,Firebase.Database.Internal.Core.Path)
extern "C"  void Repo_SendTransactionQueue_m3330471129 (Repo_t1244308462 * __this, Il2CppObject* ___queue0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::PruneCompletedTransactions(Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>)
extern "C"  void Repo_PruneCompletedTransactions_m1648473908 (Repo_t1244308462 * __this, Tree_1_t3109747774 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::RerunTransactions(Firebase.Database.Internal.Core.Path)
extern "C"  void Repo_RerunTransactions_m1094855469 (Repo_t1244308462 * __this, Path_t2568473163 * ___changedPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::RerunTransactionQueue(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>,Firebase.Database.Internal.Core.Path)
extern "C"  void Repo_RerunTransactionQueue_m1266321015 (Repo_t1244308462 * __this, Il2CppObject* ___queue0, Path_t2568473163 * ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>> Firebase.Database.Internal.Core.Repo::GetAncestorTransactionNode(Firebase.Database.Internal.Core.Path)
extern "C"  Tree_1_t3109747774 * Repo_GetAncestorTransactionNode_m4265962651 (Repo_t1244308462 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData> Firebase.Database.Internal.Core.Repo::BuildTransactionQueue(Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>)
extern "C"  Il2CppObject* Repo_BuildTransactionQueue_m348589088 (Repo_t1244308462 * __this, Tree_1_t3109747774 * ___transactionNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::AggregateTransactionQueues(System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>,Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>)
extern "C"  void Repo_AggregateTransactionQueues_m3639419435 (Repo_t1244308462 * __this, Il2CppObject* ___queue0, Tree_1_t3109747774 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Repo::AbortTransactions(Firebase.Database.Internal.Core.Path,System.Int32)
extern "C"  Path_t2568473163 * Repo_AbortTransactions_m1517130716 (Repo_t1244308462 * __this, Path_t2568473163 * ___path0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Repo::AbortTransactionsAtNode(Firebase.Database.Internal.Core.Utilities.Tree`1<System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>>,System.Int32)
extern "C"  void Repo_AbortTransactionsAtNode_m257246085 (Repo_t1244308462 * __this, Tree_1_t3109747774 * ___node0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.Repo::FromErrorCode(System.String,System.String)
extern "C"  DatabaseError_t1067746743 * Repo_FromErrorCode_m2851186640 (Il2CppObject * __this /* static, unused */, String_t* ___optErrorCode0, String_t* ___optErrorReason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
