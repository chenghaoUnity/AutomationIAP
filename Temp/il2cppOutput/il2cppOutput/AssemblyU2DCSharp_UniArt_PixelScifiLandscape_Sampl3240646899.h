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
// UniArt.PixelScifiLandscape.Sample.Character_Input
struct Character_Input_t2061814878;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.Character_FlipController
struct  Character_FlipController_t3240646899  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.Character_FlipController::flipTransform
	Transform_t3275118058 * ___flipTransform_2;
	// UniArt.PixelScifiLandscape.Sample.Character_Input UniArt.PixelScifiLandscape.Sample.Character_FlipController::characterInput
	Character_Input_t2061814878 * ___characterInput_3;

public:
	inline static int32_t get_offset_of_flipTransform_2() { return static_cast<int32_t>(offsetof(Character_FlipController_t3240646899, ___flipTransform_2)); }
	inline Transform_t3275118058 * get_flipTransform_2() const { return ___flipTransform_2; }
	inline Transform_t3275118058 ** get_address_of_flipTransform_2() { return &___flipTransform_2; }
	inline void set_flipTransform_2(Transform_t3275118058 * value)
	{
		___flipTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___flipTransform_2, value);
	}

	inline static int32_t get_offset_of_characterInput_3() { return static_cast<int32_t>(offsetof(Character_FlipController_t3240646899, ___characterInput_3)); }
	inline Character_Input_t2061814878 * get_characterInput_3() const { return ___characterInput_3; }
	inline Character_Input_t2061814878 ** get_address_of_characterInput_3() { return &___characterInput_3; }
	inline void set_characterInput_3(Character_Input_t2061814878 * value)
	{
		___characterInput_3 = value;
		Il2CppCodeGenWriteBarrier(&___characterInput_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
