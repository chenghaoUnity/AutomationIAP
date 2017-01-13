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

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct SubjectKeyIdentifierExtension_t3708612253;
// Mono.Security.X509.X509Extension
struct X509Extension_t1439760128;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"

// System.Void Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void SubjectKeyIdentifierExtension__ctor_m3486253794 (SubjectKeyIdentifierExtension_t3708612253 * __this, X509Extension_t1439760128 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::Decode()
extern "C"  void SubjectKeyIdentifierExtension_Decode_m2517384396 (SubjectKeyIdentifierExtension_t3708612253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::get_Identifier()
extern "C"  ByteU5BU5D_t3397334013* SubjectKeyIdentifierExtension_get_Identifier_m1086105120 (SubjectKeyIdentifierExtension_t3708612253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ToString()
extern "C"  String_t* SubjectKeyIdentifierExtension_ToString_m3633632537 (SubjectKeyIdentifierExtension_t3708612253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
