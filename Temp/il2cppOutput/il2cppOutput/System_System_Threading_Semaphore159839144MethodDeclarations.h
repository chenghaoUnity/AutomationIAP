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

// System.Threading.Semaphore
struct Semaphore_t159839144;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32)
extern "C"  void Semaphore__ctor_m2906554191 (Semaphore_t159839144 * __this, int32_t ___initialCount0, int32_t ___maximumCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Semaphore::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void Semaphore__ctor_m1221833541 (Semaphore_t159839144 * __this, int32_t ___initialCount0, int32_t ___maximumCount1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Semaphore::CreateSemaphore_internal(System.Int32,System.Int32,System.String,System.Boolean&)
extern "C"  IntPtr_t Semaphore_CreateSemaphore_internal_m4133352047 (Il2CppObject * __this /* static, unused */, int32_t ___initialCount0, int32_t ___maximumCount1, String_t* ___name2, bool* ___createdNew3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Semaphore::ReleaseSemaphore_internal(System.IntPtr,System.Int32,System.Boolean&)
extern "C"  int32_t Semaphore_ReleaseSemaphore_internal_m678083820 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, int32_t ___releaseCount1, bool* ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Semaphore::Release(System.Int32)
extern "C"  int32_t Semaphore_Release_m1642555081 (Semaphore_t159839144 * __this, int32_t ___releaseCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
