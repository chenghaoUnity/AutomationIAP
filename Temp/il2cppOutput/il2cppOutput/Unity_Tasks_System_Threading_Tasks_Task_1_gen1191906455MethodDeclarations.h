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

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1191906455;
// System.Threading.Tasks.Task
struct Task_t1843236107;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t993705837;
// System.AggregateException
struct AggregateException_t420812976;

#include "codegen/il2cpp-codegen.h"
#include "Unity_Tasks_System_AggregateException420812976.h"

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C"  void Task_1__ctor_m1159627918_gshared (Task_1_t1191906455 * __this, const MethodInfo* method);
#define Task_1__ctor_m1159627918(__this, method) ((  void (*) (Task_1_t1191906455 *, const MethodInfo*))Task_1__ctor_m1159627918_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C"  int32_t Task_1_get_Result_m1182200511_gshared (Task_1_t1191906455 * __this, const MethodInfo* method);
#define Task_1_get_Result_m1182200511(__this, method) ((  int32_t (*) (Task_1_t1191906455 *, const MethodInfo*))Task_1_get_Result_m1182200511_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C"  Task_t1843236107 * Task_1_ContinueWith_m614535953_gshared (Task_1_t1191906455 * __this, Action_1_t993705837 * ___continuation0, const MethodInfo* method);
#define Task_1_ContinueWith_m614535953(__this, ___continuation0, method) ((  Task_t1843236107 * (*) (Task_1_t1191906455 *, Action_1_t993705837 *, const MethodInfo*))Task_1_ContinueWith_m614535953_gshared)(__this, ___continuation0, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C"  void Task_1_RunContinuations_m78772759_gshared (Task_1_t1191906455 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m78772759(__this, method) ((  void (*) (Task_1_t1191906455 *, const MethodInfo*))Task_1_RunContinuations_m78772759_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C"  bool Task_1_TrySetResult_m441583860_gshared (Task_1_t1191906455 * __this, int32_t ___result0, const MethodInfo* method);
#define Task_1_TrySetResult_m441583860(__this, ___result0, method) ((  bool (*) (Task_1_t1191906455 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m441583860_gshared)(__this, ___result0, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C"  bool Task_1_TrySetCanceled_m2946093992_gshared (Task_1_t1191906455 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m2946093992(__this, method) ((  bool (*) (Task_1_t1191906455 *, const MethodInfo*))Task_1_TrySetCanceled_m2946093992_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C"  bool Task_1_TrySetException_m2433427215_gshared (Task_1_t1191906455 * __this, AggregateException_t420812976 * ___exception0, const MethodInfo* method);
#define Task_1_TrySetException_m2433427215(__this, ___exception0, method) ((  bool (*) (Task_1_t1191906455 *, AggregateException_t420812976 *, const MethodInfo*))Task_1_TrySetException_m2433427215_gshared)(__this, ___exception0, method)
