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

// UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t1656680080;
struct EmitParams_t1656680080_marshaled_pinvoke;
struct EmitParams_t1656680080_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_EmitParams1656680080.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color32874517518.h"

// System.Void UnityEngine.ParticleSystem/EmitParams::set_position(UnityEngine.Vector3)
extern "C"  void EmitParams_set_position_m3176407555 (EmitParams_t1656680080 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_velocity(UnityEngine.Vector3)
extern "C"  void EmitParams_set_velocity_m4292402493 (EmitParams_t1656680080 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startLifetime(System.Single)
extern "C"  void EmitParams_set_startLifetime_m2511499801 (EmitParams_t1656680080 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startSize(System.Single)
extern "C"  void EmitParams_set_startSize_m1215938651 (EmitParams_t1656680080 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/EmitParams::set_startColor(UnityEngine.Color32)
extern "C"  void EmitParams_set_startColor_m4117011553 (EmitParams_t1656680080 * __this, Color32_t874517518  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmitParams_t1656680080;
struct EmitParams_t1656680080_marshaled_pinvoke;

extern "C" void EmitParams_t1656680080_marshal_pinvoke(const EmitParams_t1656680080& unmarshaled, EmitParams_t1656680080_marshaled_pinvoke& marshaled);
extern "C" void EmitParams_t1656680080_marshal_pinvoke_back(const EmitParams_t1656680080_marshaled_pinvoke& marshaled, EmitParams_t1656680080& unmarshaled);
extern "C" void EmitParams_t1656680080_marshal_pinvoke_cleanup(EmitParams_t1656680080_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmitParams_t1656680080;
struct EmitParams_t1656680080_marshaled_com;

extern "C" void EmitParams_t1656680080_marshal_com(const EmitParams_t1656680080& unmarshaled, EmitParams_t1656680080_marshaled_com& marshaled);
extern "C" void EmitParams_t1656680080_marshal_com_back(const EmitParams_t1656680080_marshaled_com& marshaled, EmitParams_t1656680080& unmarshaled);
extern "C" void EmitParams_t1656680080_marshal_com_cleanup(EmitParams_t1656680080_marshaled_com& marshaled);
