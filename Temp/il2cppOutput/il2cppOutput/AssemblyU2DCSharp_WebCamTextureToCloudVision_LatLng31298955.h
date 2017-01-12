#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/LatLng
struct  LatLng_t31298955  : public Il2CppObject
{
public:
	// System.Single WebCamTextureToCloudVision/LatLng::latitude
	float ___latitude_0;
	// System.Single WebCamTextureToCloudVision/LatLng::longitude
	float ___longitude_1;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(LatLng_t31298955, ___latitude_0)); }
	inline float get_latitude_0() const { return ___latitude_0; }
	inline float* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(float value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(LatLng_t31298955, ___longitude_1)); }
	inline float get_longitude_1() const { return ___longitude_1; }
	inline float* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(float value)
	{
		___longitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
