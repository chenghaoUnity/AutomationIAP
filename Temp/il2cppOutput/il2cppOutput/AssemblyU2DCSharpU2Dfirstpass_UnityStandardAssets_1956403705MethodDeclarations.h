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

// UnityStandardAssets.Cameras.TargetFieldOfView
struct TargetFieldOfView_t1956403705;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::.ctor()
extern "C"  void TargetFieldOfView__ctor_m3645342179 (TargetFieldOfView_t1956403705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::Start()
extern "C"  void TargetFieldOfView_Start_m2041012399 (TargetFieldOfView_t1956403705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::FollowTarget(System.Single)
extern "C"  void TargetFieldOfView_FollowTarget_m1362802020 (TargetFieldOfView_t1956403705 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Cameras.TargetFieldOfView::SetTarget(UnityEngine.Transform)
extern "C"  void TargetFieldOfView_SetTarget_m297334803 (TargetFieldOfView_t1956403705 * __this, Transform_t3275118058 * ___newTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Cameras.TargetFieldOfView::MaxBoundsExtent(UnityEngine.Transform,System.Boolean)
extern "C"  float TargetFieldOfView_MaxBoundsExtent_m85794194 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___obj0, bool ___includeEffects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
