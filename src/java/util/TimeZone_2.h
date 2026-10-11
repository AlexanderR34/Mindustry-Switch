#ifndef HEADER_java_util_TimeZone$2
#define HEADER_java_util_TimeZone$2

#include "Clearwing.h"
#include "java/util/TimeZone.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TimeZone$2 {
	java_util_TimeZone parent;
	jref F_val$ID;
} java_util_TimeZone$2;

extern Class class_java_util_TimeZone$2;


#define VTABLE_java_util_TimeZone$2_hashCode_R_int 0
typedef jint (*func_java_util_TimeZone$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TimeZone$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone$2_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TimeZone$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TimeZone$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TimeZone$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_finalize 5
typedef void (*func_java_util_TimeZone$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_notify 6
typedef void (*func_java_util_TimeZone$2_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_notifyAll 7
typedef void (*func_java_util_TimeZone$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_wait 8
typedef void (*func_java_util_TimeZone$2_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_wait_long 9
typedef void (*func_java_util_TimeZone$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TimeZone$2_wait_long_int 10
typedef void (*func_java_util_TimeZone$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TimeZone$2_setID_java_lang_String 11
typedef void (*func_java_util_TimeZone$2_setID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone$2_getDSTSavings_R_int 12
typedef jint (*func_java_util_TimeZone$2_getDSTSavings_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_inDaylightTime_java_util_Date_R_boolean 13
typedef jbool (*func_java_util_TimeZone$2_inDaylightTime_java_util_Date_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TimeZone$2_getID_R_java_lang_String 14
typedef jobject (*func_java_util_TimeZone$2_getID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_getOffset_int_int_int_int_int_int_R_int 15
typedef jint (*func_java_util_TimeZone$2_getOffset_int_int_int_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_java_util_TimeZone$2_getRawOffset_R_int 16
typedef jint (*func_java_util_TimeZone$2_getRawOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TimeZone$2_useDaylightTime_R_boolean 17
typedef jbool (*func_java_util_TimeZone$2_useDaylightTime_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_TimeZone$2(jobject object, jint mark, jint depth);
void clinit_java_util_TimeZone$2(jcontext ctx);
void init_java_util_TimeZone$2_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_util_TimeZone$2_getOffset_int_int_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jint M_java_util_TimeZone$2_getRawOffset_R_int(jcontext ctx, jobject self);
jbool M_java_util_TimeZone$2_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TimeZone$2_useDaylightTime_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_TimeZone$2_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_TimeZone$2_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
