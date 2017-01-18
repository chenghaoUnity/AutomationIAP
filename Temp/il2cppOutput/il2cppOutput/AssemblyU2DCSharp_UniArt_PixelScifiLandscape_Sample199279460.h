#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniArt.PixelScifiLandscape.Sample.Character_MovementController
struct Character_MovementController_t180692203;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer/Sound
struct Sound_t1426305660;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer
struct  Character_FeetSoundPlayer_t199279460  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.Character_MovementController UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::movementController
	Character_MovementController_t180692203 * ___movementController_2;
	// UnityEngine.AudioSource UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer/Sound UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::leftFootWalkSound
	Sound_t1426305660 * ___leftFootWalkSound_4;
	// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer/Sound UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::rightFootWalkSound
	Sound_t1426305660 * ___rightFootWalkSound_5;
	// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer/Sound UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::leftFootRunSound
	Sound_t1426305660 * ___leftFootRunSound_6;
	// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer/Sound UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::rightFootRunSound
	Sound_t1426305660 * ___rightFootRunSound_7;
	// UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer/Sound UniArt.PixelScifiLandscape.Sample.Character_FeetSoundPlayer::jumpSound
	Sound_t1426305660 * ___jumpSound_8;

public:
	inline static int32_t get_offset_of_movementController_2() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___movementController_2)); }
	inline Character_MovementController_t180692203 * get_movementController_2() const { return ___movementController_2; }
	inline Character_MovementController_t180692203 ** get_address_of_movementController_2() { return &___movementController_2; }
	inline void set_movementController_2(Character_MovementController_t180692203 * value)
	{
		___movementController_2 = value;
		Il2CppCodeGenWriteBarrier(&___movementController_2, value);
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_leftFootWalkSound_4() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___leftFootWalkSound_4)); }
	inline Sound_t1426305660 * get_leftFootWalkSound_4() const { return ___leftFootWalkSound_4; }
	inline Sound_t1426305660 ** get_address_of_leftFootWalkSound_4() { return &___leftFootWalkSound_4; }
	inline void set_leftFootWalkSound_4(Sound_t1426305660 * value)
	{
		___leftFootWalkSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___leftFootWalkSound_4, value);
	}

	inline static int32_t get_offset_of_rightFootWalkSound_5() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___rightFootWalkSound_5)); }
	inline Sound_t1426305660 * get_rightFootWalkSound_5() const { return ___rightFootWalkSound_5; }
	inline Sound_t1426305660 ** get_address_of_rightFootWalkSound_5() { return &___rightFootWalkSound_5; }
	inline void set_rightFootWalkSound_5(Sound_t1426305660 * value)
	{
		___rightFootWalkSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightFootWalkSound_5, value);
	}

	inline static int32_t get_offset_of_leftFootRunSound_6() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___leftFootRunSound_6)); }
	inline Sound_t1426305660 * get_leftFootRunSound_6() const { return ___leftFootRunSound_6; }
	inline Sound_t1426305660 ** get_address_of_leftFootRunSound_6() { return &___leftFootRunSound_6; }
	inline void set_leftFootRunSound_6(Sound_t1426305660 * value)
	{
		___leftFootRunSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___leftFootRunSound_6, value);
	}

	inline static int32_t get_offset_of_rightFootRunSound_7() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___rightFootRunSound_7)); }
	inline Sound_t1426305660 * get_rightFootRunSound_7() const { return ___rightFootRunSound_7; }
	inline Sound_t1426305660 ** get_address_of_rightFootRunSound_7() { return &___rightFootRunSound_7; }
	inline void set_rightFootRunSound_7(Sound_t1426305660 * value)
	{
		___rightFootRunSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___rightFootRunSound_7, value);
	}

	inline static int32_t get_offset_of_jumpSound_8() { return static_cast<int32_t>(offsetof(Character_FeetSoundPlayer_t199279460, ___jumpSound_8)); }
	inline Sound_t1426305660 * get_jumpSound_8() const { return ___jumpSound_8; }
	inline Sound_t1426305660 ** get_address_of_jumpSound_8() { return &___jumpSound_8; }
	inline void set_jumpSound_8(Sound_t1426305660 * value)
	{
		___jumpSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___jumpSound_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
