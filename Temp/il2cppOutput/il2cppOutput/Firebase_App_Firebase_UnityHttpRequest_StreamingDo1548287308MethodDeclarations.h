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

// Firebase.UnityHttpRequest/StreamingDownloadHandler
struct StreamingDownloadHandler_t1548287308;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.UnityHttpRequest/StreamingDownloadHandler::CompleteContent()
extern "C"  void StreamingDownloadHandler_CompleteContent_m3712720995 (StreamingDownloadHandler_t1548287308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityHttpRequest/StreamingDownloadHandler::ReceiveContentLength(System.Int32)
extern "C"  void StreamingDownloadHandler_ReceiveContentLength_m1673443460 (StreamingDownloadHandler_t1548287308 * __this, int32_t ___contentLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.UnityHttpRequest/StreamingDownloadHandler::ReceiveData(System.Byte[],System.Int32)
extern "C"  bool StreamingDownloadHandler_ReceiveData_m3730863066 (StreamingDownloadHandler_t1548287308 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
