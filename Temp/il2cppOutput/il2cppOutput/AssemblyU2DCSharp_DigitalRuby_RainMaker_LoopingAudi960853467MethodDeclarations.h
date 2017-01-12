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

// DigitalRuby.RainMaker.LoopingAudioSource
struct LoopingAudioSource_t960853467;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"

// System.Void DigitalRuby.RainMaker.LoopingAudioSource::.ctor(UnityEngine.MonoBehaviour,UnityEngine.AudioClip)
extern "C"  void LoopingAudioSource__ctor_m2333159094 (LoopingAudioSource_t960853467 * __this, MonoBehaviour_t1158329972 * ___script0, AudioClip_t1932558630 * ___clip1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource DigitalRuby.RainMaker.LoopingAudioSource::get_AudioSource()
extern "C"  AudioSource_t1135106623 * LoopingAudioSource_get_AudioSource_m1398481747 (LoopingAudioSource_t960853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::set_AudioSource(UnityEngine.AudioSource)
extern "C"  void LoopingAudioSource_set_AudioSource_m1212445926 (LoopingAudioSource_t960853467 * __this, AudioSource_t1135106623 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.RainMaker.LoopingAudioSource::get_TargetVolume()
extern "C"  float LoopingAudioSource_get_TargetVolume_m4246622952 (LoopingAudioSource_t960853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::set_TargetVolume(System.Single)
extern "C"  void LoopingAudioSource_set_TargetVolume_m3153346407 (LoopingAudioSource_t960853467 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Play(System.Single)
extern "C"  void LoopingAudioSource_Play_m2019509823 (LoopingAudioSource_t960853467 * __this, float ___targetVolume0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Stop()
extern "C"  void LoopingAudioSource_Stop_m250294244 (LoopingAudioSource_t960853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.LoopingAudioSource::Update()
extern "C"  void LoopingAudioSource_Update_m467078027 (LoopingAudioSource_t960853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
