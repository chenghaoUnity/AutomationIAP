#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t3105883899;

#include "mscorlib_System_Array3829468939.h"
#include "Firebase_Auth_Firebase_Auth_FirebaseAuth3105883899.h"

#pragma once
// Firebase.Auth.FirebaseAuth[]
struct FirebaseAuthU5BU5D_t3891187386  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) FirebaseAuth_t3105883899 * m_Items[1];

public:
	inline FirebaseAuth_t3105883899 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FirebaseAuth_t3105883899 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FirebaseAuth_t3105883899 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FirebaseAuth_t3105883899 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FirebaseAuth_t3105883899 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FirebaseAuth_t3105883899 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
