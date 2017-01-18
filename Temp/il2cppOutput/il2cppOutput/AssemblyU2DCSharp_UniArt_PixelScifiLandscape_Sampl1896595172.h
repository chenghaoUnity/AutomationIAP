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

// UniArt.PixelScifiLandscape.Sample.Character_LookUpController
struct  Character_LookUpController_t1896595172  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.Character_Input UniArt.PixelScifiLandscape.Sample.Character_LookUpController::characterInput
	Character_Input_t2061814878 * ___characterInput_2;
	// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester UniArt.PixelScifiLandscape.Sample.Character_LookUpController::groundedTester
	Character_GroundedTester_t1329240161 * ___groundedTester_3;
	// UniArt.PixelScifiLandscape.Sample.Character_AnimationController UniArt.PixelScifiLandscape.Sample.Character_LookUpController::animationController
	Character_AnimationController_t2390840408 * ___animationController_4;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_LookUpController::lookUpAnimationStateName
	String_t* ___lookUpAnimationStateName_5;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LookUpController::lookUpOffset
	float ___lookUpOffset_6;
	// UniArt.PixelScifiLandscape.Sample.Character_LookController UniArt.PixelScifiLandscape.Sample.Character_LookUpController::lookController
	Character_LookController_t3242335943 * ___lookController_7;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_LookUpController::m_bLookingUp
	bool ___m_bLookingUp_8;

public:
	inline static int32_t get_offset_of_characterInput_2() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___characterInput_2)); }
	inline Character_Input_t2061814878 * get_characterInput_2() const { return ___characterInput_2; }
	inline Character_Input_t2061814878 ** get_address_of_characterInput_2() { return &___characterInput_2; }
	inline void set_characterInput_2(Character_Input_t2061814878 * value)
	{
		___characterInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___characterInput_2, value);
	}

	inline static int32_t get_offset_of_groundedTester_3() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___groundedTester_3)); }
	inline Character_GroundedTester_t1329240161 * get_groundedTester_3() const { return ___groundedTester_3; }
	inline Character_GroundedTester_t1329240161 ** get_address_of_groundedTester_3() { return &___groundedTester_3; }
	inline void set_groundedTester_3(Character_GroundedTester_t1329240161 * value)
	{
		___groundedTester_3 = value;
		Il2CppCodeGenWriteBarrier(&___groundedTester_3, value);
	}

	inline static int32_t get_offset_of_animationController_4() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___animationController_4)); }
	inline Character_AnimationController_t2390840408 * get_animationController_4() const { return ___animationController_4; }
	inline Character_AnimationController_t2390840408 ** get_address_of_animationController_4() { return &___animationController_4; }
	inline void set_animationController_4(Character_AnimationController_t2390840408 * value)
	{
		___animationController_4 = value;
		Il2CppCodeGenWriteBarrier(&___animationController_4, value);
	}

	inline static int32_t get_offset_of_lookUpAnimationStateName_5() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___lookUpAnimationStateName_5)); }
	inline String_t* get_lookUpAnimationStateName_5() const { return ___lookUpAnimationStateName_5; }
	inline String_t** get_address_of_lookUpAnimationStateName_5() { return &___lookUpAnimationStateName_5; }
	inline void set_lookUpAnimationStateName_5(String_t* value)
	{
		___lookUpAnimationStateName_5 = value;
		Il2CppCodeGenWriteBarrier(&___lookUpAnimationStateName_5, value);
	}

	inline static int32_t get_offset_of_lookUpOffset_6() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___lookUpOffset_6)); }
	inline float get_lookUpOffset_6() const { return ___lookUpOffset_6; }
	inline float* get_address_of_lookUpOffset_6() { return &___lookUpOffset_6; }
	inline void set_lookUpOffset_6(float value)
	{
		___lookUpOffset_6 = value;
	}

	inline static int32_t get_offset_of_lookController_7() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___lookController_7)); }
	inline Character_LookController_t3242335943 * get_lookController_7() const { return ___lookController_7; }
	inline Character_LookController_t3242335943 ** get_address_of_lookController_7() { return &___lookController_7; }
	inline void set_lookController_7(Character_LookController_t3242335943 * value)
	{
		___lookController_7 = value;
		Il2CppCodeGenWriteBarrier(&___lookController_7, value);
	}

	inline static int32_t get_offset_of_m_bLookingUp_8() { return static_cast<int32_t>(offsetof(Character_LookUpController_t1896595172, ___m_bLookingUp_8)); }
	inline bool get_m_bLookingUp_8() const { return ___m_bLookingUp_8; }
	inline bool* get_address_of_m_bLookingUp_8() { return &___m_bLookingUp_8; }
	inline void set_m_bLookingUp_8(bool value)
	{
		___m_bLookingUp_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
