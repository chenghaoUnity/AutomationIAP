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

// DigitalRuby.RainMaker.RainCollision
struct RainCollision_t62373560;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void DigitalRuby.RainMaker.RainCollision::.ctor()
extern "C"  void RainCollision__ctor_m583931479 (RainCollision_t62373560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainCollision::Start()
extern "C"  void RainCollision_Start_m3871684451 (RainCollision_t62373560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainCollision::Update()
extern "C"  void RainCollision_Update_m3444387482 (RainCollision_t62373560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainCollision::Emit(UnityEngine.ParticleSystem,UnityEngine.Vector3&)
extern "C"  void RainCollision_Emit_m634790619 (RainCollision_t62373560 * __this, ParticleSystem_t3394631041 * ___p0, Vector3_t2243707580 * ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainCollision::OnParticleCollision(UnityEngine.GameObject)
extern "C"  void RainCollision_OnParticleCollision_m353440276 (RainCollision_t62373560 * __this, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainCollision::.cctor()
extern "C"  void RainCollision__cctor_m1530699506 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
