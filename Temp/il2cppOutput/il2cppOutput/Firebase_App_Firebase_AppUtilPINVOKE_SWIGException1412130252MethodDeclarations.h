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

// Firebase.AppUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1412130252;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t2876249339;
// Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t2443153790;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Firebase_App_Firebase_AppUtilPINVOKE_SWIGException2876249339.h"
#include "Firebase_App_Firebase_AppUtilPINVOKE_SWIGException2443153790.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.cctor()
extern "C"  void SWIGExceptionHelper__cctor_m2709485170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::.ctor()
extern "C"  void SWIGExceptionHelper__ctor_m432919667 (SWIGExceptionHelper_t1412130252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
extern "C"  void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AppUtil_m1809271624 (Il2CppObject * __this /* static, unused */, ExceptionDelegate_t2876249339 * ___applicationDelegate0, ExceptionDelegate_t2876249339 * ___arithmeticDelegate1, ExceptionDelegate_t2876249339 * ___divideByZeroDelegate2, ExceptionDelegate_t2876249339 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t2876249339 * ___invalidCastDelegate4, ExceptionDelegate_t2876249339 * ___invalidOperationDelegate5, ExceptionDelegate_t2876249339 * ___ioDelegate6, ExceptionDelegate_t2876249339 * ___nullReferenceDelegate7, ExceptionDelegate_t2876249339 * ___outOfMemoryDelegate8, ExceptionDelegate_t2876249339 * ___overflowDelegate9, ExceptionDelegate_t2876249339 * ___systemExceptionDelegate10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AppUtil(Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.AppUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
extern "C"  void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AppUtil_m386473544 (Il2CppObject * __this /* static, unused */, ExceptionArgumentDelegate_t2443153790 * ___argumentDelegate0, ExceptionArgumentDelegate_t2443153790 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t2443153790 * ___argumentOutOfRangeDelegate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingApplicationException_m1534282613 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m1534282613(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArithmeticException_m4135332127 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m4135332127(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingDivideByZeroException_m2259111009 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m2259111009(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m540342305 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m540342305(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingInvalidCastException_m3135880131 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m3135880131(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingInvalidOperationException_m2034725867 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m2034725867(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingIOException_m2228906713 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m2228906713(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingNullReferenceException_m1175983179 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m1175983179(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingOutOfMemoryException_m2908735873 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m2908735873(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingOverflowException_m3154125439 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m3154125439(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingSystemException_m2519873314 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m2519873314(char* ___message0);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentException_m3648622388 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m3648622388(char* ___message0, char* ___paramName1);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentNullException_m1938756533 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m1938756533(char* ___message0, char* ___paramName1);
// System.Void Firebase.AppUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3427245934 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3427245934(char* ___message0, char* ___paramName1);
