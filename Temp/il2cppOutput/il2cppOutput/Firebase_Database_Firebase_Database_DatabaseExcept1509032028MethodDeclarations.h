﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Firebase.Database.DatabaseException
struct DatabaseException_t1509032028;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
extern "C"  void DatabaseException__ctor_m199494509 (DatabaseException_t1509032028 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
extern "C"  void DatabaseException__ctor_m1199054797 (DatabaseException_t1509032028 * __this, String_t* ___message0, Exception_t1927440687 * ___cause1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
