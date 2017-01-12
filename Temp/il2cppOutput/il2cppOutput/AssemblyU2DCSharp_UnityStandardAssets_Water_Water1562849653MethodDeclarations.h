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

// UnityStandardAssets.Water.Water
struct Water_t1562849653;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_Water_Water_2303503718.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void UnityStandardAssets.Water.Water::.ctor()
extern "C"  void Water__ctor_m2763157792 (Water_t1562849653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnWillRenderObject()
extern "C"  void Water_OnWillRenderObject_m3572130960 (Water_t1562849653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnDisable()
extern "C"  void Water_OnDisable_m3652516089 (Water_t1562849653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::Update()
extern "C"  void Water_Update_m2805259381 (Water_t1562849653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void Water_UpdateCameraModes_m1766900192 (Water_t1562849653 * __this, Camera_t189460977 * ___src0, Camera_t189460977 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C"  void Water_CreateWaterObjects_m2800289701 (Water_t1562849653 * __this, Camera_t189460977 * ___currentCamera0, Camera_t189460977 ** ___reflectionCamera1, Camera_t189460977 ** ___refractionCamera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::GetWaterMode()
extern "C"  int32_t Water_GetWaterMode_m3447299601 (Water_t1562849653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::FindHardwareWaterSupport()
extern "C"  int32_t Water_FindHardwareWaterSupport_m2596769226 (Water_t1562849653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t2243707581  Water_CameraSpacePlane_m2533214493 (Water_t1562849653 * __this, Camera_t189460977 * ___cam0, Vector3_t2243707580  ___pos1, Vector3_t2243707580  ___normal2, float ___sideSign3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C"  void Water_CalculateReflectionMatrix_m3264547000 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003 * ___reflectionMat0, Vector4_t2243707581  ___plane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
