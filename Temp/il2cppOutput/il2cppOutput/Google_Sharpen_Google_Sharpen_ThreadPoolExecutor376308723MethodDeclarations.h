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

// Google.Sharpen.ThreadPoolExecutor
struct ThreadPoolExecutor_t376308723;
// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;

#include "codegen/il2cpp-codegen.h"
#include "Google_Sharpen_Google_Sharpen_ThreadFactory1392637388.h"

// System.Void Google.Sharpen.ThreadPoolExecutor::.ctor(System.Int32,Google.Sharpen.ThreadFactory)
extern "C"  void ThreadPoolExecutor__ctor_m1239316749 (ThreadPoolExecutor_t376308723 * __this, int32_t ___corePoolSize0, ThreadFactory_t1392637388 * ___factory1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.ThreadPoolExecutor::IsShutdown()
extern "C"  bool ThreadPoolExecutor_IsShutdown_m1386976194 (ThreadPoolExecutor_t376308723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.ThreadPoolExecutor::IsTerminated()
extern "C"  bool ThreadPoolExecutor_IsTerminated_m720178431 (ThreadPoolExecutor_t376308723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.ThreadPoolExecutor::Execute(Google.Sharpen.Runnable)
extern "C"  void ThreadPoolExecutor_Execute_m4098131760 (ThreadPoolExecutor_t376308723 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.ThreadPoolExecutor::InternalExecute(Google.Sharpen.Runnable,System.Boolean)
extern "C"  void ThreadPoolExecutor_InternalExecute_m1581097176 (ThreadPoolExecutor_t376308723 * __this, Il2CppObject * ___r0, bool ___checkShutdown1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.ThreadPoolExecutor::StartPoolThread()
extern "C"  void ThreadPoolExecutor_StartPoolThread_m334282442 (ThreadPoolExecutor_t376308723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.ThreadPoolExecutor::RunPoolThread()
extern "C"  void ThreadPoolExecutor_RunPoolThread_m2812911311 (ThreadPoolExecutor_t376308723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
