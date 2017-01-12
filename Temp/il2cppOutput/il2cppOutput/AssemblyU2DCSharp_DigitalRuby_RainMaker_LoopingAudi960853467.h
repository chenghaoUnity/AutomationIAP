#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.LoopingAudioSource
struct  LoopingAudioSource_t960853467  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource DigitalRuby.RainMaker.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_t1135106623 * ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.RainMaker.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAudioSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t960853467, ___U3CAudioSourceU3Ek__BackingField_0)); }
	inline AudioSource_t1135106623 * get_U3CAudioSourceU3Ek__BackingField_0() const { return ___U3CAudioSourceU3Ek__BackingField_0; }
	inline AudioSource_t1135106623 ** get_address_of_U3CAudioSourceU3Ek__BackingField_0() { return &___U3CAudioSourceU3Ek__BackingField_0; }
	inline void set_U3CAudioSourceU3Ek__BackingField_0(AudioSource_t1135106623 * value)
	{
		___U3CAudioSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAudioSourceU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTargetVolumeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t960853467, ___U3CTargetVolumeU3Ek__BackingField_1)); }
	inline float get_U3CTargetVolumeU3Ek__BackingField_1() const { return ___U3CTargetVolumeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTargetVolumeU3Ek__BackingField_1() { return &___U3CTargetVolumeU3Ek__BackingField_1; }
	inline void set_U3CTargetVolumeU3Ek__BackingField_1(float value)
	{
		___U3CTargetVolumeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
