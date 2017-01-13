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

// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;
// Google.Sharpen.Future`1<System.Object>
struct Future_1_t4121840302;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;

#include "codegen/il2cpp-codegen.h"
#include "Google_Sharpen_Google_Sharpen_ThreadFactory1392637388.h"
#include "Google_Sharpen_Google_Sharpen_TimeUnit4006728025.h"

// System.Void Google.Sharpen.ScheduledThreadPoolExecutor::.ctor(System.Int32,Google.Sharpen.ThreadFactory)
extern "C"  void ScheduledThreadPoolExecutor__ctor_m2386749620 (ScheduledThreadPoolExecutor_t2537379786 * __this, int32_t ___corePoolSize0, ThreadFactory_t1392637388 * ___factory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.ScheduledThreadPoolExecutor::IsTerminated()
extern "C"  bool ScheduledThreadPoolExecutor_IsTerminated_m528250958 (ScheduledThreadPoolExecutor_t2537379786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Future`1<System.Object> Google.Sharpen.ScheduledThreadPoolExecutor::Schedule(Google.Sharpen.Runnable,System.Int64,Google.Sharpen.TimeUnit)
extern "C"  Il2CppObject* ScheduledThreadPoolExecutor_Schedule_m4270648493 (ScheduledThreadPoolExecutor_t2537379786 * __this, Il2CppObject * ___r0, int64_t ___delay1, int64_t ___unit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
