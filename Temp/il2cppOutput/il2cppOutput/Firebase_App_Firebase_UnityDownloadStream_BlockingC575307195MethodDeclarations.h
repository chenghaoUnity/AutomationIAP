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

// Firebase.UnityDownloadStream/BlockingCollection`1<System.Object>
struct BlockingCollection_1_t575307195;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Firebase.UnityDownloadStream/BlockingCollection`1<System.Object>::Dispose()
extern "C"  void BlockingCollection_1_Dispose_m1100081259_gshared (BlockingCollection_1_t575307195 * __this, const MethodInfo* method);
#define BlockingCollection_1_Dispose_m1100081259(__this, method) ((  void (*) (BlockingCollection_1_t575307195 *, const MethodInfo*))BlockingCollection_1_Dispose_m1100081259_gshared)(__this, method)
// System.Void Firebase.UnityDownloadStream/BlockingCollection`1<System.Object>::Add(T)
extern "C"  void BlockingCollection_1_Add_m2357368053_gshared (BlockingCollection_1_t575307195 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define BlockingCollection_1_Add_m2357368053(__this, ___item0, method) ((  void (*) (BlockingCollection_1_t575307195 *, Il2CppObject *, const MethodInfo*))BlockingCollection_1_Add_m2357368053_gshared)(__this, ___item0, method)
// T Firebase.UnityDownloadStream/BlockingCollection`1<System.Object>::Take()
extern "C"  Il2CppObject * BlockingCollection_1_Take_m2773562012_gshared (BlockingCollection_1_t575307195 * __this, const MethodInfo* method);
#define BlockingCollection_1_Take_m2773562012(__this, method) ((  Il2CppObject * (*) (BlockingCollection_1_t575307195 *, const MethodInfo*))BlockingCollection_1_Take_m2773562012_gshared)(__this, method)
