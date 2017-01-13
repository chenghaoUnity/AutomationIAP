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

// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;
// Google.Sharpen.Thread
struct Thread_t1322377586;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;

#include "codegen/il2cpp-codegen.h"

// System.Void Google.Sharpen.ThreadFactory::.ctor()
extern "C"  void ThreadFactory__ctor_m3710889059 (ThreadFactory_t1392637388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Thread Google.Sharpen.ThreadFactory::NewThread(Google.Sharpen.Runnable)
extern "C"  Thread_t1322377586 * ThreadFactory_NewThread_m1805832117 (ThreadFactory_t1392637388 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
