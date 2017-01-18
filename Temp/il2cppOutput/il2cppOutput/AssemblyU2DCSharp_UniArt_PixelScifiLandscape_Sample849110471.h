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
// System.String
struct String_t;
// UniArt.PixelScifiLandscape.Sample.Animal
struct Animal_t255569526;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Bird
struct  Bird_t849110471  : public MonoBehaviour_t1158329972
{
public:
	// System.Action UniArt.PixelScifiLandscape.Sample.Bird::onStartFlying
	Action_t3226471752 * ___onStartFlying_2;
	// System.String UniArt.PixelScifiLandscape.Sample.Bird::flyingAnimationStateName
	String_t* ___flyingAnimationStateName_3;
	// System.Single UniArt.PixelScifiLandscape.Sample.Bird::flyingSpeed
	float ___flyingSpeed_4;
	// System.Single UniArt.PixelScifiLandscape.Sample.Bird::flyDirectionAngle
	float ___flyDirectionAngle_5;
	// UniArt.PixelScifiLandscape.Sample.Animal UniArt.PixelScifiLandscape.Sample.Bird::m_rAnimal
	Animal_t255569526 * ___m_rAnimal_6;
	// UnityEngine.Vector3 UniArt.PixelScifiLandscape.Sample.Bird::m_f3FlyingDirection
	Vector3_t2243707580  ___m_f3FlyingDirection_7;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Bird::m_bFlying
	bool ___m_bFlying_8;
	// UnityEngine.Animator UniArt.PixelScifiLandscape.Sample.Bird::m_rAnimator
	Animator_t69676727 * ___m_rAnimator_9;
	// UnityEngine.Vector3 UniArt.PixelScifiLandscape.Sample.Bird::m_f3SpawnPoint
	Vector3_t2243707580  ___m_f3SpawnPoint_10;

public:
	inline static int32_t get_offset_of_onStartFlying_2() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___onStartFlying_2)); }
	inline Action_t3226471752 * get_onStartFlying_2() const { return ___onStartFlying_2; }
	inline Action_t3226471752 ** get_address_of_onStartFlying_2() { return &___onStartFlying_2; }
	inline void set_onStartFlying_2(Action_t3226471752 * value)
	{
		___onStartFlying_2 = value;
		Il2CppCodeGenWriteBarrier(&___onStartFlying_2, value);
	}

	inline static int32_t get_offset_of_flyingAnimationStateName_3() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___flyingAnimationStateName_3)); }
	inline String_t* get_flyingAnimationStateName_3() const { return ___flyingAnimationStateName_3; }
	inline String_t** get_address_of_flyingAnimationStateName_3() { return &___flyingAnimationStateName_3; }
	inline void set_flyingAnimationStateName_3(String_t* value)
	{
		___flyingAnimationStateName_3 = value;
		Il2CppCodeGenWriteBarrier(&___flyingAnimationStateName_3, value);
	}

	inline static int32_t get_offset_of_flyingSpeed_4() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___flyingSpeed_4)); }
	inline float get_flyingSpeed_4() const { return ___flyingSpeed_4; }
	inline float* get_address_of_flyingSpeed_4() { return &___flyingSpeed_4; }
	inline void set_flyingSpeed_4(float value)
	{
		___flyingSpeed_4 = value;
	}

	inline static int32_t get_offset_of_flyDirectionAngle_5() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___flyDirectionAngle_5)); }
	inline float get_flyDirectionAngle_5() const { return ___flyDirectionAngle_5; }
	inline float* get_address_of_flyDirectionAngle_5() { return &___flyDirectionAngle_5; }
	inline void set_flyDirectionAngle_5(float value)
	{
		___flyDirectionAngle_5 = value;
	}

	inline static int32_t get_offset_of_m_rAnimal_6() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___m_rAnimal_6)); }
	inline Animal_t255569526 * get_m_rAnimal_6() const { return ___m_rAnimal_6; }
	inline Animal_t255569526 ** get_address_of_m_rAnimal_6() { return &___m_rAnimal_6; }
	inline void set_m_rAnimal_6(Animal_t255569526 * value)
	{
		___m_rAnimal_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_rAnimal_6, value);
	}

	inline static int32_t get_offset_of_m_f3FlyingDirection_7() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___m_f3FlyingDirection_7)); }
	inline Vector3_t2243707580  get_m_f3FlyingDirection_7() const { return ___m_f3FlyingDirection_7; }
	inline Vector3_t2243707580 * get_address_of_m_f3FlyingDirection_7() { return &___m_f3FlyingDirection_7; }
	inline void set_m_f3FlyingDirection_7(Vector3_t2243707580  value)
	{
		___m_f3FlyingDirection_7 = value;
	}

	inline static int32_t get_offset_of_m_bFlying_8() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___m_bFlying_8)); }
	inline bool get_m_bFlying_8() const { return ___m_bFlying_8; }
	inline bool* get_address_of_m_bFlying_8() { return &___m_bFlying_8; }
	inline void set_m_bFlying_8(bool value)
	{
		___m_bFlying_8 = value;
	}

	inline static int32_t get_offset_of_m_rAnimator_9() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___m_rAnimator_9)); }
	inline Animator_t69676727 * get_m_rAnimator_9() const { return ___m_rAnimator_9; }
	inline Animator_t69676727 ** get_address_of_m_rAnimator_9() { return &___m_rAnimator_9; }
	inline void set_m_rAnimator_9(Animator_t69676727 * value)
	{
		___m_rAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_rAnimator_9, value);
	}

	inline static int32_t get_offset_of_m_f3SpawnPoint_10() { return static_cast<int32_t>(offsetof(Bird_t849110471, ___m_f3SpawnPoint_10)); }
	inline Vector3_t2243707580  get_m_f3SpawnPoint_10() const { return ___m_f3SpawnPoint_10; }
	inline Vector3_t2243707580 * get_address_of_m_f3SpawnPoint_10() { return &___m_f3SpawnPoint_10; }
	inline void set_m_f3SpawnPoint_10(Vector3_t2243707580  value)
	{
		___m_f3SpawnPoint_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
