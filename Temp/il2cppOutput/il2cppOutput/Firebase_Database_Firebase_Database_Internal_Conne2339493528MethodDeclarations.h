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

// Firebase.Database.Internal.Connection.Connection
struct Connection_t2339493528;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// System.String
struct String_t;
// Firebase.Database.Internal.Connection.Connection/IDelegate
struct IDelegate_t2674759336;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Connec671917741.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2292118836.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne1942506794.h"

// System.Void Firebase.Database.Internal.Connection.Connection::.ctor(Firebase.Database.Internal.Connection.ConnectionContext,Firebase.Database.Internal.Connection.HostInfo,System.String,Firebase.Database.Internal.Connection.Connection/IDelegate,System.String)
extern "C"  void Connection__ctor_m476740631 (Connection_t2339493528 * __this, ConnectionContext_t671917741 * ___context0, HostInfo_t2292118836 * ___hostInfo1, String_t* ___cachedHost2, Il2CppObject * ___delegate_3, String_t* ___optLastSessionId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnMessage(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Connection_OnMessage_m3567425786 (Connection_t2339493528 * __this, Il2CppObject* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnDisconnect(System.Boolean)
extern "C"  void Connection_OnDisconnect_m4056635858 (Connection_t2339493528 * __this, bool ___wasEverConnected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::Open()
extern "C"  void Connection_Open_m3327637420 (Connection_t2339493528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::Close(Firebase.Database.Internal.Connection.Connection/DisconnectReason)
extern "C"  void Connection_Close_m2043513602 (Connection_t2339493528 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::Close()
extern "C"  void Connection_Close_m3854225578 (Connection_t2339493528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::SendRequest(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void Connection_SendRequest_m3692378078 (Connection_t2339493528 * __this, Il2CppObject* ___message0, bool ___isSensitive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnDataMessage(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Connection_OnDataMessage_m3348345162 (Connection_t2339493528 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnControlMessage(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Connection_OnControlMessage_m2116189641 (Connection_t2339493528 * __this, Il2CppObject* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnConnectionShutdown(System.String)
extern "C"  void Connection_OnConnectionShutdown_m3634856223 (Connection_t2339493528 * __this, String_t* ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnHandshake(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void Connection_OnHandshake_m2747292412 (Connection_t2339493528 * __this, Il2CppObject* ___handshake0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnConnectionReady(System.Int64,System.String)
extern "C"  void Connection_OnConnectionReady_m1934225382 (Connection_t2339493528 * __this, int64_t ___timestamp0, String_t* ___sessionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::OnReset(System.String)
extern "C"  void Connection_OnReset_m3064536372 (Connection_t2339493528 * __this, String_t* ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Connection::SendData(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Boolean)
extern "C"  void Connection_SendData_m139718731 (Connection_t2339493528 * __this, Il2CppObject* ___data0, bool ___isSensitive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
