#ifndef HEADER_arc_util_PerformanceCounter
#define HEADER_arc_util_PerformanceCounter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_PerformanceCounter {
	java_lang_Object parent;
	jref F_time;
	jref F_load;
	jref F_name;
	jfloat F_current;
	jbool F_valid;
	jlong F_startTime;
	jlong F_lastTick;
} arc_util_PerformanceCounter;

extern Class class_arc_util_PerformanceCounter;

extern jfloat SF_arc_util_PerformanceCounter_nano2seconds;

#define VTABLE_arc_util_PerformanceCounter_hashCode_R_int 0
typedef jint (*func_arc_util_PerformanceCounter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_PerformanceCounter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_PerformanceCounter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_PerformanceCounter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_PerformanceCounter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_PerformanceCounter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_finalize 5
typedef void (*func_arc_util_PerformanceCounter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_notify 6
typedef void (*func_arc_util_PerformanceCounter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_notifyAll 7
typedef void (*func_arc_util_PerformanceCounter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_wait 8
typedef void (*func_arc_util_PerformanceCounter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_wait_long 9
typedef void (*func_arc_util_PerformanceCounter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_PerformanceCounter_wait_long_int 10
typedef void (*func_arc_util_PerformanceCounter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_PerformanceCounter_tick 11
typedef void (*func_arc_util_PerformanceCounter_tick)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_tick_float 12
typedef void (*func_arc_util_PerformanceCounter_tick_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_util_PerformanceCounter_start 13
typedef void (*func_arc_util_PerformanceCounter_start)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_stop 14
typedef void (*func_arc_util_PerformanceCounter_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_reset 15
typedef void (*func_arc_util_PerformanceCounter_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder 16
typedef jobject (*func_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int 17
typedef void (*func_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_arc_util_PerformanceCounter(jobject object, jint mark, jint depth);
void clinit_arc_util_PerformanceCounter(jcontext ctx);
void init_arc_util_PerformanceCounter_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_util_PerformanceCounter_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_util_PerformanceCounter_tick(jcontext ctx, jobject self);
void M_arc_util_PerformanceCounter_tick_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_util_PerformanceCounter_start(jcontext ctx, jobject self);
void M_arc_util_PerformanceCounter_stop(jcontext ctx, jobject self);
void M_arc_util_PerformanceCounter_reset(jcontext ctx, jobject self);
jobject M_arc_util_PerformanceCounter_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
void M_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
