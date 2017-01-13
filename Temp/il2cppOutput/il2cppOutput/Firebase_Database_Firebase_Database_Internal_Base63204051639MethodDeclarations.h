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

// Firebase.Database.Internal.Base64/Encoder
struct Encoder_t3204051639;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.Base64/Encoder::.ctor(System.Int32,System.Byte[])
extern "C"  void Encoder__ctor_m3323802198 (Encoder_t3204051639 * __this, int32_t ___flags0, ByteU5BU5D_t3397334013* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Base64/Encoder::Process(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  bool Encoder_Process_m1175941639 (Encoder_t3204051639 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___offset1, int32_t ___len2, bool ___finish3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Base64/Encoder::.cctor()
extern "C"  void Encoder__cctor_m1544255975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
