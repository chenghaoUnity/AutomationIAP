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

// Firebase.Database.Internal.Connection.PersistentConnectionImpl
struct PersistentConnectionImpl_t1099507887;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// Firebase.Database.Internal.Connection.PersistentConnection/IDelegate
struct IDelegate_t3654812693;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Internal.Connection.IListenHashProvider
struct IListenHashProvider_t1509816543;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;
// System.Object
struct Il2CppObject;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen
struct OutstandingListen_t67058648;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec
struct ListenQuerySpec_t2050960365;
// System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen>
struct ICollection_1_t1019133953;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1985740131;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/IConnectionRequestCallback
struct IConnectionRequestCallback_t2235793546;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Connec671917741.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2292118836.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne1942506794.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Connect67058648.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2050960365.h"

// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::.ctor(Firebase.Database.Internal.Connection.ConnectionContext,Firebase.Database.Internal.Connection.HostInfo,Firebase.Database.Internal.Connection.PersistentConnection/IDelegate)
extern "C"  void PersistentConnectionImpl__ctor_m125459399 (PersistentConnectionImpl_t1099507887 * __this, ConnectionContext_t671917741 * ___context0, HostInfo_t2292118836 * ___info1, Il2CppObject * ___delegate_2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnReady(System.Int64,System.String)
extern "C"  void PersistentConnectionImpl_OnReady_m351187453 (PersistentConnectionImpl_t1099507887 * __this, int64_t ___timestamp0, String_t* ___sessionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnCacheHost(System.String)
extern "C"  void PersistentConnectionImpl_OnCacheHost_m3480153602 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnDataMessage(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void PersistentConnectionImpl_OnDataMessage_m1557601011 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnDisconnect(Firebase.Database.Internal.Connection.Connection/DisconnectReason)
extern "C"  void PersistentConnectionImpl_OnDisconnect_m2428655360 (PersistentConnectionImpl_t1099507887 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnKill(System.String)
extern "C"  void PersistentConnectionImpl_OnKill_m315379024 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Listen(System.Collections.Generic.IList`1<System.String>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Connection.IListenHashProvider,System.Nullable`1<System.Int64>,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void PersistentConnectionImpl_Listen_m4081602565 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, Il2CppObject* ___queryParams1, Il2CppObject * ___currentHashFn2, Nullable_1_t3467111648  ___tag3, Il2CppObject * ___listener4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Initialize()
extern "C"  void PersistentConnectionImpl_Initialize_m2782241387 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Put(System.Collections.Generic.IList`1<System.String>,System.Object,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void PersistentConnectionImpl_Put_m772944840 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, Il2CppObject * ___data1, Il2CppObject * ___onComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::CompareAndPut(System.Collections.Generic.IList`1<System.String>,System.Object,System.String,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void PersistentConnectionImpl_CompareAndPut_m3612515540 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, Il2CppObject * ___data1, String_t* ___hash2, Il2CppObject * ___onComplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Merge(System.Collections.Generic.IList`1<System.String>,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void PersistentConnectionImpl_Merge_m1384329533 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, Il2CppObject* ___data1, Il2CppObject * ___onComplete2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Unlisten(System.Collections.Generic.IList`1<System.String>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void PersistentConnectionImpl_Unlisten_m3136987784 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, Il2CppObject* ___queryParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::Connected()
extern "C"  bool PersistentConnectionImpl_Connected_m2240791006 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::CanSendWrites()
extern "C"  bool PersistentConnectionImpl_CanSendWrites_m2484138393 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Interrupt(System.String)
extern "C"  void PersistentConnectionImpl_Interrupt_m2379581926 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::Resume(System.String)
extern "C"  void PersistentConnectionImpl_Resume_m2390201738 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::IsInterrupted(System.String)
extern "C"  bool PersistentConnectionImpl_IsInterrupted_m3054186857 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::ShouldReconnect()
extern "C"  bool PersistentConnectionImpl_ShouldReconnect_m1820855387 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::RefreshAuthToken()
extern "C"  void PersistentConnectionImpl_RefreshAuthToken_m420505253 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::TryScheduleReconnect()
extern "C"  void PersistentConnectionImpl_TryScheduleReconnect_m3650418066 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OpenNetworkConnection(System.String)
extern "C"  void PersistentConnectionImpl_OpenNetworkConnection_m2503989741 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendOnDisconnect(System.String,System.Collections.Generic.IList`1<System.String>,System.Object,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void PersistentConnectionImpl_SendOnDisconnect_m2280997644 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___action0, Il2CppObject* ___path1, Il2CppObject * ___data2, Il2CppObject * ___onComplete3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::CancelTransactions()
extern "C"  void PersistentConnectionImpl_CancelTransactions_m327307556 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendUnlisten(Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen)
extern "C"  void PersistentConnectionImpl_SendUnlisten_m1394567267 (PersistentConnectionImpl_t1099507887 * __this, OutstandingListen_t67058648 * ___listen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen Firebase.Database.Internal.Connection.PersistentConnectionImpl::RemoveListen(Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec)
extern "C"  OutstandingListen_t67058648 * PersistentConnectionImpl_RemoveListen_m917485496 (PersistentConnectionImpl_t1099507887 * __this, ListenQuerySpec_t2050960365 * ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen> Firebase.Database.Internal.Connection.PersistentConnectionImpl::RemoveListens(System.Collections.Generic.IList`1<System.String>)
extern "C"  Il2CppObject* PersistentConnectionImpl_RemoveListens_m2122131674 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnDataPush(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void PersistentConnectionImpl_OnDataPush_m2647859534 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___action0, Il2CppObject* ___body1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnListenRevoked(System.Collections.Generic.IList`1<System.String>)
extern "C"  void PersistentConnectionImpl_OnListenRevoked_m790270482 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnAuthRevoked(System.String,System.String)
extern "C"  void PersistentConnectionImpl_OnAuthRevoked_m2865307094 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___errorCode0, String_t* ___errorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::OnSecurityDebugPacket(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void PersistentConnectionImpl_OnSecurityDebugPacket_m1491208715 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendAuthAndRestoreState()
extern "C"  void PersistentConnectionImpl_SendAuthAndRestoreState_m3254261751 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendAuthHelper(System.Boolean)
extern "C"  void PersistentConnectionImpl_SendAuthHelper_m3915238570 (PersistentConnectionImpl_t1099507887 * __this, bool ___restoreStateAfterComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::RestoreAuth()
extern "C"  void PersistentConnectionImpl_RestoreAuth_m2765679971 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::RestoreState()
extern "C"  void PersistentConnectionImpl_RestoreState_m2811065244 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::HandleTimestamp(System.Int64)
extern "C"  void PersistentConnectionImpl_HandleTimestamp_m3863555921 (PersistentConnectionImpl_t1099507887 * __this, int64_t ___timestamp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Connection.PersistentConnectionImpl::GetPutObject(System.Collections.Generic.IList`1<System.String>,System.Object,System.String)
extern "C"  Il2CppObject* PersistentConnectionImpl_GetPutObject_m892933117 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___path0, Il2CppObject * ___data1, String_t* ___hash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::PutInternal(System.String,System.Collections.Generic.IList`1<System.String>,System.Object,System.String,Firebase.Database.Internal.Connection.IRequestResultCallback)
extern "C"  void PersistentConnectionImpl_PutInternal_m2134143047 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___action0, Il2CppObject* ___path1, Il2CppObject * ___data2, String_t* ___hash3, Il2CppObject * ___onComplete4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendPut(System.Int64)
extern "C"  void PersistentConnectionImpl_SendPut_m188160084 (PersistentConnectionImpl_t1099507887 * __this, int64_t ___putId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendListen(Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen)
extern "C"  void PersistentConnectionImpl_SendListen_m431789586 (PersistentConnectionImpl_t1099507887 * __this, OutstandingListen_t67058648 * ___listen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendStats(System.Collections.Generic.IDictionary`2<System.String,System.Int32>)
extern "C"  void PersistentConnectionImpl_SendStats_m443487063 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___stats0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::WarnOnListenerWarnings(System.Collections.Generic.IList`1<System.Object>,Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec)
extern "C"  void PersistentConnectionImpl_WarnOnListenerWarnings_m1598206265 (PersistentConnectionImpl_t1099507887 * __this, Il2CppObject* ___warnings0, ListenQuerySpec_t2050960365 * ___query1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendConnectStats()
extern "C"  void PersistentConnectionImpl_SendConnectStats_m2054820812 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendAction(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Connection.PersistentConnectionImpl/IConnectionRequestCallback)
extern "C"  void PersistentConnectionImpl_SendAction_m1855733271 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___action0, Il2CppObject* ___message1, Il2CppObject * ___onResponse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::SendSensitive(System.String,System.Boolean,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Firebase.Database.Internal.Connection.PersistentConnectionImpl/IConnectionRequestCallback)
extern "C"  void PersistentConnectionImpl_SendSensitive_m3640639040 (PersistentConnectionImpl_t1099507887 * __this, String_t* ___action0, bool ___isSensitive1, Il2CppObject* ___message2, Il2CppObject * ___onResponse3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl::NextRequestNumber()
extern "C"  int64_t PersistentConnectionImpl_NextRequestNumber_m1568503451 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.PersistentConnectionImpl::DoIdleCheck()
extern "C"  void PersistentConnectionImpl_DoIdleCheck_m3361167182 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::IsIdle()
extern "C"  bool PersistentConnectionImpl_IsIdle_m3867674977 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl::IdleHasTimedOut()
extern "C"  bool PersistentConnectionImpl_IdleHasTimedOut_m3989552862 (PersistentConnectionImpl_t1099507887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
