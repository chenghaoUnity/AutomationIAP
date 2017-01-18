#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer/Sound
struct  Sound_t4109981400  : public Il2CppObject
{
public:
	// UnityEngine.AudioClip UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer/Sound::clip
	AudioClip_t1932558630 * ___clip_0;
	// System.Single UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer/Sound::volume
	float ___volume_1;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(Sound_t4109981400, ___clip_0)); }
	inline AudioClip_t1932558630 * get_clip_0() const { return ___clip_0; }
	inline AudioClip_t1932558630 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AudioClip_t1932558630 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier(&___clip_0, value);
	}

	inline static int32_t get_offset_of_volume_1() { return static_cast<int32_t>(offsetof(Sound_t4109981400, ___volume_1)); }
	inline float get_volume_1() const { return ___volume_1; }
	inline float* get_address_of_volume_1() { return &___volume_1; }
	inline void set_volume_1(float value)
	{
		___volume_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
