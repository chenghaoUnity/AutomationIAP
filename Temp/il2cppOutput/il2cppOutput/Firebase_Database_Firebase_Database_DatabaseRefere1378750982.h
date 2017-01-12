#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener>
struct Pair_2_t2408862168;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference/Runnable338
struct  Runnable338_t1378750982  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference/Runnable338::_enclosing
	DatabaseReference_t1167676104 * ____enclosing_0;
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.DatabaseReference/Runnable338::_merge
	CompoundWrite_t496419158 * ____merge_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.DatabaseReference/Runnable338::_update
	Il2CppObject* ____update_2;
	// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener> Firebase.Database.DatabaseReference/Runnable338::_wrapped
	Pair_2_t2408862168 * ____wrapped_3;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable338_t1378750982, ____enclosing_0)); }
	inline DatabaseReference_t1167676104 * get__enclosing_0() const { return ____enclosing_0; }
	inline DatabaseReference_t1167676104 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(DatabaseReference_t1167676104 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__merge_1() { return static_cast<int32_t>(offsetof(Runnable338_t1378750982, ____merge_1)); }
	inline CompoundWrite_t496419158 * get__merge_1() const { return ____merge_1; }
	inline CompoundWrite_t496419158 ** get_address_of__merge_1() { return &____merge_1; }
	inline void set__merge_1(CompoundWrite_t496419158 * value)
	{
		____merge_1 = value;
		Il2CppCodeGenWriteBarrier(&____merge_1, value);
	}

	inline static int32_t get_offset_of__update_2() { return static_cast<int32_t>(offsetof(Runnable338_t1378750982, ____update_2)); }
	inline Il2CppObject* get__update_2() const { return ____update_2; }
	inline Il2CppObject** get_address_of__update_2() { return &____update_2; }
	inline void set__update_2(Il2CppObject* value)
	{
		____update_2 = value;
		Il2CppCodeGenWriteBarrier(&____update_2, value);
	}

	inline static int32_t get_offset_of__wrapped_3() { return static_cast<int32_t>(offsetof(Runnable338_t1378750982, ____wrapped_3)); }
	inline Pair_2_t2408862168 * get__wrapped_3() const { return ____wrapped_3; }
	inline Pair_2_t2408862168 ** get_address_of__wrapped_3() { return &____wrapped_3; }
	inline void set__wrapped_3(Pair_2_t2408862168 * value)
	{
		____wrapped_3 = value;
		Il2CppCodeGenWriteBarrier(&____wrapped_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
