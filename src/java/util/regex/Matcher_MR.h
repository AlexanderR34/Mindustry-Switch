#ifndef HEADER_java_util_regex_Matcher$MR
#define HEADER_java_util_regex_Matcher$MR

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/regex/MatchResult.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_regex_Matcher$MR {
	java_lang_Object parent;
	jref F_m;
} java_util_regex_Matcher$MR;

extern Class class_java_util_regex_Matcher$MR;


#define VTABLE_java_util_regex_Matcher$MR_hashCode_R_int 0
typedef jint (*func_java_util_regex_Matcher$MR_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_regex_Matcher$MR_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher$MR_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_regex_Matcher$MR_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_regex_Matcher$MR_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_toString_R_java_lang_String 4
typedef jobject (*func_java_util_regex_Matcher$MR_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_finalize 5
typedef void (*func_java_util_regex_Matcher$MR_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_notify 6
typedef void (*func_java_util_regex_Matcher$MR_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_notifyAll 7
typedef void (*func_java_util_regex_Matcher$MR_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_wait 8
typedef void (*func_java_util_regex_Matcher$MR_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_wait_long 9
typedef void (*func_java_util_regex_Matcher$MR_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_regex_Matcher$MR_wait_long_int 10
typedef void (*func_java_util_regex_Matcher$MR_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_regex_Matcher$MR_start_R_int 11
typedef jint (*func_java_util_regex_Matcher$MR_start_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_start_int_R_int 12
typedef jint (*func_java_util_regex_Matcher$MR_start_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher$MR_start_java_lang_String_R_int 13
typedef jint (*func_java_util_regex_Matcher$MR_start_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher$MR_end_R_int 14
typedef jint (*func_java_util_regex_Matcher$MR_end_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_end_int_R_int 15
typedef jint (*func_java_util_regex_Matcher$MR_end_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher$MR_end_java_lang_String_R_int 16
typedef jint (*func_java_util_regex_Matcher$MR_end_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher$MR_group_R_java_lang_String 17
typedef jobject (*func_java_util_regex_Matcher$MR_group_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_regex_Matcher$MR_group_int_R_java_lang_String 18
typedef jobject (*func_java_util_regex_Matcher$MR_group_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String 19
typedef jobject (*func_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_regex_Matcher$MR_groupCount_R_int 20
typedef jint (*func_java_util_regex_Matcher$MR_groupCount_R_int)(jcontext ctx, jobject self);

void mark_java_util_regex_Matcher$MR(jobject object, jint mark, jint depth);
void clinit_java_util_regex_Matcher$MR(jcontext ctx);
void init_java_util_regex_Matcher$MR_regexodus_Matcher(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher$MR_start_R_int(jcontext ctx, jobject self);
jint M_java_util_regex_Matcher$MR_start_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_regex_Matcher$MR_start_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher$MR_end_R_int(jcontext ctx, jobject self);
jint M_java_util_regex_Matcher$MR_end_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_regex_Matcher$MR_end_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_regex_Matcher$MR_group_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_regex_Matcher$MR_group_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_util_regex_Matcher$MR_group_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_util_regex_Matcher$MR_groupCount_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
