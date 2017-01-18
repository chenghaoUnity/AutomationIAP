#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BleedBehavior
struct  BleedBehavior_t3074137086  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BleedBehavior::TestingBloodAmount
	float ___TestingBloodAmount_3;
	// System.Single BleedBehavior::EdgeSharpness
	float ___EdgeSharpness_5;
	// System.Single BleedBehavior::minAlpha
	float ___minAlpha_6;
	// System.Single BleedBehavior::maxAlpha
	float ___maxAlpha_7;
	// System.Single BleedBehavior::distortion
	float ___distortion_8;
	// System.Boolean BleedBehavior::autoFadeOut
	bool ___autoFadeOut_9;
	// System.Single BleedBehavior::autoFadeOutAbsReduc
	float ___autoFadeOutAbsReduc_10;
	// System.Single BleedBehavior::autoFadeOutRelReduc
	float ___autoFadeOutRelReduc_11;
	// System.Single BleedBehavior::updateSpeed
	float ___updateSpeed_12;
	// System.Single BleedBehavior::prevBloodAmount
	float ___prevBloodAmount_13;
	// UnityEngine.Texture2D BleedBehavior::Image
	Texture2D_t3542995729 * ___Image_14;
	// UnityEngine.Texture2D BleedBehavior::Normals
	Texture2D_t3542995729 * ___Normals_15;
	// UnityEngine.Shader BleedBehavior::Shader
	Shader_t2430389951 * ___Shader_16;
	// UnityEngine.Material BleedBehavior::_material
	Material_t193706927 * ____material_17;

