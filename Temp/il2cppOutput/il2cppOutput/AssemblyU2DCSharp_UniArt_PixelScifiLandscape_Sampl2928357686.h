#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UniArt.PixelScifiLandscape.Sample.ParallaxLayer/FreezeAxes
struct FreezeAxes_t2653407965;
// UniArt.PixelScifiLandscape.Sample.ParallaxLayer/ParallaxByAxis
struct ParallaxByAxis_t1678954032;
// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UniArt_PixelScifiLandscape_Sampl3647644570.h"
#include "AssemblyU2DCSharp_UniArt_PixelScifiLandscape_Sample_99966352.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniArt.PixelScifiLandscape.Sample.ParallaxLayer
struct  ParallaxLayer_t2928357686  : public MonoBehaviour_t1158329972
{
public:
	// UniArt.PixelScifiLandscape.Sample.ParallaxLayer/EParallaxMode UniArt.PixelScifiLandscape.Sample.ParallaxLayer::mode
	int32_t ___mode_2;
	// System.Single UniArt.PixelScifiLandscape.Sample.ParallaxLayer::parallax
	float ___parallax_3;
	// UniArt.PixelScifiLandscape.Sample.ParallaxLayer/FreezeAxes UniArt.PixelScifiLandscape.Sample.ParallaxLayer::freezeAxes
	FreezeAxes_t2653407965 * ___freezeAxes_4;
	// UniArt.PixelScifiLandscape.Sample.ParallaxLayer/ParallaxByAxis UniArt.PixelScifiLandscape.Sample.ParallaxLayer::parallaxByAxis
	ParallaxByAxis_t1678954032 * ___parallaxByAxis_5;
	// UniArt.PixelScifiLandscape.Sample.ParallaxLayer/EMasterCameraSelectionMode UniArt.PixelScifiLandscape.Sample.ParallaxLayer::masterCamera
	int32_t ___masterCamera_6;
	// UnityEngine.Camera UniArt.PixelScifiLandscape.Sample.ParallaxLayer::masterCameraReference
	Camera_t189460977 * ___masterCameraReference_7;
	// System.String UniArt.PixelScifiLandscape.Sample.ParallaxLayer::masterCameraName
	String_t* ___masterCameraName_8;
	// System.String UniArt.PixelScifiLandscape.Sample.ParallaxLayer::masterCameraTag
	String_t* ___masterCameraTag_9;
	// UnityEngine.Vector3 UniArt.PixelScifiLandscape.Sample.ParallaxLayer::m_f3CameraLastPosition
	Vector3_t2243707580  ___m_f3CameraLastPosition_10;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_parallax_3() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___parallax_3)); }
	inline float get_parallax_3() const { return ___parallax_3; }
	inline float* get_address_of_parallax_3() { return &___parallax_3; }
	inline void set_parallax_3(float value)
	{
		___parallax_3 = value;
	}

	inline static int32_t get_offset_of_freezeAxes_4() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___freezeAxes_4)); }
	inline FreezeAxes_t2653407965 * get_freezeAxes_4() const { return ___freezeAxes_4; }
	inline FreezeAxes_t2653407965 ** get_address_of_freezeAxes_4() { return &___freezeAxes_4; }
	inline void set_freezeAxes_4(FreezeAxes_t2653407965 * value)
	{
		___freezeAxes_4 = value;
		Il2CppCodeGenWriteBarrier(&___freezeAxes_4, value);
	}

	inline static int32_t get_offset_of_parallaxByAxis_5() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___parallaxByAxis_5)); }
	inline ParallaxByAxis_t1678954032 * get_parallaxByAxis_5() const { return ___parallaxByAxis_5; }
	inline ParallaxByAxis_t1678954032 ** get_address_of_parallaxByAxis_5() { return &___parallaxByAxis_5; }
	inline void set_parallaxByAxis_5(ParallaxByAxis_t1678954032 * value)
	{
		___parallaxByAxis_5 = value;
		Il2CppCodeGenWriteBarrier(&___parallaxByAxis_5, value);
	}

	inline static int32_t get_offset_of_masterCamera_6() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___masterCamera_6)); }
	inline int32_t get_masterCamera_6() const { return ___masterCamera_6; }
	inline int32_t* get_address_of_masterCamera_6() { return &___masterCamera_6; }
	inline void set_masterCamera_6(int32_t value)
	{
		___masterCamera_6 = value;
	}

	inline static int32_t get_offset_of_masterCameraReference_7() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___masterCameraReference_7)); }
	inline Camera_t189460977 * get_masterCameraReference_7() const { return ___masterCameraReference_7; }
	inline Camera_t189460977 ** get_address_of_masterCameraReference_7() { return &___masterCameraReference_7; }
	inline void set_masterCameraReference_7(Camera_t189460977 * value)
	{
		___masterCameraReference_7 = value;
		Il2CppCodeGenWriteBarrier(&___masterCameraReference_7, value);
	}

	inline static int32_t get_offset_of_masterCameraName_8() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___masterCameraName_8)); }
	inline String_t* get_masterCameraName_8() const { return ___masterCameraName_8; }
	inline String_t** get_address_of_masterCameraName_8() { return &___masterCameraName_8; }
	inline void set_masterCameraName_8(String_t* value)
	{
		___masterCameraName_8 = value;
		Il2CppCodeGenWriteBarrier(&___masterCameraName_8, value);
	}

	inline static int32_t get_offset_of_masterCameraTag_9() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___masterCameraTag_9)); }
	inline String_t* get_masterCameraTag_9() const { return ___masterCameraTag_9; }
	inline String_t** get_address_of_masterCameraTag_9() { return &___masterCameraTag_9; }
	inline void set_masterCameraTag_9(String_t* value)
	{
		___masterCameraTag_9 = value;
		Il2CppCodeGenWriteBarrier(&___masterCameraTag_9, value);
	}

	inline static int32_t get_offset_of_m_f3CameraLastPosition_10() { return static_cast<int32_t>(offsetof(ParallaxLayer_t2928357686, ___m_f3CameraLastPosition_10)); }
	inline Vector3_t2243707580  get_m_f3CameraLastPosition_10() const { return ___m_f3CameraLastPosition_10; }
	inline Vector3_t2243707580 * get_address_of_m_f3CameraLastPosition_10() { return &___m_f3CameraLastPosition_10; }
	inline void set_m_f3CameraLastPosition_10(Vector3_t2243707580  value)
	{
		___m_f3CameraLastPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
