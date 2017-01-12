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
// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t1708859357;
struct CancellationTokenRegistration_t1708859357_marshaled_pinvoke;
struct CancellationTokenRegistration_t1708859357_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Unity_Tasks_System_Threading_CancellationTokenRegi1708859357.h"
#include "Unity_Tasks_System_Threading_CancellationTokenSour1795361321.h"
#include "System_Core_System_Action3226471752.h"

// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C"  void CancellationTokenRegistration__ctor_m386605473 (CancellationTokenRegistration_t1708859357 * __this, CancellationTokenSource_t1795361321 * ___source0, Action_t3226471752 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C"  void CancellationTokenRegistration_Dispose_m3975652469 (CancellationTokenRegistration_t1708859357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CancellationTokenRegistration_t1708859357;
struct CancellationTokenRegistration_t1708859357_marshaled_pinvoke;

extern "C" void CancellationTokenRegistration_t1708859357_marshal_pinvoke(const CancellationTokenRegistration_t1708859357& unmarshaled, CancellationTokenRegistration_t1708859357_marshaled_pinvoke& marshaled);
extern "C" void CancellationTokenRegistration_t1708859357_marshal_pinvoke_back(const CancellationTokenRegistration_t1708859357_marshaled_pinvoke& marshaled, CancellationTokenRegistration_t1708859357& unmarshaled);
extern "C" void CancellationTokenRegistration_t1708859357_marshal_pinvoke_cleanup(CancellationTokenRegistration_t1708859357_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CancellationTokenRegistration_t1708859357;
struct CancellationTokenRegistration_t1708859357_marshaled_com;

extern "C" void CancellationTokenRegistration_t1708859357_marshal_com(const CancellationTokenRegistration_t1708859357& unmarshaled, CancellationTokenRegistration_t1708859357_marshaled_com& marshaled);
extern "C" void CancellationTokenRegistration_t1708859357_marshal_com_back(const CancellationTokenRegistration_t1708859357_marshaled_com& marshaled, CancellationTokenRegistration_t1708859357& unmarshaled);
extern "C" void CancellationTokenRegistration_t1708859357_marshal_com_cleanup(CancellationTokenRegistration_t1708859357_marshaled_com& marshaled);
