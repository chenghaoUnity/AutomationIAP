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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HurtFX
struct  HurtFX_t2260489167  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HurtFX::m_Timer
	float ___m_Timer_2;
	// System.Single HurtFX::m_HoldingTime
	float ___m_HoldingTime_3;
	// System.String HurtFX::m_Text
	String_t* ___m_Text_4;
	// System.Boolean HurtFX::b_Background
	bool ___b_Background_5;

public:
	inline static int32_t get_offset_of_m_Timer_2() { return static_cast<int32_t>(offsetof(HurtFX_t2260489167, ___m_Timer_2)); }
	inline float get_m_Timer_2() const { return ___m_Timer_2; }
	inline float* get_address_of_m_Timer_2() { return &___m_Timer_2; }
	inline void set_m_Timer_2(float value)
	{
		___m_Timer_2 = value;
	}

	inline static int32_t get_offset_of_m_HoldingTime_3() { return static_cast<int32_t>(offsetof(HurtFX_t2260489167, ___m_HoldingTime_3)); }
	inline float get_m_HoldingTime_3() const { return ___m_HoldingTime_3; }
	inline float* get_address_of_m_HoldingTime_3() { return &___m_HoldingTime_3; }
	inline void set_m_HoldingTime_3(float value)
	{
		___m_HoldingTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Text_4() { return static_cast<int32_t>(offsetof(HurtFX_t2260489167, ___m_Text_4)); }
	inline String_t* get_m_Text_4() const { return ___m_Text_4; }
	inline String_t** get_address_of_m_Text_4() { return &___m_Text_4; }
	inline void set_m_Text_4(String_t* value)
	{
		___m_Text_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_4, value);
	}

	inline static int32_t get_offset_of_b_Background_5() { return static_cast<int32_t>(offsetof(HurtFX_t2260489167, ___b_Background_5)); }
	inline bool get_b_Background_5() const { return ___b_Background_5; }
	inline bool* get_address_of_b_Background_5() { return &___b_Background_5; }
	inline void set_b_Background_5(bool value)
	{
		___b_Background_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
