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

// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// Firebase.Database.Core.Platform
struct Platform_t739508161;
// Firebase.Database.Logger
struct Logger_t225270238;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// System.String
struct String_t;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// Firebase.Database.Core.IEventTarget
struct IEventTarget_t170421798;
// Firebase.Database.Core.IRunLoop
struct IRunLoop_t1947166426;
// Firebase.Database.Core.AuthTokenProvider
struct AuthTokenProvider_t3681374264;
// Firebase.Database.Internal.Connection.PersistentConnection
struct PersistentConnection_t1904999661;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// Firebase.Database.Internal.Connection.PersistentConnection/IDelegate
struct IDelegate_t3654812693;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider
struct ConnectionAuthTokenProvider_t3406713242;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2292118836.h"
#include "Firebase_Database_Firebase_Database_Core_AuthToken3681374264.h"

// System.Void Firebase.Database.Internal.Core.Context::.ctor()
extern "C"  void Context__ctor_m1238023272 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.Platform Firebase.Database.Internal.Core.Context::GetPlatform()
extern "C"  Platform_t739508161 * Context_GetPlatform_m2798117752 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::Freeze()
extern "C"  void Context_Freeze_m3006637421 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::RequireStarted()
extern "C"  void Context_RequireStarted_m936833618 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::InitServices()
extern "C"  void Context_InitServices_m3690323840 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::RestartServices()
extern "C"  void Context_RestartServices_m271548895 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger Firebase.Database.Internal.Core.Context::GetLogger()
extern "C"  Logger_t225270238 * Context_GetLogger_m3166416199 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.Context::GetLogger(System.String)
extern "C"  LogWrapper_t438307305 * Context_GetLogger_m1201841366 (Context_t3486154757 * __this, String_t* ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.ConnectionContext Firebase.Database.Internal.Core.Context::GetConnectionContext()
extern "C"  ConnectionContext_t671917741 * Context_GetConnectionContext_m1703432220 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager Firebase.Database.Internal.Core.Context::GetPersistenceManager(System.String)
extern "C"  Il2CppObject * Context_GetPersistenceManager_m3656425637 (Context_t3486154757 * __this, String_t* ___firebaseId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Context::IsPersistenceEnabled()
extern "C"  bool Context_IsPersistenceEnabled_m4264523972 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.IEventTarget Firebase.Database.Internal.Core.Context::GetEventTarget()
extern "C"  Il2CppObject * Context_GetEventTarget_m1407526971 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.IRunLoop Firebase.Database.Internal.Core.Context::GetRunLoop()
extern "C"  Il2CppObject * Context_GetRunLoop_m280295803 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Context::GetUserAgent()
extern "C"  String_t* Context_GetUserAgent_m2349728853 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.AuthTokenProvider Firebase.Database.Internal.Core.Context::GetAuthTokenProvider()
extern "C"  AuthTokenProvider_t3681374264 * Context_GetAuthTokenProvider_m620759456 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.PersistentConnection Firebase.Database.Internal.Core.Context::NewPersistentConnection(Firebase.Database.Internal.Connection.HostInfo,Firebase.Database.Internal.Connection.PersistentConnection/IDelegate)
extern "C"  PersistentConnection_t1904999661 * Context_NewPersistentConnection_m2129073478 (Context_t3486154757 * __this, HostInfo_t2292118836 * ___info0, Il2CppObject * ___delegate_1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Core.Context::GetExecutorService()
extern "C"  ScheduledThreadPoolExecutor_t2537379786 * Context_GetExecutorService_m3231229211 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::EnsureLogger()
extern "C"  void Context_EnsureLogger_m945269696 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::EnsureRunLoop()
extern "C"  void Context_EnsureRunLoop_m3085740873 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::EnsureEventTarget()
extern "C"  void Context_EnsureEventTarget_m3007328941 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::EnsureUserAgent()
extern "C"  void Context_EnsureUserAgent_m3801160374 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::EnsureAuthTokenProvider()
extern "C"  void Context_EnsureAuthTokenProvider_m2870045028 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context::EnsureSessionIdentifier()
extern "C"  void Context_EnsureSessionIdentifier_m3170012537 (Context_t3486154757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Context::BuildUserAgent(System.String)
extern "C"  String_t* Context_BuildUserAgent_m550170195 (Context_t3486154757 * __this, String_t* ___platformAgent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider Firebase.Database.Internal.Core.Context::WrapAuthTokenProvider(Firebase.Database.Core.AuthTokenProvider)
extern "C"  ConnectionAuthTokenProvider_t3406713242 * Context_WrapAuthTokenProvider_m1261223337 (Il2CppObject * __this /* static, unused */, AuthTokenProvider_t3681374264 * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
