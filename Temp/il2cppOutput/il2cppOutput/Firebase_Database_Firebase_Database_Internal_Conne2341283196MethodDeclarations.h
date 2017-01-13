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

// Firebase.Database.Internal.Connection.Util.RetryHelper
struct RetryHelper_t2341283196;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;

#include "codegen/il2cpp-codegen.h"
#include "Google_Sharpen_Google_Sharpen_ScheduledThreadPoolE2537379786.h"
#include "Firebase_Database_Firebase_Database_Internal_Loggin438307305.h"

// System.Void Firebase.Database.Internal.Connection.Util.RetryHelper::.ctor(Google.Sharpen.ScheduledThreadPoolExecutor,Firebase.Database.Internal.Logging.LogWrapper,System.Int64,System.Int64,System.Double,System.Double)
extern "C"  void RetryHelper__ctor_m2997042221 (RetryHelper_t2341283196 * __this, ScheduledThreadPoolExecutor_t2537379786 * ___executorService0, LogWrapper_t438307305 * ___logger1, int64_t ___minRetryDelayAfterFailure2, int64_t ___maxRetryDelay3, double ___retryExponent4, double ___jitterFactor5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Util.RetryHelper::Retry(Google.Sharpen.Runnable)
extern "C"  void RetryHelper_Retry_m2659172435 (RetryHelper_t2341283196 * __this, Il2CppObject * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Util.RetryHelper::SignalSuccess()
extern "C"  void RetryHelper_SignalSuccess_m341343857 (RetryHelper_t2341283196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Util.RetryHelper::SetMaxDelay()
extern "C"  void RetryHelper_SetMaxDelay_m3120723727 (RetryHelper_t2341283196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Connection.Util.RetryHelper::Cancel()
extern "C"  void RetryHelper_Cancel_m3629770390 (RetryHelper_t2341283196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
