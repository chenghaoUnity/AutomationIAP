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

// Firebase.Database.Unity.ServiceAccountCredential
struct ServiceAccountCredential_t3398163339;
// Firebase.Database.Unity.ServiceAccountCredential/Initializer
struct Initializer_t1955556897;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Firebase.Database.Unity.ServiceAccountCredential/OAuthRequest
struct OAuthRequest_t3497136277;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Unity_Firebase_Database_Unity_Se1955556897.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_RSACryptoSer4229286967.h"
#include "Firebase_Database_Unity_Firebase_Database_Unity_Se3497136277.h"
#include "Unity_Tasks_System_Threading_CancellationToken1851405782.h"

// System.Void Firebase.Database.Unity.ServiceAccountCredential::.ctor(Firebase.Database.Unity.ServiceAccountCredential/Initializer)
extern "C"  void ServiceAccountCredential__ctor_m1185135217 (ServiceAccountCredential_t3398163339 * __this, Initializer_t1955556897 * ___initializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::get_Id()
extern "C"  String_t* ServiceAccountCredential_get_Id_m2088493583 (ServiceAccountCredential_t3398163339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential::set_Id(System.String)
extern "C"  void ServiceAccountCredential_set_Id_m518344680 (ServiceAccountCredential_t3398163339 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::get_User()
extern "C"  String_t* ServiceAccountCredential_get_User_m3232432303 (ServiceAccountCredential_t3398163339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential::set_User(System.String)
extern "C"  void ServiceAccountCredential_set_User_m222781194 (ServiceAccountCredential_t3398163339 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Firebase.Database.Unity.ServiceAccountCredential::get_Scopes()
extern "C"  StringU5BU5D_t1642385972* ServiceAccountCredential_get_Scopes_m2586408377 (ServiceAccountCredential_t3398163339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential::set_Scopes(System.String[])
extern "C"  void ServiceAccountCredential_set_Scopes_m2209060156 (ServiceAccountCredential_t3398163339 * __this, StringU5BU5D_t1642385972* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Database.Unity.ServiceAccountCredential::get_Key()
extern "C"  RSACryptoServiceProvider_t4229286967 * ServiceAccountCredential_get_Key_m4018384159 (ServiceAccountCredential_t3398163339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential::set_Key(System.Security.Cryptography.RSACryptoServiceProvider)
extern "C"  void ServiceAccountCredential_set_Key_m825919564 (ServiceAccountCredential_t3398163339 * __this, RSACryptoServiceProvider_t4229286967 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Firebase.Database.Unity.ServiceAccountCredential::SendOAuth(Firebase.Database.Unity.ServiceAccountCredential/OAuthRequest)
extern "C"  Il2CppObject * ServiceAccountCredential_SendOAuth_m4019051956 (ServiceAccountCredential_t3398163339 * __this, OAuthRequest_t3497136277 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::GetAccessTokenForRequestSync(System.Threading.CancellationToken)
extern "C"  String_t* ServiceAccountCredential_GetAccessTokenForRequestSync_m3174721268 (ServiceAccountCredential_t3398163339 * __this, CancellationToken_t1851405782  ___taskCancellationToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::CreateAssertionFromPayload(System.String)
extern "C"  String_t* ServiceAccountCredential_CreateAssertionFromPayload_m2311819027 (ServiceAccountCredential_t3398163339 * __this, String_t* ___serializedPayload0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::CreatePayload()
extern "C"  String_t* ServiceAccountCredential_CreatePayload_m2766755585 (ServiceAccountCredential_t3398163339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::UrlSafeBase64Encode(System.String)
extern "C"  String_t* ServiceAccountCredential_UrlSafeBase64Encode_m3896127820 (ServiceAccountCredential_t3398163339 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential::UrlSafeBase64Encode(System.Byte[])
extern "C"  String_t* ServiceAccountCredential_UrlSafeBase64Encode_m97698283 (ServiceAccountCredential_t3398163339 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential::.cctor()
extern "C"  void ServiceAccountCredential__cctor_m1374164505 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
