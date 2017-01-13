﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t4229286967;
// System.Security.Cryptography.CspParameters
struct CspParameters_t46065560;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.EventArgs
struct EventArgs_t3289624707;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameters46065560.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter1462703416.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_EventArgs3289624707.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C"  void RSACryptoServiceProvider__ctor_m1532797528 (RSACryptoServiceProvider_t4229286967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider__ctor_m4088808429 (RSACryptoServiceProvider_t4229286967 * __this, CspParameters_t46065560 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void RSACryptoServiceProvider__ctor_m2716420409 (RSACryptoServiceProvider_t4229286967 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C"  void RSACryptoServiceProvider__cctor_m714287159 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider_Common_m2581564813 (RSACryptoServiceProvider_t4229286967 * __this, int32_t ___dwKeySize0, CspParameters_t46065560 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C"  void RSACryptoServiceProvider_Finalize_m3413569944 (RSACryptoServiceProvider_t4229286967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t RSACryptoServiceProvider_get_KeySize_m2049115605 (RSACryptoServiceProvider_t4229286967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool RSACryptoServiceProvider_get_PublicOnly_m2672124340 (RSACryptoServiceProvider_t4229286967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSACryptoServiceProvider_DecryptValue_m228589949 (RSACryptoServiceProvider_t4229286967 * __this, ByteU5BU5D_t3397334013* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RSACryptoServiceProvider_EncryptValue_m802714447 (RSACryptoServiceProvider_t4229286967 * __this, ByteU5BU5D_t3397334013* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t1462703416  RSACryptoServiceProvider_ExportParameters_m1450871963 (RSACryptoServiceProvider_t4229286967 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSACryptoServiceProvider_ImportParameters_m1863060500 (RSACryptoServiceProvider_t4229286967 * __this, RSAParameters_t1462703416  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSACryptoServiceProvider::GetHash(System.Object)
extern "C"  HashAlgorithm_t2624936259 * RSACryptoServiceProvider_GetHash_m3948215059 (RSACryptoServiceProvider_t4229286967 * __this, Il2CppObject * ___halg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignData(System.Byte[],System.Object)
extern "C"  ByteU5BU5D_t3397334013* RSACryptoServiceProvider_SignData_m1177968540 (RSACryptoServiceProvider_t4229286967 * __this, ByteU5BU5D_t3397334013* ___buffer0, Il2CppObject * ___halg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignData(System.Byte[],System.Int32,System.Int32,System.Object)
extern "C"  ByteU5BU5D_t3397334013* RSACryptoServiceProvider_SignData_m2738874534 (RSACryptoServiceProvider_t4229286967 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, Il2CppObject * ___halg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSACryptoServiceProvider::GetHashNameFromOID(System.String)
extern "C"  String_t* RSACryptoServiceProvider_GetHashNameFromOID_m1617433214 (RSACryptoServiceProvider_t4229286967 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C"  bool RSACryptoServiceProvider_VerifyHash_m1335750435 (RSACryptoServiceProvider_t4229286967 * __this, ByteU5BU5D_t3397334013* ___rgbHash0, String_t* ___str1, ByteU5BU5D_t3397334013* ___rgbSignature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void RSACryptoServiceProvider_Dispose_m3445944964 (RSACryptoServiceProvider_t4229286967 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void RSACryptoServiceProvider_OnKeyGenerated_m3681052691 (RSACryptoServiceProvider_t4229286967 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::ExportCspBlob(System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* RSACryptoServiceProvider_ExportCspBlob_m353047322 (RSACryptoServiceProvider_t4229286967 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportCspBlob(System.Byte[])
extern "C"  void RSACryptoServiceProvider_ImportCspBlob_m992237701 (RSACryptoServiceProvider_t4229286967 * __this, ByteU5BU5D_t3397334013* ___keyBlob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
