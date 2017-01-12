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

// Google.Sharpen.AtomicLong
struct AtomicLong_t1771203261;

#include "codegen/il2cpp-codegen.h"

// System.Void Google.Sharpen.AtomicLong::.ctor()
extern "C"  void AtomicLong__ctor_m1578290388 (AtomicLong_t1771203261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.AtomicLong::.ctor(System.Int64)
extern "C"  void AtomicLong__ctor_m2627003512 (AtomicLong_t1771203261 * __this, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.AtomicLong::CompareAndSet(System.Int64,System.Int64)
extern "C"  bool AtomicLong_CompareAndSet_m656674932 (AtomicLong_t1771203261 * __this, int64_t ___expect0, int64_t ___update1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Google.Sharpen.AtomicLong::Get()
extern "C"  int64_t AtomicLong_Get_m2952909281 (AtomicLong_t1771203261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
