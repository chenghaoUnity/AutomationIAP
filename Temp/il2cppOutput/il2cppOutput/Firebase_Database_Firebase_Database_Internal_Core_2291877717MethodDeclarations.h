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

// Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258
struct ConnectionAuthTokenProvider258_t2291877717;
// Firebase.Database.Core.AuthTokenProvider
struct AuthTokenProvider_t3681374264;
// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider/IGetTokenCallback
struct IGetTokenCallback_t3391042181;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Core_AuthToken3681374264.h"

// System.Void Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258::.ctor(Firebase.Database.Core.AuthTokenProvider)
extern "C"  void ConnectionAuthTokenProvider258__ctor_m3864344405 (ConnectionAuthTokenProvider258_t2291877717 * __this, AuthTokenProvider_t3681374264 * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Context/ConnectionAuthTokenProvider258::GetToken(System.Boolean,Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider/IGetTokenCallback)
extern "C"  void ConnectionAuthTokenProvider258_GetToken_m1434249539 (ConnectionAuthTokenProvider258_t2291877717 * __this, bool ___forceRefresh0, Il2CppObject * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
