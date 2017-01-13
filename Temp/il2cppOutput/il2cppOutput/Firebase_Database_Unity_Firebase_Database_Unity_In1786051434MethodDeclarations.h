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

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t283079845;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// Firebase.FirebaseApp
struct FirebaseApp_t210707726;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_App_Firebase_FirebaseApp210707726.h"

// System.Security.Cryptography.X509Certificates.X509Certificate Firebase.Database.Unity.InstallRootCerts::DecodeCertificate(System.String)
extern "C"  X509Certificate_t283079845 * InstallRootCerts_DecodeCertificate_m1526677171 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Database.Unity.InstallRootCerts::DecodeDefaultCollection()
extern "C"  X509CertificateCollection_t1197680765 * InstallRootCerts_DecodeDefaultCollection_m1308294699 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Database.Unity.InstallRootCerts::DecodeCollection(Firebase.FirebaseApp)
extern "C"  X509CertificateCollection_t1197680765 * InstallRootCerts_DecodeCollection_m1080719103 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.InstallRootCerts::Process(Firebase.FirebaseApp)
extern "C"  void InstallRootCerts_Process_m1532217653 (Il2CppObject * __this /* static, unused */, FirebaseApp_t210707726 * ___app0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Unity.InstallRootCerts::.cctor()
extern "C"  void InstallRootCerts__cctor_m2360470798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
