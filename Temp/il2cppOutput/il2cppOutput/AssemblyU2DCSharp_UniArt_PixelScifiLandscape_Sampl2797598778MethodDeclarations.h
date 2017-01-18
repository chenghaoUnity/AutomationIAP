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

// UniArt.PixelScifiLandscape.Sample.Object_Ladder
struct Object_Ladder_t2797598778;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UniArt.PixelScifiLandscape.Sample.Object_Ladder::.ctor()
extern "C"  void Object_Ladder__ctor_m3222156779 (Object_Ladder_t2797598778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UniArt.PixelScifiLandscape.Sample.Object_Ladder::get_LadderUpDirection()
extern "C"  Vector2_t2243707579  Object_Ladder_get_LadderUpDirection_m1852159371 (Object_Ladder_t2797598778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UniArt.PixelScifiLandscape.Sample.Object_Ladder::DistanceToLadder(UnityEngine.Vector2)
extern "C"  float Object_Ladder_DistanceToLadder_m3142284483 (Object_Ladder_t2797598778 * __this, Vector2_t2243707579  ___a_f2Position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UniArt.PixelScifiLandscape.Sample.Object_Ladder::SnapOnLadder(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Object_Ladder_SnapOnLadder_m4207231875 (Object_Ladder_t2797598778 * __this, Vector2_t2243707579  ___a_f2Position0, Vector2_t2243707579  ___a_f2SnapTop1, Vector2_t2243707579  ___a_f2SnapBottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UniArt.PixelScifiLandscape.Sample.Object_Ladder::SnapOnLadder(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean&,System.Boolean&)
extern "C"  Vector2_t2243707579  Object_Ladder_SnapOnLadder_m3417031363 (Object_Ladder_t2797598778 * __this, Vector2_t2243707579  ___a_f2Position0, Vector2_t2243707579  ___a_f2SnapTop1, Vector2_t2243707579  ___a_f2SnapBottom2, bool* ___a_bReachTheTop3, bool* ___a_bReachTheBottom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UniArt.PixelScifiLandscape.Sample.Object_Ladder::ProjectOnLadder(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Object_Ladder_ProjectOnLadder_m3047806546 (Object_Ladder_t2797598778 * __this, Vector2_t2243707579  ___a_f2Position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
