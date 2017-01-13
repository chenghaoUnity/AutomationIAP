#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DigitalRuby.RainMaker.RainScript2D
struct RainScript2D_t2900324445;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.DemoScript2D
struct  DemoScript2D_t3229309160  : public MonoBehaviour_t1158329972
{
public:
	// DigitalRuby.RainMaker.RainScript2D DigitalRuby.RainMaker.DemoScript2D::RainScript
	RainScript2D_t2900324445 * ___RainScript_2;

public:
	inline static int32_t get_offset_of_RainScript_2() { return static_cast<int32_t>(offsetof(DemoScript2D_t3229309160, ___RainScript_2)); }
	inline RainScript2D_t2900324445 * get_RainScript_2() const { return ___RainScript_2; }
	inline RainScript2D_t2900324445 ** get_address_of_RainScript_2() { return &___RainScript_2; }
	inline void set_RainScript_2(RainScript2D_t2900324445 * value)
	{
		___RainScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___RainScript_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
