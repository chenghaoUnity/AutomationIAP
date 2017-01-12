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

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1809478302;
// System.Object
struct Il2CppObject;
// System.Threading.Tasks.Task
struct Task_t1843236107;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1611277684;
// System.AggregateException
struct AggregateException_t420812976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Unity_Tasks_System_AggregateException420812976.h"

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C"  void Task_1__ctor_m2185911839_gshared (Task_1_t1809478302 * __this, const MethodInfo* method);
#define Task_1__ctor_m2185911839(__this, method) ((  void (*) (Task_1_t1809478302 *, const MethodInfo*))Task_1__ctor_m2185911839_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C"  Il2CppObject * Task_1_get_Result_m3345291210_gshared (Task_1_t1809478302 * __this, const MethodInfo* method);
#define Task_1_get_Result_m3345291210(__this, method) ((  Il2CppObject * (*) (Task_1_t1809478302 *, const MethodInfo*))Task_1_get_Result_m3345291210_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t1843236107 * Task_1_ContinueWith_m2549062050_gshared (Task_1_t1809478302 * __this, Action_1_t1611277684 * ___continuation0, const MethodInfo* method);
#define Task_1_ContinueWith_m2549062050(__this, ___continuation0, method) ((  Task_t1843236107 * (*) (Task_1_t1809478302 *, Action_1_t1611277684 *, const MethodInfo*))Task_1_ContinueWith_m2549062050_gshared)(__this, ___continuation0, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m3098339996_gshared (Task_1_t1809478302 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m3098339996(__this, method) ((  void (*) (Task_1_t1809478302 *, const MethodInfo*))Task_1_RunContinuations_m3098339996_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m3465015963_gshared (Task_1_t1809478302 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Task_1_TrySetResult_m3465015963(__this, ___result0, method) ((  bool (*) (Task_1_t1809478302 *, Il2CppObject *, const MethodInfo*))Task_1_TrySetResult_m3465015963_gshared)(__this, ___result0, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m2920752513_gshared (Task_1_t1809478302 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m2920752513(__this, method) ((  bool (*) (Task_1_t1809478302 *, const MethodInfo*))Task_1_TrySetCanceled_m2920752513_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m2828599492_gshared (Task_1_t1809478302 * __this, AggregateException_t420812976 * ___exception0, const MethodInfo* method);
#define Task_1_TrySetException_m2828599492(__this, ___exception0, method) ((  bool (*) (Task_1_t1809478302 *, AggregateException_t420812976 *, const MethodInfo*))Task_1_TrySetException_m2828599492_gshared)(__this, ___exception0, method)
