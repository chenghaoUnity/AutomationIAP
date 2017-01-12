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

// WebCamTextureToCloudVision/LatLongRect
struct  LatLongRect_t4029533484  : public Il2CppObject
{
public:
	// WebCamTextureToCloudVision/LatLng WebCamTextureToCloudVision/LatLongRect::minLatLng
	LatLng_t31298955 * ___minLatLng_0;
	// WebCamTextureToCloudVision/LatLng WebCamTextureToCloudVision/LatLongRect::maxLatLng
	LatLng_t31298955 * ___maxLatLng_1;

public:
	inline static int32_t get_offset_of_minLatLng_0() { return static_cast<int32_t>(offsetof(LatLongRect_t4029533484, ___minLatLng_0)); }
	inline LatLng_t31298955 * get_minLatLng_0() const { return ___minLatLng_0; }
	inline LatLng_t31298955 ** get_address_of_minLatLng_0() { return &___minLatLng_0; }
	inline void set_minLatLng_0(LatLng_t31298955 * value)
	{
		___minLatLng_0 = value;
		Il2CppCodeGenWriteBarrier(&___minLatLng_0, value);
	}

	inline static int32_t get_offset_of_maxLatLng_1() { return static_cast<int32_t>(offsetof(LatLongRect_t4029533484, ___maxLatLng_1)); }
	inline LatLng_t31298955 * get_maxLatLng_1() const { return ___maxLatLng_1; }
	inline LatLng_t31298955 ** get_address_of_maxLatLng_1() { return &___maxLatLng_1; }
	inline void set_maxLatLng_1(LatLng_t31298955 * value)
	{
		___maxLatLng_1 = value;
		Il2CppCodeGenWriteBarrier(&___maxLatLng_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
