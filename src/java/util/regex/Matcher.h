#ifndef HEADER_java_util_regex_Matcher
#define HEADER_java_util_regex_Matcher

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/regex/MatchResult.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_regex_Matcher {
	java_lang_Object parent;
	jref F_matcher;
	jref F_pattern;
} java_util_regex_Matcher;

extern Class class_java_util_regex_Matcher;


#define VTABLE_java_util_regex_Matcher_hashCode_R_int 0
typedef jint (*func_java_util_regex_Matcher_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_regex_Matcher_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_regex_Matcher_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_regex_Matcher_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_toString_R_java_lang_String 4
typedef jobject (*func_java_util_regex_Matcher_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_finalize 5
typedef void (*func_java_util_regex_Matcher_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_notify 6
typedef void (*func_java_util_regex_Matcher_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_notifyAll 7
typedef void (*func_java_util_regex_Matcher_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_wait 8
typedef void (*func_java_util_regex_Matcher_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_wait_long 9
typedef void (*func_java_util_regex_Matcher_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_regex_Matcher_wait_long_int 10
typedef void (*func_java_util_regex_Matcher_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_regex_Matcher_start_R_int 11
typedef jint (*func_java_util_regex_Matcher_start_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_start_int_R_int 12
typedef jint (*func_java_util_regex_Matcher_start_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher_start_java_lang_String_R_int 13
typedef jint (*func_java_util_regex_Matcher_start_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_end_R_int 14
typedef jint (*func_java_util_regex_Matcher_end_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_end_int_R_int 15
typedef jint (*func_java_util_regex_Matcher_end_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher_end_java_lang_String_R_int 16
typedef jint (*func_java_util_regex_Matcher_end_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_group_R_java_lang_String 17
typedef jobject (*func_java_util_regex_Matcher_group_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String 18
typedef jobject (*func_java_util_regex_Matcher_group_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String 19
typedef jobject (*func_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_groupCount_R_int 20
typedef jint (*func_java_util_regex_Matcher_groupCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern 21
typedef jobject (*func_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult 22
typedef jobject (*func_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher 23
typedef jobject (*func_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_reset_R_java_util_regex_Matcher 24
typedef jobject (*func_java_util_regex_Matcher_reset_R_java_util_regex_Matcher)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher 25
typedef jobject (*func_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_matches_R_boolean 26
typedef jbool (*func_java_util_regex_Matcher_matches_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_find_R_boolean 27
typedef jbool (*func_java_util_regex_Matcher_find_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_find_int_R_boolean 28
typedef jbool (*func_java_util_regex_Matcher_find_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher_lookingAt_R_boolean 29
typedef jbool (*func_java_util_regex_Matcher_lookingAt_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher 30
typedef jobject (*func_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer 31
typedef jobject (*func_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String 32
typedef jobject (*func_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String 33
typedef jobject (*func_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher 34
typedef jobject (*func_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_regex_Matcher_regionStart_R_int 35
typedef jint (*func_java_util_regex_Matcher_regionStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_regionEnd_R_int 36
typedef jint (*func_java_util_regex_Matcher_regionEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_hasTransparentBounds_R_boolean 37
typedef jbool (*func_java_util_regex_Matcher_hasTransparentBounds_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher 38
typedef jobject (*func_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_regex_Matcher_hasAnchoringBounds_R_boolean 39
typedef jbool (*func_java_util_regex_Matcher_hasAnchoringBounds_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher 40
typedef jobject (*func_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_regex_Matcher_hitEnd_R_boolean 41
typedef jbool (*func_java_util_regex_Matcher_hitEnd_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher_requireEnd_R_boolean 42
typedef jbool (*func_java_util_regex_Matcher_requireEnd_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_regex_Matcher(jobject object, jint mark, jint depth);
void clinit_java_util_regex_Matcher(jcontext ctx);
void init_java_util_regex_Matcher(jcontext ctx, jobject self);
void init_java_util_regex_Matcher_java_util_regex_Pattern_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_regex_Matcher_pattern_R_java_util_regex_Pattern(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher_toMatchResult_R_java_util_regex_MatchResult(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher_usePattern_java_util_regex_Pattern_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_regex_Matcher_reset_R_java_util_regex_Matcher(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher_reset_java_lang_CharSequence_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher_start_R_int(jcontext ctx, jobject self);
jint M_java_util_regex_Matcher_start_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_regex_Matcher_start_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher_end_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher_end_R_int(jcontext ctx, jobject self);
jint M_java_util_regex_Matcher_end_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_java_util_regex_Matcher_group_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher_group_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_util_regex_Matcher_group_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher_groupCount_R_int(jcontext ctx, jobject self);
jbool M_java_util_regex_Matcher_matches_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_regex_Matcher_find_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_regex_Matcher_find_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_java_util_regex_Matcher_lookingAt_R_boolean(jcontext ctx, jobject self);
jobject SM_java_util_regex_Matcher_quoteReplacement_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject M_java_util_regex_Matcher_appendReplacement_java_lang_StringBuffer_java_lang_String_R_java_util_regex_Matcher(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_regex_Matcher_appendTail_java_lang_StringBuffer_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_regex_Matcher_region_int_int_R_java_util_regex_Matcher(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_util_regex_Matcher_regionStart_R_int(jcontext ctx, jobject self);
jint M_java_util_regex_Matcher_regionEnd_R_int(jcontext ctx, jobject self);
jbool M_java_util_regex_Matcher_hasTransparentBounds_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher_useTransparentBounds_boolean_R_java_util_regex_Matcher(jcontext ctx, jobject self, jbool param0);
jbool M_java_util_regex_Matcher_hasAnchoringBounds_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher_useAnchoringBounds_boolean_R_java_util_regex_Matcher(jcontext ctx, jobject self, jbool param0);
jobject M_java_util_regex_Matcher_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_util_regex_Matcher_hitEnd_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_regex_Matcher_requireEnd_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
