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

// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Snapshot.ChildKey::.ctor(System.String)
extern "C"  void ChildKey__ctor_m1976949165 (ChildKey_t1197802383 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.ChildKey::CompareTo(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  int32_t ChildKey_CompareTo_m122047047 (ChildKey_t1197802383 * __this, ChildKey_t1197802383 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::GetMinName()
extern "C"  ChildKey_t1197802383 * ChildKey_GetMinName_m1860221121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::GetMaxName()
extern "C"  ChildKey_t1197802383 * ChildKey_GetMaxName_m3257351863 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::GetPriorityKey()
extern "C"  ChildKey_t1197802383 * ChildKey_GetPriorityKey_m4135538597 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.ChildKey::AsString()
extern "C"  String_t* ChildKey_AsString_m3996492405 (ChildKey_t1197802383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildKey::IsPriorityChildName()
extern "C"  bool ChildKey_IsPriorityChildName_m1431115822 (ChildKey_t1197802383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildKey::IsInt()
extern "C"  bool ChildKey_IsInt_m3235918314 (ChildKey_t1197802383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.ChildKey::IntValue()
extern "C"  int32_t ChildKey_IntValue_m720195837 (ChildKey_t1197802383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Snapshot.ChildKey::ToString()
extern "C"  String_t* ChildKey_ToString_m3173743228 (ChildKey_t1197802383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Snapshot.ChildKey::GetHashCode()
extern "C"  int32_t ChildKey_GetHashCode_m1236923534 (ChildKey_t1197802383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Snapshot.ChildKey::Equals(System.Object)
extern "C"  bool ChildKey_Equals_m1566416226 (ChildKey_t1197802383 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::FromString(System.String)
extern "C"  ChildKey_t1197802383 * ChildKey_FromString_m2031230083 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Snapshot.ChildKey::.cctor()
extern "C"  void ChildKey__cctor_m2266265716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
