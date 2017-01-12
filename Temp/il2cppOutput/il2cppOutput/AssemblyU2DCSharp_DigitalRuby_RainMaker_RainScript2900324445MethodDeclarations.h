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

// DigitalRuby.RainMaker.RainScript2D
struct RainScript2D_t2900324445;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"

// System.Void DigitalRuby.RainMaker.RainScript2D::.ctor()
extern "C"  void RainScript2D__ctor_m1585029812 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::EmitExplosion(UnityEngine.Vector3&)
extern "C"  void RainScript2D_EmitExplosion_m4278437767 (RainScript2D_t2900324445 * __this, Vector3_t2243707580 * ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::TransformParticleSystem(UnityEngine.ParticleSystem,System.Single,System.Single)
extern "C"  void RainScript2D_TransformParticleSystem_m4087899387 (RainScript2D_t2900324445 * __this, ParticleSystem_t3394631041 * ___p0, float ___initialStartSpeed1, float ___initialStartSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::CheckForCollisionsRainParticles()
extern "C"  void RainScript2D_CheckForCollisionsRainParticles_m326152787 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::CheckForCollisionsMistParticles()
extern "C"  void RainScript2D_CheckForCollisionsMistParticles_m2348575818 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::Start()
extern "C"  void RainScript2D_Start_m2237897708 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::Update()
extern "C"  void RainScript2D_Update_m1543581869 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.RainMaker.RainScript2D::RainFallEmissionRate()
extern "C"  float RainScript2D_RainFallEmissionRate_m3461603386 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DigitalRuby.RainMaker.RainScript2D::get_UseRainMistSoftParticles()
extern "C"  bool RainScript2D_get_UseRainMistSoftParticles_m2613107150 (RainScript2D_t2900324445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.RainScript2D::.cctor()
extern "C"  void RainScript2D__cctor_m2824315603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
