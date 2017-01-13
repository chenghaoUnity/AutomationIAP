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

// Firebase.Database.Core.Platform
struct Platform_t739508161;
// Firebase.Database.Logger
struct Logger_t225270238;
// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Core.AuthTokenProvider
struct AuthTokenProvider_t3681374264;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// System.String
struct String_t;
// Firebase.Database.Internal.Connection.PersistentConnection
struct PersistentConnection_t1904999661;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// Firebase.Database.Internal.Connection.PersistentConnection/IDelegate
struct IDelegate_t3654812693;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3486154757.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"
#include "Google_Sharpen_Google_Sharpen_ScheduledThreadPoolE2537379786.h"
#include "Firebase_Database_Firebase_Database_Internal_Connec671917741.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2292118836.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Core.Platform::.ctor()
extern "C"  void Platform__ctor_m3191267623 (Platform_t739508161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger Firebase.Database.Core.Platform::NewLogger(Firebase.Database.Internal.Core.Context,Firebase.Database.Logger/Level,System.Collections.Generic.IList`1<System.String>)
extern "C"  Logger_t225270238 * Platform_NewLogger_m645095007 (Platform_t739508161 * __this, Context_t3486154757 * ___ctx0, int32_t ___level1, Il2CppObject* ___components2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.AuthTokenProvider Firebase.Database.Core.Platform::NewAuthTokenProvider(Google.Sharpen.ScheduledThreadPoolExecutor)
extern "C"  AuthTokenProvider_t3681374264 * Platform_NewAuthTokenProvider_m1464008155 (Platform_t739508161 * __this, ScheduledThreadPoolExecutor_t2537379786 * ___executor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Core.Platform::GetUserAgent(Firebase.Database.Internal.Core.Context)
extern "C"  String_t* Platform_GetUserAgent_m3478661043 (Platform_t739508161 * __this, Context_t3486154757 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.PersistentConnection Firebase.Database.Core.Platform::NewPersistentConnection(Firebase.Database.Internal.Core.Context,Firebase.Database.Internal.Connection.ConnectionContext,Firebase.Database.Internal.Connection.HostInfo,Firebase.Database.Internal.Connection.PersistentConnection/IDelegate)
extern "C"  PersistentConnection_t1904999661 * Platform_NewPersistentConnection_m981943716 (Platform_t739508161 * __this, Context_t3486154757 * ___context0, ConnectionContext_t671917741 * ___connectionContext1, HostInfo_t2292118836 * ___info2, Il2CppObject * ___delegate_3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Persistence.IPersistenceManager Firebase.Database.Core.Platform::CreatePersistenceManager(Firebase.Database.Internal.Core.Context,System.String)
extern "C"  Il2CppObject * Platform_CreatePersistenceManager_m460474309 (Platform_t739508161 * __this, Context_t3486154757 * ___ctx0, String_t* ___namespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
