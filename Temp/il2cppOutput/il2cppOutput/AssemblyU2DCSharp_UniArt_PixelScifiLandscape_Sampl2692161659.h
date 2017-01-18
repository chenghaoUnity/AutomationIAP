#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UniArt.PixelScifiLandscape.Sample.Object_Ladder>
struct List_1_t2166719910;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_LadderTester
struct  Character_LadderTester_t2692161659  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UniArt.PixelScifiLandscape.Sample.Object_Ladder> UniArt.PixelScifiLandscape.Sample.Character_LadderTester::m_oLadders
	List_1_t2166719910 * ___m_oLadders_2;

public:
	inline static int32_t get_offset_of_m_oLadders_2() { return static_cast<int32_t>(offsetof(Character_LadderTester_t2692161659, ___m_oLadders_2)); }
	inline List_1_t2166719910 * get_m_oLadders_2() const { return ___m_oLadders_2; }
	inline List_1_t2166719910 ** get_address_of_m_oLadders_2() { return &___m_oLadders_2; }
	inline void set_m_oLadders_2(List_1_t2166719910 * value)
	{
		___m_oLadders_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_oLadders_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
