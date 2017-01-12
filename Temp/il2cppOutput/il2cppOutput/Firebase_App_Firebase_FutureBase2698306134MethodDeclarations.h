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

// Firebase.FutureBase
struct FutureBase_t2698306134;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Firebase_App_Firebase_FutureStatus4011176069.h"

// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FutureBase__ctor_m3054944159 (FutureBase_t2698306134 * __this, IntPtr_t ___cPtr0, bool ___cMemoryOwn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureBase::Finalize()
extern "C"  void FutureBase_Finalize_m1464906966 (FutureBase_t2698306134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureBase::Dispose()
extern "C"  void FutureBase_Dispose_m1042966601 (FutureBase_t2698306134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FutureStatus Firebase.FutureBase::Status()
extern "C"  int32_t FutureBase_Status_m543620527 (FutureBase_t2698306134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.FutureBase::Error()
extern "C"  int32_t FutureBase_Error_m954039370 (FutureBase_t2698306134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.FutureBase::ErrorMessage()
extern "C"  String_t* FutureBase_ErrorMessage_m11232826 (FutureBase_t2698306134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
