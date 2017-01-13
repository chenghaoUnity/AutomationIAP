#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebCamTextureToCloudVision/LatLng
struct LatLng_t31298955;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/LocationInfo
struct  LocationInfo_t2573743508  : public Il2CppObject
{
public:
	// WebCamTextureToCloudVision/LatLng WebCamTextureToCloudVision/LocationInfo::latLng
	LatLng_t31298955 * ___latLng_0;

public:
	inline static int32_t get_offset_of_latLng_0() { return static_cast<int32_t>(offsetof(LocationInfo_t2573743508, ___latLng_0)); }
	inline LatLng_t31298955 * get_latLng_0() const { return ___latLng_0; }
	inline LatLng_t31298955 ** get_address_of_latLng_0() { return &___latLng_0; }
	inline void set_latLng_0(LatLng_t31298955 * value)
	{
		___latLng_0 = value;
		Il2CppCodeGenWriteBarrier(&___latLng_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
