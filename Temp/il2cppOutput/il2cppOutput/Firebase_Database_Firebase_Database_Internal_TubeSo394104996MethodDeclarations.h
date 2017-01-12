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

// Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder
struct BinaryBuilder_t394104996;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Firebase.Database.Internal.TubeSock.WebSocketMessage
struct WebSocketMessage_t2830312828;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder::.ctor()
extern "C"  void BinaryBuilder__ctor_m1147871315 (BinaryBuilder_t394104996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder::AppendBytes(System.Byte[])
extern "C"  bool BinaryBuilder_AppendBytes_m3986526739 (BinaryBuilder_t394104996 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.TubeSock.WebSocketMessage Firebase.Database.Internal.TubeSock.MessageBuilderFactory/BinaryBuilder::ToMessage()
extern "C"  WebSocketMessage_t2830312828 * BinaryBuilder_ToMessage_m2499355467 (BinaryBuilder_t394104996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
