#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// UnityEngine.Animator
struct Animator_t69676727;
// System.Collections.Generic.Dictionary`2<System.String,UltimateJoystick>
struct Dictionary_2_t808150083;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_Scal562516458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_Anc1382011903.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_Joys340967774.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_Axis572188769.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_Boun150649600.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_Dea3231403887.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UltimateJoystick_TapC963140259.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UltimateJoystick
struct  UltimateJoystick_t3188338117  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform UltimateJoystick::joystick
	RectTransform_t3349966182 * ___joystick_2;
	// UnityEngine.RectTransform UltimateJoystick::joystickSizeFolder
	RectTransform_t3349966182 * ___joystickSizeFolder_3;
	// UnityEngine.RectTransform UltimateJoystick::joystickBase
	RectTransform_t3349966182 * ___joystickBase_4;
	// UnityEngine.RectTransform UltimateJoystick::baseTrans
	RectTransform_t3349966182 * ___baseTrans_5;
	// UnityEngine.Vector2 UltimateJoystick::textureCenter
	Vector2_t2243707579  ___textureCenter_6;
	// UnityEngine.Vector2 UltimateJoystick::defaultPos
	Vector2_t2243707579  ___defaultPos_7;
	// UnityEngine.Vector3 UltimateJoystick::joystickCenter
	Vector3_t2243707580  ___joystickCenter_8;
	// UnityEngine.UI.Image UltimateJoystick::highlightBase
	Image_t2042527209 * ___highlightBase_9;
	// UnityEngine.UI.Image UltimateJoystick::highlightJoystick
	Image_t2042527209 * ___highlightJoystick_10;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentUp
	Image_t2042527209 * ___tensionAccentUp_11;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentDown
	Image_t2042527209 * ___tensionAccentDown_12;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentLeft
	Image_t2042527209 * ___tensionAccentLeft_13;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentRight
	Image_t2042527209 * ___tensionAccentRight_14;
	// UltimateJoystick/ScalingAxis UltimateJoystick::scalingAxis
	int32_t ___scalingAxis_15;
	// UltimateJoystick/Anchor UltimateJoystick::anchor
	int32_t ___anchor_16;
	// UltimateJoystick/JoystickTouchSize UltimateJoystick::joystickTouchSize
	int32_t ___joystickTouchSize_17;
	// System.Single UltimateJoystick::joystickSize
	float ___joystickSize_18;
	// System.Single UltimateJoystick::radiusModifier
	float ___radiusModifier_19;
	// System.Single UltimateJoystick::radius
	float ___radius_20;
	// System.Boolean UltimateJoystick::dynamicPositioning
	bool ___dynamicPositioning_21;
	// System.Single UltimateJoystick::customTouchSize_X
	float ___customTouchSize_X_22;
	// System.Single UltimateJoystick::customTouchSize_Y
	float ___customTouchSize_Y_23;
	// System.Single UltimateJoystick::customTouchSizePos_X
	float ___customTouchSizePos_X_24;
	// System.Single UltimateJoystick::customTouchSizePos_Y
	float ___customTouchSizePos_Y_25;
	// System.Single UltimateJoystick::customSpacing_X
	float ___customSpacing_X_26;
	// System.Single UltimateJoystick::customSpacing_Y
	float ___customSpacing_Y_27;
	// System.Boolean UltimateJoystick::disableVisuals
	bool ___disableVisuals_28;
	// System.Boolean UltimateJoystick::useFade
	bool ___useFade_29;
	// UnityEngine.CanvasGroup UltimateJoystick::joystickGroup
	CanvasGroup_t3296560743 * ___joystickGroup_30;
	// System.Single UltimateJoystick::fadeUntouched
	float ___fadeUntouched_31;
	// System.Single UltimateJoystick::fadeTouched
	float ___fadeTouched_32;
	// System.Single UltimateJoystick::fadeInDuration
	float ___fadeInDuration_33;
	// System.Single UltimateJoystick::fadeOutDuration
	float ___fadeOutDuration_34;
	// System.Single UltimateJoystick::fadeInSpeed
	float ___fadeInSpeed_35;
	// System.Single UltimateJoystick::fadeOutSpeed
	float ___fadeOutSpeed_36;
	// System.Boolean UltimateJoystick::useAnimation
	bool ___useAnimation_37;
	// UnityEngine.Animator UltimateJoystick::joystickAnimator
	Animator_t69676727 * ___joystickAnimator_38;
	// System.Int32 UltimateJoystick::animationID
	int32_t ___animationID_39;
	// System.Boolean UltimateJoystick::showHighlight
	bool ___showHighlight_40;
	// UnityEngine.Color UltimateJoystick::highlightColor
	Color_t2020392075  ___highlightColor_41;
	// System.Boolean UltimateJoystick::showTension
	bool ___showTension_42;
	// UnityEngine.Color UltimateJoystick::tensionColorNone
	Color_t2020392075  ___tensionColorNone_43;
	// UnityEngine.Color UltimateJoystick::tensionColorFull
	Color_t2020392075  ___tensionColorFull_44;
	// System.Boolean UltimateJoystick::throwable
	bool ___throwable_45;
	// System.Boolean UltimateJoystick::draggable
	bool ___draggable_46;
	// System.Single UltimateJoystick::throwDuration
	float ___throwDuration_47;
	// System.Boolean UltimateJoystick::isThrowing
	bool ___isThrowing_48;
	// UltimateJoystick/Axis UltimateJoystick::axis
	int32_t ___axis_49;
	// UltimateJoystick/Boundary UltimateJoystick::boundary
	int32_t ___boundary_50;
	// UltimateJoystick/DeadZoneOption UltimateJoystick::deadZoneOption
	int32_t ___deadZoneOption_51;
	// System.Single UltimateJoystick::xDeadZone
	float ___xDeadZone_52;
	// System.Single UltimateJoystick::yDeadZone
	float ___yDeadZone_53;
	// UltimateJoystick/TapCountOption UltimateJoystick::tapCountOption
	int32_t ___tapCountOption_54;
	// System.Single UltimateJoystick::tapCountDuration
	float ___tapCountDuration_55;
	// System.Int32 UltimateJoystick::targetTapCount
	int32_t ___targetTapCount_56;
	// System.Single UltimateJoystick::currentTapTime
	float ___currentTapTime_57;
	// System.Int32 UltimateJoystick::tapCount
	int32_t ___tapCount_58;
	// System.String UltimateJoystick::joystickName
	String_t* ___joystickName_60;
	// System.Boolean UltimateJoystick::exposeValues
	bool ___exposeValues_61;
	// System.Single UltimateJoystick::horizontalValue
	float ___horizontalValue_62;
	// System.Single UltimateJoystick::verticalValue
	float ___verticalValue_63;
	// System.Boolean UltimateJoystick::joystickState
	bool ___joystickState_64;
	// System.Boolean UltimateJoystick::tapCountAchieved
	bool ___tapCountAchieved_65;
	// System.Boolean UltimateJoystick::updateHighlightPosition
	bool ___updateHighlightPosition_66;
	// System.Int32 UltimateJoystick::_pointerId
	int32_t ____pointerId_67;

