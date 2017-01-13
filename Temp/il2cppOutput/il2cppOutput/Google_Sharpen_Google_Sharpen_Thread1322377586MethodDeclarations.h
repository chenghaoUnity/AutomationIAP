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

// Google.Sharpen.Thread
struct Thread_t1322377586;
// Google.Sharpen.Runnable
struct Runnable_t1446984663;
// Google.Sharpen.ThreadGroup
struct ThreadGroup_t2181833315;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t241561612;

#include "codegen/il2cpp-codegen.h"
#include "Google_Sharpen_Google_Sharpen_ThreadGroup2181833315.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Threading_Thread241561612.h"
#include "mscorlib_System_Threading_ThreadState1158972609.h"

// System.Void Google.Sharpen.Thread::.ctor(Google.Sharpen.Runnable)
extern "C"  void Thread__ctor_m4157887006 (Thread_t1322377586 * __this, Il2CppObject * ___runnable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::.ctor(Google.Sharpen.Runnable,Google.Sharpen.ThreadGroup,System.String)
extern "C"  void Thread__ctor_m643001405 (Thread_t1322377586 * __this, Il2CppObject * ___runnable0, ThreadGroup_t2181833315 * ___grp1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::.ctor(System.Threading.Thread)
extern "C"  void Thread__ctor_m470462768 (Thread_t1322377586 * __this, Thread_t241561612 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ThreadState Google.Sharpen.Thread::get_ThreadState()
extern "C"  int32_t Thread_get_ThreadState_m1509831772 (Thread_t1322377586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.Sharpen.Thread Google.Sharpen.Thread::CurrentThread()
extern "C"  Thread_t1322377586 * Thread_CurrentThread_m1539933479 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::InternalRun()
extern "C"  void Thread_InternalRun_m584313605 (Thread_t1322377586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.Sharpen.Thread::Interrupted()
extern "C"  bool Thread_Interrupted_m1754611817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::Join()
extern "C"  void Thread_Join_m1323762689 (Thread_t1322377586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::Run()
extern "C"  void Thread_Run_m1656226008 (Thread_t1322377586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::SetDaemon(System.Boolean)
extern "C"  void Thread_SetDaemon_m1483131984 (Thread_t1322377586 * __this, bool ___daemon0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::SetName(System.String)
extern "C"  void Thread_SetName_m4114903064 (Thread_t1322377586 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::Start()
extern "C"  void Thread_Start_m1271744275 (Thread_t1322377586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::Abort()
extern "C"  void Thread_Abort_m2478891017 (Thread_t1322377586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.Sharpen.Thread::.cctor()
extern "C"  void Thread__cctor_m119016236 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
