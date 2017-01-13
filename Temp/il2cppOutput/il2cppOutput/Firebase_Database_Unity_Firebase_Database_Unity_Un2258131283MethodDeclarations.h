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

// Firebase.Database.Unity.UnityPlatform/UnityLogger
struct UnityLogger_t2258131283;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Unity.UnityPlatform/UnityLogger::.ctor(Firebase.Database.Logger/Level)
extern "C"  void UnityLogger__ctor_m530628304 (UnityLogger_t2258131283 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.UnityPlatform/UnityLogger::OnLogMessage(Firebase.Database.Logger/Level,System.String,System.String,System.Int64)
extern "C"  void UnityLogger_OnLogMessage_m3482070510 (UnityLogger_t2258131283 * __this, int32_t ___level0, String_t* ___tag1, String_t* ___message2, int64_t ___msTimestamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger/Level Firebase.Database.Unity.UnityPlatform/UnityLogger::GetLogLevel()
extern "C"  int32_t UnityLogger_GetLogLevel_m3316149087 (UnityLogger_t2258131283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
