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
// System.Action`1<System.Single>
struct Action_1_t1878309314;
// UniArt.PixelScifiLandscape.Sample.Character_MovementController
struct Character_MovementController_t180692203;
// UniArt.PixelScifiLandscape.Sample.Character_Input
struct Character_Input_t2061814878;
// UniArt.PixelScifiLandscape.Sample.Character_LadderTester
struct Character_LadderTester_t2692161659;
// UnityEngine.Transform
struct Transform_t3275118058;
// UniArt.PixelScifiLandscape.Sample.Object_Ladder
struct Object_Ladder_t2797598778;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_LadderClimber
struct  Character_LadderClimber_t734778460  : public MonoBehaviour_t1158329972
{
public:
	// System.Action UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::onStartClimb
	Action_t3226471752 * ___onStartClimb_2;
	// System.Action UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::onStopClimb
	Action_t3226471752 * ___onStopClimb_3;
	// System.Action`1<System.Single> UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::onClimb
	Action_1_t1878309314 * ___onClimb_4;
	// UniArt.PixelScifiLandscape.Sample.Character_MovementController UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::movementController
	Character_MovementController_t180692203 * ___movementController_5;
	// UniArt.PixelScifiLandscape.Sample.Character_Input UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::characterInput
	Character_Input_t2061814878 * ___characterInput_6;
	// UniArt.PixelScifiLandscape.Sample.Character_LadderTester UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::ladderTester
	Character_LadderTester_t2692161659 * ___ladderTester_7;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::climbSpeed
	float ___climbSpeed_8;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::climbRunSpeed
	float ___climbRunSpeed_9;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::quitByJumpingDuration
	float ___quitByJumpingDuration_10;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::canJumpAfterLadderDuration
	float ___canJumpAfterLadderDuration_11;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::canClimbInADirectionTolerance
	float ___canClimbInADirectionTolerance_12;
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::climberTop
	Transform_t3275118058 * ___climberTop_13;
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::climberBottom
	Transform_t3275118058 * ___climberBottom_14;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::m_bClimbing
	bool ___m_bClimbing_15;
	// UniArt.PixelScifiLandscape.Sample.Object_Ladder UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::m_rLadder
	Object_Ladder_t2797598778 * ___m_rLadder_16;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::m_bQuitByJumping
	bool ___m_bQuitByJumping_17;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LadderClimber::m_fQuitByJumpingRemainingTime
	float ___m_fQuitByJumpingRemainingTime_18;

public:
	inline static int32_t get_offset_of_onStartClimb_2() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___onStartClimb_2)); }
	inline Action_t3226471752 * get_onStartClimb_2() const { return ___onStartClimb_2; }
	inline Action_t3226471752 ** get_address_of_onStartClimb_2() { return &___onStartClimb_2; }
	inline void set_onStartClimb_2(Action_t3226471752 * value)
	{
		___onStartClimb_2 = value;
		Il2CppCodeGenWriteBarrier(&___onStartClimb_2, value);
	}

	inline static int32_t get_offset_of_onStopClimb_3() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___onStopClimb_3)); }
	inline Action_t3226471752 * get_onStopClimb_3() const { return ___onStopClimb_3; }
	inline Action_t3226471752 ** get_address_of_onStopClimb_3() { return &___onStopClimb_3; }
	inline void set_onStopClimb_3(Action_t3226471752 * value)
	{
		___onStopClimb_3 = value;
		Il2CppCodeGenWriteBarrier(&___onStopClimb_3, value);
	}

	inline static int32_t get_offset_of_onClimb_4() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___onClimb_4)); }
	inline Action_1_t1878309314 * get_onClimb_4() const { return ___onClimb_4; }
	inline Action_1_t1878309314 ** get_address_of_onClimb_4() { return &___onClimb_4; }
	inline void set_onClimb_4(Action_1_t1878309314 * value)
	{
		___onClimb_4 = value;
		Il2CppCodeGenWriteBarrier(&___onClimb_4, value);
	}

	inline static int32_t get_offset_of_movementController_5() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___movementController_5)); }
	inline Character_MovementController_t180692203 * get_movementController_5() const { return ___movementController_5; }
	inline Character_MovementController_t180692203 ** get_address_of_movementController_5() { return &___movementController_5; }
	inline void set_movementController_5(Character_MovementController_t180692203 * value)
	{
		___movementController_5 = value;
		Il2CppCodeGenWriteBarrier(&___movementController_5, value);
	}

	inline static int32_t get_offset_of_characterInput_6() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___characterInput_6)); }
	inline Character_Input_t2061814878 * get_characterInput_6() const { return ___characterInput_6; }
	inline Character_Input_t2061814878 ** get_address_of_characterInput_6() { return &___characterInput_6; }
	inline void set_characterInput_6(Character_Input_t2061814878 * value)
	{
		___characterInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___characterInput_6, value);
	}

	inline static int32_t get_offset_of_ladderTester_7() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___ladderTester_7)); }
	inline Character_LadderTester_t2692161659 * get_ladderTester_7() const { return ___ladderTester_7; }
	inline Character_LadderTester_t2692161659 ** get_address_of_ladderTester_7() { return &___ladderTester_7; }
	inline void set_ladderTester_7(Character_LadderTester_t2692161659 * value)
	{
		___ladderTester_7 = value;
		Il2CppCodeGenWriteBarrier(&___ladderTester_7, value);
	}

	inline static int32_t get_offset_of_climbSpeed_8() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___climbSpeed_8)); }
	inline float get_climbSpeed_8() const { return ___climbSpeed_8; }
	inline float* get_address_of_climbSpeed_8() { return &___climbSpeed_8; }
	inline void set_climbSpeed_8(float value)
	{
		___climbSpeed_8 = value;
	}

	inline static int32_t get_offset_of_climbRunSpeed_9() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___climbRunSpeed_9)); }
	inline float get_climbRunSpeed_9() const { return ___climbRunSpeed_9; }
	inline float* get_address_of_climbRunSpeed_9() { return &___climbRunSpeed_9; }
	inline void set_climbRunSpeed_9(float value)
	{
		___climbRunSpeed_9 = value;
	}

	inline static int32_t get_offset_of_quitByJumpingDuration_10() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___quitByJumpingDuration_10)); }
	inline float get_quitByJumpingDuration_10() const { return ___quitByJumpingDuration_10; }
	inline float* get_address_of_quitByJumpingDuration_10() { return &___quitByJumpingDuration_10; }
	inline void set_quitByJumpingDuration_10(float value)
	{
		___quitByJumpingDuration_10 = value;
	}

	inline static int32_t get_offset_of_canJumpAfterLadderDuration_11() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___canJumpAfterLadderDuration_11)); }
	inline float get_canJumpAfterLadderDuration_11() const { return ___canJumpAfterLadderDuration_11; }
	inline float* get_address_of_canJumpAfterLadderDuration_11() { return &___canJumpAfterLadderDuration_11; }
	inline void set_canJumpAfterLadderDuration_11(float value)
	{
		___canJumpAfterLadderDuration_11 = value;
	}

	inline static int32_t get_offset_of_canClimbInADirectionTolerance_12() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___canClimbInADirectionTolerance_12)); }
	inline float get_canClimbInADirectionTolerance_12() const { return ___canClimbInADirectionTolerance_12; }
	inline float* get_address_of_canClimbInADirectionTolerance_12() { return &___canClimbInADirectionTolerance_12; }
	inline void set_canClimbInADirectionTolerance_12(float value)
	{
		___canClimbInADirectionTolerance_12 = value;
	}

	inline static int32_t get_offset_of_climberTop_13() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___climberTop_13)); }
	inline Transform_t3275118058 * get_climberTop_13() const { return ___climberTop_13; }
	inline Transform_t3275118058 ** get_address_of_climberTop_13() { return &___climberTop_13; }
	inline void set_climberTop_13(Transform_t3275118058 * value)
	{
		___climberTop_13 = value;
		Il2CppCodeGenWriteBarrier(&___climberTop_13, value);
	}

	inline static int32_t get_offset_of_climberBottom_14() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___climberBottom_14)); }
	inline Transform_t3275118058 * get_climberBottom_14() const { return ___climberBottom_14; }
	inline Transform_t3275118058 ** get_address_of_climberBottom_14() { return &___climberBottom_14; }
	inline void set_climberBottom_14(Transform_t3275118058 * value)
	{
		___climberBottom_14 = value;
		Il2CppCodeGenWriteBarrier(&___climberBottom_14, value);
	}

	inline static int32_t get_offset_of_m_bClimbing_15() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___m_bClimbing_15)); }
	inline bool get_m_bClimbing_15() const { return ___m_bClimbing_15; }
	inline bool* get_address_of_m_bClimbing_15() { return &___m_bClimbing_15; }
	inline void set_m_bClimbing_15(bool value)
	{
		___m_bClimbing_15 = value;
	}

	inline static int32_t get_offset_of_m_rLadder_16() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___m_rLadder_16)); }
	inline Object_Ladder_t2797598778 * get_m_rLadder_16() const { return ___m_rLadder_16; }
	inline Object_Ladder_t2797598778 ** get_address_of_m_rLadder_16() { return &___m_rLadder_16; }
	inline void set_m_rLadder_16(Object_Ladder_t2797598778 * value)
	{
		___m_rLadder_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_rLadder_16, value);
	}

	inline static int32_t get_offset_of_m_bQuitByJumping_17() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___m_bQuitByJumping_17)); }
	inline bool get_m_bQuitByJumping_17() const { return ___m_bQuitByJumping_17; }
	inline bool* get_address_of_m_bQuitByJumping_17() { return &___m_bQuitByJumping_17; }
	inline void set_m_bQuitByJumping_17(bool value)
	{
		___m_bQuitByJumping_17 = value;
	}

	inline static int32_t get_offset_of_m_fQuitByJumpingRemainingTime_18() { return static_cast<int32_t>(offsetof(Character_LadderClimber_t734778460, ___m_fQuitByJumpingRemainingTime_18)); }
	inline float get_m_fQuitByJumpingRemainingTime_18() const { return ___m_fQuitByJumpingRemainingTime_18; }
	inline float* get_address_of_m_fQuitByJumpingRemainingTime_18() { return &___m_fQuitByJumpingRemainingTime_18; }
	inline void set_m_fQuitByJumpingRemainingTime_18(float value)
	{
		___m_fQuitByJumpingRemainingTime_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
