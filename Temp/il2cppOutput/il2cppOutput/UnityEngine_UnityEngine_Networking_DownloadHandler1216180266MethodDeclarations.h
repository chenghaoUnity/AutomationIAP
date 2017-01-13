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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1216180266;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
struct DownloadHandler_t1216180266_marshaled_pinvoke;
struct DownloadHandler_t1216180266_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C"  void DownloadHandler__ctor_m328121149 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalCreateBuffer()
extern "C"  void DownloadHandler_InternalCreateBuffer_m3933395410 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::InternalDestroy()
extern "C"  void DownloadHandler_InternalDestroy_m761762988 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C"  void DownloadHandler_Finalize_m3781185347 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C"  void DownloadHandler_Dispose_m2043077428 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C"  String_t* DownloadHandler_get_text_m1879851762 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
extern "C"  ByteU5BU5D_t3397334013* DownloadHandler_GetData_m2540814391 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.DownloadHandler::GetText()
extern "C"  String_t* DownloadHandler_GetText_m1427628811 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.DownloadHandler::ReceiveData(System.Byte[],System.Int32)
extern "C"  bool DownloadHandler_ReceiveData_m2362198966 (DownloadHandler_t1216180266 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32)
extern "C"  void DownloadHandler_ReceiveContentLength_m3588122286 (DownloadHandler_t1216180266 * __this, int32_t ___contentLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.DownloadHandler::CompleteContent()
extern "C"  void DownloadHandler_CompleteContent_m156041789 (DownloadHandler_t1216180266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DownloadHandler_t1216180266;
struct DownloadHandler_t1216180266_marshaled_pinvoke;

extern "C" void DownloadHandler_t1216180266_marshal_pinvoke(const DownloadHandler_t1216180266& unmarshaled, DownloadHandler_t1216180266_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t1216180266_marshal_pinvoke_back(const DownloadHandler_t1216180266_marshaled_pinvoke& marshaled, DownloadHandler_t1216180266& unmarshaled);
extern "C" void DownloadHandler_t1216180266_marshal_pinvoke_cleanup(DownloadHandler_t1216180266_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DownloadHandler_t1216180266;
struct DownloadHandler_t1216180266_marshaled_com;

extern "C" void DownloadHandler_t1216180266_marshal_com(const DownloadHandler_t1216180266& unmarshaled, DownloadHandler_t1216180266_marshaled_com& marshaled);
extern "C" void DownloadHandler_t1216180266_marshal_com_back(const DownloadHandler_t1216180266_marshaled_com& marshaled, DownloadHandler_t1216180266& unmarshaled);
extern "C" void DownloadHandler_t1216180266_marshal_com_cleanup(DownloadHandler_t1216180266_marshaled_com& marshaled);
