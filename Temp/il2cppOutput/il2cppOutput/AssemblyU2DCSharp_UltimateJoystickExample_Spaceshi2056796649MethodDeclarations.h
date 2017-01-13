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

// UltimateJoystickExample.Spaceship.AsteroidController
struct AsteroidController_t2056796649;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collision
struct Collision_t2876846408;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"

// System.Void UltimateJoystickExample.Spaceship.AsteroidController::.ctor()
extern "C"  void AsteroidController__ctor_m1025488217 (AsteroidController_t2056796649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.AsteroidController::Setup(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void AsteroidController_Setup_m3253749538 (AsteroidController_t2056796649 * __this, Vector3_t2243707580  ___force0, Vector3_t2243707580  ___torque1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UltimateJoystickExample.Spaceship.AsteroidController::DelayInitialDestruction(System.Single)
extern "C"  Il2CppObject * AsteroidController_DelayInitialDestruction_m579602507 (AsteroidController_t2056796649 * __this, float ___delayTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.AsteroidController::Update()
extern "C"  void AsteroidController_Update_m1798250200 (AsteroidController_t2056796649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.AsteroidController::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void AsteroidController_OnCollisionEnter_m1893704939 (AsteroidController_t2056796649 * __this, Collision_t2876846408 * ___theCollision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.Spaceship.AsteroidController::Explode()
extern "C"  void AsteroidController_Explode_m2733281588 (AsteroidController_t2056796649 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
