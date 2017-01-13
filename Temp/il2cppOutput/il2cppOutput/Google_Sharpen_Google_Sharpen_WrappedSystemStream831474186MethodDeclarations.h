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

// Google.Sharpen.WrappedSystemStream
struct WrappedSystemStream_t831474186;
// Google.Sharpen.OutputStream
struct OutputStream_t3965982961;
// Google.Sharpen.InputStream
struct InputStream_t39831546;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Google_Sharpen_Google_Sharpen_OutputStream3965982961.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Google.Sharpen.WrappedSystemStream::.ctor(Google.Sharpen.OutputStream)
extern "C"  void WrappedSystemStream__ctor_m1111581482 (WrappedSystemStream_t831474186 * __this, OutputStream_t3965982961 * ___ost0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.InputStream Google.Sharpen.WrappedSystemStream::get_InputStream()
extern "C"  InputStream_t39831546 * WrappedSystemStream_get_InputStream_m1392393781 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.OutputStream Google.Sharpen.WrappedSystemStream::get_OutputStream()
extern "C"  OutputStream_t3965982961 * WrappedSystemStream_get_OutputStream_m3400254389 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.WrappedSystemStream::Close()
extern "C"  void WrappedSystemStream_Close_m272005259 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.WrappedSystemStream::Flush()
extern "C"  void WrappedSystemStream_Flush_m1200468305 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.Sharpen.WrappedSystemStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WrappedSystemStream_Read_m2861682160 (WrappedSystemStream_t831474186 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.Sharpen.WrappedSystemStream::ReadByte()
extern "C"  int32_t WrappedSystemStream_ReadByte_m3315122339 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.WrappedSystemStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t WrappedSystemStream_Seek_m1147066273 (WrappedSystemStream_t831474186 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.WrappedSystemStream::SetLength(System.Int64)
extern "C"  void WrappedSystemStream_SetLength_m2152649597 (WrappedSystemStream_t831474186 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.WrappedSystemStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void WrappedSystemStream_Write_m3867003807 (WrappedSystemStream_t831474186 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.WrappedSystemStream::WriteByte(System.Byte)
extern "C"  void WrappedSystemStream_WriteByte_m1464099403 (WrappedSystemStream_t831474186 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.WrappedSystemStream::get_CanRead()
extern "C"  bool WrappedSystemStream_get_CanRead_m1623840958 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.WrappedSystemStream::get_CanSeek()
extern "C"  bool WrappedSystemStream_get_CanSeek_m2551886154 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.WrappedSystemStream::get_CanWrite()
extern "C"  bool WrappedSystemStream_get_CanWrite_m2662893797 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.WrappedSystemStream::get_Length()
extern "C"  int64_t WrappedSystemStream_get_Length_m3562320249 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.WrappedSystemStream::get_Position()
extern "C"  int64_t WrappedSystemStream_get_Position_m309700588 (WrappedSystemStream_t831474186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.WrappedSystemStream::set_Position(System.Int64)
extern "C"  void WrappedSystemStream_set_Position_m2496636299 (WrappedSystemStream_t831474186 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
