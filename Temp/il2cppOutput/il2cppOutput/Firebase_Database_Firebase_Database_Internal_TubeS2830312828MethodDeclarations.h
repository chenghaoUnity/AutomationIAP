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

// Firebase.Database.Internal.TubeSock.WebSocketMessage
struct WebSocketMessage_t2830312828;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.Database.Internal.TubeSock.WebSocketMessage::.ctor(System.Byte[])
extern "C"  void WebSocketMessage__ctor_m1071248461 (WebSocketMessage_t2830312828 * __this, ByteU5BU5D_t3397334013* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.TubeSock.WebSocketMessage::.ctor(System.String)
extern "C"  void WebSocketMessage__ctor_m384076880 (WebSocketMessage_t2830312828 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.TubeSock.WebSocketMessage::GetText()
extern "C"  String_t* WebSocketMessage_GetText_m1974340346 (WebSocketMessage_t2830312828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
