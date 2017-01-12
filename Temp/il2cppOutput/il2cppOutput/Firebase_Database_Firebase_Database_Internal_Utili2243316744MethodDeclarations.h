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

// Firebase.Database.Internal.Utilities.ParsedUrl
struct ParsedUrl_t1255537880;
// System.String
struct String_t;
// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener>
struct Pair_2_t2408862168;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "Firebase_Database_Firebase_Database_DatabaseReferenc93014473.h"

// Firebase.Database.Internal.Utilities.ParsedUrl Firebase.Database.Internal.Utilities.Utilities::ParseUrl(System.String)
extern "C"  ParsedUrl_t1255537880 * Utilities_ParseUrl_m2413247782 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Utilities.Utilities::Sha1HexDigest(System.String)
extern "C"  String_t* Utilities_Sha1HexDigest_m2561442859 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Utilities.Utilities::StringHashV2Representation(System.String)
extern "C"  String_t* Utilities_StringHashV2Representation_m3196684503 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Utilities.Utilities::DoubleToHashString(System.Double)
extern "C"  String_t* Utilities_DoubleToHashString_m2981005882 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Firebase.Database.Internal.Utilities.Utilities::TryParseInt(System.String)
extern "C"  Nullable_1_t334943763  Utilities_TryParseInt_m1152870338 (Il2CppObject * __this /* static, unused */, String_t* ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Utilities.Utilities::CompareInts(System.Int32,System.Int32)
extern "C"  int32_t Utilities_CompareInts_m1465315563 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Utilities.Utilities::CompareLongs(System.Int64,System.Int64)
extern "C"  int32_t Utilities_CompareLongs_m3075927542 (Il2CppObject * __this /* static, unused */, int64_t ___i0, int64_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Utilities::HardAssert(System.Boolean)
extern "C"  void Utilities_HardAssert_m3271532158 (Il2CppObject * __this /* static, unused */, bool ___condition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Utilities::HardAssert(System.Boolean,System.String)
extern "C"  void Utilities_HardAssert_m2510818994 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener> Firebase.Database.Internal.Utilities.Utilities::WrapOnComplete(Firebase.Database.DatabaseReference/CompletionListener)
extern "C"  Pair_2_t2408862168 * Utilities_WrapOnComplete_m3587091105 (Il2CppObject * __this /* static, unused */, CompletionListener_t93014473 * ___optListener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.Utilities::.cctor()
extern "C"  void Utilities__cctor_m2173791745 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
