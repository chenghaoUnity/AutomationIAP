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

// Firebase.Database.Internal.Connection.WebsocketConnection
struct WebsocketConnection_t1372375221;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// System.String
struct String_t;
// Firebase.Database.Internal.Connection.WebsocketConnection/IDelegate
struct IDelegate_t529353265;
// Firebase.Database.Internal.Connection.WebsocketConnection/IWsClient
struct IWsClient_t3032876639;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Connec671917741.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2292118836.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::.ctor(Firebase.Database.Internal.Connection.ConnectionContext,Firebase.Database.Internal.Connection.HostInfo,System.String,Firebase.Database.Internal.Connection.WebsocketConnection/IDelegate,System.String)
extern "C"  void WebsocketConnection__ctor_m1164574831 (WebsocketConnection_t1372375221 * __this, ConnectionContext_t671917741 * ___connectionContext0, HostInfo_t2292118836 * ___hostInfo1, String_t* ___optCachedHost2, Il2CppObject * ___delegate_3, String_t* ___optLastSessionId4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.WebsocketConnection/IWsClient Firebase.Database.Internal.Connection.WebsocketConnection::CreateConnection(Firebase.Database.Internal.Connection.HostInfo,System.String,System.String)
extern "C"  Il2CppObject * WebsocketConnection_CreateConnection_m175981102 (WebsocketConnection_t1372375221 * __this, HostInfo_t2292118836 * ___hostInfo0, String_t* ___optCachedHost1, String_t* ___optLastSessionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::Open()
extern "C"  void WebsocketConnection_Open_m2012861891 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::Start()
extern "C"  void WebsocketConnection_Start_m3137688627 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::Close()
extern "C"  void WebsocketConnection_Close_m118823577 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::Send(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void WebsocketConnection_Send_m1587839653 (WebsocketConnection_t1372375221 * __this, Il2CppObject* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::AppendFrame(System.String)
extern "C"  void WebsocketConnection_AppendFrame_m4065740730 (WebsocketConnection_t1372375221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::HandleNewFrameCount(System.Int32)
extern "C"  void WebsocketConnection_HandleNewFrameCount_m2680505564 (WebsocketConnection_t1372375221 * __this, int32_t ___numFrames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.WebsocketConnection::ExtractFrameCount(System.String)
extern "C"  String_t* WebsocketConnection_ExtractFrameCount_m2663735987 (WebsocketConnection_t1372375221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::HandleIncomingFrame(System.String)
extern "C"  void WebsocketConnection_HandleIncomingFrame_m1765747600 (WebsocketConnection_t1372375221 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::ResetKeepAlive()
extern "C"  void WebsocketConnection_ResetKeepAlive_m1392830790 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Runnable Firebase.Database.Internal.Connection.WebsocketConnection::Nop()
extern "C"  Il2CppObject * WebsocketConnection_Nop_m31839742 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Connection.WebsocketConnection::IsBuffering()
extern "C"  bool WebsocketConnection_IsBuffering_m1259547277 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::OnClosed()
extern "C"  void WebsocketConnection_OnClosed_m147378144 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::Shutdown()
extern "C"  void WebsocketConnection_Shutdown_m407881187 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.WebsocketConnection::CloseIfNeverConnected()
extern "C"  void WebsocketConnection_CloseIfNeverConnected_m2163856803 (WebsocketConnection_t1372375221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Firebase.Database.Internal.Connection.WebsocketConnection::SplitIntoFrames(System.String,System.Int32)
extern "C"  StringU5BU5D_t1642385972* WebsocketConnection_SplitIntoFrames_m2533395839 (Il2CppObject * __this /* static, unused */, String_t* ___src0, int32_t ___maxFrameSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
