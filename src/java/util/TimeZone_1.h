#ifndef HEADER_java_util_TimeZone$1
#define HEADER_java_util_TimeZone$1

#include "Clearwing.h"
#include "java/util/TimeZone.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TimeZone$1 {
	java_util_TimeZone parent;
	jref F_val$tzone;
} java_util_TimeZone$1;

extern Class class_java_util_TimeZone$1;


#define VTABLE_java_util_TimeZone$1_hashCode_R_int 0
typedef jint (*func_java_util_TimeZone$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TimeZone$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone$1_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TimeZone$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TimeZone$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TimeZone$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_finalize 5
typedef void (*func_java_util_TimeZone$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_notify 6
typedef void (*func_java_util_TimeZone$1_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_notifyAll 7
typedef void (*func_java_util_TimeZone$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_wait 8
typedef void (*func_java_util_TimeZone$1_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_wait_long 9
typedef void (*func_java_util_TimeZone$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TimeZone$1_wait_long_int 10
typedef void (*func_java_util_TimeZone$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TimeZone$1_setID_java_lang_String 11
typedef void (*func_java_util_TimeZone$1_setID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone$1_getDSTSavings_R_int 12
typedef jint (*func_java_util_TimeZone$1_getDSTSavings_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean 13
typedef jbool (*func_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone$1_getID_R_java_lang_String 14
typedef jobject (*func_java_util_TimeZone$1_getID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int 15
typedef jint (*func_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_java_util_TimeZone$1_getRawOffset_R_int 16
typedef jint (*func_java_util_TimeZone$1_getRawOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$1_useDaylightTime_R_boolean 17
typedef jbool (*func_java_util_TimeZone$1_useDaylightTime_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_TimeZone$1(jobject object, jint mark, jint depth);
void clinit_java_util_TimeZone$1(jcontext ctx);
void init_java_util_TimeZone$1_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jint M_java_util_TimeZone$1_getRawOffset_R_int(jcontext ctx, jobject self);
jbool M_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TimeZone$1_useDaylightTime_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
