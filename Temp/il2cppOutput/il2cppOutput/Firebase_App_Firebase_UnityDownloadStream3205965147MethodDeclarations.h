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

// Firebase.UnityDownloadStream
struct UnityDownloadStream_t3205965147;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Boolean Firebase.UnityDownloadStream::ReceiveData(System.Byte[],System.Int32)
extern "C"  bool UnityDownloadStream_ReceiveData_m1845172324 (UnityDownloadStream_t3205965147 * __this, ByteU5BU5D_t3397334013* ___data0, int32_t ___dataLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::CompleteContent()
extern "C"  void UnityDownloadStream_CompleteContent_m4053627945 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::ReceiveContentLength(System.Int32)
extern "C"  void UnityDownloadStream_ReceiveContentLength_m4185953370 (UnityDownloadStream_t3205965147 * __this, int32_t ___contentLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::Dispose(System.Boolean)
extern "C"  void UnityDownloadStream_Dispose_m1037433029 (UnityDownloadStream_t3205965147 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::Flush()
extern "C"  void UnityDownloadStream_Flush_m4079837961 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.UnityDownloadStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnityDownloadStream_Read_m3691296292 (UnityDownloadStream_t3205965147 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.UnityDownloadStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t UnityDownloadStream_Seek_m56704085 (UnityDownloadStream_t3205965147 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::SetLength(System.Int64)
extern "C"  void UnityDownloadStream_SetLength_m2504080029 (UnityDownloadStream_t3205965147 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void UnityDownloadStream_Write_m3870116827 (UnityDownloadStream_t3205965147 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.UnityDownloadStream::get_CanRead()
extern "C"  bool UnityDownloadStream_get_CanRead_m3341972562 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.UnityDownloadStream::get_CanSeek()
extern "C"  bool UnityDownloadStream_get_CanSeek_m3140717254 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.UnityDownloadStream::get_CanWrite()
extern "C"  bool UnityDownloadStream_get_CanWrite_m744089833 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.UnityDownloadStream::get_Length()
extern "C"  int64_t UnityDownloadStream_get_Length_m3006658381 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.UnityDownloadStream::get_Position()
extern "C"  int64_t UnityDownloadStream_get_Position_m2552194688 (UnityDownloadStream_t3205965147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityDownloadStream::set_Position(System.Int64)
extern "C"  void UnityDownloadStream_set_Position_m3826165111 (UnityDownloadStream_t3205965147 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
