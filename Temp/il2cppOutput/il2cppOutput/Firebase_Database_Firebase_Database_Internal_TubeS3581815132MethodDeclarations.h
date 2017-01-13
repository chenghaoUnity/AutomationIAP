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

// Firebase.Database.Internal.TubeSock.WebSocketWriter
struct WebSocketWriter_t3581815132;
// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.Database.Internal.TubeSock.WebSocketException
struct WebSocketException_t780773228;
// Google.Sharpen.Thread
struct Thread_t1322377586;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeS2930208447.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeSo780773228.h"

// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::.ctor(Firebase.Database.Internal.TubeSock.WebSocket,System.String,System.Int32)
extern "C"  void WebSocketWriter__ctor_m3392528645 (WebSocketWriter_t3581815132 * __this, WebSocket_t2930208447 * ___websocket0, String_t* ___threadBaseName1, int32_t ___clientId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::SetOutput(System.IO.Stream)
extern "C"  void WebSocketWriter_SetOutput_m3195758100 (WebSocketWriter_t3581815132 * __this, Stream_t3255436806 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream Firebase.Database.Internal.TubeSock.WebSocketWriter::FrameInBuffer(System.Byte,System.Boolean,System.Byte[])
extern "C"  MemoryStream_t743994179 * WebSocketWriter_FrameInBuffer_m2620571448 (WebSocketWriter_t3581815132 * __this, uint8_t ___opcode0, bool ___masking1, ByteU5BU5D_t3397334013* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Firebase.Database.Internal.TubeSock.WebSocketWriter::GenerateMask()
extern "C"  ByteU5BU5D_t3397334013* WebSocketWriter_GenerateMask_m3166092345 (WebSocketWriter_t3581815132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::Send(System.Byte,System.Boolean,System.Byte[])
extern "C"  void WebSocketWriter_Send_m2307170695 (WebSocketWriter_t3581815132 * __this, uint8_t ___opcode0, bool ___masking1, ByteU5BU5D_t3397334013* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::WriteMessage()
extern "C"  void WebSocketWriter_WriteMessage_m2437969102 (WebSocketWriter_t3581815132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::StopIt()
extern "C"  void WebSocketWriter_StopIt_m1841309247 (WebSocketWriter_t3581815132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::HandleError(Firebase.Database.Internal.TubeSock.WebSocketException)
extern "C"  void WebSocketWriter_HandleError_m3687856419 (WebSocketWriter_t3581815132 * __this, WebSocketException_t780773228 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketWriter::RunWriter()
extern "C"  void WebSocketWriter_RunWriter_m1876030796 (WebSocketWriter_t3581815132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Thread Firebase.Database.Internal.TubeSock.WebSocketWriter::GetInnerThread()
extern "C"  Thread_t1322377586 * WebSocketWriter_GetInnerThread_m3361571747 (WebSocketWriter_t3581815132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
