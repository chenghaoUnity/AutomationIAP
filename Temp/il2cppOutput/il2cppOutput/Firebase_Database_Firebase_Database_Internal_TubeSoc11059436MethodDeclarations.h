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

// Firebase.Database.Internal.TubeSock.WebSocketHandshake
struct WebSocketHandshake_t11059436;
// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t1070465849;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.TubeSock.WebSocketHandshake::.ctor(System.Uri,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void WebSocketHandshake__ctor_m2181169547 (WebSocketHandshake_t11059436 * __this, Uri_t19570940 * ___url0, String_t* ___protocol1, Il2CppObject* ___extraHeaders2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.TubeSock.WebSocketHandshake::ContainsKey(System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.String)
extern "C"  bool WebSocketHandshake_ContainsKey_m2029179891 (WebSocketHandshake_t11059436 * __this, List_1_t1070465849 * ___list0, String_t* ___keyValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Firebase.Database.Internal.TubeSock.WebSocketHandshake::GetHandshake()
extern "C"  ByteU5BU5D_t3397334013* WebSocketHandshake_GetHandshake_m2952733379 (WebSocketHandshake_t11059436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.TubeSock.WebSocketHandshake::GenerateHeader(System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
extern "C"  String_t* WebSocketHandshake_GenerateHeader_m3497436626 (WebSocketHandshake_t11059436 * __this, List_1_t1070465849 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.TubeSock.WebSocketHandshake::CreateNonce()
extern "C"  String_t* WebSocketHandshake_CreateNonce_m223446692 (WebSocketHandshake_t11059436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketHandshake::VerifyServerStatusLine(System.String)
extern "C"  void WebSocketHandshake_VerifyServerStatusLine_m2563321626 (WebSocketHandshake_t11059436 * __this, String_t* ___statusLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketHandshake::VerifyServerHandshakeHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void WebSocketHandshake_VerifyServerHandshakeHeaders_m289773820 (WebSocketHandshake_t11059436 * __this, Dictionary_2_t3943999495 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.TubeSock.WebSocketHandshake::Rand(System.Int32,System.Int32)
extern "C"  int32_t WebSocketHandshake_Rand_m1368194897 (WebSocketHandshake_t11059436 * __this, int32_t ___min0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketHandshake::.cctor()
extern "C"  void WebSocketHandshake__cctor_m3441430437 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
