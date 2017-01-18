#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UniArt_PixelScifiLandscape_Sampl1114264637.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Animal
struct  Animal_t255569526  : public MonoBehaviour_t1158329972
{
public:
	// System.String UniArt.PixelScifiLandscape.Sample.Animal::standAnimationStateName
	String_t* ___standAnimationStateName_2;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::standDurationMin
	float ___standDurationMin_3;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::standDurationMax
	float ___standDurationMax_4;
	// System.String UniArt.PixelScifiLandscape.Sample.Animal::eatAnimationStateName
	String_t* ___eatAnimationStateName_5;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::eatDurationMin
	float ___eatDurationMin_6;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::eatDurationMax
	float ___eatDurationMax_7;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Animal::canEat
	bool ___canEat_8;
	// System.String UniArt.PixelScifiLandscape.Sample.Animal::walkingAnimationStateName
	String_t* ___walkingAnimationStateName_9;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::walkingDurationMin
	float ___walkingDurationMin_10;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::walkingDurationMax
	float ___walkingDurationMax_11;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::walkingSpeed
	float ___walkingSpeed_12;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::walkingZoneLeft
	float ___walkingZoneLeft_13;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::walkingZoneRight
	float ___walkingZoneRight_14;
	// UniArt.PixelScifiLandscape.Sample.Animal/EState UniArt.PixelScifiLandscape.Sample.Animal::m_eState
	int32_t ___m_eState_15;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::m_fZoneCenter
	float ___m_fZoneCenter_16;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::m_fWalkingDirection
	float ___m_fWalkingDirection_17;
	// System.Single UniArt.PixelScifiLandscape.Sample.Animal::m_fStateTimeRemaining
	float ___m_fStateTimeRemaining_18;
	// UnityEngine.Animator UniArt.PixelScifiLandscape.Sample.Animal::m_rAnimator
	Animator_t69676727 * ___m_rAnimator_19;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Animal::m_bWaitForEatEnd
	bool ___m_bWaitForEatEnd_20;
	// System.Int32 UniArt.PixelScifiLandscape.Sample.Animal::m_iWaitForEatEndCycle
	int32_t ___m_iWaitForEatEndCycle_21;

public:
	inline static int32_t get_offset_of_standAnimationStateName_2() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___standAnimationStateName_2)); }
	inline String_t* get_standAnimationStateName_2() const { return ___standAnimationStateName_2; }
	inline String_t** get_address_of_standAnimationStateName_2() { return &___standAnimationStateName_2; }
	inline void set_standAnimationStateName_2(String_t* value)
	{
		___standAnimationStateName_2 = value;
		Il2CppCodeGenWriteBarrier(&___standAnimationStateName_2, value);
	}

	inline static int32_t get_offset_of_standDurationMin_3() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___standDurationMin_3)); }
	inline float get_standDurationMin_3() const { return ___standDurationMin_3; }
	inline float* get_address_of_standDurationMin_3() { return &___standDurationMin_3; }
	inline void set_standDurationMin_3(float value)
	{
		___standDurationMin_3 = value;
	}

	inline static int32_t get_offset_of_standDurationMax_4() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___standDurationMax_4)); }
	inline float get_standDurationMax_4() const { return ___standDurationMax_4; }
	inline float* get_address_of_standDurationMax_4() { return &___standDurationMax_4; }
	inline void set_standDurationMax_4(float value)
	{
		___standDurationMax_4 = value;
	}

	inline static int32_t get_offset_of_eatAnimationStateName_5() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___eatAnimationStateName_5)); }
	inline String_t* get_eatAnimationStateName_5() const { return ___eatAnimationStateName_5; }
	inline String_t** get_address_of_eatAnimationStateName_5() { return &___eatAnimationStateName_5; }
	inline void set_eatAnimationStateName_5(String_t* value)
	{
		___eatAnimationStateName_5 = value;
		Il2CppCodeGenWriteBarrier(&___eatAnimationStateName_5, value);
	}

	inline static int32_t get_offset_of_eatDurationMin_6() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___eatDurationMin_6)); }
	inline float get_eatDurationMin_6() const { return ___eatDurationMin_6; }
	inline float* get_address_of_eatDurationMin_6() { return &___eatDurationMin_6; }
	inline void set_eatDurationMin_6(float value)
	{
		___eatDurationMin_6 = value;
	}

	inline static int32_t get_offset_of_eatDurationMax_7() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___eatDurationMax_7)); }
	inline float get_eatDurationMax_7() const { return ___eatDurationMax_7; }
	inline float* get_address_of_eatDurationMax_7() { return &___eatDurationMax_7; }
	inline void set_eatDurationMax_7(float value)
	{
		___eatDurationMax_7 = value;
	}

	inline static int32_t get_offset_of_canEat_8() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___canEat_8)); }
	inline bool get_canEat_8() const { return ___canEat_8; }
	inline bool* get_address_of_canEat_8() { return &___canEat_8; }
	inline void set_canEat_8(bool value)
	{
		___canEat_8 = value;
	}

	inline static int32_t get_offset_of_walkingAnimationStateName_9() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___walkingAnimationStateName_9)); }
	inline String_t* get_walkingAnimationStateName_9() const { return ___walkingAnimationStateName_9; }
	inline String_t** get_address_of_walkingAnimationStateName_9() { return &___walkingAnimationStateName_9; }
	inline void set_walkingAnimationStateName_9(String_t* value)
	{
		___walkingAnimationStateName_9 = value;
		Il2CppCodeGenWriteBarrier(&___walkingAnimationStateName_9, value);
	}

	inline static int32_t get_offset_of_walkingDurationMin_10() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___walkingDurationMin_10)); }
	inline float get_walkingDurationMin_10() const { return ___walkingDurationMin_10; }
	inline float* get_address_of_walkingDurationMin_10() { return &___walkingDurationMin_10; }
	inline void set_walkingDurationMin_10(float value)
	{
		___walkingDurationMin_10 = value;
	}

	inline static int32_t get_offset_of_walkingDurationMax_11() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___walkingDurationMax_11)); }
	inline float get_walkingDurationMax_11() const { return ___walkingDurationMax_11; }
	inline float* get_address_of_walkingDurationMax_11() { return &___walkingDurationMax_11; }
	inline void set_walkingDurationMax_11(float value)
	{
		___walkingDurationMax_11 = value;
	}

	inline static int32_t get_offset_of_walkingSpeed_12() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___walkingSpeed_12)); }
	inline float get_walkingSpeed_12() const { return ___walkingSpeed_12; }
	inline float* get_address_of_walkingSpeed_12() { return &___walkingSpeed_12; }
	inline void set_walkingSpeed_12(float value)
	{
		___walkingSpeed_12 = value;
	}

	inline static int32_t get_offset_of_walkingZoneLeft_13() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___walkingZoneLeft_13)); }
	inline float get_walkingZoneLeft_13() const { return ___walkingZoneLeft_13; }
	inline float* get_address_of_walkingZoneLeft_13() { return &___walkingZoneLeft_13; }
	inline void set_walkingZoneLeft_13(float value)
	{
		___walkingZoneLeft_13 = value;
	}

	inline static int32_t get_offset_of_walkingZoneRight_14() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___walkingZoneRight_14)); }
	inline float get_walkingZoneRight_14() const { return ___walkingZoneRight_14; }
	inline float* get_address_of_walkingZoneRight_14() { return &___walkingZoneRight_14; }
	inline void set_walkingZoneRight_14(float value)
	{
		___walkingZoneRight_14 = value;
	}

	inline static int32_t get_offset_of_m_eState_15() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_eState_15)); }
	inline int32_t get_m_eState_15() const { return ___m_eState_15; }
	inline int32_t* get_address_of_m_eState_15() { return &___m_eState_15; }
	inline void set_m_eState_15(int32_t value)
	{
		___m_eState_15 = value;
	}

	inline static int32_t get_offset_of_m_fZoneCenter_16() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_fZoneCenter_16)); }
	inline float get_m_fZoneCenter_16() const { return ___m_fZoneCenter_16; }
	inline float* get_address_of_m_fZoneCenter_16() { return &___m_fZoneCenter_16; }
	inline void set_m_fZoneCenter_16(float value)
	{
		___m_fZoneCenter_16 = value;
	}

	inline static int32_t get_offset_of_m_fWalkingDirection_17() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_fWalkingDirection_17)); }
	inline float get_m_fWalkingDirection_17() const { return ___m_fWalkingDirection_17; }
	inline float* get_address_of_m_fWalkingDirection_17() { return &___m_fWalkingDirection_17; }
	inline void set_m_fWalkingDirection_17(float value)
	{
		___m_fWalkingDirection_17 = value;
	}

	inline static int32_t get_offset_of_m_fStateTimeRemaining_18() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_fStateTimeRemaining_18)); }
	inline float get_m_fStateTimeRemaining_18() const { return ___m_fStateTimeRemaining_18; }
	inline float* get_address_of_m_fStateTimeRemaining_18() { return &___m_fStateTimeRemaining_18; }
	inline void set_m_fStateTimeRemaining_18(float value)
	{
		___m_fStateTimeRemaining_18 = value;
	}

	inline static int32_t get_offset_of_m_rAnimator_19() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_rAnimator_19)); }
	inline Animator_t69676727 * get_m_rAnimator_19() const { return ___m_rAnimator_19; }
	inline Animator_t69676727 ** get_address_of_m_rAnimator_19() { return &___m_rAnimator_19; }
	inline void set_m_rAnimator_19(Animator_t69676727 * value)
	{
		___m_rAnimator_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_rAnimator_19, value);
	}

	inline static int32_t get_offset_of_m_bWaitForEatEnd_20() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_bWaitForEatEnd_20)); }
	inline bool get_m_bWaitForEatEnd_20() const { return ___m_bWaitForEatEnd_20; }
	inline bool* get_address_of_m_bWaitForEatEnd_20() { return &___m_bWaitForEatEnd_20; }
	inline void set_m_bWaitForEatEnd_20(bool value)
	{
		___m_bWaitForEatEnd_20 = value;
	}

	inline static int32_t get_offset_of_m_iWaitForEatEndCycle_21() { return static_cast<int32_t>(offsetof(Animal_t255569526, ___m_iWaitForEatEndCycle_21)); }
	inline int32_t get_m_iWaitForEatEndCycle_21() const { return ___m_iWaitForEatEndCycle_21; }
	inline int32_t* get_address_of_m_iWaitForEatEndCycle_21() { return &___m_iWaitForEatEndCycle_21; }
	inline void set_m_iWaitForEatEndCycle_21(int32_t value)
	{
		___m_iWaitForEatEndCycle_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
