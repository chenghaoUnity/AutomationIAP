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

// Firebase.Database.Internal.Connection.Util.RetryHelper/Builder
struct Builder_t470580281;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Logger
struct Logger_t225270238;
// System.String
struct String_t;
// Firebase.Database.Internal.Connection.Util.RetryHelper
struct RetryHelper_t2341283196;

#include "codegen/il2cpp-codegen.h"
#include "Google_Sharpen_Google_Sharpen_ScheduledThreadPoolE2537379786.h"
#include "Firebase_Database_Firebase_Database_Logger225270238.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::.ctor(Google.Sharpen.ScheduledThreadPoolExecutor,Firebase.Database.Logger,System.String)
extern "C"  void Builder__ctor_m3136030182 (Builder_t470580281 * __this, ScheduledThreadPoolExecutor_t2537379786 * ___service0, Logger_t225270238 * ___logger1, String_t* ___tag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.Util.RetryHelper/Builder Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::WithMinDelayAfterFailure(System.Int64)
extern "C"  Builder_t470580281 * Builder_WithMinDelayAfterFailure_m2606210701 (Builder_t470580281 * __this, int64_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.Util.RetryHelper/Builder Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::WithMaxDelay(System.Int64)
extern "C"  Builder_t470580281 * Builder_WithMaxDelay_m1186226263 (Builder_t470580281 * __this, int64_t ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.Util.RetryHelper/Builder Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::WithRetryExponent(System.Double)
extern "C"  Builder_t470580281 * Builder_WithRetryExponent_m3049335257 (Builder_t470580281 * __this, double ___exponent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.Util.RetryHelper/Builder Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::WithJitterFactor(System.Double)
extern "C"  Builder_t470580281 * Builder_WithJitterFactor_m3250876751 (Builder_t470580281 * __this, double ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.Util.RetryHelper Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::Build()
extern "C"  RetryHelper_t2341283196 * Builder_Build_m2345595448 (Builder_t470580281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
