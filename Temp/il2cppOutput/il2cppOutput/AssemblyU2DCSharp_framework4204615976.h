#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TestCase>
struct List_1_t189538552;
// System.Collections.Generic.List`1<System.Collections.IEnumerator>
struct List_1_t835147881;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// System.String
struct String_t;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// framework
struct  framework_t4204615976  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<TestCase> framework::resultTable
	List_1_t189538552 * ___resultTable_2;
	// System.Collections.Generic.List`1<System.Collections.IEnumerator> framework::testSuite
	List_1_t835147881 * ___testSuite_3;
	// UnityEngine.GameObject framework::QAModeUI
	GameObject_t1756533147 * ___QAModeUI_4;
	// UnityEngine.GameObject framework::QAModeUI_progress
	GameObject_t1756533147 * ___QAModeUI_progress_5;
	// UnityEngine.Events.UnityEvent framework::onCompelete
	UnityEvent_t408735097 * ___onCompelete_6;
	// System.Int32 framework::maxTest
	int32_t ___maxTest_7;
	// System.Int32 framework::runOrder
	int32_t ___runOrder_8;
	// System.String framework::result
	String_t* ___result_9;
	// Firebase.Database.DatabaseReference framework::reference
	DatabaseReference_t1167676104 * ___reference_10;

public:
	inline static int32_t get_offset_of_resultTable_2() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___resultTable_2)); }
	inline List_1_t189538552 * get_resultTable_2() const { return ___resultTable_2; }
	inline List_1_t189538552 ** get_address_of_resultTable_2() { return &___resultTable_2; }
	inline void set_resultTable_2(List_1_t189538552 * value)
	{
		___resultTable_2 = value;
		Il2CppCodeGenWriteBarrier(&___resultTable_2, value);
	}

	inline static int32_t get_offset_of_testSuite_3() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___testSuite_3)); }
	inline List_1_t835147881 * get_testSuite_3() const { return ___testSuite_3; }
	inline List_1_t835147881 ** get_address_of_testSuite_3() { return &___testSuite_3; }
	inline void set_testSuite_3(List_1_t835147881 * value)
	{
		___testSuite_3 = value;
		Il2CppCodeGenWriteBarrier(&___testSuite_3, value);
	}

	inline static int32_t get_offset_of_QAModeUI_4() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___QAModeUI_4)); }
	inline GameObject_t1756533147 * get_QAModeUI_4() const { return ___QAModeUI_4; }
	inline GameObject_t1756533147 ** get_address_of_QAModeUI_4() { return &___QAModeUI_4; }
	inline void set_QAModeUI_4(GameObject_t1756533147 * value)
	{
		___QAModeUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___QAModeUI_4, value);
	}

	inline static int32_t get_offset_of_QAModeUI_progress_5() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___QAModeUI_progress_5)); }
	inline GameObject_t1756533147 * get_QAModeUI_progress_5() const { return ___QAModeUI_progress_5; }
	inline GameObject_t1756533147 ** get_address_of_QAModeUI_progress_5() { return &___QAModeUI_progress_5; }
	inline void set_QAModeUI_progress_5(GameObject_t1756533147 * value)
	{
		___QAModeUI_progress_5 = value;
		Il2CppCodeGenWriteBarrier(&___QAModeUI_progress_5, value);
	}

	inline static int32_t get_offset_of_onCompelete_6() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___onCompelete_6)); }
	inline UnityEvent_t408735097 * get_onCompelete_6() const { return ___onCompelete_6; }
	inline UnityEvent_t408735097 ** get_address_of_onCompelete_6() { return &___onCompelete_6; }
	inline void set_onCompelete_6(UnityEvent_t408735097 * value)
	{
		___onCompelete_6 = value;
		Il2CppCodeGenWriteBarrier(&___onCompelete_6, value);
	}

	inline static int32_t get_offset_of_maxTest_7() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___maxTest_7)); }
	inline int32_t get_maxTest_7() const { return ___maxTest_7; }
	inline int32_t* get_address_of_maxTest_7() { return &___maxTest_7; }
	inline void set_maxTest_7(int32_t value)
	{
		___maxTest_7 = value;
	}

	inline static int32_t get_offset_of_runOrder_8() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___runOrder_8)); }
	inline int32_t get_runOrder_8() const { return ___runOrder_8; }
	inline int32_t* get_address_of_runOrder_8() { return &___runOrder_8; }
	inline void set_runOrder_8(int32_t value)
	{
		___runOrder_8 = value;
	}

	inline static int32_t get_offset_of_result_9() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___result_9)); }
	inline String_t* get_result_9() const { return ___result_9; }
	inline String_t** get_address_of_result_9() { return &___result_9; }
	inline void set_result_9(String_t* value)
	{
		___result_9 = value;
		Il2CppCodeGenWriteBarrier(&___result_9, value);
	}

	inline static int32_t get_offset_of_reference_10() { return static_cast<int32_t>(offsetof(framework_t4204615976, ___reference_10)); }
	inline DatabaseReference_t1167676104 * get_reference_10() const { return ___reference_10; }
	inline DatabaseReference_t1167676104 ** get_address_of_reference_10() { return &___reference_10; }
	inline void set_reference_10(DatabaseReference_t1167676104 * value)
	{
		___reference_10 = value;
		Il2CppCodeGenWriteBarrier(&___reference_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