public:
	inline static int32_t get_offset_of_TestingBloodAmount_3() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___TestingBloodAmount_3)); }
	inline float get_TestingBloodAmount_3() const { return ___TestingBloodAmount_3; }
	inline float* get_address_of_TestingBloodAmount_3() { return &___TestingBloodAmount_3; }
	inline void set_TestingBloodAmount_3(float value)
	{
		___TestingBloodAmount_3 = value;
	}

	inline static int32_t get_offset_of_EdgeSharpness_5() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___EdgeSharpness_5)); }
	inline float get_EdgeSharpness_5() const { return ___EdgeSharpness_5; }
	inline float* get_address_of_EdgeSharpness_5() { return &___EdgeSharpness_5; }
	inline void set_EdgeSharpness_5(float value)
	{
		___EdgeSharpness_5 = value;
	}

	inline static int32_t get_offset_of_minAlpha_6() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___minAlpha_6)); }
	inline float get_minAlpha_6() const { return ___minAlpha_6; }
	inline float* get_address_of_minAlpha_6() { return &___minAlpha_6; }
	inline void set_minAlpha_6(float value)
	{
		___minAlpha_6 = value;
	}

	inline static int32_t get_offset_of_maxAlpha_7() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___maxAlpha_7)); }
	inline float get_maxAlpha_7() const { return ___maxAlpha_7; }
	inline float* get_address_of_maxAlpha_7() { return &___maxAlpha_7; }
	inline void set_maxAlpha_7(float value)
	{
		___maxAlpha_7 = value;
	}

	inline static int32_t get_offset_of_distortion_8() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___distortion_8)); }
	inline float get_distortion_8() const { return ___distortion_8; }
	inline float* get_address_of_distortion_8() { return &___distortion_8; }
	inline void set_distortion_8(float value)
	{
		___distortion_8 = value;
	}

	inline static int32_t get_offset_of_autoFadeOut_9() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___autoFadeOut_9)); }
	inline bool get_autoFadeOut_9() const { return ___autoFadeOut_9; }
	inline bool* get_address_of_autoFadeOut_9() { return &___autoFadeOut_9; }
	inline void set_autoFadeOut_9(bool value)
	{
		___autoFadeOut_9 = value;
	}

	inline static int32_t get_offset_of_autoFadeOutAbsReduc_10() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___autoFadeOutAbsReduc_10)); }
	inline float get_autoFadeOutAbsReduc_10() const { return ___autoFadeOutAbsReduc_10; }
	inline float* get_address_of_autoFadeOutAbsReduc_10() { return &___autoFadeOutAbsReduc_10; }
	inline void set_autoFadeOutAbsReduc_10(float value)
	{
		___autoFadeOutAbsReduc_10 = value;
	}

	inline static int32_t get_offset_of_autoFadeOutRelReduc_11() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___autoFadeOutRelReduc_11)); }
	inline float get_autoFadeOutRelReduc_11() const { return ___autoFadeOutRelReduc_11; }
	inline float* get_address_of_autoFadeOutRelReduc_11() { return &___autoFadeOutRelReduc_11; }
	inline void set_autoFadeOutRelReduc_11(float value)
	{
		___autoFadeOutRelReduc_11 = value;
	}

	inline static int32_t get_offset_of_updateSpeed_12() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___updateSpeed_12)); }
	inline float get_updateSpeed_12() const { return ___updateSpeed_12; }
	inline float* get_address_of_updateSpeed_12() { return &___updateSpeed_12; }
	inline void set_updateSpeed_12(float value)
	{
		___updateSpeed_12 = value;
	}

	inline static int32_t get_offset_of_prevBloodAmount_13() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___prevBloodAmount_13)); }
	inline float get_prevBloodAmount_13() const { return ___prevBloodAmount_13; }
	inline float* get_address_of_prevBloodAmount_13() { return &___prevBloodAmount_13; }
	inline void set_prevBloodAmount_13(float value)
	{
		___prevBloodAmount_13 = value;
	}

	inline static int32_t get_offset_of_Image_14() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___Image_14)); }
	inline Texture2D_t3542995729 * get_Image_14() const { return ___Image_14; }
	inline Texture2D_t3542995729 ** get_address_of_Image_14() { return &___Image_14; }
	inline void set_Image_14(Texture2D_t3542995729 * value)
	{
		___Image_14 = value;
		Il2CppCodeGenWriteBarrier(&___Image_14, value);
	}

	inline static int32_t get_offset_of_Normals_15() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___Normals_15)); }
	inline Texture2D_t3542995729 * get_Normals_15() const { return ___Normals_15; }
	inline Texture2D_t3542995729 ** get_address_of_Normals_15() { return &___Normals_15; }
	inline void set_Normals_15(Texture2D_t3542995729 * value)
	{
		___Normals_15 = value;
		Il2CppCodeGenWriteBarrier(&___Normals_15, value);
	}

	inline static int32_t get_offset_of_Shader_16() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ___Shader_16)); }
	inline Shader_t2430389951 * get_Shader_16() const { return ___Shader_16; }
	inline Shader_t2430389951 ** get_address_of_Shader_16() { return &___Shader_16; }
	inline void set_Shader_16(Shader_t2430389951 * value)
	{
		___Shader_16 = value;
		Il2CppCodeGenWriteBarrier(&___Shader_16, value);
	}

	inline static int32_t get_offset_of__material_17() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086, ____material_17)); }
	inline Material_t193706927 * get__material_17() const { return ____material_17; }
	inline Material_t193706927 ** get_address_of__material_17() { return &____material_17; }
	inline void set__material_17(Material_t193706927 * value)
	{
		____material_17 = value;
		Il2CppCodeGenWriteBarrier(&____material_17, value);
	}
};

struct BleedBehavior_t3074137086_StaticFields
{
public:
	// System.Single BleedBehavior::BloodAmount
	float ___BloodAmount_2;
	// System.Single BleedBehavior::minBloodAmount
	float ___minBloodAmount_4;

public:
	inline static int32_t get_offset_of_BloodAmount_2() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086_StaticFields, ___BloodAmount_2)); }
	inline float get_BloodAmount_2() const { return ___BloodAmount_2; }
	inline float* get_address_of_BloodAmount_2() { return &___BloodAmount_2; }
	inline void set_BloodAmount_2(float value)
	{
		___BloodAmount_2 = value;
	}

	inline static int32_t get_offset_of_minBloodAmount_4() { return static_cast<int32_t>(offsetof(BleedBehavior_t3074137086_StaticFields, ___minBloodAmount_4)); }
	inline float get_minBloodAmount_4() const { return ___minBloodAmount_4; }
	inline float* get_address_of_minBloodAmount_4() { return &___minBloodAmount_4; }
	inline void set_minBloodAmount_4(float value)
	{
		___minBloodAmount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
