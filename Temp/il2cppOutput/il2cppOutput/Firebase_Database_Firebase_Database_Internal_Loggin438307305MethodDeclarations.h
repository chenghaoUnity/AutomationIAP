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

// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Firebase.Database.Logger
struct Logger_t225270238;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Logger225270238.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Firebase.Database.Internal.Logging.LogWrapper::.ctor(Firebase.Database.Logger,System.String)
extern "C"  void LogWrapper__ctor_m1860845244 (LogWrapper_t438307305 * __this, Logger_t225270238 * ___logger0, String_t* ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::.ctor(Firebase.Database.Logger,System.String,System.String)
extern "C"  void LogWrapper__ctor_m2760887612 (LogWrapper_t438307305 * __this, Logger_t225270238 * ___logger0, String_t* ___component1, String_t* ___prefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Logging.LogWrapper::ExceptionStacktrace(System.Exception)
extern "C"  String_t* LogWrapper_ExceptionStacktrace_m3427344503 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::Error(System.String,System.Exception)
extern "C"  void LogWrapper_Error_m2459486994 (LogWrapper_t438307305 * __this, String_t* ___message0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::Warn(System.String)
extern "C"  void LogWrapper_Warn_m2499347314 (LogWrapper_t438307305 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::Warn(System.String,System.Exception)
extern "C"  void LogWrapper_Warn_m3006206202 (LogWrapper_t438307305 * __this, String_t* ___message0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::Info(System.String)
extern "C"  void LogWrapper_Info_m1582010478 (LogWrapper_t438307305 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::Debug(System.String,System.Object[])
extern "C"  void LogWrapper_Debug_m922454697 (LogWrapper_t438307305 * __this, String_t* ___message0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Logging.LogWrapper::LogsDebug()
extern "C"  bool LogWrapper_LogsDebug_m3026509790 (LogWrapper_t438307305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Logging.LogWrapper::Debug(System.String,System.Exception,System.Object[])
extern "C"  void LogWrapper_Debug_m1894240601 (LogWrapper_t438307305 * __this, String_t* ___message0, Exception_t1927440687 * ___e1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Logging.LogWrapper::Now()
extern "C"  int64_t LogWrapper_Now_m2280495225 (LogWrapper_t438307305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Logging.LogWrapper::ToLog(System.String,System.Object[])
extern "C"  String_t* LogWrapper_ToLog_m2196625746 (LogWrapper_t438307305 * __this, String_t* ___message0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
