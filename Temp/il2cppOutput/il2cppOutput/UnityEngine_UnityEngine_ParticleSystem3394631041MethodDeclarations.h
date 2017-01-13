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

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t574222242;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t2419492168;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmissionMod2748003162.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_ParticleSystemStopBehavior3921148531.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmitParams1656680080.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel2419492168.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
extern "C"  bool ParticleSystem_get_isPlaying_m1575756079 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSpeed()
extern "C"  float ParticleSystem_get_startSpeed_m1416474346 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSpeed(System.Single)
extern "C"  void ParticleSystem_set_startSpeed_m4170689111 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startSize()
extern "C"  float ParticleSystem_get_startSize_m3327114244 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startSize(System.Single)
extern "C"  void ParticleSystem_set_startSize_m657274193 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C"  float ParticleSystem_get_startLifetime_m70433814 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_startLifetime(System.Single)
extern "C"  void ParticleSystem_set_startLifetime_m1743610511 (ParticleSystem_t3394631041 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::get_maxParticles()
extern "C"  int32_t ParticleSystem_get_maxParticles_m3216658554 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
extern "C"  EmissionModule_t2748003162  ParticleSystem_get_emission_m3968992617 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
extern "C"  void ParticleSystem_SetParticles_m3035584975 (ParticleSystem_t3394631041 * __this, ParticleU5BU5D_t574222242* ___particles0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
extern "C"  int32_t ParticleSystem_GetParticles_m1903763264 (ParticleSystem_t3394631041 * __this, ParticleU5BU5D_t574222242* ___particles0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m2372735108 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Stop(UnityEngine.ParticleSystem,UnityEngine.ParticleSystemStopBehavior)
extern "C"  bool ParticleSystem_Internal_Stop_m3380666254 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___self0, int32_t ___stopBehavior1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m4171585816 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1705837075 (ParticleSystem_t3394631041 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C"  void ParticleSystem_Stop_m941760450 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
extern "C"  void ParticleSystem_Stop_m3810114649 (ParticleSystem_t3394631041 * __this, bool ___withChildren0, int32_t ___stopBehavior1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32)
extern "C"  void ParticleSystem_Emit_m2916854584 (ParticleSystem_t3394631041 * __this, EmitParams_t1656680080  ___emitParams0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Emit(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
extern "C"  void ParticleSystem_Internal_Emit_m2721642954 (ParticleSystem_t3394631041 * __this, EmitParams_t1656680080 * ___emitParams0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m1240416587 (ParticleSystem_t3394631041 * __this, bool ___recurse0, IteratorDelegate_t2419492168 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m3260878897 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___transform0, IteratorDelegate_t2419492168 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__0(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__0_m4250446697 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
