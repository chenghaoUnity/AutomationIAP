#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.WindZone
struct WindZone_t3879450892;
// DigitalRuby.RainMaker.LoopingAudioSource
struct LoopingAudioSource_t960853467;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.BaseRainScript
struct  BaseRainScript_t4211556990  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera DigitalRuby.RainMaker.BaseRainScript::Camera
	Camera_t189460977 * ___Camera_2;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundLight
	AudioClip_t1932558630 * ___RainSoundLight_3;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundMedium
	AudioClip_t1932558630 * ___RainSoundMedium_4;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::RainSoundHeavy
	AudioClip_t1932558630 * ___RainSoundHeavy_5;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::RainIntensity
	float ___RainIntensity_6;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainFallParticleSystem
	ParticleSystem_t3394631041 * ___RainFallParticleSystem_7;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainExplosionParticleSystem
	ParticleSystem_t3394631041 * ___RainExplosionParticleSystem_8;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.BaseRainScript::RainMistParticleSystem
	ParticleSystem_t3394631041 * ___RainMistParticleSystem_9;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::RainMistThreshold
	float ___RainMistThreshold_10;
	// UnityEngine.AudioClip DigitalRuby.RainMaker.BaseRainScript::WindSound
	AudioClip_t1932558630 * ___WindSound_11;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::WindSoundVolumeModifier
	float ___WindSoundVolumeModifier_12;
	// UnityEngine.WindZone DigitalRuby.RainMaker.BaseRainScript::WindZone
	WindZone_t3879450892 * ___WindZone_13;
	// UnityEngine.Vector3 DigitalRuby.RainMaker.BaseRainScript::WindSpeedRange
	Vector3_t2243707580  ___WindSpeedRange_14;
	// UnityEngine.Vector2 DigitalRuby.RainMaker.BaseRainScript::WindChangeInterval
	Vector2_t2243707579  ___WindChangeInterval_15;
	// System.Boolean DigitalRuby.RainMaker.BaseRainScript::EnableWind
	bool ___EnableWind_16;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainLight
	LoopingAudioSource_t960853467 * ___audioSourceRainLight_17;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainMedium
	LoopingAudioSource_t960853467 * ___audioSourceRainMedium_18;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainHeavy
	LoopingAudioSource_t960853467 * ___audioSourceRainHeavy_19;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceRainCurrent
	LoopingAudioSource_t960853467 * ___audioSourceRainCurrent_20;
	// DigitalRuby.RainMaker.LoopingAudioSource DigitalRuby.RainMaker.BaseRainScript::audioSourceWind
	LoopingAudioSource_t960853467 * ___audioSourceWind_21;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainMaterial
	Material_t193706927 * ___rainMaterial_22;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainExplosionMaterial
	Material_t193706927 * ___rainExplosionMaterial_23;
	// UnityEngine.Material DigitalRuby.RainMaker.BaseRainScript::rainMistMaterial
	Material_t193706927 * ___rainMistMaterial_24;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::lastRainIntensityValue
	float ___lastRainIntensityValue_25;
	// System.Single DigitalRuby.RainMaker.BaseRainScript::nextWindTime
	float ___nextWindTime_26;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___Camera_2)); }
	inline Camera_t189460977 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t189460977 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t189460977 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_RainSoundLight_3() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainSoundLight_3)); }
	inline AudioClip_t1932558630 * get_RainSoundLight_3() const { return ___RainSoundLight_3; }
	inline AudioClip_t1932558630 ** get_address_of_RainSoundLight_3() { return &___RainSoundLight_3; }
	inline void set_RainSoundLight_3(AudioClip_t1932558630 * value)
	{
		___RainSoundLight_3 = value;
		Il2CppCodeGenWriteBarrier(&___RainSoundLight_3, value);
	}

	inline static int32_t get_offset_of_RainSoundMedium_4() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainSoundMedium_4)); }
	inline AudioClip_t1932558630 * get_RainSoundMedium_4() const { return ___RainSoundMedium_4; }
	inline AudioClip_t1932558630 ** get_address_of_RainSoundMedium_4() { return &___RainSoundMedium_4; }
	inline void set_RainSoundMedium_4(AudioClip_t1932558630 * value)
	{
		___RainSoundMedium_4 = value;
		Il2CppCodeGenWriteBarrier(&___RainSoundMedium_4, value);
	}

	inline static int32_t get_offset_of_RainSoundHeavy_5() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainSoundHeavy_5)); }
	inline AudioClip_t1932558630 * get_RainSoundHeavy_5() const { return ___RainSoundHeavy_5; }
	inline AudioClip_t1932558630 ** get_address_of_RainSoundHeavy_5() { return &___RainSoundHeavy_5; }
	inline void set_RainSoundHeavy_5(AudioClip_t1932558630 * value)
	{
		___RainSoundHeavy_5 = value;
		Il2CppCodeGenWriteBarrier(&___RainSoundHeavy_5, value);
	}

	inline static int32_t get_offset_of_RainIntensity_6() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainIntensity_6)); }
	inline float get_RainIntensity_6() const { return ___RainIntensity_6; }
	inline float* get_address_of_RainIntensity_6() { return &___RainIntensity_6; }
	inline void set_RainIntensity_6(float value)
	{
		___RainIntensity_6 = value;
	}

	inline static int32_t get_offset_of_RainFallParticleSystem_7() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainFallParticleSystem_7)); }
	inline ParticleSystem_t3394631041 * get_RainFallParticleSystem_7() const { return ___RainFallParticleSystem_7; }
	inline ParticleSystem_t3394631041 ** get_address_of_RainFallParticleSystem_7() { return &___RainFallParticleSystem_7; }
	inline void set_RainFallParticleSystem_7(ParticleSystem_t3394631041 * value)
	{
		___RainFallParticleSystem_7 = value;
		Il2CppCodeGenWriteBarrier(&___RainFallParticleSystem_7, value);
	}

	inline static int32_t get_offset_of_RainExplosionParticleSystem_8() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainExplosionParticleSystem_8)); }
	inline ParticleSystem_t3394631041 * get_RainExplosionParticleSystem_8() const { return ___RainExplosionParticleSystem_8; }
	inline ParticleSystem_t3394631041 ** get_address_of_RainExplosionParticleSystem_8() { return &___RainExplosionParticleSystem_8; }
	inline void set_RainExplosionParticleSystem_8(ParticleSystem_t3394631041 * value)
	{
		___RainExplosionParticleSystem_8 = value;
		Il2CppCodeGenWriteBarrier(&___RainExplosionParticleSystem_8, value);
	}

	inline static int32_t get_offset_of_RainMistParticleSystem_9() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainMistParticleSystem_9)); }
	inline ParticleSystem_t3394631041 * get_RainMistParticleSystem_9() const { return ___RainMistParticleSystem_9; }
	inline ParticleSystem_t3394631041 ** get_address_of_RainMistParticleSystem_9() { return &___RainMistParticleSystem_9; }
	inline void set_RainMistParticleSystem_9(ParticleSystem_t3394631041 * value)
	{
		___RainMistParticleSystem_9 = value;
		Il2CppCodeGenWriteBarrier(&___RainMistParticleSystem_9, value);
	}

	inline static int32_t get_offset_of_RainMistThreshold_10() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___RainMistThreshold_10)); }
	inline float get_RainMistThreshold_10() const { return ___RainMistThreshold_10; }
	inline float* get_address_of_RainMistThreshold_10() { return &___RainMistThreshold_10; }
	inline void set_RainMistThreshold_10(float value)
	{
		___RainMistThreshold_10 = value;
	}

	inline static int32_t get_offset_of_WindSound_11() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___WindSound_11)); }
	inline AudioClip_t1932558630 * get_WindSound_11() const { return ___WindSound_11; }
	inline AudioClip_t1932558630 ** get_address_of_WindSound_11() { return &___WindSound_11; }
	inline void set_WindSound_11(AudioClip_t1932558630 * value)
	{
		___WindSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___WindSound_11, value);
	}

	inline static int32_t get_offset_of_WindSoundVolumeModifier_12() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___WindSoundVolumeModifier_12)); }
	inline float get_WindSoundVolumeModifier_12() const { return ___WindSoundVolumeModifier_12; }
	inline float* get_address_of_WindSoundVolumeModifier_12() { return &___WindSoundVolumeModifier_12; }
	inline void set_WindSoundVolumeModifier_12(float value)
	{
		___WindSoundVolumeModifier_12 = value;
	}

	inline static int32_t get_offset_of_WindZone_13() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___WindZone_13)); }
	inline WindZone_t3879450892 * get_WindZone_13() const { return ___WindZone_13; }
	inline WindZone_t3879450892 ** get_address_of_WindZone_13() { return &___WindZone_13; }
	inline void set_WindZone_13(WindZone_t3879450892 * value)
	{
		___WindZone_13 = value;
		Il2CppCodeGenWriteBarrier(&___WindZone_13, value);
	}

	inline static int32_t get_offset_of_WindSpeedRange_14() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___WindSpeedRange_14)); }
	inline Vector3_t2243707580  get_WindSpeedRange_14() const { return ___WindSpeedRange_14; }
	inline Vector3_t2243707580 * get_address_of_WindSpeedRange_14() { return &___WindSpeedRange_14; }
	inline void set_WindSpeedRange_14(Vector3_t2243707580  value)
	{
		___WindSpeedRange_14 = value;
	}

	inline static int32_t get_offset_of_WindChangeInterval_15() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___WindChangeInterval_15)); }
	inline Vector2_t2243707579  get_WindChangeInterval_15() const { return ___WindChangeInterval_15; }
	inline Vector2_t2243707579 * get_address_of_WindChangeInterval_15() { return &___WindChangeInterval_15; }
	inline void set_WindChangeInterval_15(Vector2_t2243707579  value)
	{
		___WindChangeInterval_15 = value;
	}

	inline static int32_t get_offset_of_EnableWind_16() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___EnableWind_16)); }
	inline bool get_EnableWind_16() const { return ___EnableWind_16; }
	inline bool* get_address_of_EnableWind_16() { return &___EnableWind_16; }
	inline void set_EnableWind_16(bool value)
	{
		___EnableWind_16 = value;
	}

	inline static int32_t get_offset_of_audioSourceRainLight_17() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___audioSourceRainLight_17)); }
	inline LoopingAudioSource_t960853467 * get_audioSourceRainLight_17() const { return ___audioSourceRainLight_17; }
	inline LoopingAudioSource_t960853467 ** get_address_of_audioSourceRainLight_17() { return &___audioSourceRainLight_17; }
	inline void set_audioSourceRainLight_17(LoopingAudioSource_t960853467 * value)
	{
		___audioSourceRainLight_17 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceRainLight_17, value);
	}

	inline static int32_t get_offset_of_audioSourceRainMedium_18() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___audioSourceRainMedium_18)); }
	inline LoopingAudioSource_t960853467 * get_audioSourceRainMedium_18() const { return ___audioSourceRainMedium_18; }
	inline LoopingAudioSource_t960853467 ** get_address_of_audioSourceRainMedium_18() { return &___audioSourceRainMedium_18; }
	inline void set_audioSourceRainMedium_18(LoopingAudioSource_t960853467 * value)
	{
		___audioSourceRainMedium_18 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceRainMedium_18, value);
	}

	inline static int32_t get_offset_of_audioSourceRainHeavy_19() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___audioSourceRainHeavy_19)); }
	inline LoopingAudioSource_t960853467 * get_audioSourceRainHeavy_19() const { return ___audioSourceRainHeavy_19; }
	inline LoopingAudioSource_t960853467 ** get_address_of_audioSourceRainHeavy_19() { return &___audioSourceRainHeavy_19; }
	inline void set_audioSourceRainHeavy_19(LoopingAudioSource_t960853467 * value)
	{
		___audioSourceRainHeavy_19 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceRainHeavy_19, value);
	}

	inline static int32_t get_offset_of_audioSourceRainCurrent_20() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___audioSourceRainCurrent_20)); }
	inline LoopingAudioSource_t960853467 * get_audioSourceRainCurrent_20() const { return ___audioSourceRainCurrent_20; }
	inline LoopingAudioSource_t960853467 ** get_address_of_audioSourceRainCurrent_20() { return &___audioSourceRainCurrent_20; }
	inline void set_audioSourceRainCurrent_20(LoopingAudioSource_t960853467 * value)
	{
		___audioSourceRainCurrent_20 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceRainCurrent_20, value);
	}

	inline static int32_t get_offset_of_audioSourceWind_21() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___audioSourceWind_21)); }
	inline LoopingAudioSource_t960853467 * get_audioSourceWind_21() const { return ___audioSourceWind_21; }
	inline LoopingAudioSource_t960853467 ** get_address_of_audioSourceWind_21() { return &___audioSourceWind_21; }
	inline void set_audioSourceWind_21(LoopingAudioSource_t960853467 * value)
	{
		___audioSourceWind_21 = value;
		Il2CppCodeGenWriteBarrier(&___audioSourceWind_21, value);
	}

	inline static int32_t get_offset_of_rainMaterial_22() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___rainMaterial_22)); }
	inline Material_t193706927 * get_rainMaterial_22() const { return ___rainMaterial_22; }
	inline Material_t193706927 ** get_address_of_rainMaterial_22() { return &___rainMaterial_22; }
	inline void set_rainMaterial_22(Material_t193706927 * value)
	{
		___rainMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___rainMaterial_22, value);
	}

	inline static int32_t get_offset_of_rainExplosionMaterial_23() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___rainExplosionMaterial_23)); }
	inline Material_t193706927 * get_rainExplosionMaterial_23() const { return ___rainExplosionMaterial_23; }
	inline Material_t193706927 ** get_address_of_rainExplosionMaterial_23() { return &___rainExplosionMaterial_23; }
	inline void set_rainExplosionMaterial_23(Material_t193706927 * value)
	{
		___rainExplosionMaterial_23 = value;
		Il2CppCodeGenWriteBarrier(&___rainExplosionMaterial_23, value);
	}

	inline static int32_t get_offset_of_rainMistMaterial_24() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___rainMistMaterial_24)); }
	inline Material_t193706927 * get_rainMistMaterial_24() const { return ___rainMistMaterial_24; }
	inline Material_t193706927 ** get_address_of_rainMistMaterial_24() { return &___rainMistMaterial_24; }
	inline void set_rainMistMaterial_24(Material_t193706927 * value)
	{
		___rainMistMaterial_24 = value;
		Il2CppCodeGenWriteBarrier(&___rainMistMaterial_24, value);
	}

	inline static int32_t get_offset_of_lastRainIntensityValue_25() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___lastRainIntensityValue_25)); }
	inline float get_lastRainIntensityValue_25() const { return ___lastRainIntensityValue_25; }
	inline float* get_address_of_lastRainIntensityValue_25() { return &___lastRainIntensityValue_25; }
	inline void set_lastRainIntensityValue_25(float value)
	{
		___lastRainIntensityValue_25 = value;
	}

	inline static int32_t get_offset_of_nextWindTime_26() { return static_cast<int32_t>(offsetof(BaseRainScript_t4211556990, ___nextWindTime_26)); }
	inline float get_nextWindTime_26() const { return ___nextWindTime_26; }
	inline float* get_address_of_nextWindTime_26() { return &___nextWindTime_26; }
	inline void set_nextWindTime_26(float value)
	{
		___nextWindTime_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
