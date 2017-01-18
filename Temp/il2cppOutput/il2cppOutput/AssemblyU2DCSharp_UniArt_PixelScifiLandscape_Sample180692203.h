#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3226471752;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UniArt.PixelScifiLandscape.Sample.Character_Input
struct Character_Input_t2061814878;
// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester
struct Character_GroundedTester_t1329240161;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_MovementController
struct  Character_MovementController_t180692203  : public MonoBehaviour_t1158329972
{
public:
	// System.Action UniArt.PixelScifiLandscape.Sample.Character_MovementController::onJump
	Action_t3226471752 * ___onJump_2;
	// UnityEngine.Rigidbody2D UniArt.PixelScifiLandscape.Sample.Character_MovementController::rigidbodyComponent
	Rigidbody2D_t502193897 * ___rigidbodyComponent_3;
	// UniArt.PixelScifiLandscape.Sample.Character_Input UniArt.PixelScifiLandscape.Sample.Character_MovementController::characterInput
	Character_Input_t2061814878 * ___characterInput_4;
	// UniArt.PixelScifiLandscape.Sample.Character_GroundedTester UniArt.PixelScifiLandscape.Sample.Character_MovementController::groundedTester
	Character_GroundedTester_t1329240161 * ___groundedTester_5;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::moveForce
	float ___moveForce_6;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::moveSpeedMax_Walk
	float ___moveSpeedMax_Walk_7;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::moveSpeedMax_Run
	float ___moveSpeedMax_Run_8;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::moveSpeedMax_Fall
	float ___moveSpeedMax_Fall_9;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::moveSpeedMax_FallRun
	float ___moveSpeedMax_FallRun_10;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::moveSpeedMax_Slide
	float ___moveSpeedMax_Slide_11;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::groundDamping
	float ___groundDamping_12;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::groundSlideDamping
	float ___groundSlideDamping_13;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::minSlideVelocity
	float ___minSlideVelocity_14;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::airDamping
	float ___airDamping_15;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::jump
	float ___jump_16;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::earlyJumpToleranceDuration
	float ___earlyJumpToleranceDuration_17;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::lateJumpToleranceDuration
	float ___lateJumpToleranceDuration_18;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::jumpGravityScale
	float ___jumpGravityScale_19;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::runGravityScale
	float ___runGravityScale_20;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::m_fWillJumpTimeRemaining
	float ___m_fWillJumpTimeRemaining_21;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::m_fCanJumpTimeRemaining
	float ___m_fCanJumpTimeRemaining_22;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_MovementController::m_bStill
	bool ___m_bStill_23;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_MovementController::m_fInitialGravityScale
	float ___m_fInitialGravityScale_24;

public:
	inline static int32_t get_offset_of_onJump_2() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___onJump_2)); }
	inline Action_t3226471752 * get_onJump_2() const { return ___onJump_2; }
	inline Action_t3226471752 ** get_address_of_onJump_2() { return &___onJump_2; }
	inline void set_onJump_2(Action_t3226471752 * value)
	{
		___onJump_2 = value;
		Il2CppCodeGenWriteBarrier(&___onJump_2, value);
	}

	inline static int32_t get_offset_of_rigidbodyComponent_3() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___rigidbodyComponent_3)); }
	inline Rigidbody2D_t502193897 * get_rigidbodyComponent_3() const { return ___rigidbodyComponent_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidbodyComponent_3() { return &___rigidbodyComponent_3; }
	inline void set_rigidbodyComponent_3(Rigidbody2D_t502193897 * value)
	{
		___rigidbodyComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyComponent_3, value);
	}

	inline static int32_t get_offset_of_characterInput_4() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___characterInput_4)); }
	inline Character_Input_t2061814878 * get_characterInput_4() const { return ___characterInput_4; }
	inline Character_Input_t2061814878 ** get_address_of_characterInput_4() { return &___characterInput_4; }
	inline void set_characterInput_4(Character_Input_t2061814878 * value)
	{
		___characterInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___characterInput_4, value);
	}

	inline static int32_t get_offset_of_groundedTester_5() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___groundedTester_5)); }
	inline Character_GroundedTester_t1329240161 * get_groundedTester_5() const { return ___groundedTester_5; }
	inline Character_GroundedTester_t1329240161 ** get_address_of_groundedTester_5() { return &___groundedTester_5; }
	inline void set_groundedTester_5(Character_GroundedTester_t1329240161 * value)
	{
		___groundedTester_5 = value;
		Il2CppCodeGenWriteBarrier(&___groundedTester_5, value);
	}

	inline static int32_t get_offset_of_moveForce_6() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___moveForce_6)); }
	inline float get_moveForce_6() const { return ___moveForce_6; }
	inline float* get_address_of_moveForce_6() { return &___moveForce_6; }
	inline void set_moveForce_6(float value)
	{
		___moveForce_6 = value;
	}

	inline static int32_t get_offset_of_moveSpeedMax_Walk_7() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___moveSpeedMax_Walk_7)); }
	inline float get_moveSpeedMax_Walk_7() const { return ___moveSpeedMax_Walk_7; }
	inline float* get_address_of_moveSpeedMax_Walk_7() { return &___moveSpeedMax_Walk_7; }
	inline void set_moveSpeedMax_Walk_7(float value)
	{
		___moveSpeedMax_Walk_7 = value;
	}

	inline static int32_t get_offset_of_moveSpeedMax_Run_8() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___moveSpeedMax_Run_8)); }
	inline float get_moveSpeedMax_Run_8() const { return ___moveSpeedMax_Run_8; }
	inline float* get_address_of_moveSpeedMax_Run_8() { return &___moveSpeedMax_Run_8; }
	inline void set_moveSpeedMax_Run_8(float value)
	{
		___moveSpeedMax_Run_8 = value;
	}

	inline static int32_t get_offset_of_moveSpeedMax_Fall_9() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___moveSpeedMax_Fall_9)); }
	inline float get_moveSpeedMax_Fall_9() const { return ___moveSpeedMax_Fall_9; }
	inline float* get_address_of_moveSpeedMax_Fall_9() { return &___moveSpeedMax_Fall_9; }
	inline void set_moveSpeedMax_Fall_9(float value)
	{
		___moveSpeedMax_Fall_9 = value;
	}

	inline static int32_t get_offset_of_moveSpeedMax_FallRun_10() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___moveSpeedMax_FallRun_10)); }
	inline float get_moveSpeedMax_FallRun_10() const { return ___moveSpeedMax_FallRun_10; }
	inline float* get_address_of_moveSpeedMax_FallRun_10() { return &___moveSpeedMax_FallRun_10; }
	inline void set_moveSpeedMax_FallRun_10(float value)
	{
		___moveSpeedMax_FallRun_10 = value;
	}

	inline static int32_t get_offset_of_moveSpeedMax_Slide_11() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___moveSpeedMax_Slide_11)); }
	inline float get_moveSpeedMax_Slide_11() const { return ___moveSpeedMax_Slide_11; }
	inline float* get_address_of_moveSpeedMax_Slide_11() { return &___moveSpeedMax_Slide_11; }
	inline void set_moveSpeedMax_Slide_11(float value)
	{
		___moveSpeedMax_Slide_11 = value;
	}

	inline static int32_t get_offset_of_groundDamping_12() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___groundDamping_12)); }
	inline float get_groundDamping_12() const { return ___groundDamping_12; }
	inline float* get_address_of_groundDamping_12() { return &___groundDamping_12; }
	inline void set_groundDamping_12(float value)
	{
		___groundDamping_12 = value;
	}

	inline static int32_t get_offset_of_groundSlideDamping_13() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___groundSlideDamping_13)); }
	inline float get_groundSlideDamping_13() const { return ___groundSlideDamping_13; }
	inline float* get_address_of_groundSlideDamping_13() { return &___groundSlideDamping_13; }
	inline void set_groundSlideDamping_13(float value)
	{
		___groundSlideDamping_13 = value;
	}

	inline static int32_t get_offset_of_minSlideVelocity_14() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___minSlideVelocity_14)); }
	inline float get_minSlideVelocity_14() const { return ___minSlideVelocity_14; }
	inline float* get_address_of_minSlideVelocity_14() { return &___minSlideVelocity_14; }
	inline void set_minSlideVelocity_14(float value)
	{
		___minSlideVelocity_14 = value;
	}

	inline static int32_t get_offset_of_airDamping_15() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___airDamping_15)); }
	inline float get_airDamping_15() const { return ___airDamping_15; }
	inline float* get_address_of_airDamping_15() { return &___airDamping_15; }
	inline void set_airDamping_15(float value)
	{
		___airDamping_15 = value;
	}

	inline static int32_t get_offset_of_jump_16() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___jump_16)); }
	inline float get_jump_16() const { return ___jump_16; }
	inline float* get_address_of_jump_16() { return &___jump_16; }
	inline void set_jump_16(float value)
	{
		___jump_16 = value;
	}

	inline static int32_t get_offset_of_earlyJumpToleranceDuration_17() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___earlyJumpToleranceDuration_17)); }
	inline float get_earlyJumpToleranceDuration_17() const { return ___earlyJumpToleranceDuration_17; }
	inline float* get_address_of_earlyJumpToleranceDuration_17() { return &___earlyJumpToleranceDuration_17; }
	inline void set_earlyJumpToleranceDuration_17(float value)
	{
		___earlyJumpToleranceDuration_17 = value;
	}

	inline static int32_t get_offset_of_lateJumpToleranceDuration_18() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___lateJumpToleranceDuration_18)); }
	inline float get_lateJumpToleranceDuration_18() const { return ___lateJumpToleranceDuration_18; }
	inline float* get_address_of_lateJumpToleranceDuration_18() { return &___lateJumpToleranceDuration_18; }
	inline void set_lateJumpToleranceDuration_18(float value)
	{
		___lateJumpToleranceDuration_18 = value;
	}

	inline static int32_t get_offset_of_jumpGravityScale_19() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___jumpGravityScale_19)); }
	inline float get_jumpGravityScale_19() const { return ___jumpGravityScale_19; }
	inline float* get_address_of_jumpGravityScale_19() { return &___jumpGravityScale_19; }
	inline void set_jumpGravityScale_19(float value)
	{
		___jumpGravityScale_19 = value;
	}

	inline static int32_t get_offset_of_runGravityScale_20() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___runGravityScale_20)); }
	inline float get_runGravityScale_20() const { return ___runGravityScale_20; }
	inline float* get_address_of_runGravityScale_20() { return &___runGravityScale_20; }
	inline void set_runGravityScale_20(float value)
	{
		___runGravityScale_20 = value;
	}

	inline static int32_t get_offset_of_m_fWillJumpTimeRemaining_21() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___m_fWillJumpTimeRemaining_21)); }
	inline float get_m_fWillJumpTimeRemaining_21() const { return ___m_fWillJumpTimeRemaining_21; }
	inline float* get_address_of_m_fWillJumpTimeRemaining_21() { return &___m_fWillJumpTimeRemaining_21; }
	inline void set_m_fWillJumpTimeRemaining_21(float value)
	{
		___m_fWillJumpTimeRemaining_21 = value;
	}

	inline static int32_t get_offset_of_m_fCanJumpTimeRemaining_22() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___m_fCanJumpTimeRemaining_22)); }
	inline float get_m_fCanJumpTimeRemaining_22() const { return ___m_fCanJumpTimeRemaining_22; }
	inline float* get_address_of_m_fCanJumpTimeRemaining_22() { return &___m_fCanJumpTimeRemaining_22; }
	inline void set_m_fCanJumpTimeRemaining_22(float value)
	{
		___m_fCanJumpTimeRemaining_22 = value;
	}

	inline static int32_t get_offset_of_m_bStill_23() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___m_bStill_23)); }
	inline bool get_m_bStill_23() const { return ___m_bStill_23; }
	inline bool* get_address_of_m_bStill_23() { return &___m_bStill_23; }
	inline void set_m_bStill_23(bool value)
	{
		___m_bStill_23 = value;
	}

	inline static int32_t get_offset_of_m_fInitialGravityScale_24() { return static_cast<int32_t>(offsetof(Character_MovementController_t180692203, ___m_fInitialGravityScale_24)); }
	inline float get_m_fInitialGravityScale_24() const { return ___m_fInitialGravityScale_24; }
	inline float* get_address_of_m_fInitialGravityScale_24() { return &___m_fInitialGravityScale_24; }
	inline void set_m_fInitialGravityScale_24(float value)
	{
		___m_fInitialGravityScale_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
