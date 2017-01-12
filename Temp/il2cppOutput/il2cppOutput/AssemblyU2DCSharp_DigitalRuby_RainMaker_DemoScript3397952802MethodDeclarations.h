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

// DigitalRuby.RainMaker.DemoScript
struct DemoScript_t3397952802;

#include "codegen/il2cpp-codegen.h"

// System.Void DigitalRuby.RainMaker.DemoScript::.ctor()
extern "C"  void DemoScript__ctor_m1390887929 (DemoScript_t3397952802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::UpdateRain()
extern "C"  void DemoScript_UpdateRain_m2719140262 (DemoScript_t3397952802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::UpdateMovement()
extern "C"  void DemoScript_UpdateMovement_m2168513155 (DemoScript_t3397952802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::UpdateMouseLook()
extern "C"  void DemoScript_UpdateMouseLook_m3961575922 (DemoScript_t3397952802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::RainSliderChanged(System.Single)
extern "C"  void DemoScript_RainSliderChanged_m392386195 (DemoScript_t3397952802 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::MouseLookChanged(System.Boolean)
extern "C"  void DemoScript_MouseLookChanged_m3794169372 (DemoScript_t3397952802 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::FlashlightChanged(System.Boolean)
extern "C"  void DemoScript_FlashlightChanged_m2979146166 (DemoScript_t3397952802 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::DawnDuskSliderChanged(System.Single)
extern "C"  void DemoScript_DawnDuskSliderChanged_m2608578284 (DemoScript_t3397952802 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::Start()
extern "C"  void DemoScript_Start_m198901489 (DemoScript_t3397952802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.RainMaker.DemoScript::Update()
extern "C"  void DemoScript_Update_m2688324936 (DemoScript_t3397952802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DigitalRuby.RainMaker.DemoScript::ClampAngle(System.Single,System.Single,System.Single)
extern "C"  float DemoScript_ClampAngle_m1283481954 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
