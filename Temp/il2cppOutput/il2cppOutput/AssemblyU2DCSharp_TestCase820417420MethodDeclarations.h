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

// TestCase
struct TestCase_t820417420;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Void TestCase::.ctor()
extern "C"  void TestCase__ctor_m2718246901 (TestCase_t820417420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestCase::.ctor(System.String,System.Boolean,System.String,System.DateTime)
extern "C"  void TestCase__ctor_m386280814 (TestCase_t820417420 * __this, String_t* ___ID0, bool ___result1, String_t* ___descitpion2, DateTime_t693205669  ___date3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestCase::getID()
extern "C"  String_t* TestCase_getID_m3860871323 (TestCase_t820417420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TestCase::getResult()
extern "C"  bool TestCase_getResult_m918254964 (TestCase_t820417420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TestCase::getDescitpion()
extern "C"  String_t* TestCase_getDescitpion_m1321403330 (TestCase_t820417420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime TestCase::getDate()
extern "C"  DateTime_t693205669  TestCase_getDate_m3475179060 (TestCase_t820417420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestCase::setID(System.String)
extern "C"  void TestCase_setID_m2495176612 (TestCase_t820417420 * __this, String_t* ___ID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestCase::setResult(System.Boolean)
extern "C"  void TestCase_setResult_m1840081537 (TestCase_t820417420 * __this, bool ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestCase::setDescitpion(System.String)
extern "C"  void TestCase_setDescitpion_m2629033453 (TestCase_t820417420 * __this, String_t* ___descitpion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestCase::setdate(System.DateTime)
extern "C"  void TestCase_setdate_m4274576833 (TestCase_t820417420 * __this, DateTime_t693205669  ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
