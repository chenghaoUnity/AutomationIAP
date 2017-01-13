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

// Firebase.InitializationException
struct InitializationException_t1438959983;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_InitResult105293995.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
extern "C"  void InitializationException__ctor_m6220901 (InitializationException_t1438959983 * __this, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
extern "C"  void InitializationException__ctor_m1927152695 (InitializationException_t1438959983 * __this, int32_t ___result0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.InitializationException::set_InitResult(Firebase.InitResult)
extern "C"  void InitializationException_set_InitResult_m394481415 (InitializationException_t1438959983 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
