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

// Water
struct Water_t1787740867;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void Water::.ctor()
extern "C"  void Water__ctor_m1552806202 (Water_t1787740867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::Start()
extern "C"  void Water_Start_m2529276126 (Water_t1787740867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::Splash(System.Single,System.Single)
extern "C"  void Water_Splash_m2405210207 (Water_t1787740867 * __this, float ___xpos0, float ___velocity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::SpawnWater(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Water_SpawnWater_m499761444 (Water_t1787740867 * __this, float ___Left0, float ___Width1, float ___Top2, float ___Bottom3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::UpdateMeshes()
extern "C"  void Water_UpdateMeshes_m935576160 (Water_t1787740867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Water::FixedUpdate()
extern "C"  void Water_FixedUpdate_m1029678221 (Water_t1787740867 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Water::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C"  Il2CppObject * Water_OnTriggerStay2D_m1401964059 (Water_t1787740867 * __this, Collider2D_t646061738 * ___Hit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
