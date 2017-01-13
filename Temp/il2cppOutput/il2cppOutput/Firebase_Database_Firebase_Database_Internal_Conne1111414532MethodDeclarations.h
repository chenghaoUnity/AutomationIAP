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

// Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock
struct WsClientTubesock_t1111414532;
// Firebase.Database.Internal.Connection.WebsocketConnection
struct WebsocketConnection_t1372375221;
// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;
// Firebase.Database.Internal.TubeSock.WebSocketMessage
struct WebSocketMessage_t2830312828;
// Firebase.Database.Internal.TubeSock.WebSocketException
struct WebSocketException_t780773228;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne1372375221.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeS2930208447.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeS2830312828.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeSo780773228.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::.ctor(Firebase.Database.Internal.Connection.WebsocketConnection,Firebase.Database.Internal.TubeSock.WebSocket)
extern "C"  void WsClientTubesock__ctor_m751450057 (WsClientTubesock_t1111414532 * __this, WebsocketConnection_t1372375221 * ___enclosing0, WebSocket_t2930208447 * ___ws1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::OnOpen()
extern "C"  void WsClientTubesock_OnOpen_m3680364018 (WsClientTubesock_t1111414532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::OnMessage(Firebase.Database.Internal.TubeSock.WebSocketMessage)
extern "C"  void WsClientTubesock_OnMessage_m2734090310 (WsClientTubesock_t1111414532 * __this, WebSocketMessage_t2830312828 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::OnClose()
extern "C"  void WsClientTubesock_OnClose_m3154759184 (WsClientTubesock_t1111414532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::OnError(Firebase.Database.Internal.TubeSock.WebSocketException)
extern "C"  void WsClientTubesock_OnError_m1124656701 (WsClientTubesock_t1111414532 * __this, WebSocketException_t780773228 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::Send(System.String)
extern "C"  void WsClientTubesock_Send_m1459145945 (WsClientTubesock_t1111414532 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::Close()
extern "C"  void WsClientTubesock_Close_m2955507749 (WsClientTubesock_t1111414532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::Connect()
extern "C"  void WsClientTubesock_Connect_m3352065753 (WsClientTubesock_t1111414532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection/WsClientTubesock::Shutdown()
extern "C"  void WsClientTubesock_Shutdown_m570402867 (WsClientTubesock_t1111414532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
