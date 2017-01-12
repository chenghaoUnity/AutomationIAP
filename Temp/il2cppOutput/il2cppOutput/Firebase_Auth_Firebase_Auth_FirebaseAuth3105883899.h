#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.FirebaseApp
struct FirebaseApp_t210707726;
// System.EventHandler
struct EventHandler_t277755526;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_t3547909217;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t3080659151;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth
struct  FirebaseAuth_t3105883899  : public Il2CppObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t2419939847  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t210707726 * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	IntPtr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	IntPtr_t ___authStateListener_4;
	// System.EventHandler Firebase.Auth.FirebaseAuth::StateChanged
	EventHandler_t277755526 * ___StateChanged_5;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___swigCPtr_0)); }
	inline HandleRef_t2419939847  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t2419939847 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t2419939847  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___appProxy_2)); }
	inline FirebaseApp_t210707726 * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t210707726 ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t210707726 * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier(&___appProxy_2, value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___appCPtr_3)); }
	inline IntPtr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline IntPtr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(IntPtr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_authStateListener_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___authStateListener_4)); }
	inline IntPtr_t get_authStateListener_4() const { return ___authStateListener_4; }
	inline IntPtr_t* get_address_of_authStateListener_4() { return &___authStateListener_4; }
	inline void set_authStateListener_4(IntPtr_t value)
	{
		___authStateListener_4 = value;
	}

	inline static int32_t get_offset_of_StateChanged_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899, ___StateChanged_5)); }
	inline EventHandler_t277755526 * get_StateChanged_5() const { return ___StateChanged_5; }
	inline EventHandler_t277755526 ** get_address_of_StateChanged_5() { return &___StateChanged_5; }
	inline void set_StateChanged_5(EventHandler_t277755526 * value)
	{
		___StateChanged_5 = value;
		Il2CppCodeGenWriteBarrier(&___StateChanged_5, value);
	}
};

struct FirebaseAuth_t3105883899_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_t3547909217 * ___appCPtrToAuth_6;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache0
	StateChangedDelegate_t3080659151 * ___U3CU3Ef__mgU24cache0_7;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___appCPtrToAuth_6)); }
	inline Dictionary_2_t3547909217 * get_appCPtrToAuth_6() const { return ___appCPtrToAuth_6; }
	inline Dictionary_2_t3547909217 ** get_address_of_appCPtrToAuth_6() { return &___appCPtrToAuth_6; }
	inline void set_appCPtrToAuth_6(Dictionary_2_t3547909217 * value)
	{
		___appCPtrToAuth_6 = value;
		Il2CppCodeGenWriteBarrier(&___appCPtrToAuth_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3105883899_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline StateChangedDelegate_t3080659151 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline StateChangedDelegate_t3080659151 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(StateChangedDelegate_t3080659151 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
