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
// UniArt.PixelScifiLandscape.Sample.Character_MovementController
struct Character_MovementController_t180692203;
// UniArt.PixelScifiLandscape.Sample.Character_Input
struct Character_Input_t2061814878;
// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester
struct Character_GroundedTester_t1329240161;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_AnimationController
struct  Character_AnimationController_t2390840408  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator UniArt.PixelScifiLandscape.Sample.Character_AnimationController::animator
	Animator_t69676727 * ___animator_2;
	// UniArt.PixelScifiLandscape.Sample.Character_MovementController UniArt.PixelScifiLandscape.Sample.Character_AnimationController::movementController
	Character_MovementController_t180692203 * ___movementController_3;
	// UniArt.PixelScifiLandscape.Sample.Character_Input UniArt.PixelScifiLandscape.Sample.Character_AnimationController::characterInput
	Character_Input_t2061814878 * ___characterInput_4;
	// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester UniArt.PixelScifiLandscape.Sample.Character_AnimationController::groundedTester
	Character_GroundedTester_t1329240161 * ___groundedTester_5;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_AnimationController::minVelocityWalk
	float ___minVelocityWalk_6;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_AnimationController::walkNormalSpeedVelocity
	float ___walkNormalSpeedVelocity_7;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_AnimationController::runNormalSpeedVelocity
	float ___runNormalSpeedVelocity_8;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_AnimationController::standAnimationStateName
	String_t* ___standAnimationStateName_9;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_AnimationController::walkAnimationStateName
	String_t* ___walkAnimationStateName_10;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_AnimationController::runAnimationStateName
	String_t* ___runAnimationStateName_11;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_AnimationController::jumpDownAnimationStateName
	String_t* ___jumpDownAnimationStateName_12;
	// System.String UniArt.PixelScifiLandscape.Sample.Character_AnimationController::jumpUpAnimationStateName
	String_t* ___jumpUpAnimationStateName_13;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_AnimationController::m_bOverrideThisFrame
	bool ___m_bOverrideThisFrame_14;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_movementController_3() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___movementController_3)); }
	inline Character_MovementController_t180692203 * get_movementController_3() const { return ___movementController_3; }
	inline Character_MovementController_t180692203 ** get_address_of_movementController_3() { return &___movementController_3; }
	inline void set_movementController_3(Character_MovementController_t180692203 * value)
	{
		___movementController_3 = value;
		Il2CppCodeGenWriteBarrier(&___movementController_3, value);
	}

	inline static int32_t get_offset_of_characterInput_4() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___characterInput_4)); }
	inline Character_Input_t2061814878 * get_characterInput_4() const { return ___characterInput_4; }
	inline Character_Input_t2061814878 ** get_address_of_characterInput_4() { return &___characterInput_4; }
	inline void set_characterInput_4(Character_Input_t2061814878 * value)
	{
		___characterInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___characterInput_4, value);
	}

	inline static int32_t get_offset_of_groundedTester_5() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___groundedTester_5)); }
	inline Character_GroundedTester_t1329240161 * get_groundedTester_5() const { return ___groundedTester_5; }
	inline Character_GroundedTester_t1329240161 ** get_address_of_groundedTester_5() { return &___groundedTester_5; }
	inline void set_groundedTester_5(Character_GroundedTester_t1329240161 * value)
	{
		___groundedTester_5 = value;
		Il2CppCodeGenWriteBarrier(&___groundedTester_5, value);
	}

	inline static int32_t get_offset_of_minVelocityWalk_6() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___minVelocityWalk_6)); }
	inline float get_minVelocityWalk_6() const { return ___minVelocityWalk_6; }
	inline float* get_address_of_minVelocityWalk_6() { return &___minVelocityWalk_6; }
	inline void set_minVelocityWalk_6(float value)
	{
		___minVelocityWalk_6 = value;
	}

	inline static int32_t get_offset_of_walkNormalSpeedVelocity_7() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___walkNormalSpeedVelocity_7)); }
	inline float get_walkNormalSpeedVelocity_7() const { return ___walkNormalSpeedVelocity_7; }
	inline float* get_address_of_walkNormalSpeedVelocity_7() { return &___walkNormalSpeedVelocity_7; }
	inline void set_walkNormalSpeedVelocity_7(float value)
	{
		___walkNormalSpeedVelocity_7 = value;
	}

	inline static int32_t get_offset_of_runNormalSpeedVelocity_8() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___runNormalSpeedVelocity_8)); }
	inline float get_runNormalSpeedVelocity_8() const { return ___runNormalSpeedVelocity_8; }
	inline float* get_address_of_runNormalSpeedVelocity_8() { return &___runNormalSpeedVelocity_8; }
	inline void set_runNormalSpeedVelocity_8(float value)
	{
		___runNormalSpeedVelocity_8 = value;
	}

	inline static int32_t get_offset_of_standAnimationStateName_9() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___standAnimationStateName_9)); }
	inline String_t* get_standAnimationStateName_9() const { return ___standAnimationStateName_9; }
	inline String_t** get_address_of_standAnimationStateName_9() { return &___standAnimationStateName_9; }
	inline void set_standAnimationStateName_9(String_t* value)
	{
		___standAnimationStateName_9 = value;
		Il2CppCodeGenWriteBarrier(&___standAnimationStateName_9, value);
	}

	inline static int32_t get_offset_of_walkAnimationStateName_10() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___walkAnimationStateName_10)); }
	inline String_t* get_walkAnimationStateName_10() const { return ___walkAnimationStateName_10; }
	inline String_t** get_address_of_walkAnimationStateName_10() { return &___walkAnimationStateName_10; }
	inline void set_walkAnimationStateName_10(String_t* value)
	{
		___walkAnimationStateName_10 = value;
		Il2CppCodeGenWriteBarrier(&___walkAnimationStateName_10, value);
	}

	inline static int32_t get_offset_of_runAnimationStateName_11() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___runAnimationStateName_11)); }
	inline String_t* get_runAnimationStateName_11() const { return ___runAnimationStateName_11; }
	inline String_t** get_address_of_runAnimationStateName_11() { return &___runAnimationStateName_11; }
	inline void set_runAnimationStateName_11(String_t* value)
	{
		___runAnimationStateName_11 = value;
		Il2CppCodeGenWriteBarrier(&___runAnimationStateName_11, value);
	}

	inline static int32_t get_offset_of_jumpDownAnimationStateName_12() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___jumpDownAnimationStateName_12)); }
	inline String_t* get_jumpDownAnimationStateName_12() const { return ___jumpDownAnimationStateName_12; }
	inline String_t** get_address_of_jumpDownAnimationStateName_12() { return &___jumpDownAnimationStateName_12; }
	inline void set_jumpDownAnimationStateName_12(String_t* value)
	{
		___jumpDownAnimationStateName_12 = value;
		Il2CppCodeGenWriteBarrier(&___jumpDownAnimationStateName_12, value);
	}

	inline static int32_t get_offset_of_jumpUpAnimationStateName_13() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___jumpUpAnimationStateName_13)); }
	inline String_t* get_jumpUpAnimationStateName_13() const { return ___jumpUpAnimationStateName_13; }
	inline String_t** get_address_of_jumpUpAnimationStateName_13() { return &___jumpUpAnimationStateName_13; }
	inline void set_jumpUpAnimationStateName_13(String_t* value)
	{
		___jumpUpAnimationStateName_13 = value;
		Il2CppCodeGenWriteBarrier(&___jumpUpAnimationStateName_13, value);
	}

	inline static int32_t get_offset_of_m_bOverrideThisFrame_14() { return static_cast<int32_t>(offsetof(Character_AnimationController_t2390840408, ___m_bOverrideThisFrame_14)); }
	inline bool get_m_bOverrideThisFrame_14() const { return ___m_bOverrideThisFrame_14; }
	inline bool* get_address_of_m_bOverrideThisFrame_14() { return &___m_bOverrideThisFrame_14; }
	inline void set_m_bOverrideThisFrame_14(bool value)
	{
		___m_bOverrideThisFrame_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
