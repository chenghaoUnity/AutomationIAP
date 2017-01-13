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

// Firebase.UnityHttpRequest
struct UnityHttpRequest_t967994112;
// System.Uri
struct Uri_t19570940;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.UnityHttpRequest::.ctor(System.Uri)
extern "C"  void UnityHttpRequest__ctor_m1552832513 (UnityHttpRequest_t967994112 * __this, Uri_t19570940 * ___requestUrl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.UnityHttpRequest::RecordResult(System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String)
extern "C"  void UnityHttpRequest_RecordResult_m2645839245 (UnityHttpRequest_t967994112 * __this, int32_t ___rqResponseCode0, Il2CppObject* ___rqResponseHeaders1, String_t* ___rqError2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
