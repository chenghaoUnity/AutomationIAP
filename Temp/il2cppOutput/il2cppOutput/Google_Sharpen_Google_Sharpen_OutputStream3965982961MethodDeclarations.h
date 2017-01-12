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

// Google.Sharpen.OutputStream
struct OutputStream_t3965982961;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "Google_Sharpen_Google_Sharpen_OutputStream3965982961.h"

// System.Void Google.Sharpen.OutputStream::.ctor()
extern "C"  void OutputStream__ctor_m1683797690 (OutputStream_t3965982961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.OutputStream Google.Sharpen.OutputStream::op_Implicit(System.IO.Stream)
extern "C"  OutputStream_t3965982961 * OutputStream_op_Implicit_m386377944 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Google.Sharpen.OutputStream::op_Implicit(Google.Sharpen.OutputStream)
extern "C"  Stream_t3255436806 * OutputStream_op_Implicit_m1541911710 (Il2CppObject * __this /* static, unused */, OutputStream_t3965982961 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.OutputStream::Close()
extern "C"  void OutputStream_Close_m1629664410 (OutputStream_t3965982961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.OutputStream::Dispose()
extern "C"  void OutputStream_Dispose_m4284871709 (OutputStream_t3965982961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.OutputStream::Flush()
extern "C"  void OutputStream_Flush_m1629778920 (OutputStream_t3965982961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Google.Sharpen.OutputStream::GetWrappedStream()
extern "C"  Stream_t3255436806 * OutputStream_GetWrappedStream_m2712330989 (OutputStream_t3965982961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.OutputStream Google.Sharpen.OutputStream::Wrap(System.IO.Stream)
extern "C"  OutputStream_t3965982961 * OutputStream_Wrap_m1029657871 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.OutputStream::Write(System.Int32)
extern "C"  void OutputStream_Write_m961619080 (OutputStream_t3965982961 * __this, int32_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.OutputStream::Write(System.Byte[])
extern "C"  void OutputStream_Write_m2313687720 (OutputStream_t3965982961 * __this, ByteU5BU5D_t3397334013* ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.OutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputStream_Write_m3100841886 (OutputStream_t3965982961 * __this, ByteU5BU5D_t3397334013* ___b0, int32_t ___offset1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
