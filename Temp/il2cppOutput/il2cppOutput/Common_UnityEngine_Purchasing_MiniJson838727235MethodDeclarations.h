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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  Il2CppObject * MiniJson_JsonDecode_m1067224953 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern "C"  String_t* MiniJson_JsonEncode_m3177863123 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJson::ParseObject(System.Char[],System.Int32&)
extern "C"  Dictionary_2_t309261261 * MiniJson_ParseObject_m900073952 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJson::ParseArray(System.Char[],System.Int32&)
extern "C"  List_1_t2058570427 * MiniJson_ParseArray_m868500175 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * MiniJson_ParseValue_m3870140342 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::ParseString(System.Char[],System.Int32&)
extern "C"  String_t* MiniJson_ParseString_m1850928821 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Purchasing.MiniJson::ParseNumber(System.Char[],System.Int32&)
extern "C"  double MiniJson_ParseNumber_m3633558475 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_GetLastIndexOfNumber_m2397840796 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void MiniJson_EatWhitespace_m4175959343 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_LookAhead_m3794458994 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t MiniJson_NextToken_m2083598916 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeObject(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeObject_m3056896208 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___anObject0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeDictionary_m2184211603 (Il2CppObject * __this /* static, unused */, Dictionary_2_t3943999495 * ___dict0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeArray(System.Collections.Generic.List`1<System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeArray_m2797096509 (Il2CppObject * __this /* static, unused */, List_1_t2058570427 * ___anArray0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeValue_m2776784221 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeString_m1545425323 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeNumber_m904120585 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t1221177846 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::.cctor()
extern "C"  void MiniJson__cctor_m671374357 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
