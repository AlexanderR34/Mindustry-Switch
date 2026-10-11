#ifndef HEADER_java_util_concurrent_TimeUnit
#define HEADER_java_util_concurrent_TimeUnit

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_TimeUnit {
	java_lang_Enum parent;
} java_util_concurrent_TimeUnit;

extern Class class_java_util_concurrent_TimeUnit;

extern jobject SF_java_util_concurrent_TimeUnit_NANOSECONDS;
extern jobject SF_java_util_concurrent_TimeUnit_MICROSECONDS;
extern jobject SF_java_util_concurrent_TimeUnit_MILLISECONDS;
extern jobject SF_java_util_concurrent_TimeUnit_SECONDS;
extern jobject SF_java_util_concurrent_TimeUnit_MINUTES;
extern jobject SF_java_util_concurrent_TimeUnit_HOURS;
extern jobject SF_java_util_concurrent_TimeUnit_DAYS;
extern jlong SF_java_util_concurrent_TimeUnit_C0;
extern jlong SF_java_util_concurrent_TimeUnit_C1;
extern jlong SF_java_util_concurrent_TimeUnit_C2;
extern jlong SF_java_util_concurrent_TimeUnit_C3;
extern jlong SF_java_util_concurrent_TimeUnit_C4;
extern jlong SF_java_util_concurrent_TimeUnit_C5;
extern jlong SF_java_util_concurrent_TimeUnit_C6;
extern jlong SF_java_util_concurrent_TimeUnit_MAX;
extern jobject SF_java_util_concurrent_TimeUnit_$VALUES;

#define VTABLE_java_util_concurrent_TimeUnit_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_TimeUnit_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_TimeUnit_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_TimeUnit_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_TimeUnit_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_TimeUnit_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_TimeUnit_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_finalize 5
typedef void (*func_java_util_concurrent_TimeUnit_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_notify 6
typedef void (*func_java_util_concurrent_TimeUnit_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_notifyAll 7
typedef void (*func_java_util_concurrent_TimeUnit_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_wait 8
typedef void (*func_java_util_concurrent_TimeUnit_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_wait_long 9
typedef void (*func_java_util_concurrent_TimeUnit_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_wait_long_int 10
typedef void (*func_java_util_concurrent_TimeUnit_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_TimeUnit_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_util_concurrent_TimeUnit_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_TimeUnit_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_util_concurrent_TimeUnit_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_TimeUnit_name_R_java_lang_String 13
typedef jobject (*func_java_util_concurrent_TimeUnit_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_ordinal_R_int 14
typedef jint (*func_java_util_concurrent_TimeUnit_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_util_concurrent_TimeUnit_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long 16
typedef jlong (*func_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long 17
typedef jlong (*func_java_util_concurrent_TimeUnit_toNanos_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_toMicros_long_R_long 18
typedef jlong (*func_java_util_concurrent_TimeUnit_toMicros_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long 19
typedef jlong (*func_java_util_concurrent_TimeUnit_toMillis_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_toSeconds_long_R_long 20
typedef jlong (*func_java_util_concurrent_TimeUnit_toSeconds_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_toMinutes_long_R_long 21
typedef jlong (*func_java_util_concurrent_TimeUnit_toMinutes_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_toHours_long_R_long 22
typedef jlong (*func_java_util_concurrent_TimeUnit_toHours_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_toDays_long_R_long 23
typedef jlong (*func_java_util_concurrent_TimeUnit_toDays_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int 24
typedef jint (*func_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long 25
typedef void (*func_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long 26
typedef void (*func_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_util_concurrent_TimeUnit_sleep_long 27
typedef void (*func_java_util_concurrent_TimeUnit_sleep_long)(jcontext ctx, jobject self, jlong param0);

void mark_java_util_concurrent_TimeUnit(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_TimeUnit(jcontext ctx);
jobject SM_java_util_concurrent_TimeUnit_values_R_Array1_java_util_concurrent_TimeUnit(jcontext ctx);
jobject SM_java_util_concurrent_TimeUnit_valueOf_java_lang_String_R_java_util_concurrent_TimeUnit(jcontext ctx, jobject param0);
void init_java_util_concurrent_TimeUnit_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jlong SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2);
jlong M_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1);
jlong M_java_util_concurrent_TimeUnit_toNanos_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit_toMicros_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit_toMillis_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit_toSeconds_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit_toMinutes_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit_toHours_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_TimeUnit_toDays_long_R_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_java_util_concurrent_TimeUnit_sleep_long(jcontext ctx, jobject self, jlong param0);
jobject SM_java_util_concurrent_TimeUnit_$values_R_Array1_java_util_concurrent_TimeUnit(jcontext ctx);
void init_java_util_concurrent_TimeUnit_java_lang_String_int_java_util_concurrent_TimeUnit$1(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
