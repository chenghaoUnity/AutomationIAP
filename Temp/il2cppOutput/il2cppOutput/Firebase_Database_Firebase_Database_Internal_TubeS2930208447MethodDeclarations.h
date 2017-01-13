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

// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;
// Firebase.Database.Internal.TubeSock.IThreadInitializer
struct IThreadInitializer_t1126722907;
// System.Exception
struct Exception_t1927440687;
// Firebase.Database.Internal.TubeSock.IWebSocketEventHandler
struct IWebSocketEventHandler_t1069955734;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.Database.Internal.TubeSock.WebSocketException
struct WebSocketException_t780773228;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// Google.Sharpen.Thread
struct Thread_t1322377586;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Loggin438307305.h"
#include "mscorlib_System_Exception1927440687.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeSo780773228.h"

// System.Void Firebase.Database.Internal.TubeSock.WebSocket::.cctor()
extern "C"  void WebSocket__cctor_m2768364978 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::.ctor(System.Uri,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,Firebase.Database.Internal.Logging.LogWrapper)
extern "C"  void WebSocket__ctor_m922049331 (WebSocket_t2930208447 * __this, Uri_t19570940 * ___url0, String_t* ___protocol1, Il2CppObject* ___extraHeaders2, LogWrapper_t438307305 * ___logger3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.TubeSock.WebSocket::get_SupportsIPv6()
extern "C"  bool WebSocket_get_SupportsIPv6_m4250364133 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.ThreadFactory Firebase.Database.Internal.TubeSock.WebSocket::GetThreadFactory()
extern "C"  ThreadFactory_t1392637388 * WebSocket_GetThreadFactory_m2585063558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.TubeSock.IThreadInitializer Firebase.Database.Internal.TubeSock.WebSocket::GetIntializer()
extern "C"  Il2CppObject * WebSocket_GetIntializer_m3509766927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::LogError(System.String,System.Exception)
extern "C"  void WebSocket_LogError_m2961695135 (WebSocket_t2930208447 * __this, String_t* ___error0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::LogInfo(System.String)
extern "C"  void WebSocket_LogInfo_m2172341349 (WebSocket_t2930208447 * __this, String_t* ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::setEventHandler(Firebase.Database.Internal.TubeSock.IWebSocketEventHandler)
extern "C"  void WebSocket_setEventHandler_m1938247614 (WebSocket_t2930208447 * __this, Il2CppObject * ___eventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.TubeSock.IWebSocketEventHandler Firebase.Database.Internal.TubeSock.WebSocket::getEventHandler()
extern "C"  Il2CppObject * WebSocket_getEventHandler_m3130466637 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::Connect()
extern "C"  void WebSocket_Connect_m3776147487 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::Send(System.String)
extern "C"  void WebSocket_Send_m2143133771 (WebSocket_t2930208447 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::Pong(System.Byte[])
extern "C"  void WebSocket_Pong_m1698842068 (WebSocket_t2930208447 * __this, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::Send(System.Byte,System.Byte[])
extern "C"  void WebSocket_Send_m3836785703 (WebSocket_t2930208447 * __this, uint8_t ___opcode0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::HandleReceiverError(Firebase.Database.Internal.TubeSock.WebSocketException)
extern "C"  void WebSocket_HandleReceiverError_m1162369845 (WebSocket_t2930208447 * __this, WebSocketException_t780773228 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::Close()
extern "C"  void WebSocket_Close_m3259270779 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::OnCloseOpReceived()
extern "C"  void WebSocket_OnCloseOpReceived_m2769508824 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::CloseSocket()
extern "C"  void WebSocket_CloseSocket_m1983424126 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::SendCloseHandshake()
extern "C"  void WebSocket_SendCloseHandshake_m1782436216 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient Firebase.Database.Internal.TubeSock.WebSocket::CreateSocket()
extern "C"  TcpClient_t408947970 * WebSocket_CreateSocket_m1662399859 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress Firebase.Database.Internal.TubeSock.WebSocket::GetIpAddress(System.String)
extern "C"  IPAddress_t1399971723 * WebSocket_GetIpAddress_m3715438650 (WebSocket_t2930208447 * __this, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::BlockClose()
extern "C"  void WebSocket_BlockClose_m746713480 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocket::RunReader()
extern "C"  void WebSocket_RunReader_m2421934273 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Thread Firebase.Database.Internal.TubeSock.WebSocket::GetInnerThread()
extern "C"  Thread_t1322377586 * WebSocket_GetInnerThread_m2370228160 (WebSocket_t2930208447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
