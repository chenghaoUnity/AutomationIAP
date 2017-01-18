#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniArt.PixelScifiLandscape.Sample.Object_Ladder
struct Object_Ladder_t2797598778;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Object_Ladder_Collider
struct  Object_Ladder_Collider_t2250306207  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.Object_Ladder UniArt.PixelScifiLandscape.Sample.Object_Ladder_Collider::ladder
	Object_Ladder_t2797598778 * ___ladder_2;

public:
	inline static int32_t get_offset_of_ladder_2() { return static_cast<int32_t>(offsetof(Object_Ladder_Collider_t2250306207, ___ladder_2)); }
	inline Object_Ladder_t2797598778 * get_ladder_2() const { return ___ladder_2; }
	inline Object_Ladder_t2797598778 ** get_address_of_ladder_2() { return &___ladder_2; }
	inline void set_ladder_2(Object_Ladder_t2797598778 * value)
	{
		___ladder_2 = value;
		Il2CppCodeGenWriteBarrier(&___ladder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
