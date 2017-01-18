#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniArt.PixelScifiLandscape.Sample.Bird
struct Bird_t849110471;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer/Sound
struct Sound_t4109981400;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer
struct  Bird_SoundPlayer_t2668586460  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.Bird UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer::bird
	Bird_t849110471 * ___bird_2;
	// UnityEngine.AudioSource UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer/Sound UniArt.PixelScifiLandscape.Sample.Bird_SoundPlayer::fly
	Sound_t4109981400 * ___fly_4;

public:
	inline static int32_t get_offset_of_bird_2() { return static_cast<int32_t>(offsetof(Bird_SoundPlayer_t2668586460, ___bird_2)); }
	inline Bird_t849110471 * get_bird_2() const { return ___bird_2; }
	inline Bird_t849110471 ** get_address_of_bird_2() { return &___bird_2; }
	inline void set_bird_2(Bird_t849110471 * value)
	{
		___bird_2 = value;
		Il2CppCodeGenWriteBarrier(&___bird_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(Bird_SoundPlayer_t2668586460, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_fly_4() { return static_cast<int32_t>(offsetof(Bird_SoundPlayer_t2668586460, ___fly_4)); }
	inline Sound_t4109981400 * get_fly_4() const { return ___fly_4; }
	inline Sound_t4109981400 ** get_address_of_fly_4() { return &___fly_4; }
	inline void set_fly_4(Sound_t4109981400 * value)
	{
		___fly_4 = value;
		Il2CppCodeGenWriteBarrier(&___fly_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
