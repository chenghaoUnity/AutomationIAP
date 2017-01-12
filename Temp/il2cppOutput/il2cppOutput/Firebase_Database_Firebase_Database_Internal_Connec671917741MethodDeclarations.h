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

// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Logger
struct Logger_t225270238;
// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider
struct ConnectionAuthTokenProvider_t3406713242;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Logger225270238.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne3406713242.h"
#include "Google_Sharpen_Google_Sharpen_ScheduledThreadPoolE2537379786.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.Connection.ConnectionContext::.ctor(Firebase.Database.Logger,Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider,Google.Sharpen.ScheduledThreadPoolExecutor,System.Boolean,System.String,System.String)
extern "C"  void ConnectionContext__ctor_m1214193525 (ConnectionContext_t671917741 * __this, Logger_t225270238 * ___logger0, ConnectionAuthTokenProvider_t3406713242 * ___authTokenProvider1, ScheduledThreadPoolExecutor_t2537379786 * ___executorService2, bool ___persistenceEnabled3, String_t* ___clientSdkVersion4, String_t* ___userAgent5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger Firebase.Database.Internal.Connection.ConnectionContext::GetLogger()
extern "C"  Logger_t225270238 * ConnectionContext_GetLogger_m2355873724 (ConnectionContext_t671917741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider Firebase.Database.Internal.Connection.ConnectionContext::GetAuthTokenProvider()
extern "C"  ConnectionAuthTokenProvider_t3406713242 * ConnectionContext_GetAuthTokenProvider_m1730119847 (ConnectionContext_t671917741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Connection.ConnectionContext::GetExecutorService()
extern "C"  ScheduledThreadPoolExecutor_t2537379786 * ConnectionContext_GetExecutorService_m314251704 (ConnectionContext_t671917741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.ConnectionContext::GetClientSdkVersion()
extern "C"  String_t* ConnectionContext_GetClientSdkVersion_m619187001 (ConnectionContext_t671917741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Connection.ConnectionContext::GetUserAgent()
extern "C"  String_t* ConnectionContext_GetUserAgent_m1524579978 (ConnectionContext_t671917741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
