#ifndef HEADER_java_util_regex_Pattern
#define HEADER_java_util_regex_Pattern

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_regex_Pattern {
	java_lang_Object parent;
	jref F_internal;
	jint F_flags;
} java_util_regex_Pattern;

extern Class class_java_util_regex_Pattern;

extern jlong SF_java_util_regex_Pattern_serialVersionUID;
extern jint SF_java_util_regex_Pattern_UNIX_LINES;
extern jint SF_java_util_regex_Pattern_CASE_INSENSITIVE;
extern jint SF_java_util_regex_Pattern_COMMENTS;
extern jint SF_java_util_regex_Pattern_MULTILINE;
extern jint SF_java_util_regex_Pattern_LITERAL;
extern jint SF_java_util_regex_Pattern_DOTALL;
extern jint SF_java_util_regex_Pattern_UNICODE_CASE;
extern jint SF_java_util_regex_Pattern_CANON_EQ;
extern jint SF_java_util_regex_Pattern_UNICODE_CHARACTER_CLASS;

#define VTABLE_java_util_regex_Pattern_hashCode_R_int 0
typedef jint (*func_java_util_regex_Pattern_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_regex_Pattern_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Pattern_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_regex_Pattern_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_regex_Pattern_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_toString_R_java_lang_String 4
typedef jobject (*func_java_util_regex_Pattern_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_finalize 5
typedef void (*func_java_util_regex_Pattern_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_notify 6
typedef void (*func_java_util_regex_Pattern_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_notifyAll 7
typedef void (*func_java_util_regex_Pattern_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_wait 8
typedef void (*func_java_util_regex_Pattern_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_wait_long 9
typedef void (*func_java_util_regex_Pattern_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_regex_Pattern_wait_long_int 10
typedef void (*func_java_util_regex_Pattern_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_regex_Pattern_pattern_R_java_lang_String 11
typedef jobject (*func_java_util_regex_Pattern_pattern_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher 12
typedef jobject (*func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Pattern_flags_R_int 13
typedef jint (*func_java_util_regex_Pattern_flags_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String 14
typedef jobject (*func_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String 15
typedef jobject (*func_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_regex_Pattern(jobject object, jint mark, jint depth);
void clinit_java_util_regex_Pattern(jcontext ctx);
jobject SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(jcontext ctx, jobject param0);
jobject SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern(jcontext ctx, jobject param0, jint param1);
jobject M_java_util_regex_Pattern_pattern_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_regex_Pattern_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Pattern_flags_R_int(jcontext ctx, jobject self);
jbool SM_java_util_regex_Pattern_matches_java_lang_String_java_lang_CharSequence_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject M_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_regex_Pattern_split_java_lang_CharSequence_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_regex_Pattern_quote_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void init_java_util_regex_Pattern_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
