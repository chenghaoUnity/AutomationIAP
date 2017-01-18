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
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.CameraRestrictToSafeZone
struct  CameraRestrictToSafeZone_t4029757151  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UniArt.PixelScifiLandscape.Sample.CameraRestrictToSafeZone::safeZoneCenter
	Transform_t3275118058 * ___safeZoneCenter_2;
	// UnityEngine.Vector2 UniArt.PixelScifiLandscape.Sample.CameraRestrictToSafeZone::safeZoneSize
	Vector2_t2243707579  ___safeZoneSize_3;
	// UnityEngine.Vector2 UniArt.PixelScifiLandscape.Sample.CameraRestrictToSafeZone::safeZoneOffsetFromTarget
	Vector2_t2243707579  ___safeZoneOffsetFromTarget_4;
	// UnityEngine.Vector3 UniArt.PixelScifiLandscape.Sample.CameraRestrictToSafeZone::m_f3FollowVelocity
	Vector3_t2243707580  ___m_f3FollowVelocity_5;

public:
	inline static int32_t get_offset_of_safeZoneCenter_2() { return static_cast<int32_t>(offsetof(CameraRestrictToSafeZone_t4029757151, ___safeZoneCenter_2)); }
	inline Transform_t3275118058 * get_safeZoneCenter_2() const { return ___safeZoneCenter_2; }
	inline Transform_t3275118058 ** get_address_of_safeZoneCenter_2() { return &___safeZoneCenter_2; }
	inline void set_safeZoneCenter_2(Transform_t3275118058 * value)
	{
		___safeZoneCenter_2 = value;
		Il2CppCodeGenWriteBarrier(&___safeZoneCenter_2, value);
	}

	inline static int32_t get_offset_of_safeZoneSize_3() { return static_cast<int32_t>(offsetof(CameraRestrictToSafeZone_t4029757151, ___safeZoneSize_3)); }
	inline Vector2_t2243707579  get_safeZoneSize_3() const { return ___safeZoneSize_3; }
	inline Vector2_t2243707579 * get_address_of_safeZoneSize_3() { return &___safeZoneSize_3; }
	inline void set_safeZoneSize_3(Vector2_t2243707579  value)
	{
		___safeZoneSize_3 = value;
	}

	inline static int32_t get_offset_of_safeZoneOffsetFromTarget_4() { return static_cast<int32_t>(offsetof(CameraRestrictToSafeZone_t4029757151, ___safeZoneOffsetFromTarget_4)); }
	inline Vector2_t2243707579  get_safeZoneOffsetFromTarget_4() const { return ___safeZoneOffsetFromTarget_4; }
	inline Vector2_t2243707579 * get_address_of_safeZoneOffsetFromTarget_4() { return &___safeZoneOffsetFromTarget_4; }
	inline void set_safeZoneOffsetFromTarget_4(Vector2_t2243707579  value)
	{
		___safeZoneOffsetFromTarget_4 = value;
	}

	inline static int32_t get_offset_of_m_f3FollowVelocity_5() { return static_cast<int32_t>(offsetof(CameraRestrictToSafeZone_t4029757151, ___m_f3FollowVelocity_5)); }
	inline Vector3_t2243707580  get_m_f3FollowVelocity_5() const { return ___m_f3FollowVelocity_5; }
	inline Vector3_t2243707580 * get_address_of_m_f3FollowVelocity_5() { return &___m_f3FollowVelocity_5; }
	inline void set_m_f3FollowVelocity_5(Vector3_t2243707580  value)
	{
		___m_f3FollowVelocity_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
