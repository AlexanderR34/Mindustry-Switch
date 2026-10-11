#ifndef HEADER_java_util_concurrent_FutureTask
#define HEADER_java_util_concurrent_FutureTask

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/RunnableFuture.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_FutureTask {
	java_lang_Object parent;
	volatile jint F_state;
	jref F_callable;
	jref F_outcome;
	volatile jref F_runner;
	volatile jref F_waiters;
} java_util_concurrent_FutureTask;

extern Class class_java_util_concurrent_FutureTask;

extern jint SF_java_util_concurrent_FutureTask_NEW;
extern jint SF_java_util_concurrent_FutureTask_COMPLETING;
extern jint SF_java_util_concurrent_FutureTask_NORMAL;
extern jint SF_java_util_concurrent_FutureTask_EXCEPTIONAL;
extern jint SF_java_util_concurrent_FutureTask_CANCELLED;
extern jint SF_java_util_concurrent_FutureTask_INTERRUPTING;
extern jint SF_java_util_concurrent_FutureTask_INTERRUPTED;

#define VTABLE_java_util_concurrent_FutureTask_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_FutureTask_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_FutureTask_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_FutureTask_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_FutureTask_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_FutureTask_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_FutureTask_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_finalize 5
typedef void (*func_java_util_concurrent_FutureTask_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_notify 6
typedef void (*func_java_util_concurrent_FutureTask_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_notifyAll 7
typedef void (*func_java_util_concurrent_FutureTask_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_wait 8
typedef void (*func_java_util_concurrent_FutureTask_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_wait_long 9
typedef void (*func_java_util_concurrent_FutureTask_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_FutureTask_wait_long_int 10
typedef void (*func_java_util_concurrent_FutureTask_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_FutureTask_run 11
typedef void (*func_java_util_concurrent_FutureTask_run)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_cancel_boolean_R_boolean 12
typedef jbool (*func_java_util_concurrent_FutureTask_cancel_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_concurrent_FutureTask_isCancelled_R_boolean 13
typedef jbool (*func_java_util_concurrent_FutureTask_isCancelled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_isDone_R_boolean 14
typedef jbool (*func_java_util_concurrent_FutureTask_isDone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_get_R_java_lang_Object 15
typedef jobject (*func_java_util_concurrent_FutureTask_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object 16
typedef jobject (*func_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_java_util_concurrent_FutureTask_report_int_R_java_lang_Object 17
typedef jobject (*func_java_util_concurrent_FutureTask_report_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_concurrent_FutureTask_done 18
typedef void (*func_java_util_concurrent_FutureTask_done)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_set_java_lang_Object 19
typedef void (*func_java_util_concurrent_FutureTask_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_FutureTask_setException_java_lang_Throwable 20
typedef void (*func_java_util_concurrent_FutureTask_setException_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_FutureTask_runAndReset_R_boolean 21
typedef jbool (*func_java_util_concurrent_FutureTask_runAndReset_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int 22
typedef void (*func_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_concurrent_FutureTask_finishCompletion 23
typedef void (*func_java_util_concurrent_FutureTask_finishCompletion)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int 24
typedef jint (*func_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int)(jcontext ctx, jobject self, jbool param0, jlong param1);
#define VTABLE_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode 25
typedef void (*func_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_FutureTask(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_FutureTask(jcontext ctx);
jobject M_java_util_concurrent_FutureTask_report_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void init_java_util_concurrent_FutureTask_java_util_concurrent_Callable(jcontext ctx, jobject self, jobject param0);
void init_java_util_concurrent_FutureTask_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_concurrent_FutureTask_isCancelled_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_concurrent_FutureTask_isDone_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_concurrent_FutureTask_cancel_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_java_util_concurrent_FutureTask_get_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_concurrent_FutureTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1);
void M_java_util_concurrent_FutureTask_done(jcontext ctx, jobject self);
void M_java_util_concurrent_FutureTask_set_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_concurrent_FutureTask_setException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_java_util_concurrent_FutureTask_run(jcontext ctx, jobject self);
jbool M_java_util_concurrent_FutureTask_runAndReset_R_boolean(jcontext ctx, jobject self);
void M_java_util_concurrent_FutureTask_handlePossibleCancellationInterrupt_int(jcontext ctx, jobject self, jint param0);
void M_java_util_concurrent_FutureTask_finishCompletion(jcontext ctx, jobject self);
jint M_java_util_concurrent_FutureTask_awaitDone_boolean_long_R_int(jcontext ctx, jobject self, jbool param0, jlong param1);
void M_java_util_concurrent_FutureTask_removeWaiter_java_util_concurrent_FutureTask$WaitNode(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
