#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Object_Ladder
struct  Object_Ladder_t2797598778  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.Object_Ladder::ladderTop
	Transform_t3275118058 * ___ladderTop_2;
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.Object_Ladder::ladderBottom
	Transform_t3275118058 * ___ladderBottom_3;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Object_Ladder::canGoOnTop
	bool ___canGoOnTop_4;
	// System.Boolean UniArt.PixelScifiLandscape.Sample.Object_Ladder::canGoOnBottom
	bool ___canGoOnBottom_5;

public:
	inline static int32_t get_offset_of_ladderTop_2() { return static_cast<int32_t>(offsetof(Object_Ladder_t2797598778, ___ladderTop_2)); }
	inline Transform_t3275118058 * get_ladderTop_2() const { return ___ladderTop_2; }
	inline Transform_t3275118058 ** get_address_of_ladderTop_2() { return &___ladderTop_2; }
	inline void set_ladderTop_2(Transform_t3275118058 * value)
	{
		___ladderTop_2 = value;
		Il2CppCodeGenWriteBarrier(&___ladderTop_2, value);
	}

	inline static int32_t get_offset_of_ladderBottom_3() { return static_cast<int32_t>(offsetof(Object_Ladder_t2797598778, ___ladderBottom_3)); }
	inline Transform_t3275118058 * get_ladderBottom_3() const { return ___ladderBottom_3; }
	inline Transform_t3275118058 ** get_address_of_ladderBottom_3() { return &___ladderBottom_3; }
	inline void set_ladderBottom_3(Transform_t3275118058 * value)
	{
		___ladderBottom_3 = value;
		Il2CppCodeGenWriteBarrier(&___ladderBottom_3, value);
	}

	inline static int32_t get_offset_of_canGoOnTop_4() { return static_cast<int32_t>(offsetof(Object_Ladder_t2797598778, ___canGoOnTop_4)); }
	inline bool get_canGoOnTop_4() const { return ___canGoOnTop_4; }
	inline bool* get_address_of_canGoOnTop_4() { return &___canGoOnTop_4; }
	inline void set_canGoOnTop_4(bool value)
	{
		___canGoOnTop_4 = value;
	}

	inline static int32_t get_offset_of_canGoOnBottom_5() { return static_cast<int32_t>(offsetof(Object_Ladder_t2797598778, ___canGoOnBottom_5)); }
	inline bool get_canGoOnBottom_5() const { return ___canGoOnBottom_5; }
	inline bool* get_address_of_canGoOnBottom_5() { return &___canGoOnBottom_5; }
	inline void set_canGoOnBottom_5(bool value)
	{
		___canGoOnBottom_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
