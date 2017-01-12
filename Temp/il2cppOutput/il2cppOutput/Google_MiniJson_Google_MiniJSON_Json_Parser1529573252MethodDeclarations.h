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

// Google.MiniJSON.Json/Parser
struct Parser_t1529573252;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Google_MiniJson_Google_MiniJSON_Json_Parser_TOKEN3628901966.h"

// System.Void Google.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2221651951 (Parser_t1529573252 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m3812142409 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Google.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m3440061655 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2029958064 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m1011857145 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Google.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m1627022374 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Google.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m662543672 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Google.MiniJSON.Json/Parser::ParseByToken(Google.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m240811363 (Parser_t1529573252 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m540376954 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Google.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m1365546976 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m3233255902 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Google.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m188703011 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Google.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m2266866267 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2722360442 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.MiniJSON.Json/Parser/TOKEN Google.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3763916013 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
