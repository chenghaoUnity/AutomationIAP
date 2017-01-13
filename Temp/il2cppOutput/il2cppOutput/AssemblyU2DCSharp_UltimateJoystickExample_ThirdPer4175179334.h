#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t1725062811;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UltimateJoystickExample.ThirdPerson.ThirdPersonUserControl
struct  ThirdPersonUserControl_t4175179334  : public MonoBehaviour_t1158329972
{
public:
	// UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter UltimateJoystickExample.ThirdPerson.ThirdPersonUserControl::m_Character
	ThirdPersonCharacter_t1725062811 * ___m_Character_2;
	// UnityEngine.Transform UltimateJoystickExample.ThirdPerson.ThirdPersonUserControl::m_Cam
	Transform_t3275118058 * ___m_Cam_3;
	// UnityEngine.Vector3 UltimateJoystickExample.ThirdPerson.ThirdPersonUserControl::m_CamForward
	Vector3_t2243707580  ___m_CamForward_4;
	// UnityEngine.Vector3 UltimateJoystickExample.ThirdPerson.ThirdPersonUserControl::m_Move
	Vector3_t2243707580  ___m_Move_5;
	// System.Boolean UltimateJoystickExample.ThirdPerson.ThirdPersonUserControl::m_Jump
	bool ___m_Jump_6;

public:
	inline static int32_t get_offset_of_m_Character_2() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t4175179334, ___m_Character_2)); }
	inline ThirdPersonCharacter_t1725062811 * get_m_Character_2() const { return ___m_Character_2; }
	inline ThirdPersonCharacter_t1725062811 ** get_address_of_m_Character_2() { return &___m_Character_2; }
	inline void set_m_Character_2(ThirdPersonCharacter_t1725062811 * value)
	{
		___m_Character_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Character_2, value);
	}

	inline static int32_t get_offset_of_m_Cam_3() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t4175179334, ___m_Cam_3)); }
	inline Transform_t3275118058 * get_m_Cam_3() const { return ___m_Cam_3; }
	inline Transform_t3275118058 ** get_address_of_m_Cam_3() { return &___m_Cam_3; }
	inline void set_m_Cam_3(Transform_t3275118058 * value)
	{
		___m_Cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cam_3, value);
	}

	inline static int32_t get_offset_of_m_CamForward_4() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t4175179334, ___m_CamForward_4)); }
	inline Vector3_t2243707580  get_m_CamForward_4() const { return ___m_CamForward_4; }
	inline Vector3_t2243707580 * get_address_of_m_CamForward_4() { return &___m_CamForward_4; }
	inline void set_m_CamForward_4(Vector3_t2243707580  value)
	{
		___m_CamForward_4 = value;
	}

	inline static int32_t get_offset_of_m_Move_5() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t4175179334, ___m_Move_5)); }
	inline Vector3_t2243707580  get_m_Move_5() const { return ___m_Move_5; }
	inline Vector3_t2243707580 * get_address_of_m_Move_5() { return &___m_Move_5; }
	inline void set_m_Move_5(Vector3_t2243707580  value)
	{
		___m_Move_5 = value;
	}

	inline static int32_t get_offset_of_m_Jump_6() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t4175179334, ___m_Jump_6)); }
	inline bool get_m_Jump_6() const { return ___m_Jump_6; }
	inline bool* get_address_of_m_Jump_6() { return &___m_Jump_6; }
	inline void set_m_Jump_6(bool value)
	{
		___m_Jump_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
