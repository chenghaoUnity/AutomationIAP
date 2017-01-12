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

// Firebase.Database.Internal.Core.UserWriteRecord
struct UserWriteRecord_t388677579;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_2568473163.h"
#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_C496419158.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.Database.Internal.Core.UserWriteRecord::.ctor(System.Int64,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node,System.Boolean)
extern "C"  void UserWriteRecord__ctor_m3382846379 (UserWriteRecord_t388677579 * __this, int64_t ___writeId0, Path_t2568473163 * ___path1, Node_t2640059010 * ___overwrite2, bool ___visible3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Core.UserWriteRecord::.ctor(System.Int64,Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Core.CompoundWrite)
extern "C"  void UserWriteRecord__ctor_m1724555555 (UserWriteRecord_t388677579 * __this, int64_t ___writeId0, Path_t2568473163 * ___path1, CompoundWrite_t496419158 * ___merge2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Firebase.Database.Internal.Core.UserWriteRecord::GetWriteId()
extern "C"  int64_t UserWriteRecord_GetWriteId_m4239706623 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.UserWriteRecord::GetPath()
extern "C"  Path_t2568473163 * UserWriteRecord_GetPath_m1100515649 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.UserWriteRecord::GetOverwrite()
extern "C"  Node_t2640059010 * UserWriteRecord_GetOverwrite_m555799021 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.UserWriteRecord::GetMerge()
extern "C"  CompoundWrite_t496419158 * UserWriteRecord_GetMerge_m3520442645 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.UserWriteRecord::IsOverwrite()
extern "C"  bool UserWriteRecord_IsOverwrite_m3905883769 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.UserWriteRecord::IsVisible()
extern "C"  bool UserWriteRecord_IsVisible_m1041094760 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.Core.UserWriteRecord::Equals(System.Object)
extern "C"  bool UserWriteRecord_Equals_m2168431181 (UserWriteRecord_t388677579 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.Core.UserWriteRecord::GetHashCode()
extern "C"  int32_t UserWriteRecord_GetHashCode_m1188160715 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.Core.UserWriteRecord::ToString()
extern "C"  String_t* UserWriteRecord_ToString_m1938516895 (UserWriteRecord_t388677579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
