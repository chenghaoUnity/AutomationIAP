#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniArt.PixelScifiLandscape.Sample.Character_Input
struct Character_Input_t2061814878;
// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester
struct Character_GroundedTester_t1329240161;
// UniArt.PixelScifiLandscape.Sample.Character_AnimationController
struct Character_AnimationController_t2390840408;
// System.String
struct String_t;
// UniArt.PixelScifiLandscape.Sample.Character_LookController
struct Character_LookController_t3242335943;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_CrouchController
struct  Character_CrouchController_t3969958068  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.Character_Input UniArt.PixelScifiLandscape.Sample.Character_CrouchController::characterInput
	Character_Input_t2061814878 * ___characterInput_2;
	// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester UniArt.PixelScifiLandscape.Sample.Character_CrouchController::groundedTester
	Character_GroundedTester_t1329240161 * ___groundedTester_3;
	// UniArt.PixelScifiLandscape.Sample.Character_AnimationController UniArt.PixelScifiLandscape.Sample.Character_CrouchController::animationController
	Character_AnimationController_t2390840408 * ___animationController_4;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_CrouchController::crouchAnimationStateName
	String_t* ___crouchAnimationStateName_5;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_CrouchController::lookdownOffset
	float ___lookdownOffset_6;
	// UniArt.PixelScifiLandscape.Sample.Character_LookController UniArt.PixelScifiLandscape.Sample.Character_CrouchController::lookController
	Character_LookController_t3242335943 * ___lookController_7;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_CrouchController::m_bCrouch
	bool ___m_bCrouch_8;

public:
	inline static int32_t get_offset_of_characterInput_2() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___characterInput_2)); }
	inline Character_Input_t2061814878 * get_characterInput_2() const { return ___characterInput_2; }
	inline Character_Input_t2061814878 ** get_address_of_characterInput_2() { return &___characterInput_2; }
	inline void set_characterInput_2(Character_Input_t2061814878 * value)
	{
		___characterInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___characterInput_2, value);
	}

	inline static int32_t get_offset_of_groundedTester_3() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___groundedTester_3)); }
	inline Character_GroundedTester_t1329240161 * get_groundedTester_3() const { return ___groundedTester_3; }
	inline Character_GroundedTester_t1329240161 ** get_address_of_groundedTester_3() { return &___groundedTester_3; }
	inline void set_groundedTester_3(Character_GroundedTester_t1329240161 * value)
	{
		___groundedTester_3 = value;
		Il2CppCodeGenWriteBarrier(&___groundedTester_3, value);
	}

	inline static int32_t get_offset_of_animationController_4() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___animationController_4)); }
	inline Character_AnimationController_t2390840408 * get_animationController_4() const { return ___animationController_4; }
	inline Character_AnimationController_t2390840408 ** get_address_of_animationController_4() { return &___animationController_4; }
	inline void set_animationController_4(Character_AnimationController_t2390840408 * value)
	{
		___animationController_4 = value;
		Il2CppCodeGenWriteBarrier(&___animationController_4, value);
	}

	inline static int32_t get_offset_of_crouchAnimationStateName_5() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___crouchAnimationStateName_5)); }
	inline String_t* get_crouchAnimationStateName_5() const { return ___crouchAnimationStateName_5; }
	inline String_t** get_address_of_crouchAnimationStateName_5() { return &___crouchAnimationStateName_5; }
	inline void set_crouchAnimationStateName_5(String_t* value)
	{
		___crouchAnimationStateName_5 = value;
		Il2CppCodeGenWriteBarrier(&___crouchAnimationStateName_5, value);
	}

	inline static int32_t get_offset_of_lookdownOffset_6() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___lookdownOffset_6)); }
	inline float get_lookdownOffset_6() const { return ___lookdownOffset_6; }
	inline float* get_address_of_lookdownOffset_6() { return &___lookdownOffset_6; }
	inline void set_lookdownOffset_6(float value)
	{
		___lookdownOffset_6 = value;
	}

	inline static int32_t get_offset_of_lookController_7() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___lookController_7)); }
	inline Character_LookController_t3242335943 * get_lookController_7() const { return ___lookController_7; }
	inline Character_LookController_t3242335943 ** get_address_of_lookController_7() { return &___lookController_7; }
	inline void set_lookController_7(Character_LookController_t3242335943 * value)
	{
		___lookController_7 = value;
		Il2CppCodeGenWriteBarrier(&___lookController_7, value);
	}

	inline static int32_t get_offset_of_m_bCrouch_8() { return static_cast<int32_t>(offsetof(Character_CrouchController_t3969958068, ___m_bCrouch_8)); }
	inline bool get_m_bCrouch_8() const { return ___m_bCrouch_8; }
	inline bool* get_address_of_m_bCrouch_8() { return &___m_bCrouch_8; }
	inline void set_m_bCrouch_8(bool value)
	{
		___m_bCrouch_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
