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

// Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate
struct LogMessageDelegate_t1988210674;
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
#include "Firebase_App_Firebase_LogLevel543421840.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LogMessageDelegate__ctor_m1146820131 (LogMessageDelegate_t1988210674 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate::Invoke(Firebase.LogLevel,System.String)
extern "C"  void LogMessageDelegate_Invoke_m495697698 (LogMessageDelegate_t1988210674 * __this, int32_t ___log_level0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate::BeginInvoke(Firebase.LogLevel,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LogMessageDelegate_BeginInvoke_m71829407 (LogMessageDelegate_t1988210674 * __this, int32_t ___log_level0, String_t* ___message1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LogMessageDelegate_EndInvoke_m368326581 (LogMessageDelegate_t1988210674 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
