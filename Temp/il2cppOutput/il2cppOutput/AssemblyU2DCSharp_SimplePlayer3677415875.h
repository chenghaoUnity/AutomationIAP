#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePlayer
struct  SimplePlayer_t3677415875  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SimplePlayer::maxHP
	float ___maxHP_2;
	// System.Single SimplePlayer::HP
	float ___HP_3;
	// System.Single SimplePlayer::damageBloodAmount
	float ___damageBloodAmount_4;
	// System.Single SimplePlayer::maxBloodIndication
	float ___maxBloodIndication_5;
	// System.Single SimplePlayer::recoverSpeed
	float ___recoverSpeed_6;

public:
	inline static int32_t get_offset_of_maxHP_2() { return static_cast<int32_t>(offsetof(SimplePlayer_t3677415875, ___maxHP_2)); }
	inline float get_maxHP_2() const { return ___maxHP_2; }
	inline float* get_address_of_maxHP_2() { return &___maxHP_2; }
	inline void set_maxHP_2(float value)
	{
		___maxHP_2 = value;
	}

	inline static int32_t get_offset_of_HP_3() { return static_cast<int32_t>(offsetof(SimplePlayer_t3677415875, ___HP_3)); }
	inline float get_HP_3() const { return ___HP_3; }
	inline float* get_address_of_HP_3() { return &___HP_3; }
	inline void set_HP_3(float value)
	{
		___HP_3 = value;
	}

	inline static int32_t get_offset_of_damageBloodAmount_4() { return static_cast<int32_t>(offsetof(SimplePlayer_t3677415875, ___damageBloodAmount_4)); }
	inline float get_damageBloodAmount_4() const { return ___damageBloodAmount_4; }
	inline float* get_address_of_damageBloodAmount_4() { return &___damageBloodAmount_4; }
	inline void set_damageBloodAmount_4(float value)
	{
		___damageBloodAmount_4 = value;
	}

	inline static int32_t get_offset_of_maxBloodIndication_5() { return static_cast<int32_t>(offsetof(SimplePlayer_t3677415875, ___maxBloodIndication_5)); }
	inline float get_maxBloodIndication_5() const { return ___maxBloodIndication_5; }
	inline float* get_address_of_maxBloodIndication_5() { return &___maxBloodIndication_5; }
	inline void set_maxBloodIndication_5(float value)
	{
		___maxBloodIndication_5 = value;
	}

	inline static int32_t get_offset_of_recoverSpeed_6() { return static_cast<int32_t>(offsetof(SimplePlayer_t3677415875, ___recoverSpeed_6)); }
	inline float get_recoverSpeed_6() const { return ___recoverSpeed_6; }
	inline float* get_address_of_recoverSpeed_6() { return &___recoverSpeed_6; }
	inline void set_recoverSpeed_6(float value)
	{
		___recoverSpeed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
