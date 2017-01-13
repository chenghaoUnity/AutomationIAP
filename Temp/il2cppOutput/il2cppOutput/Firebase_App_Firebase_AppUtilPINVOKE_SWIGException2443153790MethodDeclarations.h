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

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t2443153790;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ExceptionArgumentDelegate__ctor_m2902104247 (ExceptionArgumentDelegate_t2443153790 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
extern "C"  void ExceptionArgumentDelegate_Invoke_m3328736243 (ExceptionArgumentDelegate_t2443153790 * __this, String_t* ___message0, String_t* ___paramName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExceptionArgumentDelegate_BeginInvoke_m1234147944 (ExceptionArgumentDelegate_t2443153790 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ExceptionArgumentDelegate_EndInvoke_m2954088285 (ExceptionArgumentDelegate_t2443153790 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
