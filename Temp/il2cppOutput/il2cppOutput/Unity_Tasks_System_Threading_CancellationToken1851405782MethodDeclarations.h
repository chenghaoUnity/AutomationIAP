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

// System.Action
struct Action_t3226471752;
// System.Threading.CancellationToken
struct CancellationToken_t1851405782;
struct CancellationToken_t1851405782_marshaled_pinvoke;
struct CancellationToken_t1851405782_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Unity_Tasks_System_Threading_CancellationToken1851405782.h"
#include "Unity_Tasks_System_Threading_CancellationTokenRegi1708859357.h"
#include "System_Core_System_Action3226471752.h"

// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C"  CancellationToken_t1851405782  CancellationToken_get_None_m1455764088 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C"  CancellationTokenRegistration_t1708859357  CancellationToken_Register_m306338684 (CancellationToken_t1851405782 * __this, Action_t3226471752 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CancellationToken_t1851405782;
struct CancellationToken_t1851405782_marshaled_pinvoke;

extern "C" void CancellationToken_t1851405782_marshal_pinvoke(const CancellationToken_t1851405782& unmarshaled, CancellationToken_t1851405782_marshaled_pinvoke& marshaled);
extern "C" void CancellationToken_t1851405782_marshal_pinvoke_back(const CancellationToken_t1851405782_marshaled_pinvoke& marshaled, CancellationToken_t1851405782& unmarshaled);
extern "C" void CancellationToken_t1851405782_marshal_pinvoke_cleanup(CancellationToken_t1851405782_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CancellationToken_t1851405782;
struct CancellationToken_t1851405782_marshaled_com;

extern "C" void CancellationToken_t1851405782_marshal_com(const CancellationToken_t1851405782& unmarshaled, CancellationToken_t1851405782_marshaled_com& marshaled);
extern "C" void CancellationToken_t1851405782_marshal_com_back(const CancellationToken_t1851405782_marshaled_com& marshaled, CancellationToken_t1851405782& unmarshaled);
extern "C" void CancellationToken_t1851405782_marshal_com_cleanup(CancellationToken_t1851405782_marshaled_com& marshaled);
