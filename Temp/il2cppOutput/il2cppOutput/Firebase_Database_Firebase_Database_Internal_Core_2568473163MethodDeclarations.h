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

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.ChildKey[]
struct ChildKeyU5BU5D_t491817302;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.ChildKey>
struct IEnumerator_1_t2968293506;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps1197802383.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.Path::.ctor(Firebase.Database.Internal.Snapshot.ChildKey[])
extern "C"  void Path__ctor_m2358381126 (Path_t2568473163 * __this, ChildKeyU5BU5D_t491817302* ___segments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Path::.ctor(System.Collections.Generic.IList`1<System.String>)
extern "C"  void Path__ctor_m1074963505 (Path_t2568473163 * __this, Il2CppObject* ___segments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Path::.ctor(System.String)
extern "C"  void Path__ctor_m224792998 (Path_t2568473163 * __this, String_t* ___pathString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Path::.ctor(Firebase.Database.Internal.Snapshot.ChildKey[],System.Int32,System.Int32)
extern "C"  void Path__ctor_m748590056 (Path_t2568473163 * __this, ChildKeyU5BU5D_t491817302* ___pieces0, int32_t ___start1, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.Path::CompareTo(Firebase.Database.Internal.Core.Path)
extern "C"  int32_t Path_CompareTo_m3096959495 (Path_t2568473163 * __this, Path_t2568473163 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.ChildKey> Firebase.Database.Internal.Core.Path::GetEnumerator()
extern "C"  Il2CppObject* Path_GetEnumerator_m192930654 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Firebase.Database.Internal.Core.Path::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Path_System_Collections_IEnumerable_GetEnumerator_m1605240845 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::GetRelative(Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.Path)
extern "C"  Path_t2568473163 * Path_GetRelative_m3501304684 (Il2CppObject * __this /* static, unused */, Path_t2568473163 * ___from0, Path_t2568473163 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::GetEmptyPath()
extern "C"  Path_t2568473163 * Path_GetEmptyPath_m3969996076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::Child(Firebase.Database.Internal.Core.Path)
extern "C"  Path_t2568473163 * Path_Child_m3499716985 (Path_t2568473163 * __this, Path_t2568473163 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::Child(Firebase.Database.Internal.Snapshot.ChildKey)
extern "C"  Path_t2568473163 * Path_Child_m789392660 (Path_t2568473163 * __this, ChildKey_t1197802383 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Path::ToString()
extern "C"  String_t* Path_ToString_m1192033307 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.Path::WireFormat()
extern "C"  String_t* Path_WireFormat_m2141989563 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Core.Path::AsList()
extern "C"  Il2CppObject* Path_AsList_m2956589050 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.Path::GetFront()
extern "C"  ChildKey_t1197802383 * Path_GetFront_m3266051200 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::PopFront()
extern "C"  Path_t2568473163 * Path_PopFront_m2648153304 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::GetParent()
extern "C"  Path_t2568473163 * Path_GetParent_m3487977912 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.Path::GetBack()
extern "C"  ChildKey_t1197802383 * Path_GetBack_m1890084788 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Path::IsEmpty()
extern "C"  bool Path_IsEmpty_m178803403 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.Path::Size()
extern "C"  int32_t Path_Size_m2686950727 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Path::Contains(Firebase.Database.Internal.Core.Path)
extern "C"  bool Path_Contains_m3595704950 (Path_t2568473163 * __this, Path_t2568473163 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.Path::Equals(System.Object)
extern "C"  bool Path_Equals_m2095665029 (Path_t2568473163 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.Path::GetHashCode()
extern "C"  int32_t Path_GetHashCode_m3267936723 (Path_t2568473163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.Path::.cctor()
extern "C"  void Path__cctor_m3844982195 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
