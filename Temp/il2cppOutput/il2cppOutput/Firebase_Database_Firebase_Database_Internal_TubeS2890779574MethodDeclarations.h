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

// Firebase.Database.Internal.TubeSock.MessageBuilderFactory/TextBuilder
struct TextBuilder_t2890779574;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.Database.Internal.TubeSock.WebSocketMessage
struct WebSocketMessage_t2830312828;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.TubeSock.MessageBuilderFactory/TextBuilder::.ctor()
extern "C"  void TextBuilder__ctor_m3648373509 (TextBuilder_t2890779574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.TubeSock.MessageBuilderFactory/TextBuilder::AppendBytes(System.Byte[])
extern "C"  bool TextBuilder_AppendBytes_m2718928685 (TextBuilder_t2890779574 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.TubeSock.WebSocketMessage Firebase.Database.Internal.TubeSock.MessageBuilderFactory/TextBuilder::ToMessage()
extern "C"  WebSocketMessage_t2830312828 * TextBuilder_ToMessage_m3061666565 (TextBuilder_t2890779574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.TubeSock.MessageBuilderFactory/TextBuilder::DecodeString(System.Byte[])
extern "C"  String_t* TextBuilder_DecodeString_m119880768 (TextBuilder_t2890779574 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
