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

// SimpleFire
struct  SimpleFire_t2560976854  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SimpleFire::damage
	int32_t ___damage_2;
	// System.Single SimpleFire::damageDelay
	float ___damageDelay_3;
	// System.Single SimpleFire::lastDamageTime
	float ___lastDamageTime_4;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(SimpleFire_t2560976854, ___damage_2)); }
	inline int32_t get_damage_2() const { return ___damage_2; }
	inline int32_t* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(int32_t value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_damageDelay_3() { return static_cast<int32_t>(offsetof(SimpleFire_t2560976854, ___damageDelay_3)); }
	inline float get_damageDelay_3() const { return ___damageDelay_3; }
	inline float* get_address_of_damageDelay_3() { return &___damageDelay_3; }
	inline void set_damageDelay_3(float value)
	{
		___damageDelay_3 = value;
	}

	inline static int32_t get_offset_of_lastDamageTime_4() { return static_cast<int32_t>(offsetof(SimpleFire_t2560976854, ___lastDamageTime_4)); }
	inline float get_lastDamageTime_4() const { return ___lastDamageTime_4; }
	inline float* get_address_of_lastDamageTime_4() { return &___lastDamageTime_4; }
	inline void set_lastDamageTime_4(float value)
	{
		___lastDamageTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
