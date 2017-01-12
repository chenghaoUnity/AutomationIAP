#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_t3912317148;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.RainCollision
struct  RainCollision_t62373560  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> DigitalRuby.RainMaker.RainCollision::collisionEvents
	List_1_t3912317148 * ___collisionEvents_3;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.RainCollision::RainExplosion
	ParticleSystem_t3394631041 * ___RainExplosion_4;
	// UnityEngine.ParticleSystem DigitalRuby.RainMaker.RainCollision::RainParticleSystem
	ParticleSystem_t3394631041 * ___RainParticleSystem_5;

public:
	inline static int32_t get_offset_of_collisionEvents_3() { return static_cast<int32_t>(offsetof(RainCollision_t62373560, ___collisionEvents_3)); }
	inline List_1_t3912317148 * get_collisionEvents_3() const { return ___collisionEvents_3; }
	inline List_1_t3912317148 ** get_address_of_collisionEvents_3() { return &___collisionEvents_3; }
	inline void set_collisionEvents_3(List_1_t3912317148 * value)
	{
		___collisionEvents_3 = value;
		Il2CppCodeGenWriteBarrier(&___collisionEvents_3, value);
	}

	inline static int32_t get_offset_of_RainExplosion_4() { return static_cast<int32_t>(offsetof(RainCollision_t62373560, ___RainExplosion_4)); }
	inline ParticleSystem_t3394631041 * get_RainExplosion_4() const { return ___RainExplosion_4; }
	inline ParticleSystem_t3394631041 ** get_address_of_RainExplosion_4() { return &___RainExplosion_4; }
	inline void set_RainExplosion_4(ParticleSystem_t3394631041 * value)
	{
		___RainExplosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___RainExplosion_4, value);
	}

	inline static int32_t get_offset_of_RainParticleSystem_5() { return static_cast<int32_t>(offsetof(RainCollision_t62373560, ___RainParticleSystem_5)); }
	inline ParticleSystem_t3394631041 * get_RainParticleSystem_5() const { return ___RainParticleSystem_5; }
	inline ParticleSystem_t3394631041 ** get_address_of_RainParticleSystem_5() { return &___RainParticleSystem_5; }
	inline void set_RainParticleSystem_5(ParticleSystem_t3394631041 * value)
	{
		___RainParticleSystem_5 = value;
		Il2CppCodeGenWriteBarrier(&___RainParticleSystem_5, value);
	}
};

struct RainCollision_t62373560_StaticFields
{
public:
	// UnityEngine.Color32 DigitalRuby.RainMaker.RainCollision::color
	Color32_t874517518  ___color_2;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(RainCollision_t62373560_StaticFields, ___color_2)); }
	inline Color32_t874517518  get_color_2() const { return ___color_2; }
	inline Color32_t874517518 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t874517518  value)
	{
		___color_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
