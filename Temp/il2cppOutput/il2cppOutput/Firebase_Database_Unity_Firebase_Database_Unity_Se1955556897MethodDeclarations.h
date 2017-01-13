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

// Firebase.Database.Unity.ServiceAccountCredential/Initializer
struct Initializer_t1955556897;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Cryptography_RSACryptoSer4229286967.h"
#include "System_System_Security_Cryptography_X509Certificat4056456767.h"

// System.Void Firebase.Database.Unity.ServiceAccountCredential/Initializer::.ctor(System.String)
extern "C"  void Initializer__ctor_m1336621065 (Initializer_t1955556897 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential/Initializer::.ctor(System.String,System.String)
extern "C"  void Initializer__ctor_m3585247251 (Initializer_t1955556897 * __this, String_t* ___id0, String_t* ___tokenServerUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential/Initializer::get_Id()
extern "C"  String_t* Initializer_get_Id_m701527080 (Initializer_t1955556897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential/Initializer::set_Id(System.String)
extern "C"  void Initializer_set_Id_m1034028241 (Initializer_t1955556897 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Unity.ServiceAccountCredential/Initializer::get_User()
extern "C"  String_t* Initializer_get_User_m122414950 (Initializer_t1955556897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential/Initializer::set_User(System.String)
extern "C"  void Initializer_set_User_m2701204433 (Initializer_t1955556897 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Firebase.Database.Unity.ServiceAccountCredential/Initializer::get_Scopes()
extern "C"  List_1_t1398341365 * Initializer_get_Scopes_m3715438940 (Initializer_t1955556897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential/Initializer::set_Scopes(System.Collections.Generic.List`1<System.String>)
extern "C"  void Initializer_set_Scopes_m2350759887 (Initializer_t1955556897 * __this, List_1_t1398341365 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Database.Unity.ServiceAccountCredential/Initializer::get_Key()
extern "C"  RSACryptoServiceProvider_t4229286967 * Initializer_get_Key_m3005707888 (Initializer_t1955556897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.ServiceAccountCredential/Initializer::set_Key(System.Security.Cryptography.RSACryptoServiceProvider)
extern "C"  void Initializer_set_Key_m2410272885 (Initializer_t1955556897 * __this, RSACryptoServiceProvider_t4229286967 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Unity.ServiceAccountCredential/Initializer Firebase.Database.Unity.ServiceAccountCredential/Initializer::FromCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  Initializer_t1955556897 * Initializer_FromCertificate_m3970222400 (Initializer_t1955556897 * __this, X509Certificate2_t4056456767 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
