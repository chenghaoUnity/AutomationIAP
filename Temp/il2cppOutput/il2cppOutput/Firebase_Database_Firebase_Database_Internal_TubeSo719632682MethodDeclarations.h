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

// Firebase.Database.Internal.TubeSock.WebSocketReceiver
struct WebSocketReceiver_t719632682;
// Firebase.Database.Internal.TubeSock.WebSocket
struct WebSocket_t2930208447;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.Database.Internal.TubeSock.WebSocketException
struct WebSocketException_t780773228;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeS2930208447.h"
#include "mscorlib_System_IO_BinaryReader2491843768.h"
#include "Firebase_Database_Firebase_Database_Internal_TubeSo780773228.h"

// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::.ctor(Firebase.Database.Internal.TubeSock.WebSocket)
extern "C"  void WebSocketReceiver__ctor_m1740808454 (WebSocketReceiver_t719632682 * __this, WebSocket_t2930208447 * ___websocket0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::SetInput(System.IO.BinaryReader)
extern "C"  void WebSocketReceiver_SetInput_m852403413 (WebSocketReceiver_t719632682 * __this, BinaryReader_t2491843768 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::Run()
extern "C"  void WebSocketReceiver_Run_m4105729041 (WebSocketReceiver_t719632682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::AppendBytes(System.Boolean,System.Byte,System.Byte[])
extern "C"  void WebSocketReceiver_AppendBytes_m4217952018 (WebSocketReceiver_t719632682 * __this, bool ___fin0, uint8_t ___opcode1, ByteU5BU5D_t3397334013* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::HandlePing(System.Byte[])
extern "C"  void WebSocketReceiver_HandlePing_m124204169 (WebSocketReceiver_t719632682 * __this, ByteU5BU5D_t3397334013* ___payload0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.TubeSock.WebSocketReceiver::ParseLong(System.Byte[],System.Int32)
extern "C"  int64_t WebSocketReceiver_ParseLong_m983308288 (WebSocketReceiver_t719632682 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.TubeSock.WebSocketReceiver::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebSocketReceiver_Read_m756425391 (WebSocketReceiver_t719632682 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::Stopit()
extern "C"  void WebSocketReceiver_Stopit_m1770563269 (WebSocketReceiver_t719632682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketReceiver::HandleError(Firebase.Database.Internal.TubeSock.WebSocketException)
extern "C"  void WebSocketReceiver_HandleError_m92758773 (WebSocketReceiver_t719632682 * __this, WebSocketException_t780773228 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
