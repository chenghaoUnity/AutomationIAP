#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DigitalRuby.RainMaker.RainScript
struct RainScript_t2248401219;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_DigitalRuby_RainMaker_DemoScript3146159468.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.RainMaker.DemoScript
struct  DemoScript_t3397952802  : public MonoBehaviour_t1158329972
{
public:
	// DigitalRuby.RainMaker.RainScript DigitalRuby.RainMaker.DemoScript::RainScript
	RainScript_t2248401219 * ___RainScript_2;
	// UnityEngine.UI.Toggle DigitalRuby.RainMaker.DemoScript::MouseLookToggle
	Toggle_t3976754468 * ___MouseLookToggle_3;
	// UnityEngine.UI.Toggle DigitalRuby.RainMaker.DemoScript::FlashlightToggle
	Toggle_t3976754468 * ___FlashlightToggle_4;
	// UnityEngine.Light DigitalRuby.RainMaker.DemoScript::Flashlight
	Light_t494725636 * ___Flashlight_5;
	// UnityEngine.GameObject DigitalRuby.RainMaker.DemoScript::Sun
	GameObject_t1756533147 * ___Sun_6;
	// DigitalRuby.RainMaker.DemoScript/RotationAxes DigitalRuby.RainMaker.DemoScript::axes
	int32_t ___axes_7;
	// System.Single DigitalRuby.RainMaker.DemoScript::sensitivityX
	float ___sensitivityX_8;
	// System.Single DigitalRuby.RainMaker.DemoScript::sensitivityY
	float ___sensitivityY_9;
	// System.Single DigitalRuby.RainMaker.DemoScript::minimumX
	float ___minimumX_10;
	// System.Single DigitalRuby.RainMaker.DemoScript::maximumX
	float ___maximumX_11;
	// System.Single DigitalRuby.RainMaker.DemoScript::minimumY
	float ___minimumY_12;
	// System.Single DigitalRuby.RainMaker.DemoScript::maximumY
	float ___maximumY_13;
	// System.Single DigitalRuby.RainMaker.DemoScript::rotationX
	float ___rotationX_14;
	// System.Single DigitalRuby.RainMaker.DemoScript::rotationY
	float ___rotationY_15;
	// UnityEngine.Quaternion DigitalRuby.RainMaker.DemoScript::originalRotation
	Quaternion_t4030073918  ___originalRotation_16;

public:
	inline static int32_t get_offset_of_RainScript_2() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___RainScript_2)); }
	inline RainScript_t2248401219 * get_RainScript_2() const { return ___RainScript_2; }
	inline RainScript_t2248401219 ** get_address_of_RainScript_2() { return &___RainScript_2; }
	inline void set_RainScript_2(RainScript_t2248401219 * value)
	{
		___RainScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___RainScript_2, value);
	}

	inline static int32_t get_offset_of_MouseLookToggle_3() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___MouseLookToggle_3)); }
	inline Toggle_t3976754468 * get_MouseLookToggle_3() const { return ___MouseLookToggle_3; }
	inline Toggle_t3976754468 ** get_address_of_MouseLookToggle_3() { return &___MouseLookToggle_3; }
	inline void set_MouseLookToggle_3(Toggle_t3976754468 * value)
	{
		___MouseLookToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___MouseLookToggle_3, value);
	}

	inline static int32_t get_offset_of_FlashlightToggle_4() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___FlashlightToggle_4)); }
	inline Toggle_t3976754468 * get_FlashlightToggle_4() const { return ___FlashlightToggle_4; }
	inline Toggle_t3976754468 ** get_address_of_FlashlightToggle_4() { return &___FlashlightToggle_4; }
	inline void set_FlashlightToggle_4(Toggle_t3976754468 * value)
	{
		___FlashlightToggle_4 = value;
		Il2CppCodeGenWriteBarrier(&___FlashlightToggle_4, value);
	}

	inline static int32_t get_offset_of_Flashlight_5() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___Flashlight_5)); }
	inline Light_t494725636 * get_Flashlight_5() const { return ___Flashlight_5; }
	inline Light_t494725636 ** get_address_of_Flashlight_5() { return &___Flashlight_5; }
	inline void set_Flashlight_5(Light_t494725636 * value)
	{
		___Flashlight_5 = value;
		Il2CppCodeGenWriteBarrier(&___Flashlight_5, value);
	}

	inline static int32_t get_offset_of_Sun_6() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___Sun_6)); }
	inline GameObject_t1756533147 * get_Sun_6() const { return ___Sun_6; }
	inline GameObject_t1756533147 ** get_address_of_Sun_6() { return &___Sun_6; }
	inline void set_Sun_6(GameObject_t1756533147 * value)
	{
		___Sun_6 = value;
		Il2CppCodeGenWriteBarrier(&___Sun_6, value);
	}

	inline static int32_t get_offset_of_axes_7() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___axes_7)); }
	inline int32_t get_axes_7() const { return ___axes_7; }
	inline int32_t* get_address_of_axes_7() { return &___axes_7; }
	inline void set_axes_7(int32_t value)
	{
		___axes_7 = value;
	}

	inline static int32_t get_offset_of_sensitivityX_8() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___sensitivityX_8)); }
	inline float get_sensitivityX_8() const { return ___sensitivityX_8; }
	inline float* get_address_of_sensitivityX_8() { return &___sensitivityX_8; }
	inline void set_sensitivityX_8(float value)
	{
		___sensitivityX_8 = value;
	}

	inline static int32_t get_offset_of_sensitivityY_9() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___sensitivityY_9)); }
	inline float get_sensitivityY_9() const { return ___sensitivityY_9; }
	inline float* get_address_of_sensitivityY_9() { return &___sensitivityY_9; }
	inline void set_sensitivityY_9(float value)
	{
		___sensitivityY_9 = value;
	}

	inline static int32_t get_offset_of_minimumX_10() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___minimumX_10)); }
	inline float get_minimumX_10() const { return ___minimumX_10; }
	inline float* get_address_of_minimumX_10() { return &___minimumX_10; }
	inline void set_minimumX_10(float value)
	{
		___minimumX_10 = value;
	}

	inline static int32_t get_offset_of_maximumX_11() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___maximumX_11)); }
	inline float get_maximumX_11() const { return ___maximumX_11; }
	inline float* get_address_of_maximumX_11() { return &___maximumX_11; }
	inline void set_maximumX_11(float value)
	{
		___maximumX_11 = value;
	}

	inline static int32_t get_offset_of_minimumY_12() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___minimumY_12)); }
	inline float get_minimumY_12() const { return ___minimumY_12; }
	inline float* get_address_of_minimumY_12() { return &___minimumY_12; }
	inline void set_minimumY_12(float value)
	{
		___minimumY_12 = value;
	}

	inline static int32_t get_offset_of_maximumY_13() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___maximumY_13)); }
	inline float get_maximumY_13() const { return ___maximumY_13; }
	inline float* get_address_of_maximumY_13() { return &___maximumY_13; }
	inline void set_maximumY_13(float value)
	{
		___maximumY_13 = value;
	}

	inline static int32_t get_offset_of_rotationX_14() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___rotationX_14)); }
	inline float get_rotationX_14() const { return ___rotationX_14; }
	inline float* get_address_of_rotationX_14() { return &___rotationX_14; }
	inline void set_rotationX_14(float value)
	{
		___rotationX_14 = value;
	}

	inline static int32_t get_offset_of_rotationY_15() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___rotationY_15)); }
	inline float get_rotationY_15() const { return ___rotationY_15; }
	inline float* get_address_of_rotationY_15() { return &___rotationY_15; }
	inline void set_rotationY_15(float value)
	{
		___rotationY_15 = value;
	}

	inline static int32_t get_offset_of_originalRotation_16() { return static_cast<int32_t>(offsetof(DemoScript_t3397952802, ___originalRotation_16)); }
	inline Quaternion_t4030073918  get_originalRotation_16() const { return ___originalRotation_16; }
	inline Quaternion_t4030073918 * get_address_of_originalRotation_16() { return &___originalRotation_16; }
	inline void set_originalRotation_16(Quaternion_t4030073918  value)
	{
		___originalRotation_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
