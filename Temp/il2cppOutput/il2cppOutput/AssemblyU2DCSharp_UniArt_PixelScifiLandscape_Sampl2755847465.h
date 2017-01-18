#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UniArt.PixelScifiLandscape.Sample.Character_AnimationController
struct Character_AnimationController_t2390840408;
// UniArt.PixelScifiLandscape.Sample.Character_LadderClimber
struct Character_LadderClimber_t734778460;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_LadderClimbAnimation
struct  Character_LadderClimbAnimation_t2755847465  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator UniArt.PixelScifiLandscape.Sample.Character_LadderClimbAnimation::animator
	Animator_t69676727 * ___animator_2;
	// UniArt.PixelScifiLandscape.Sample.Character_AnimationController UniArt.PixelScifiLandscape.Sample.Character_LadderClimbAnimation::characterAnimationController
	Character_AnimationController_t2390840408 * ___characterAnimationController_3;
	// UniArt.PixelScifiLandscape.Sample.Character_LadderClimber UniArt.PixelScifiLandscape.Sample.Character_LadderClimbAnimation::ladderClimber
	Character_LadderClimber_t734778460 * ___ladderClimber_4;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimbAnimation::distanceByClimbLoop
	float ___distanceByClimbLoop_5;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(Character_LadderClimbAnimation_t2755847465, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_characterAnimationController_3() { return static_cast<int32_t>(offsetof(Character_LadderClimbAnimation_t2755847465, ___characterAnimationController_3)); }
	inline Character_AnimationController_t2390840408 * get_characterAnimationController_3() const { return ___characterAnimationController_3; }
	inline Character_AnimationController_t2390840408 ** get_address_of_characterAnimationController_3() { return &___characterAnimationController_3; }
	inline void set_characterAnimationController_3(Character_AnimationController_t2390840408 * value)
	{
		___characterAnimationController_3 = value;
		Il2CppCodeGenWriteBarrier(&___characterAnimationController_3, value);
	}

	inline static int32_t get_offset_of_ladderClimber_4() { return static_cast<int32_t>(offsetof(Character_LadderClimbAnimation_t2755847465, ___ladderClimber_4)); }
	inline Character_LadderClimber_t734778460 * get_ladderClimber_4() const { return ___ladderClimber_4; }
	inline Character_LadderClimber_t734778460 ** get_address_of_ladderClimber_4() { return &___ladderClimber_4; }
	inline void set_ladderClimber_4(Character_LadderClimber_t734778460 * value)
	{
		___ladderClimber_4 = value;
		Il2CppCodeGenWriteBarrier(&___ladderClimber_4, value);
	}

	inline static int32_t get_offset_of_distanceByClimbLoop_5() { return static_cast<int32_t>(offsetof(Character_LadderClimbAnimation_t2755847465, ___distanceByClimbLoop_5)); }
	inline float get_distanceByClimbLoop_5() const { return ___distanceByClimbLoop_5; }
	inline float* get_address_of_distanceByClimbLoop_5() { return &___distanceByClimbLoop_5; }
	inline void set_distanceByClimbLoop_5(float value)
	{
		___distanceByClimbLoop_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
