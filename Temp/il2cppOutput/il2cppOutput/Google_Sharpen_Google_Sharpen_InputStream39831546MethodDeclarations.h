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

// Google.Sharpen.InputStream
struct InputStream_t39831546;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Google.Sharpen.InputStream::Close()
extern "C"  void InputStream_Close_m3783899325 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.InputStream::Dispose()
extern "C"  void InputStream_Dispose_m3563141700 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Google.Sharpen.InputStream::GetNativeStream()
extern "C"  Stream_t3255436806 * InputStream_GetNativeStream_m3604859030 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.Sharpen.InputStream::Read()
extern "C"  int32_t InputStream_Read_m1180843323 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.Sharpen.InputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t InputStream_Read_m2858033400 (InputStream_t39831546 * __this, ByteU5BU5D_t3397334013* ___b0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.InputStream::Reset()
extern "C"  void InputStream_Reset_m1005083074 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.InputStream::CanSeek()
extern "C"  bool InputStream_CanSeek_m2670545547 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.InputStream::get_Position()
extern "C"  int64_t InputStream_get_Position_m63608800 (InputStream_t39831546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.InputStream::set_Position(System.Int64)
extern "C"  void InputStream_set_Position_m3200751361 (InputStream_t39831546 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
