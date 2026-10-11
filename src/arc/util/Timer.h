#ifndef HEADER_arc_util_Timer
#define HEADER_arc_util_Timer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Timer {
	java_lang_Object parent;
	jref F_tasks;
} arc_util_Timer;

extern Class class_arc_util_Timer;

extern jobject SF_arc_util_Timer_threadLock;
extern jobject SF_arc_util_Timer_thread;

#define VTABLE_arc_util_Timer_hashCode_R_int 0
typedef jint (*func_arc_util_Timer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Timer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Timer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Timer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Timer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Timer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_finalize 5
typedef void (*func_arc_util_Timer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_notify 6
typedef void (*func_arc_util_Timer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_notifyAll 7
typedef void (*func_arc_util_Timer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_wait 8
typedef void (*func_arc_util_Timer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_wait_long 9
typedef void (*func_arc_util_Timer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Timer_wait_long_int 10
typedef void (*func_arc_util_Timer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task 11
typedef jobject (*func_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task 12
typedef jobject (*func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task 13
typedef jobject (*func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task 14
typedef jobject (*func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_util_Timer_stop 15
typedef void (*func_arc_util_Timer_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_start 16
typedef void (*func_arc_util_Timer_start)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_clear 17
typedef void (*func_arc_util_Timer_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_isEmpty_R_boolean 18
typedef jbool (*func_arc_util_Timer_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer_update_long_long_R_long 19
typedef jlong (*func_arc_util_Timer_update_long_long_R_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_arc_util_Timer_delay_long 20
typedef void (*func_arc_util_Timer_delay_long)(jcontext ctx, jobject self, jlong param0);

void mark_arc_util_Timer(jobject object, jint mark, jint depth);
void clinit_arc_util_Timer(jcontext ctx);
void init_arc_util_Timer(jcontext ctx, jobject self);
jobject SM_arc_util_Timer_instance_R_arc_util_Timer(jcontext ctx);
jobject SM_arc_util_Timer_thread_R_arc_util_Timer$TimerThread(jcontext ctx);
jobject SM_arc_util_Timer_post_arc_util_Timer$Task_R_arc_util_Timer$Task(jcontext ctx, jobject param0);
jobject SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1);
jobject SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jobject SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jint param3);
jobject SM_arc_util_Timer_schedule_java_lang_Runnable_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1);
jobject SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jobject SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_int_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jint param3);
jobject M_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
void M_arc_util_Timer_stop(jcontext ctx, jobject self);
void M_arc_util_Timer_start(jcontext ctx, jobject self);
void M_arc_util_Timer_clear(jcontext ctx, jobject self);
jbool M_arc_util_Timer_isEmpty_R_boolean(jcontext ctx, jobject self);
jlong M_arc_util_Timer_update_long_long_R_long(jcontext ctx, jobject self, jlong param0, jlong param1);
void M_arc_util_Timer_delay_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
