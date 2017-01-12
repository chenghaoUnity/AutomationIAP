#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebCamTextureToCloudVision/LatLongRect
struct LatLongRect_t4029533484;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCamTextureToCloudVision/ImageContext
struct  ImageContext_t361977959  : public Il2CppObject
{
public:
	// WebCamTextureToCloudVision/LatLongRect WebCamTextureToCloudVision/ImageContext::latLongRect
	LatLongRect_t4029533484 * ___latLongRect_0;
	// System.Collections.Generic.List`1<System.String> WebCamTextureToCloudVision/ImageContext::languageHints
	List_1_t1398341365 * ___languageHints_1;

public:
	inline static int32_t get_offset_of_latLongRect_0() { return static_cast<int32_t>(offsetof(ImageContext_t361977959, ___latLongRect_0)); }
	inline LatLongRect_t4029533484 * get_latLongRect_0() const { return ___latLongRect_0; }
	inline LatLongRect_t4029533484 ** get_address_of_latLongRect_0() { return &___latLongRect_0; }
	inline void set_latLongRect_0(LatLongRect_t4029533484 * value)
	{
		___latLongRect_0 = value;
		Il2CppCodeGenWriteBarrier(&___latLongRect_0, value);
	}

	inline static int32_t get_offset_of_languageHints_1() { return static_cast<int32_t>(offsetof(ImageContext_t361977959, ___languageHints_1)); }
	inline List_1_t1398341365 * get_languageHints_1() const { return ___languageHints_1; }
	inline List_1_t1398341365 ** get_address_of_languageHints_1() { return &___languageHints_1; }
	inline void set_languageHints_1(List_1_t1398341365 * value)
	{
		___languageHints_1 = value;
		Il2CppCodeGenWriteBarrier(&___languageHints_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
