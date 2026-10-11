#ifndef HEADER_regexodus_Replacer
#define HEADER_regexodus_Replacer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Replacer {
	java_lang_Object parent;
	jref F_pattern;
	jref F_substitution;
} regexodus_Replacer;

extern Class class_regexodus_Replacer;

extern jlong SF_regexodus_Replacer_serialVersionUID;

#define VTABLE_regexodus_Replacer_hashCode_R_int 0
typedef jint (*func_regexodus_Replacer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Replacer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Replacer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Replacer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Replacer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_finalize 5
typedef void (*func_regexodus_Replacer_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_notify 6
typedef void (*func_regexodus_Replacer_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_notifyAll 7
typedef void (*func_regexodus_Replacer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_wait 8
typedef void (*func_regexodus_Replacer_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_wait_long 9
typedef void (*func_regexodus_Replacer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Replacer_wait_long_int 10
typedef void (*func_regexodus_Replacer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Replacer_setSubstitution_java_lang_String_boolean 11
typedef void (*func_regexodus_Replacer_setSubstitution_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String 12
typedef jobject (*func_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String 13
typedef jobject (*func_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String 14
typedef jobject (*func_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String 15
typedef jobject (*func_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String 16
typedef jobject (*func_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int 17
typedef jint (*func_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int 18
typedef jint (*func_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int 19
typedef jint (*func_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int 20
typedef jint (*func_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int 21
typedef jint (*func_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int 22
typedef jint (*func_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int 23
typedef jint (*func_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int 24
typedef jint (*func_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int 25
typedef jint (*func_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int 26
typedef jint (*func_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int 27
typedef jint (*func_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer 28
typedef void (*func_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer 29
typedef void (*func_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer 30
typedef void (*func_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer 31
typedef void (*func_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer 32
typedef void (*func_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_regexodus_Replacer_getPattern_R_regexodus_Pattern 33
typedef jobject (*func_regexodus_Replacer_getPattern_R_regexodus_Pattern)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_setPattern_regexodus_Pattern 34
typedef void (*func_regexodus_Replacer_setPattern_regexodus_Pattern)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer_getSubstitution_R_regexodus_Substitution 35
typedef jobject (*func_regexodus_Replacer_getSubstitution_R_regexodus_Substitution)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer_setSubstitution_regexodus_Substitution 36
typedef void (*func_regexodus_Replacer_setSubstitution_regexodus_Substitution)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer_setSubstitution_java_lang_String 37
typedef void (*func_regexodus_Replacer_setSubstitution_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Replacer(jobject object, jint mark, jint depth);
void clinit_regexodus_Replacer(jcontext ctx);
void init_regexodus_Replacer_regexodus_Pattern_regexodus_Substitution(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_regexodus_Replacer_regexodus_Pattern_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_regexodus_Replacer_regexodus_Pattern_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_regexodus_Replacer_setSubstitution_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_regexodus_Replacer_replace_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Replacer_replace_java_lang_CharSequence_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Replacer_replace_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_regexodus_Replacer_replace_regexodus_MatchResult_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Replacer_replace_java_io_Reader_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_regexodus_Replacer_replace_java_lang_CharSequence_java_lang_StringBuilder_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jint M_regexodus_Replacer_replace_Array1_char_int_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
jint M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jint M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint M_regexodus_Replacer_replace_java_io_Reader_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jint M_regexodus_Replacer_replace_java_lang_CharSequence_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_regexodus_Replacer_replace_Array1_char_int_int_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
jint M_regexodus_Replacer_replace_regexodus_MatchResult_int_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jint M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint M_regexodus_Replacer_replace_java_io_Reader_int_regexodus_TextBuffer_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jint SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_int_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
jbool SM_regexodus_Replacer_replaceStep_regexodus_Matcher_regexodus_Substitution_regexodus_TextBuffer_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_regexodus_Replacer_replace_regexodus_Matcher_regexodus_Substitution_java_io_Writer_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_regexodus_Replacer_replace_java_lang_CharSequence_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_regexodus_Replacer_replace_Array1_char_int_int_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_regexodus_Replacer_replace_regexodus_MatchResult_int_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_regexodus_Replacer_replace_regexodus_MatchResult_java_lang_String_java_io_Writer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_regexodus_Replacer_replace_java_io_Reader_int_java_io_Writer(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_regexodus_Replacer_makeTable_Array1_java_lang_String_R_regexodus_Replacer(jcontext ctx, jobject param0);
jobject SM_regexodus_Replacer_makeTable_java_util_Map_R_regexodus_Replacer(jcontext ctx, jobject param0);
jobject SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(jcontext ctx, jobject param0);
jobject SM_regexodus_Replacer_wrap_java_lang_StringBuffer_R_regexodus_Replacer$StringBufferBuffer(jcontext ctx, jobject param0);
jobject SM_regexodus_Replacer_wrap_java_io_Writer_R_regexodus_TextBuffer(jcontext ctx, jobject param0);
jobject M_regexodus_Replacer_getPattern_R_regexodus_Pattern(jcontext ctx, jobject self);
void M_regexodus_Replacer_setPattern_regexodus_Pattern(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Replacer_getSubstitution_R_regexodus_Substitution(jcontext ctx, jobject self);
void M_regexodus_Replacer_setSubstitution_regexodus_Substitution(jcontext ctx, jobject self, jobject param0);
void M_regexodus_Replacer_setSubstitution_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Replacer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Replacer_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Replacer_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
