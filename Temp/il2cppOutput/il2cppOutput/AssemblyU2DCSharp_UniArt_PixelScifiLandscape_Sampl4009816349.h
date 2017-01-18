#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniArt.PixelScifiLandscape.Sample.Character_LadderTester
struct Character_LadderTester_t2692161659;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_LadderTesterListener
struct  Character_LadderTesterListener_t4009816349  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.Character_LadderTester UniArt.PixelScifiLandscape.Sample.Character_LadderTesterListener::ladderTester
	Character_LadderTester_t2692161659 * ___ladderTester_2;

public:
	inline static int32_t get_offset_of_ladderTester_2() { return static_cast<int32_t>(offsetof(Character_LadderTesterListener_t4009816349, ___ladderTester_2)); }
	inline Character_LadderTester_t2692161659 * get_ladderTester_2() const { return ___ladderTester_2; }
	inline Character_LadderTester_t2692161659 ** get_address_of_ladderTester_2() { return &___ladderTester_2; }
	inline void set_ladderTester_2(Character_LadderTester_t2692161659 * value)
	{
		___ladderTester_2 = value;
		Il2CppCodeGenWriteBarrier(&___ladderTester_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
