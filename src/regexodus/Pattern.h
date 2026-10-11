#ifndef HEADER_regexodus_Pattern
#define HEADER_regexodus_Pattern

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "regexodus/REFlags.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Pattern {
	java_lang_Object parent;
	jref F_stringRepr;
	jref F_root;
	jref F_root0;
	jint F_memregs;
	jint F_counters;
	jint F_lookaheads;
	jint F_flags;
	jref F_namedGroupMap;
	jbool F_caseless;
} regexodus_Pattern;

extern Class class_regexodus_Pattern;

extern jlong SF_regexodus_Pattern_serialVersionUID;

#define VTABLE_regexodus_Pattern_hashCode_R_int 0
typedef jint (*func_regexodus_Pattern_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Pattern_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Pattern_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Pattern_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Pattern_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_finalize 5
typedef void (*func_regexodus_Pattern_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_notify 6
typedef void (*func_regexodus_Pattern_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_notifyAll 7
typedef void (*func_regexodus_Pattern_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_wait 8
typedef void (*func_regexodus_Pattern_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_wait_long 9
typedef void (*func_regexodus_Pattern_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Pattern_wait_long_int 10
typedef void (*func_regexodus_Pattern_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Pattern_setFlags_java_lang_String 11
typedef void (*func_regexodus_Pattern_setFlags_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_setFlags_int 12
typedef void (*func_regexodus_Pattern_setFlags_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Pattern_getFlags_R_int 13
typedef jint (*func_regexodus_Pattern_getFlags_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_internalCompile_java_lang_String_int 14
typedef void (*func_regexodus_Pattern_internalCompile_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Pattern_groupCount_R_int 15
typedef jint (*func_regexodus_Pattern_groupCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer 16
typedef jobject (*func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_matches_java_lang_String_R_boolean 17
typedef jbool (*func_regexodus_Pattern_matches_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_startsWith_java_lang_String_R_boolean 18
typedef jbool (*func_regexodus_Pattern_startsWith_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_matcher_R_regexodus_Matcher 19
typedef jobject (*func_regexodus_Pattern_matcher_R_regexodus_Matcher)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher 20
typedef jobject (*func_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher 21
typedef jobject (*func_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher 22
typedef jobject (*func_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher 23
typedef jobject (*func_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher 24
typedef jobject (*func_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer 25
typedef jobject (*func_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer 26
typedef jobject (*func_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer 27
typedef jobject (*func_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer 28
typedef jobject (*func_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer 29
typedef jobject (*func_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Pattern_toString_d_R_java_lang_String 30
typedef jobject (*func_regexodus_Pattern_toString_d_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_flagsAsString_R_java_lang_String 31
typedef jobject (*func_regexodus_Pattern_flagsAsString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String 32
typedef jobject (*func_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String 33
typedef jobject (*func_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Pattern_serializeToString_R_java_lang_String 34
typedef jobject (*func_regexodus_Pattern_serializeToString_R_java_lang_String)(jcontext ctx, jobject self);

void mark_regexodus_Pattern(jobject object, jint mark, jint depth);
void clinit_regexodus_Pattern(jcontext ctx);
void init_regexodus_Pattern(jcontext ctx, jobject self);
void init_regexodus_Pattern_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_regexodus_Pattern_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_regexodus_Pattern_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_regexodus_Pattern_setFlags_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Pattern_setFlags_int(jcontext ctx, jobject self, jint param0);
jint M_regexodus_Pattern_getFlags_R_int(jcontext ctx, jobject self);
jobject SM_regexodus_Pattern_compile_java_lang_String_R_regexodus_Pattern(jcontext ctx, jobject param0);
jobject SM_regexodus_Pattern_compile_java_lang_String_int_R_regexodus_Pattern(jcontext ctx, jobject param0, jint param1);
jobject SM_regexodus_Pattern_compile_java_lang_String_java_lang_String_R_regexodus_Pattern(jcontext ctx, jobject param0, jobject param1);
void M_regexodus_Pattern_internalCompile_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_regexodus_Pattern_groupCount_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Pattern_matches_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Pattern_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Pattern_matcher_R_regexodus_Matcher(jcontext ctx, jobject self);
jobject M_regexodus_Pattern_matcher_java_lang_CharSequence_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Pattern_matcher_Array1_char_int_int_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_regexodus_Pattern_matcher_regexodus_MatchResult_int_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Pattern_matcher_regexodus_MatchResult_java_lang_String_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_regexodus_Pattern_matcher_java_io_Reader_int_R_regexodus_Matcher(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Pattern_replacer_java_lang_String_R_regexodus_Replacer(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Pattern_replacer_regexodus_Substitution_R_regexodus_Replacer(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Pattern_tokenizer_java_lang_String_R_regexodus_RETokenizer(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Pattern_tokenizer_Array1_char_int_int_R_regexodus_RETokenizer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_regexodus_Pattern_tokenizer_java_io_Reader_int_R_regexodus_RETokenizer(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Pattern_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Pattern_toString_d_R_java_lang_String(jcontext ctx, jobject self);
jint SM_regexodus_Pattern_parseFlags_java_lang_String_R_int(jcontext ctx, jobject param0);
jint SM_regexodus_Pattern_parseFlags_Array1_char_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_regexodus_Pattern_getFlag_char_R_int(jcontext ctx, jchar param0);
jobject M_regexodus_Pattern_flagsAsString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Pattern_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Pattern_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Pattern_serializeToString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_regexodus_Pattern_deserializeFromString_java_lang_String_R_regexodus_Pattern(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
