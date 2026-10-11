#ifndef HEADER_java_util_concurrent_TimeUnit$6
#define HEADER_java_util_concurrent_TimeUnit$6

#include "Clearwing.h"
#include "java/util/concurrent/TimeUnit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_TimeUnit$6 {
	java_util_concurrent_TimeUnit parent;
} java_util_concurrent_TimeUnit$6;

extern Class class_java_util_concurrent_TimeUnit$6;


#define VTABLE_java_util_concurrent_TimeUnit$6_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_TimeUnit$6_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_TimeUnit$6_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_TimeUnit$6_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_TimeUnit$6_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_TimeUnit$6_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_finalize 5
typedef void (*func_java_util_concurrent_TimeUnit$6_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_notify 6
typedef void (*func_java_util_concurrent_TimeUnit$6_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_notifyAll 7
typedef void (*func_java_util_concurrent_TimeUnit$6_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_wait 8
typedef void (*func_java_util_concurrent_TimeUnit$6_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_wait_long 9
typedef void (*func_java_util_concurrent_TimeUnit$6_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_wait_long_int 10
typedef void (*func_java_util_concurrent_TimeUnit$6_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_TimeUnit$6_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_util_concurrent_TimeUnit$6_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_util_concurrent_TimeUnit$6_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_name_R_java_lang_String 13
typedef jobject (*func_java_util_concurrent_TimeUnit$6_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_ordinal_R_int 14
typedef jint (*func_java_util_concurrent_TimeUnit$6_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_util_concurrent_TimeUnit$6_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit$6_convert_long_java_util_concurrent_TimeUnit_R_long 16
typedef jlong (*func_java_util_concurrent_TimeUnit$6_convert_long_java_util_concurrent_TimeUnit_R_long)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_java_util_concurrent_TimeUnit$6_toNanos_long_R_long 17
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toNanos_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_toMicros_long_R_long 18
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toMicros_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_toMillis_long_R_long 19
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toMillis_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_toSeconds_long_R_long 20
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toSeconds_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_toMinutes_long_R_long 21
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toMinutes_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_toHours_long_R_long 22
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toHours_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_toDays_long_R_long 23
typedef jlong (*func_java_util_concurrent_TimeUnit$6_toDays_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit$6_excessNanos_long_long_R_int 24
typedef jint (*func_java_util_concurrent_TimeUnit$6_excessNanos_long_long_R_int)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_concurrent_TimeUnit$6_timedWait_java_lang_Object_long 25
typedef void (*func_java_util_concurrent_TimeUnit$6_timedWait_java_lang_Object_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_util_concurrent_TimeUnit$6_timedJoin_java_lang_Thread_long 26
typedef void (*func_java_util_concurrent_TimeUnit$6_timedJoin_java_lang_Thread_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_util_concurrent_TimeUnit$6_sleep_long 27
typedef void (*func_java_util_concurrent_TimeUnit$6_sleep_long)(jcontext ctx, jobject self, jlong param0);

void mark_java_util_concurrent_TimeUnit$6(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_TimeUnit$6(jcontext ctx);
void init_java_util_concurrent_TimeUnit$6_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jlong M_java_util_concurrent_TimeUnit$6_toNanos_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_toMicros_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_toMillis_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_toSeconds_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_toMinutes_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_toHours_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_toDays_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit$6_convert_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1);
jint M_java_util_concurrent_TimeUnit$6_excessNanos_long_long_R_int(jcontext ctx, jobject self, jlong param0, jlong param1);

#ifdef __cplusplus
}
#endif

#endif
