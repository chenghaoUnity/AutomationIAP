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

// Firebase.Database.Internal.Logging.DefaultLogger
struct DefaultLogger_t2060490269;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Logging.DefaultLogger::.ctor(Firebase.Database.Logger/Level,System.Collections.Generic.IList`1<System.String>)
extern "C"  void DefaultLogger__ctor_m713533098 (DefaultLogger_t2060490269 * __this, int32_t ___level0, Il2CppObject* ___enabledComponents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger/Level Firebase.Database.Internal.Logging.DefaultLogger::GetLogLevel()
extern "C"  int32_t DefaultLogger_GetLogLevel_m3198368300 (DefaultLogger_t2060490269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.DefaultLogger::OnLogMessage(Firebase.Database.Logger/Level,System.String,System.String,System.Int64)
extern "C"  void DefaultLogger_OnLogMessage_m1607189123 (DefaultLogger_t2060490269 * __this, int32_t ___level0, String_t* ___tag1, String_t* ___message2, int64_t ___msTimestamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Logging.DefaultLogger::BuildLogMessage(Firebase.Database.Logger/Level,System.String,System.String,System.Int64)
extern "C"  String_t* DefaultLogger_BuildLogMessage_m1594570773 (DefaultLogger_t2060490269 * __this, int32_t ___level0, String_t* ___tag1, String_t* ___message2, int64_t ___msTimestamp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.DefaultLogger::Error(System.String,System.String)
extern "C"  void DefaultLogger_Error_m2418809322 (DefaultLogger_t2060490269 * __this, String_t* ___tag0, String_t* ___toLog1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.DefaultLogger::Warn(System.String,System.String)
extern "C"  void DefaultLogger_Warn_m2888268190 (DefaultLogger_t2060490269 * __this, String_t* ___tag0, String_t* ___toLog1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.DefaultLogger::Info(System.String,System.String)
extern "C"  void DefaultLogger_Info_m885229886 (DefaultLogger_t2060490269 * __this, String_t* ___tag0, String_t* ___toLog1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.DefaultLogger::Debug(System.String,System.String)
extern "C"  void DefaultLogger_Debug_m502117471 (DefaultLogger_t2060490269 * __this, String_t* ___tag0, String_t* ___toLog1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Logging.DefaultLogger::ShouldLog(Firebase.Database.Logger/Level,System.String)
extern "C"  bool DefaultLogger_ShouldLog_m3576023494 (DefaultLogger_t2060490269 * __this, int32_t ___level0, String_t* ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
