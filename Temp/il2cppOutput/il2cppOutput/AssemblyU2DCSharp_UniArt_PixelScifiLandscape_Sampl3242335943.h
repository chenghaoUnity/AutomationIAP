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

// UniArt.PixelScifiLandscape.Sample.Character_LookController
struct  Character_LookController_t3242335943  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.Character_LookController::cameraTarget
	Transform_t3275118058 * ___cameraTarget_2;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LookController::smoothTime
	float ___smoothTime_3;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LookController::m_fLookVelocity
	float ___m_fLookVelocity_4;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LookController::m_fCameraTargetInitialLocalHeight
	float ___m_fCameraTargetInitialLocalHeight_5;
	// System.Single UniArt.PixelScifiLandscape.Sample.Character_LookController::m_fLookOffset
	float ___m_fLookOffset_6;

public:
	inline static int32_t get_offset_of_cameraTarget_2() { return static_cast<int32_t>(offsetof(Character_LookController_t3242335943, ___cameraTarget_2)); }
	inline Transform_t3275118058 * get_cameraTarget_2() const { return ___cameraTarget_2; }
	inline Transform_t3275118058 ** get_address_of_cameraTarget_2() { return &___cameraTarget_2; }
	inline void set_cameraTarget_2(Transform_t3275118058 * value)
	{
		___cameraTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTarget_2, value);
	}

	inline static int32_t get_offset_of_smoothTime_3() { return static_cast<int32_t>(offsetof(Character_LookController_t3242335943, ___smoothTime_3)); }
	inline float get_smoothTime_3() const { return ___smoothTime_3; }
	inline float* get_address_of_smoothTime_3() { return &___smoothTime_3; }
	inline void set_smoothTime_3(float value)
	{
		___smoothTime_3 = value;
	}

	inline static int32_t get_offset_of_m_fLookVelocity_4() { return static_cast<int32_t>(offsetof(Character_LookController_t3242335943, ___m_fLookVelocity_4)); }
	inline float get_m_fLookVelocity_4() const { return ___m_fLookVelocity_4; }
	inline float* get_address_of_m_fLookVelocity_4() { return &___m_fLookVelocity_4; }
	inline void set_m_fLookVelocity_4(float value)
	{
		___m_fLookVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_fCameraTargetInitialLocalHeight_5() { return static_cast<int32_t>(offsetof(Character_LookController_t3242335943, ___m_fCameraTargetInitialLocalHeight_5)); }
	inline float get_m_fCameraTargetInitialLocalHeight_5() const { return ___m_fCameraTargetInitialLocalHeight_5; }
	inline float* get_address_of_m_fCameraTargetInitialLocalHeight_5() { return &___m_fCameraTargetInitialLocalHeight_5; }
	inline void set_m_fCameraTargetInitialLocalHeight_5(float value)
	{
		___m_fCameraTargetInitialLocalHeight_5 = value;
	}

	inline static int32_t get_offset_of_m_fLookOffset_6() { return static_cast<int32_t>(offsetof(Character_LookController_t3242335943, ___m_fLookOffset_6)); }
	inline float get_m_fLookOffset_6() const { return ___m_fLookOffset_6; }
	inline float* get_address_of_m_fLookOffset_6() { return &___m_fLookOffset_6; }
	inline void set_m_fLookOffset_6(float value)
	{
		___m_fLookOffset_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
