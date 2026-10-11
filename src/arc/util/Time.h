#ifndef HEADER_arc_util_Time
#define HEADER_arc_util_Time

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Time {
	java_lang_Object parent;
} arc_util_Time;

extern Class class_arc_util_Time;

extern jfloat SF_arc_util_Time_toSeconds;
extern jfloat SF_arc_util_Time_toMinutes;
extern jfloat SF_arc_util_Time_toHours;
extern jfloat SF_arc_util_Time_delta;
extern jfloat SF_arc_util_Time_time;
extern jfloat SF_arc_util_Time_globalTime;
extern jlong SF_arc_util_Time_nanosPerMilli;
extern jdouble SF_arc_util_Time_timeRaw;
extern jdouble SF_arc_util_Time_globalTimeRaw;
extern jobject SF_arc_util_Time_runs;
extern jobject SF_arc_util_Time_removal;
extern jobject SF_arc_util_Time_marks;
extern jobject SF_arc_util_Time_deltaimpl;

#define VTABLE_arc_util_Time_hashCode_R_int 0
typedef jint (*func_arc_util_Time_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Time_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Time_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Time_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Time_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Time_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_finalize 5
typedef void (*func_arc_util_Time_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_notify 6
typedef void (*func_arc_util_Time_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_notifyAll 7
typedef void (*func_arc_util_Time_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_wait 8
typedef void (*func_arc_util_Time_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time_wait_long 9
typedef void (*func_arc_util_Time_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Time_wait_long_int 10
typedef void (*func_arc_util_Time_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Time(jobject object, jint mark, jint depth);
void clinit_arc_util_Time(jcontext ctx);
void init_arc_util_Time(jcontext ctx, jobject self);
jobject SM_arc_util_Time_getRuns_R_arc_struct_Seq(jcontext ctx);
void SM_arc_util_Time_setRuns_arc_struct_Seq(jcontext ctx, jobject param0);
void SM_arc_util_Time_run_float_java_lang_Runnable(jcontext ctx, jfloat param0, jobject param1);
jobject SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(jcontext ctx, jfloat param0, jobject param1);
void SM_arc_util_Time_mark(jcontext ctx);
jfloat SM_arc_util_Time_elapsed_R_float(jcontext ctx);
void SM_arc_util_Time_updateGlobal(jcontext ctx);
void SM_arc_util_Time_update(jcontext ctx);
jdouble SM_arc_util_Time_getInternalTime_R_double(jcontext ctx);
void SM_arc_util_Time_setInternalTime_double(jcontext ctx, jdouble param0);
void SM_arc_util_Time_clear(jcontext ctx);
void SM_arc_util_Time_setDeltaProvider_arc_func_Floatp(jcontext ctx, jobject param0);
jlong SM_arc_util_Time_nanos_R_long(jcontext ctx);
jlong SM_arc_util_Time_millis_R_long(jcontext ctx);
jlong SM_arc_util_Time_nanosToMillis_long_R_long(jcontext ctx, jlong param0);
jlong SM_arc_util_Time_millisToNanos_long_R_long(jcontext ctx, jlong param0);
jlong SM_arc_util_Time_timeSinceNanos_long_R_long(jcontext ctx, jlong param0);
jlong SM_arc_util_Time_timeSinceMillis_long_R_long(jcontext ctx, jlong param0);
jfloat SM_arc_util_Time_lambda$static$0_R_float(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
