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

// Firebase.Database.DotNet.DotNetPlatform
struct DotNetPlatform_t2951135975;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// Firebase.Database.Logger
struct Logger_t225270238;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Core.IEventTarget
struct IEventTarget_t170421798;
// Firebase.Database.Internal.Core.Context
struct Context_t3486154757;
// Firebase.Database.Core.IRunLoop
struct IRunLoop_t1947166426;
// Firebase.Database.Internal.Connection.PersistentConnection
struct PersistentConnection_t1904999661;
// Firebase.Database.Internal.Connection.ConnectionContext
struct ConnectionContext_t671917741;
// Firebase.Database.Internal.Connection.HostInfo
struct HostInfo_t2292118836;
// Firebase.Database.Internal.Connection.PersistentConnection/IDelegate
struct IDelegate_t3654812693;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"
#include "Firebase_Database_Firebase_Database_Logger_Level2798387899.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_3486154757.h"
#include "Firebase_Database_Firebase_Database_Internal_Connec671917741.h"
#include "Firebase_Database_Firebase_Database_Internal_Conne2292118836.h"

// System.Void Firebase.Database.DotNet.DotNetPlatform::.ctor(Firebase.FirebaseApp)
extern "C"  void DotNetPlatform__ctor_m3903981007 (DotNetPlatform_t2951135975 * __this, FirebaseApp_t210707726 * ___firebaseApp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.Database.DotNet.DotNetPlatform::get_FirebaseApp()
extern "C"  FirebaseApp_t210707726 * DotNetPlatform_get_FirebaseApp_m465321925 (DotNetPlatform_t2951135975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DotNet.DotNetPlatform::set_FirebaseApp(Firebase.FirebaseApp)
extern "C"  void DotNetPlatform_set_FirebaseApp_m4274188624 (DotNetPlatform_t2951135975 * __this, FirebaseApp_t210707726 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Logger Firebase.Database.DotNet.DotNetPlatform::NewLogger(Firebase.Database.Logger/Level,System.Collections.Generic.IList`1<System.String>)
extern "C"  Logger_t225270238 * DotNetPlatform_NewLogger_m2124890103 (DotNetPlatform_t2951135975 * __this, int32_t ___level0, Il2CppObject* ___components1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.IEventTarget Firebase.Database.DotNet.DotNetPlatform::NewEventTarget(Firebase.Database.Internal.Core.Context)
extern "C"  Il2CppObject * DotNetPlatform_NewEventTarget_m1003434898 (DotNetPlatform_t2951135975 * __this, Context_t3486154757 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Core.IRunLoop Firebase.Database.DotNet.DotNetPlatform::NewRunLoop(Firebase.Database.Internal.Core.Context)
extern "C"  Il2CppObject * DotNetPlatform_NewRunLoop_m2029663314 (DotNetPlatform_t2951135975 * __this, Context_t3486154757 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Connection.PersistentConnection Firebase.Database.DotNet.DotNetPlatform::NewPersistentConnection(Firebase.Database.Internal.Core.Context,Firebase.Database.Internal.Connection.ConnectionContext,Firebase.Database.Internal.Connection.HostInfo,Firebase.Database.Internal.Connection.PersistentConnection/IDelegate)
extern "C"  PersistentConnection_t1904999661 * DotNetPlatform_NewPersistentConnection_m2691309241 (DotNetPlatform_t2951135975 * __this, Context_t3486154757 * ___context0, ConnectionContext_t671917741 * ___connectionContext1, HostInfo_t2292118836 * ___info2, Il2CppObject * ___delegate_3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DotNet.DotNetPlatform::GetUserAgent()
extern "C"  String_t* DotNetPlatform_GetUserAgent_m1453495367 (DotNetPlatform_t2951135975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
