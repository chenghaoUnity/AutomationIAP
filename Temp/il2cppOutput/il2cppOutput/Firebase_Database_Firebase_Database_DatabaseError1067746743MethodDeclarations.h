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

// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// Firebase.Database.DatabaseException
struct DatabaseException_t1509032028;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Firebase.Database.DatabaseError::.cctor()
extern "C"  void DatabaseError__cctor_m2501169279 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String)
extern "C"  void DatabaseError__ctor_m3946689215 (DatabaseError_t1067746743 * __this, int32_t ___code0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
extern "C"  void DatabaseError__ctor_m840966665 (DatabaseError_t1067746743 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.DatabaseError::get_Code()
extern "C"  int32_t DatabaseError_get_Code_m4044853402 (DatabaseError_t1067746743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
extern "C"  void DatabaseError_set_Code_m4266301757 (DatabaseError_t1067746743 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DatabaseError::get_Message()
extern "C"  String_t* DatabaseError_get_Message_m4169681475 (DatabaseError_t1067746743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
extern "C"  void DatabaseError_set_Message_m1348273492 (DatabaseError_t1067746743 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
extern "C"  void DatabaseError_set_Details_m1581701309 (DatabaseError_t1067746743 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromStatus(System.String)
extern "C"  DatabaseError_t1067746743 * DatabaseError_FromStatus_m3837676316 (Il2CppObject * __this /* static, unused */, String_t* ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromStatus(System.String,System.String)
extern "C"  DatabaseError_t1067746743 * DatabaseError_FromStatus_m4069661308 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromCode(System.Int32)
extern "C"  DatabaseError_t1067746743 * DatabaseError_FromCode_m2653009500 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromStatus(System.String,System.String,System.String)
extern "C"  DatabaseError_t1067746743 * DatabaseError_FromStatus_m2895498716 (Il2CppObject * __this /* static, unused */, String_t* ___status0, String_t* ___reason1, String_t* ___details2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromException(System.Exception)
extern "C"  DatabaseError_t1067746743 * DatabaseError_FromException_m4050455659 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DatabaseError::ToString()
extern "C"  String_t* DatabaseError_ToString_m3041795051 (DatabaseError_t1067746743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DatabaseException Firebase.Database.DatabaseError::ToException()
extern "C"  DatabaseException_t1509032028 * DatabaseError_ToException_m3251446553 (DatabaseError_t1067746743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
