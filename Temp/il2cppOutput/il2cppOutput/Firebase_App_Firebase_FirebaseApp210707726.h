#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2125486988;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t652733044;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Int32>
struct Dictionary_2_t2513902766;
// Firebase.FirebaseApp/DestroyDelegate
struct DestroyDelegate_t3635929227;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t413676709;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef2419939847.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp
struct  FirebaseApp_t210707726  : public Il2CppObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t2419939847  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp/DestroyDelegate Firebase.FirebaseApp::destroy
	DestroyDelegate_t3635929227 * ___destroy_5;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___swigCPtr_0)); }
	inline HandleRef_t2419939847  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t2419939847 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t2419939847  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_destroy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726, ___destroy_5)); }
	inline DestroyDelegate_t3635929227 * get_destroy_5() const { return ___destroy_5; }
	inline DestroyDelegate_t3635929227 ** get_address_of_destroy_5() { return &___destroy_5; }
	inline void set_destroy_5(DestroyDelegate_t3635929227 * value)
	{
		___destroy_5 = value;
		Il2CppCodeGenWriteBarrier(&___destroy_5, value);
	}
};

struct FirebaseApp_t210707726_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2125486988 * ___nameToProxy_2;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t652733044 * ___cPtrToProxy_3;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Int32> Firebase.FirebaseApp::cPtrRefCount
	Dictionary_2_t2513902766 * ___cPtrRefCount_4;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t413676709 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_nameToProxy_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___nameToProxy_2)); }
	inline Dictionary_2_t2125486988 * get_nameToProxy_2() const { return ___nameToProxy_2; }
	inline Dictionary_2_t2125486988 ** get_address_of_nameToProxy_2() { return &___nameToProxy_2; }
	inline void set_nameToProxy_2(Dictionary_2_t2125486988 * value)
	{
		___nameToProxy_2 = value;
		Il2CppCodeGenWriteBarrier(&___nameToProxy_2, value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___cPtrToProxy_3)); }
	inline Dictionary_2_t652733044 * get_cPtrToProxy_3() const { return ___cPtrToProxy_3; }
	inline Dictionary_2_t652733044 ** get_address_of_cPtrToProxy_3() { return &___cPtrToProxy_3; }
	inline void set_cPtrToProxy_3(Dictionary_2_t652733044 * value)
	{
		___cPtrToProxy_3 = value;
		Il2CppCodeGenWriteBarrier(&___cPtrToProxy_3, value);
	}

	inline static int32_t get_offset_of_cPtrRefCount_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___cPtrRefCount_4)); }
	inline Dictionary_2_t2513902766 * get_cPtrRefCount_4() const { return ___cPtrRefCount_4; }
	inline Dictionary_2_t2513902766 ** get_address_of_cPtrRefCount_4() { return &___cPtrRefCount_4; }
	inline void set_cPtrRefCount_4(Dictionary_2_t2513902766 * value)
	{
		___cPtrRefCount_4 = value;
		Il2CppCodeGenWriteBarrier(&___cPtrRefCount_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t210707726_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline CreateDelegate_t413676709 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline CreateDelegate_t413676709 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(CreateDelegate_t413676709 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
