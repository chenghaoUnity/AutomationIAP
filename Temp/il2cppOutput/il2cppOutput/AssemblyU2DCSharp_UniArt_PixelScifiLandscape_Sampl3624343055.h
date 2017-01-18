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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.CameraFollowTarget
struct  CameraFollowTarget_t3624343055  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.CameraFollowTarget::target
	Transform_t3275118058 * ___target_2;
	// System.Single UniArt.PixelScifiLandscape.Sample.CameraFollowTarget::smoothTime
	float ___smoothTime_3;
	// UnityEngine.Vector3 UniArt.PixelScifiLandscape.Sample.CameraFollowTarget::m_f3FollowVelocity
	Vector3_t2243707580  ___m_f3FollowVelocity_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollowTarget_t3624343055, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_smoothTime_3() { return static_cast<int32_t>(offsetof(CameraFollowTarget_t3624343055, ___smoothTime_3)); }
	inline float get_smoothTime_3() const { return ___smoothTime_3; }
	inline float* get_address_of_smoothTime_3() { return &___smoothTime_3; }
	inline void set_smoothTime_3(float value)
	{
		___smoothTime_3 = value;
	}

	inline static int32_t get_offset_of_m_f3FollowVelocity_4() { return static_cast<int32_t>(offsetof(CameraFollowTarget_t3624343055, ___m_f3FollowVelocity_4)); }
	inline Vector3_t2243707580  get_m_f3FollowVelocity_4() const { return ___m_f3FollowVelocity_4; }
	inline Vector3_t2243707580 * get_address_of_m_f3FollowVelocity_4() { return &___m_f3FollowVelocity_4; }
	inline void set_m_f3FollowVelocity_4(Vector3_t2243707580  value)
	{
		___m_f3FollowVelocity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
