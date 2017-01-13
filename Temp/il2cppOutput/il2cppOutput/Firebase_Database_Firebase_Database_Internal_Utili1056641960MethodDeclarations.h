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

// Firebase.Database.Internal.Utilities.DefaultRunLoop
struct DefaultRunLoop_t1056641960;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;
// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;
// Firebase.Database.Internal.Core.ThreadInitializer
struct ThreadInitializer_t4018228498;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;

#include "codegen/il2cpp-codegen.h"

// System.Void Firebase.Database.Internal.Utilities.DefaultRunLoop::.ctor()
extern "C"  void DefaultRunLoop__ctor_m2419388100 (DefaultRunLoop_t1056641960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.DefaultRunLoop::ScheduleNow(Google.Sharpen.Runnable)
extern "C"  void DefaultRunLoop_ScheduleNow_m3750033780 (DefaultRunLoop_t1056641960 * __this, Il2CppObject * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Utilities.DefaultRunLoop::Restart()
extern "C"  void DefaultRunLoop_Restart_m1441523361 (DefaultRunLoop_t1056641960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.ThreadFactory Firebase.Database.Internal.Utilities.DefaultRunLoop::GetThreadFactory()
extern "C"  ThreadFactory_t1392637388 * DefaultRunLoop_GetThreadFactory_m329149285 (DefaultRunLoop_t1056641960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.Core.ThreadInitializer Firebase.Database.Internal.Utilities.DefaultRunLoop::GetThreadInitializer()
extern "C"  ThreadInitializer_t4018228498 * DefaultRunLoop_GetThreadInitializer_m2084544699 (DefaultRunLoop_t1056641960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Utilities.DefaultRunLoop::GetExecutorService()
extern "C"  ScheduledThreadPoolExecutor_t2537379786 * DefaultRunLoop_GetExecutorService_m3718562159 (DefaultRunLoop_t1056641960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
