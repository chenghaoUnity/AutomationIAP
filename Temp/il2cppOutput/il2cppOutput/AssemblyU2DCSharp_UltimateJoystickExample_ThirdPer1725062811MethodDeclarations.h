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

// UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t1725062811;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::.ctor()
extern "C"  void ThirdPersonCharacter__ctor_m2915345889 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::Start()
extern "C"  void ThirdPersonCharacter_Start_m1553033673 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_Move_m2668494105 (ThirdPersonCharacter_t1725062811 * __this, Vector3_t2243707580  ___move0, bool ___crouch1, bool ___jump2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C"  void ThirdPersonCharacter_ScaleCapsuleForCrouching_m535543984 (ThirdPersonCharacter_t1725062811 * __this, bool ___crouch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C"  void ThirdPersonCharacter_PreventStandingInLowHeadroom_m961208471 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C"  void ThirdPersonCharacter_UpdateAnimator_m4162360204 (ThirdPersonCharacter_t1725062811 * __this, Vector3_t2243707580  ___move0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C"  void ThirdPersonCharacter_HandleAirborneMovement_m3971279558 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_HandleGroundedMovement_m4009031630 (ThirdPersonCharacter_t1725062811 * __this, bool ___crouch0, bool ___jump1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C"  void ThirdPersonCharacter_ApplyExtraTurnRotation_m2174322620 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern "C"  void ThirdPersonCharacter_OnAnimatorMove_m3209883018 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UltimateJoystickExample.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C"  void ThirdPersonCharacter_CheckGroundStatus_m3794235446 (ThirdPersonCharacter_t1725062811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
