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

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1795361321;
// System.Action
struct Action_t3226471752;

#include "codegen/il2cpp-codegen.h"
#include "Unity_Tasks_System_Threading_CancellationTokenRegi1708859357.h"
#include "System_Core_System_Action3226471752.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C"  CancellationTokenRegistration_t1708859357  CancellationTokenSource_Register_m1416617611 (CancellationTokenSource_t1795361321 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C"  void CancellationTokenSource_Unregister_m3151086401 (CancellationTokenSource_t1795361321 * __this, Action_t3226471752 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