public:
	inline static int32_t get_offset_of_joystick_2() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystick_2)); }
	inline RectTransform_t3349966182 * get_joystick_2() const { return ___joystick_2; }
	inline RectTransform_t3349966182 ** get_address_of_joystick_2() { return &___joystick_2; }
	inline void set_joystick_2(RectTransform_t3349966182 * value)
	{
		___joystick_2 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_2, value);
	}

	inline static int32_t get_offset_of_joystickSizeFolder_3() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickSizeFolder_3)); }
	inline RectTransform_t3349966182 * get_joystickSizeFolder_3() const { return ___joystickSizeFolder_3; }
	inline RectTransform_t3349966182 ** get_address_of_joystickSizeFolder_3() { return &___joystickSizeFolder_3; }
	inline void set_joystickSizeFolder_3(RectTransform_t3349966182 * value)
	{
		___joystickSizeFolder_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystickSizeFolder_3, value);
	}

	inline static int32_t get_offset_of_joystickBase_4() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickBase_4)); }
	inline RectTransform_t3349966182 * get_joystickBase_4() const { return ___joystickBase_4; }
	inline RectTransform_t3349966182 ** get_address_of_joystickBase_4() { return &___joystickBase_4; }
	inline void set_joystickBase_4(RectTransform_t3349966182 * value)
	{
		___joystickBase_4 = value;
		Il2CppCodeGenWriteBarrier(&___joystickBase_4, value);
	}

	inline static int32_t get_offset_of_baseTrans_5() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___baseTrans_5)); }
	inline RectTransform_t3349966182 * get_baseTrans_5() const { return ___baseTrans_5; }
	inline RectTransform_t3349966182 ** get_address_of_baseTrans_5() { return &___baseTrans_5; }
	inline void set_baseTrans_5(RectTransform_t3349966182 * value)
	{
		___baseTrans_5 = value;
		Il2CppCodeGenWriteBarrier(&___baseTrans_5, value);
	}

	inline static int32_t get_offset_of_textureCenter_6() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___textureCenter_6)); }
	inline Vector2_t2243707579  get_textureCenter_6() const { return ___textureCenter_6; }
	inline Vector2_t2243707579 * get_address_of_textureCenter_6() { return &___textureCenter_6; }
	inline void set_textureCenter_6(Vector2_t2243707579  value)
	{
		___textureCenter_6 = value;
	}

	inline static int32_t get_offset_of_defaultPos_7() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___defaultPos_7)); }
	inline Vector2_t2243707579  get_defaultPos_7() const { return ___defaultPos_7; }
	inline Vector2_t2243707579 * get_address_of_defaultPos_7() { return &___defaultPos_7; }
	inline void set_defaultPos_7(Vector2_t2243707579  value)
	{
		___defaultPos_7 = value;
	}

	inline static int32_t get_offset_of_joystickCenter_8() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickCenter_8)); }
	inline Vector3_t2243707580  get_joystickCenter_8() const { return ___joystickCenter_8; }
	inline Vector3_t2243707580 * get_address_of_joystickCenter_8() { return &___joystickCenter_8; }
	inline void set_joystickCenter_8(Vector3_t2243707580  value)
	{
		___joystickCenter_8 = value;
	}

	inline static int32_t get_offset_of_highlightBase_9() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___highlightBase_9)); }
	inline Image_t2042527209 * get_highlightBase_9() const { return ___highlightBase_9; }
	inline Image_t2042527209 ** get_address_of_highlightBase_9() { return &___highlightBase_9; }
	inline void set_highlightBase_9(Image_t2042527209 * value)
	{
		___highlightBase_9 = value;
		Il2CppCodeGenWriteBarrier(&___highlightBase_9, value);
	}

	inline static int32_t get_offset_of_highlightJoystick_10() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___highlightJoystick_10)); }
	inline Image_t2042527209 * get_highlightJoystick_10() const { return ___highlightJoystick_10; }
	inline Image_t2042527209 ** get_address_of_highlightJoystick_10() { return &___highlightJoystick_10; }
	inline void set_highlightJoystick_10(Image_t2042527209 * value)
	{
		___highlightJoystick_10 = value;
		Il2CppCodeGenWriteBarrier(&___highlightJoystick_10, value);
	}

	inline static int32_t get_offset_of_tensionAccentUp_11() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tensionAccentUp_11)); }
	inline Image_t2042527209 * get_tensionAccentUp_11() const { return ___tensionAccentUp_11; }
	inline Image_t2042527209 ** get_address_of_tensionAccentUp_11() { return &___tensionAccentUp_11; }
	inline void set_tensionAccentUp_11(Image_t2042527209 * value)
	{
		___tensionAccentUp_11 = value;
		Il2CppCodeGenWriteBarrier(&___tensionAccentUp_11, value);
	}

	inline static int32_t get_offset_of_tensionAccentDown_12() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tensionAccentDown_12)); }
	inline Image_t2042527209 * get_tensionAccentDown_12() const { return ___tensionAccentDown_12; }
	inline Image_t2042527209 ** get_address_of_tensionAccentDown_12() { return &___tensionAccentDown_12; }
	inline void set_tensionAccentDown_12(Image_t2042527209 * value)
	{
		___tensionAccentDown_12 = value;
		Il2CppCodeGenWriteBarrier(&___tensionAccentDown_12, value);
	}

	inline static int32_t get_offset_of_tensionAccentLeft_13() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tensionAccentLeft_13)); }
	inline Image_t2042527209 * get_tensionAccentLeft_13() const { return ___tensionAccentLeft_13; }
	inline Image_t2042527209 ** get_address_of_tensionAccentLeft_13() { return &___tensionAccentLeft_13; }
	inline void set_tensionAccentLeft_13(Image_t2042527209 * value)
	{
		___tensionAccentLeft_13 = value;
		Il2CppCodeGenWriteBarrier(&___tensionAccentLeft_13, value);
	}

	inline static int32_t get_offset_of_tensionAccentRight_14() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tensionAccentRight_14)); }
	inline Image_t2042527209 * get_tensionAccentRight_14() const { return ___tensionAccentRight_14; }
	inline Image_t2042527209 ** get_address_of_tensionAccentRight_14() { return &___tensionAccentRight_14; }
	inline void set_tensionAccentRight_14(Image_t2042527209 * value)
	{
		___tensionAccentRight_14 = value;
		Il2CppCodeGenWriteBarrier(&___tensionAccentRight_14, value);
	}

	inline static int32_t get_offset_of_scalingAxis_15() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___scalingAxis_15)); }
	inline int32_t get_scalingAxis_15() const { return ___scalingAxis_15; }
	inline int32_t* get_address_of_scalingAxis_15() { return &___scalingAxis_15; }
	inline void set_scalingAxis_15(int32_t value)
	{
		___scalingAxis_15 = value;
	}

	inline static int32_t get_offset_of_anchor_16() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___anchor_16)); }
	inline int32_t get_anchor_16() const { return ___anchor_16; }
	inline int32_t* get_address_of_anchor_16() { return &___anchor_16; }
	inline void set_anchor_16(int32_t value)
	{
		___anchor_16 = value;
	}

	inline static int32_t get_offset_of_joystickTouchSize_17() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickTouchSize_17)); }
	inline int32_t get_joystickTouchSize_17() const { return ___joystickTouchSize_17; }
	inline int32_t* get_address_of_joystickTouchSize_17() { return &___joystickTouchSize_17; }
	inline void set_joystickTouchSize_17(int32_t value)
	{
		___joystickTouchSize_17 = value;
	}

	inline static int32_t get_offset_of_joystickSize_18() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickSize_18)); }
	inline float get_joystickSize_18() const { return ___joystickSize_18; }
	inline float* get_address_of_joystickSize_18() { return &___joystickSize_18; }
	inline void set_joystickSize_18(float value)
	{
		___joystickSize_18 = value;
	}

	inline static int32_t get_offset_of_radiusModifier_19() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___radiusModifier_19)); }
	inline float get_radiusModifier_19() const { return ___radiusModifier_19; }
	inline float* get_address_of_radiusModifier_19() { return &___radiusModifier_19; }
	inline void set_radiusModifier_19(float value)
	{
		___radiusModifier_19 = value;
	}

	inline static int32_t get_offset_of_radius_20() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___radius_20)); }
	inline float get_radius_20() const { return ___radius_20; }
	inline float* get_address_of_radius_20() { return &___radius_20; }
	inline void set_radius_20(float value)
	{
		___radius_20 = value;
	}

	inline static int32_t get_offset_of_dynamicPositioning_21() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___dynamicPositioning_21)); }
	inline bool get_dynamicPositioning_21() const { return ___dynamicPositioning_21; }
	inline bool* get_address_of_dynamicPositioning_21() { return &___dynamicPositioning_21; }
	inline void set_dynamicPositioning_21(bool value)
	{
		___dynamicPositioning_21 = value;
	}

	inline static int32_t get_offset_of_customTouchSize_X_22() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___customTouchSize_X_22)); }
	inline float get_customTouchSize_X_22() const { return ___customTouchSize_X_22; }
	inline float* get_address_of_customTouchSize_X_22() { return &___customTouchSize_X_22; }
	inline void set_customTouchSize_X_22(float value)
	{
		___customTouchSize_X_22 = value;
	}

	inline static int32_t get_offset_of_customTouchSize_Y_23() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___customTouchSize_Y_23)); }
	inline float get_customTouchSize_Y_23() const { return ___customTouchSize_Y_23; }
	inline float* get_address_of_customTouchSize_Y_23() { return &___customTouchSize_Y_23; }
	inline void set_customTouchSize_Y_23(float value)
	{
		___customTouchSize_Y_23 = value;
	}

	inline static int32_t get_offset_of_customTouchSizePos_X_24() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___customTouchSizePos_X_24)); }
	inline float get_customTouchSizePos_X_24() const { return ___customTouchSizePos_X_24; }
	inline float* get_address_of_customTouchSizePos_X_24() { return &___customTouchSizePos_X_24; }
	inline void set_customTouchSizePos_X_24(float value)
	{
		___customTouchSizePos_X_24 = value;
	}

	inline static int32_t get_offset_of_customTouchSizePos_Y_25() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___customTouchSizePos_Y_25)); }
	inline float get_customTouchSizePos_Y_25() const { return ___customTouchSizePos_Y_25; }
	inline float* get_address_of_customTouchSizePos_Y_25() { return &___customTouchSizePos_Y_25; }
	inline void set_customTouchSizePos_Y_25(float value)
	{
		___customTouchSizePos_Y_25 = value;
	}

	inline static int32_t get_offset_of_customSpacing_X_26() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___customSpacing_X_26)); }
	inline float get_customSpacing_X_26() const { return ___customSpacing_X_26; }
	inline float* get_address_of_customSpacing_X_26() { return &___customSpacing_X_26; }
	inline void set_customSpacing_X_26(float value)
	{
		___customSpacing_X_26 = value;
	}

	inline static int32_t get_offset_of_customSpacing_Y_27() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___customSpacing_Y_27)); }
	inline float get_customSpacing_Y_27() const { return ___customSpacing_Y_27; }
	inline float* get_address_of_customSpacing_Y_27() { return &___customSpacing_Y_27; }
	inline void set_customSpacing_Y_27(float value)
	{
		___customSpacing_Y_27 = value;
	}

	inline static int32_t get_offset_of_disableVisuals_28() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___disableVisuals_28)); }
	inline bool get_disableVisuals_28() const { return ___disableVisuals_28; }
	inline bool* get_address_of_disableVisuals_28() { return &___disableVisuals_28; }
	inline void set_disableVisuals_28(bool value)
	{
		___disableVisuals_28 = value;
	}

	inline static int32_t get_offset_of_useFade_29() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___useFade_29)); }
	inline bool get_useFade_29() const { return ___useFade_29; }
	inline bool* get_address_of_useFade_29() { return &___useFade_29; }
	inline void set_useFade_29(bool value)
	{
		___useFade_29 = value;
	}

	inline static int32_t get_offset_of_joystickGroup_30() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickGroup_30)); }
	inline CanvasGroup_t3296560743 * get_joystickGroup_30() const { return ___joystickGroup_30; }
	inline CanvasGroup_t3296560743 ** get_address_of_joystickGroup_30() { return &___joystickGroup_30; }
	inline void set_joystickGroup_30(CanvasGroup_t3296560743 * value)
	{
		___joystickGroup_30 = value;
		Il2CppCodeGenWriteBarrier(&___joystickGroup_30, value);
	}

	inline static int32_t get_offset_of_fadeUntouched_31() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___fadeUntouched_31)); }
	inline float get_fadeUntouched_31() const { return ___fadeUntouched_31; }
	inline float* get_address_of_fadeUntouched_31() { return &___fadeUntouched_31; }
	inline void set_fadeUntouched_31(float value)
	{
		___fadeUntouched_31 = value;
	}

	inline static int32_t get_offset_of_fadeTouched_32() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___fadeTouched_32)); }
	inline float get_fadeTouched_32() const { return ___fadeTouched_32; }
	inline float* get_address_of_fadeTouched_32() { return &___fadeTouched_32; }
	inline void set_fadeTouched_32(float value)
	{
		___fadeTouched_32 = value;
	}

	inline static int32_t get_offset_of_fadeInDuration_33() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___fadeInDuration_33)); }
	inline float get_fadeInDuration_33() const { return ___fadeInDuration_33; }
	inline float* get_address_of_fadeInDuration_33() { return &___fadeInDuration_33; }
	inline void set_fadeInDuration_33(float value)
	{
		___fadeInDuration_33 = value;
	}

	inline static int32_t get_offset_of_fadeOutDuration_34() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___fadeOutDuration_34)); }
	inline float get_fadeOutDuration_34() const { return ___fadeOutDuration_34; }
	inline float* get_address_of_fadeOutDuration_34() { return &___fadeOutDuration_34; }
	inline void set_fadeOutDuration_34(float value)
	{
		___fadeOutDuration_34 = value;
	}

	inline static int32_t get_offset_of_fadeInSpeed_35() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___fadeInSpeed_35)); }
	inline float get_fadeInSpeed_35() const { return ___fadeInSpeed_35; }
	inline float* get_address_of_fadeInSpeed_35() { return &___fadeInSpeed_35; }
	inline void set_fadeInSpeed_35(float value)
	{
		___fadeInSpeed_35 = value;
	}

	inline static int32_t get_offset_of_fadeOutSpeed_36() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___fadeOutSpeed_36)); }
	inline float get_fadeOutSpeed_36() const { return ___fadeOutSpeed_36; }
	inline float* get_address_of_fadeOutSpeed_36() { return &___fadeOutSpeed_36; }
	inline void set_fadeOutSpeed_36(float value)
	{
		___fadeOutSpeed_36 = value;
	}

	inline static int32_t get_offset_of_useAnimation_37() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___useAnimation_37)); }
	inline bool get_useAnimation_37() const { return ___useAnimation_37; }
	inline bool* get_address_of_useAnimation_37() { return &___useAnimation_37; }
	inline void set_useAnimation_37(bool value)
	{
		___useAnimation_37 = value;
	}

	inline static int32_t get_offset_of_joystickAnimator_38() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickAnimator_38)); }
	inline Animator_t69676727 * get_joystickAnimator_38() const { return ___joystickAnimator_38; }
	inline Animator_t69676727 ** get_address_of_joystickAnimator_38() { return &___joystickAnimator_38; }
	inline void set_joystickAnimator_38(Animator_t69676727 * value)
	{
		___joystickAnimator_38 = value;
		Il2CppCodeGenWriteBarrier(&___joystickAnimator_38, value);
	}

	inline static int32_t get_offset_of_animationID_39() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___animationID_39)); }
	inline int32_t get_animationID_39() const { return ___animationID_39; }
	inline int32_t* get_address_of_animationID_39() { return &___animationID_39; }
	inline void set_animationID_39(int32_t value)
	{
		___animationID_39 = value;
	}

	inline static int32_t get_offset_of_showHighlight_40() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___showHighlight_40)); }
	inline bool get_showHighlight_40() const { return ___showHighlight_40; }
	inline bool* get_address_of_showHighlight_40() { return &___showHighlight_40; }
	inline void set_showHighlight_40(bool value)
	{
		___showHighlight_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___highlightColor_41)); }
	inline Color_t2020392075  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color_t2020392075 * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color_t2020392075  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_showTension_42() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___showTension_42)); }
	inline bool get_showTension_42() const { return ___showTension_42; }
	inline bool* get_address_of_showTension_42() { return &___showTension_42; }
	inline void set_showTension_42(bool value)
	{
		___showTension_42 = value;
	}

	inline static int32_t get_offset_of_tensionColorNone_43() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tensionColorNone_43)); }
	inline Color_t2020392075  get_tensionColorNone_43() const { return ___tensionColorNone_43; }
	inline Color_t2020392075 * get_address_of_tensionColorNone_43() { return &___tensionColorNone_43; }
	inline void set_tensionColorNone_43(Color_t2020392075  value)
	{
		___tensionColorNone_43 = value;
	}

	inline static int32_t get_offset_of_tensionColorFull_44() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tensionColorFull_44)); }
	inline Color_t2020392075  get_tensionColorFull_44() const { return ___tensionColorFull_44; }
	inline Color_t2020392075 * get_address_of_tensionColorFull_44() { return &___tensionColorFull_44; }
	inline void set_tensionColorFull_44(Color_t2020392075  value)
	{
		___tensionColorFull_44 = value;
	}

	inline static int32_t get_offset_of_throwable_45() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___throwable_45)); }
	inline bool get_throwable_45() const { return ___throwable_45; }
	inline bool* get_address_of_throwable_45() { return &___throwable_45; }
	inline void set_throwable_45(bool value)
	{
		___throwable_45 = value;
	}

	inline static int32_t get_offset_of_draggable_46() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___draggable_46)); }
	inline bool get_draggable_46() const { return ___draggable_46; }
	inline bool* get_address_of_draggable_46() { return &___draggable_46; }
	inline void set_draggable_46(bool value)
	{
		___draggable_46 = value;
	}

	inline static int32_t get_offset_of_throwDuration_47() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___throwDuration_47)); }
	inline float get_throwDuration_47() const { return ___throwDuration_47; }
	inline float* get_address_of_throwDuration_47() { return &___throwDuration_47; }
	inline void set_throwDuration_47(float value)
	{
		___throwDuration_47 = value;
	}

	inline static int32_t get_offset_of_isThrowing_48() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___isThrowing_48)); }
	inline bool get_isThrowing_48() const { return ___isThrowing_48; }
	inline bool* get_address_of_isThrowing_48() { return &___isThrowing_48; }
	inline void set_isThrowing_48(bool value)
	{
		___isThrowing_48 = value;
	}

	inline static int32_t get_offset_of_axis_49() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___axis_49)); }
	inline int32_t get_axis_49() const { return ___axis_49; }
	inline int32_t* get_address_of_axis_49() { return &___axis_49; }
	inline void set_axis_49(int32_t value)
	{
		___axis_49 = value;
	}

	inline static int32_t get_offset_of_boundary_50() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___boundary_50)); }
	inline int32_t get_boundary_50() const { return ___boundary_50; }
	inline int32_t* get_address_of_boundary_50() { return &___boundary_50; }
	inline void set_boundary_50(int32_t value)
	{
		___boundary_50 = value;
	}

	inline static int32_t get_offset_of_deadZoneOption_51() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___deadZoneOption_51)); }
	inline int32_t get_deadZoneOption_51() const { return ___deadZoneOption_51; }
	inline int32_t* get_address_of_deadZoneOption_51() { return &___deadZoneOption_51; }
	inline void set_deadZoneOption_51(int32_t value)
	{
		___deadZoneOption_51 = value;
	}

	inline static int32_t get_offset_of_xDeadZone_52() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___xDeadZone_52)); }
	inline float get_xDeadZone_52() const { return ___xDeadZone_52; }
	inline float* get_address_of_xDeadZone_52() { return &___xDeadZone_52; }
	inline void set_xDeadZone_52(float value)
	{
		___xDeadZone_52 = value;
	}

	inline static int32_t get_offset_of_yDeadZone_53() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___yDeadZone_53)); }
	inline float get_yDeadZone_53() const { return ___yDeadZone_53; }
	inline float* get_address_of_yDeadZone_53() { return &___yDeadZone_53; }
	inline void set_yDeadZone_53(float value)
	{
		___yDeadZone_53 = value;
	}

	inline static int32_t get_offset_of_tapCountOption_54() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tapCountOption_54)); }
	inline int32_t get_tapCountOption_54() const { return ___tapCountOption_54; }
	inline int32_t* get_address_of_tapCountOption_54() { return &___tapCountOption_54; }
	inline void set_tapCountOption_54(int32_t value)
	{
		___tapCountOption_54 = value;
	}

	inline static int32_t get_offset_of_tapCountDuration_55() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tapCountDuration_55)); }
	inline float get_tapCountDuration_55() const { return ___tapCountDuration_55; }
	inline float* get_address_of_tapCountDuration_55() { return &___tapCountDuration_55; }
	inline void set_tapCountDuration_55(float value)
	{
		___tapCountDuration_55 = value;
	}

	inline static int32_t get_offset_of_targetTapCount_56() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___targetTapCount_56)); }
	inline int32_t get_targetTapCount_56() const { return ___targetTapCount_56; }
	inline int32_t* get_address_of_targetTapCount_56() { return &___targetTapCount_56; }
	inline void set_targetTapCount_56(int32_t value)
	{
		___targetTapCount_56 = value;
	}

	inline static int32_t get_offset_of_currentTapTime_57() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___currentTapTime_57)); }
	inline float get_currentTapTime_57() const { return ___currentTapTime_57; }
	inline float* get_address_of_currentTapTime_57() { return &___currentTapTime_57; }
	inline void set_currentTapTime_57(float value)
	{
		___currentTapTime_57 = value;
	}

	inline static int32_t get_offset_of_tapCount_58() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tapCount_58)); }
	inline int32_t get_tapCount_58() const { return ___tapCount_58; }
	inline int32_t* get_address_of_tapCount_58() { return &___tapCount_58; }
	inline void set_tapCount_58(int32_t value)
	{
		___tapCount_58 = value;
	}

	inline static int32_t get_offset_of_joystickName_60() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickName_60)); }
	inline String_t* get_joystickName_60() const { return ___joystickName_60; }
	inline String_t** get_address_of_joystickName_60() { return &___joystickName_60; }
	inline void set_joystickName_60(String_t* value)
	{
		___joystickName_60 = value;
		Il2CppCodeGenWriteBarrier(&___joystickName_60, value);
	}

	inline static int32_t get_offset_of_exposeValues_61() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___exposeValues_61)); }
	inline bool get_exposeValues_61() const { return ___exposeValues_61; }
	inline bool* get_address_of_exposeValues_61() { return &___exposeValues_61; }
	inline void set_exposeValues_61(bool value)
	{
		___exposeValues_61 = value;
	}

	inline static int32_t get_offset_of_horizontalValue_62() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___horizontalValue_62)); }
	inline float get_horizontalValue_62() const { return ___horizontalValue_62; }
	inline float* get_address_of_horizontalValue_62() { return &___horizontalValue_62; }
	inline void set_horizontalValue_62(float value)
	{
		___horizontalValue_62 = value;
	}

	inline static int32_t get_offset_of_verticalValue_63() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___verticalValue_63)); }
	inline float get_verticalValue_63() const { return ___verticalValue_63; }
	inline float* get_address_of_verticalValue_63() { return &___verticalValue_63; }
	inline void set_verticalValue_63(float value)
	{
		___verticalValue_63 = value;
	}

	inline static int32_t get_offset_of_joystickState_64() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___joystickState_64)); }
	inline bool get_joystickState_64() const { return ___joystickState_64; }
	inline bool* get_address_of_joystickState_64() { return &___joystickState_64; }
	inline void set_joystickState_64(bool value)
	{
		___joystickState_64 = value;
	}

	inline static int32_t get_offset_of_tapCountAchieved_65() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___tapCountAchieved_65)); }
	inline bool get_tapCountAchieved_65() const { return ___tapCountAchieved_65; }
	inline bool* get_address_of_tapCountAchieved_65() { return &___tapCountAchieved_65; }
	inline void set_tapCountAchieved_65(bool value)
	{
		___tapCountAchieved_65 = value;
	}

	inline static int32_t get_offset_of_updateHighlightPosition_66() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ___updateHighlightPosition_66)); }
	inline bool get_updateHighlightPosition_66() const { return ___updateHighlightPosition_66; }
	inline bool* get_address_of_updateHighlightPosition_66() { return &___updateHighlightPosition_66; }
	inline void set_updateHighlightPosition_66(bool value)
	{
		___updateHighlightPosition_66 = value;
	}

	inline static int32_t get_offset_of__pointerId_67() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117, ____pointerId_67)); }
	inline int32_t get__pointerId_67() const { return ____pointerId_67; }
	inline int32_t* get_address_of__pointerId_67() { return &____pointerId_67; }
	inline void set__pointerId_67(int32_t value)
	{
		____pointerId_67 = value;
	}
};

struct UltimateJoystick_t3188338117_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UltimateJoystick> UltimateJoystick::UltimateJoysticks
	Dictionary_2_t808150083 * ___UltimateJoysticks_59;

public:
	inline static int32_t get_offset_of_UltimateJoysticks_59() { return static_cast<int32_t>(offsetof(UltimateJoystick_t3188338117_StaticFields, ___UltimateJoysticks_59)); }
	inline Dictionary_2_t808150083 * get_UltimateJoysticks_59() const { return ___UltimateJoysticks_59; }
	inline Dictionary_2_t808150083 ** get_address_of_UltimateJoysticks_59() { return &___UltimateJoysticks_59; }
	inline void set_UltimateJoysticks_59(Dictionary_2_t808150083 * value)
	{
		___UltimateJoysticks_59 = value;
		Il2CppCodeGenWriteBarrier(&___UltimateJoysticks_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
