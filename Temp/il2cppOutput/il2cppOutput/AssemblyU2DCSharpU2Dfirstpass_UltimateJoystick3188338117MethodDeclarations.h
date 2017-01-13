#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UltimateJoystick
struct UltimateJoystick_t3188338117;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3296560743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void UltimateJoystick::.ctor()
extern "C"  void UltimateJoystick__ctor_m650620450 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::Awake()
extern "C"  void UltimateJoystick_Awake_m3055325463 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::Start()
extern "C"  void UltimateJoystick_Start_m1300756902 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void UltimateJoystick_OnPointerDown_m913890848 (UltimateJoystick_t3188338117 * __this, PointerEventData_t1599784723 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void UltimateJoystick_OnDrag_m2781850259 (UltimateJoystick_t3188338117 * __this, PointerEventData_t1599784723 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void UltimateJoystick_OnPointerUp_m1272055737 (UltimateJoystick_t3188338117 * __this, PointerEventData_t1599784723 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdateJoystick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void UltimateJoystick_UpdateJoystick_m1438430365 (UltimateJoystick_t3188338117 * __this, PointerEventData_t1599784723 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::ConfigureImagePosition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  UltimateJoystick_ConfigureImagePosition_m2378654799 (UltimateJoystick_t3188338117 * __this, Vector2_t2243707579  ___textureSize0, Vector2_t2243707579  ___customSpacing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::TensionAccentDisplay()
extern "C"  void UltimateJoystick_TensionAccentDisplay_m560174534 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::TensionAccentReset()
extern "C"  void UltimateJoystick_TensionAccentReset_m2551419129 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::ThrowableMovement()
extern "C"  Il2CppObject * UltimateJoystick_ThrowableMovement_m3706813827 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UltimateJoystick::GetParentCanvas()
extern "C"  Canvas_t209405766 * UltimateJoystick_GetParentCanvas_m2768525052 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasGroup UltimateJoystick::GetCanvasGroup()
extern "C"  CanvasGroup_t3296560743 * UltimateJoystick_GetCanvasGroup_m1115924324 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::JoystickPositionDeadZone()
extern "C"  Vector2_t2243707579  UltimateJoystick_JoystickPositionDeadZone_m1321914134 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::RegisterJoystick(System.String)
extern "C"  void UltimateJoystick_RegisterJoystick_m4143750671 (UltimateJoystick_t3188338117 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::FadeLogic()
extern "C"  Il2CppObject * UltimateJoystick_FadeLogic_m2251939450 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::TapCountdown()
extern "C"  Il2CppObject * UltimateJoystick_TapCountdown_m2298353824 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystick::TapCountDelay()
extern "C"  Il2CppObject * UltimateJoystick_TapCountDelay_m225162443 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::CheckJoystickHighlightForUse()
extern "C"  void UltimateJoystick_CheckJoystickHighlightForUse_m2758519568 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdatePositioning()
extern "C"  void UltimateJoystick_UpdatePositioning_m1254945556 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::GetPosition()
extern "C"  Vector2_t2243707579  UltimateJoystick_GetPosition_m3880190512 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::GetDistance()
extern "C"  float UltimateJoystick_GetDistance_m535628333 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::ResetJoystick()
extern "C"  void UltimateJoystick_ResetJoystick_m1715788301 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdateHighlightColor(UnityEngine.Color)
extern "C"  void UltimateJoystick_UpdateHighlightColor_m2181271710 (UltimateJoystick_t3188338117 * __this, Color_t2020392075  ___targetColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::UpdateTensionColors(UnityEngine.Color,UnityEngine.Color)
extern "C"  void UltimateJoystick_UpdateTensionColors_m4110178313 (UltimateJoystick_t3188338117 * __this, Color_t2020392075  ___targetTensionNone0, Color_t2020392075  ___targetTensionFull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UltimateJoystick::GetTapCount()
extern "C"  bool UltimateJoystick_GetTapCount_m3464899756 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::GetHorizontalAxis()
extern "C"  float UltimateJoystick_GetHorizontalAxis_m3016708323 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::GetVerticalAxis()
extern "C"  float UltimateJoystick_GetVerticalAxis_m2196809187 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UltimateJoystick::GetJoystickState()
extern "C"  bool UltimateJoystick_GetJoystickState_m621631361 (UltimateJoystick_t3188338117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UltimateJoystick UltimateJoystick::GetJoystick(System.String)
extern "C"  UltimateJoystick_t3188338117 * UltimateJoystick_GetJoystick_m2893316646 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UltimateJoystick::GetPosition(System.String)
extern "C"  Vector2_t2243707579  UltimateJoystick_GetPosition_m516841554 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::GetDistance(System.String)
extern "C"  float UltimateJoystick_GetDistance_m3991809323 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UltimateJoystick::GetJoystickState(System.String)
extern "C"  bool UltimateJoystick_GetJoystickState_m2194971855 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::GetHorizontalAxis(System.String)
extern "C"  float UltimateJoystick_GetHorizontalAxis_m1307580893 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UltimateJoystick::GetVerticalAxis(System.String)
extern "C"  float UltimateJoystick_GetVerticalAxis_m2267684737 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UltimateJoystick::GetTapCount(System.String)
extern "C"  bool UltimateJoystick_GetTapCount_m918008702 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UltimateJoystick::JoystickConfirmed(System.String)
extern "C"  bool UltimateJoystick_JoystickConfirmed_m3752136705 (Il2CppObject * __this /* static, unused */, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystick::.cctor()
extern "C"  void UltimateJoystick__cctor_m2295583445 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
