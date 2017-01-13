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

// DatabaseConnection
struct DatabaseConnection_t1952395893;
// System.String
struct String_t;
// System.Collections.Generic.List`1<User>
struct List_1_t89046591;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void DatabaseConnection::.ctor()
extern "C"  void DatabaseConnection__ctor_m2866131316 (DatabaseConnection_t1952395893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DatabaseConnection::Awake()
extern "C"  void DatabaseConnection_Awake_m976199265 (DatabaseConnection_t1952395893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DatabaseConnection::Start()
extern "C"  void DatabaseConnection_Start_m1175003828 (DatabaseConnection_t1952395893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DatabaseConnection::WriteNewScore(System.String,System.String)
extern "C"  void DatabaseConnection_WriteNewScore_m3967880597 (DatabaseConnection_t1952395893 * __this, String_t* ___userId0, String_t* ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<User> DatabaseConnection::loadTopTen()
extern "C"  List_1_t89046591 * DatabaseConnection_loadTopTen_m919457970 (DatabaseConnection_t1952395893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
