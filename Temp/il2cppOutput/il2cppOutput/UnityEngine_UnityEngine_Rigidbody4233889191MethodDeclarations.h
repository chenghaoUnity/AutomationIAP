﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints251614631.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_ForceMode1856518252.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t2243707580  Rigidbody_get_velocity_m2022666970 (Rigidbody_t4233889191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m2514070071 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m1938461825 (Rigidbody_t4233889191 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m3384354677 (Rigidbody_t4233889191 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_angularVelocity_m824394045 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m3276405927 (Rigidbody_t4233889191 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C"  float Rigidbody_get_drag_m1954609103 (Rigidbody_t4233889191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C"  void Rigidbody_set_drag_m431766562 (Rigidbody_t4233889191 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C"  float Rigidbody_get_angularDrag_m1478412889 (Rigidbody_t4233889191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C"  void Rigidbody_set_angularDrag_m1042416512 (Rigidbody_t4233889191 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C"  bool Rigidbody_get_isKinematic_m2907467582 (Rigidbody_t4233889191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m738793415 (Rigidbody_t4233889191 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern "C"  void Rigidbody_set_freezeRotation_m2131864169 (Rigidbody_t4233889191 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C"  void Rigidbody_set_constraints_m3474016139 (Rigidbody_t4233889191 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m2836187433 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3164777073 (Il2CppObject * __this /* static, unused */, Rigidbody_t4233889191 * ___self0, Vector3_t2243707580 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m2680584150 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  ___torque0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddTorque_m929838442 (Il2CppObject * __this /* static, unused */, Rigidbody_t4233889191 * ___self0, Vector3_t2243707580 * ___torque1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t2243707580  Rigidbody_get_position_m3465583110 (Rigidbody_t4233889191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_position_m47523445 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m2227872991 (Rigidbody_t4233889191 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_position_m447802091 (Rigidbody_t4233889191 * __this, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_set_rotation_m2752020144 (Rigidbody_t4233889191 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_set_rotation_m1385731864 (Rigidbody_t4233889191 * __this, Quaternion_t4030073918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
