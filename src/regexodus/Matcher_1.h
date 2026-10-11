#ifndef HEADER_regexodus_Matcher$1
#define HEADER_regexodus_Matcher$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/MatchIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Matcher$1 {
	java_lang_Object parent;
	jbool F_checked;
	jbool F_hasMore;
	jint F_val$options;
	jref F_this$0;
} regexodus_Matcher$1;

extern Class class_regexodus_Matcher$1;


#define VTABLE_regexodus_Matcher$1_hashCode_R_int 0
typedef jint (*func_regexodus_Matcher$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Matcher$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher$1_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Matcher$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Matcher$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Matcher$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_finalize 5
typedef void (*func_regexodus_Matcher$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_notify 6
typedef void (*func_regexodus_Matcher$1_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_notifyAll 7
typedef void (*func_regexodus_Matcher$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_wait 8
typedef void (*func_regexodus_Matcher$1_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_wait_long 9
typedef void (*func_regexodus_Matcher$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Matcher$1_wait_long_int 10
typedef void (*func_regexodus_Matcher$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Matcher$1_hasNext_R_boolean 11
typedef jbool (*func_regexodus_Matcher$1_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_next_R_java_lang_Object 12
typedef jobject (*func_regexodus_Matcher$1_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_remove 13
typedef void (*func_regexodus_Matcher$1_remove)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_regexodus_Matcher$1_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Matcher$1_count_R_int 15
typedef jint (*func_regexodus_Matcher$1_count_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_asList_R_java_util_ArrayList 16
typedef jobject (*func_regexodus_Matcher$1_asList_R_java_util_ArrayList)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_next_R_regexodus_MatchResult 17
typedef jobject (*func_regexodus_Matcher$1_next_R_regexodus_MatchResult)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Matcher$1_check 18
typedef void (*func_regexodus_Matcher$1_check)(jcontext ctx, jobject self);

void mark_regexodus_Matcher$1(jobject object, jint mark, jint depth);
void clinit_regexodus_Matcher$1(jcontext ctx);
void init_regexodus_Matcher$1_regexodus_Matcher_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_regexodus_Matcher$1_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_regexodus_Matcher$1_next_R_regexodus_MatchResult(jcontext ctx, jobject self);
void M_regexodus_Matcher$1_remove(jcontext ctx, jobject self);
void M_regexodus_Matcher$1_check(jcontext ctx, jobject self);
jint M_regexodus_Matcher$1_count_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Matcher$1_asList_R_java_util_ArrayList(jcontext ctx, jobject self);
jobject M_regexodus_Matcher$1_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
