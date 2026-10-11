#ifndef HEADER_java_lang_Thread
#define HEADER_java_lang_Thread

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Thread {
	java_lang_Object parent;
	jref F_target;
	volatile jbool F_alive;
	jref F_name;
	jlong F_entrypoint;
	volatile jbool F_interrupted;
	jlong F_id;
	volatile jbool F_started;
	jlong F_nativeContext;
	volatile jref F_uncaughtExceptionHandler;
} java_lang_Thread;

extern Class class_java_lang_Thread;

extern jint SF_java_lang_Thread_MAX_PRIORITY;
extern jint SF_java_lang_Thread_MIN_PRIORITY;
extern jint SF_java_lang_Thread_NORM_PRIORITY;
extern jlong SF_java_lang_Thread_currentId;
extern volatile jint SF_java_lang_Thread_activeThreads;
extern volatile jobject SF_java_lang_Thread_defaultUncaughtExceptionHandler;
extern jobject SF_java_lang_Thread_threads;

#define VTABLE_java_lang_Thread_hashCode_R_int 0
typedef jint (*func_java_lang_Thread_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Thread_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Thread_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Thread_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Thread_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_finalize 5
typedef void (*func_java_lang_Thread_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_notify 6
typedef void (*func_java_lang_Thread_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_notifyAll 7
typedef void (*func_java_lang_Thread_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_wait 8
typedef void (*func_java_lang_Thread_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_wait_long 9
typedef void (*func_java_lang_Thread_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Thread_wait_long_int 10
typedef void (*func_java_lang_Thread_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Thread_run 11
typedef void (*func_java_lang_Thread_run)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_getId_R_long 12
typedef jlong (*func_java_lang_Thread_getId_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_getName_R_java_lang_String 13
typedef jobject (*func_java_lang_Thread_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_setName_java_lang_String 14
typedef void (*func_java_lang_Thread_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread_getPriority_R_int 15
typedef jint (*func_java_lang_Thread_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_interrupt 16
typedef void (*func_java_lang_Thread_interrupt)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_isAlive_R_boolean 17
typedef jbool (*func_java_lang_Thread_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_isInterrupted_R_boolean 18
typedef jbool (*func_java_lang_Thread_isInterrupted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_isDaemon_R_boolean 19
typedef jbool (*func_java_lang_Thread_isDaemon_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_setDaemon_boolean 20
typedef void (*func_java_lang_Thread_setDaemon_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_Thread_join 21
typedef void (*func_java_lang_Thread_join)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_join_long 22
typedef void (*func_java_lang_Thread_join_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Thread_join_long_int 23
typedef void (*func_java_lang_Thread_join_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Thread_setPriority_int 24
typedef void (*func_java_lang_Thread_setPriority_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_Thread_start 25
typedef void (*func_java_lang_Thread_start)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_stop 26
typedef void (*func_java_lang_Thread_stop)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_suspend 27
typedef void (*func_java_lang_Thread_suspend)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_resume 28
typedef void (*func_java_lang_Thread_resume)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement 29
typedef jobject (*func_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader 30
typedef void (*func_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader 31
typedef jobject (*func_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler 32
typedef void (*func_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler 33
typedef jobject (*func_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_getState_R_java_lang_Thread$State 34
typedef jobject (*func_java_lang_Thread_getState_R_java_lang_Thread$State)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup 35
typedef jobject (*func_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup)(jcontext ctx, jobject self);

void mark_java_lang_Thread(jobject object, jint mark, jint depth);
void clinit_java_lang_Thread(jcontext ctx);
void init_java_lang_Thread(jcontext ctx, jobject self);
void init_java_lang_Thread_long(jcontext ctx, jobject self, jlong param0);
void init_java_lang_Thread_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void init_java_lang_Thread_java_lang_Runnable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_lang_Thread_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint SM_java_lang_Thread_activeCount_R_int(jcontext ctx);
jlong M_java_lang_Thread_getId_R_long(jcontext ctx, jobject self);
jobject SM_java_lang_Thread_currentThread_R_java_lang_Thread(jcontext ctx);
jobject M_java_lang_Thread_getName_R_java_lang_String(jcontext ctx, jobject self);
void M_java_lang_Thread_setName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Thread_getPriority_R_int(jcontext ctx, jobject self);
void M_java_lang_Thread_interrupt(jcontext ctx, jobject self);
jbool M_java_lang_Thread_isAlive_R_boolean(jcontext ctx, jobject self);
jbool SM_java_lang_Thread_interrupted_R_boolean(jcontext ctx);
jbool M_java_lang_Thread_isInterrupted_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_Thread_isDaemon_R_boolean(jcontext ctx, jobject self);
void M_java_lang_Thread_setDaemon_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_lang_Thread_join(jcontext ctx, jobject self);
void M_java_lang_Thread_join_long(jcontext ctx, jobject self, jlong param0);
void M_java_lang_Thread_join_long_int(jcontext ctx, jobject self, jlong param0, jint param1);
void M_java_lang_Thread_run(jcontext ctx, jobject self);
void M_java_lang_Thread_setPriority_int(jcontext ctx, jobject self, jint param0);
void SM_java_lang_Thread_sleep_long(jcontext ctx, jlong param0);
void SM_java_lang_Thread_sleep_long_int(jcontext ctx, jlong param0, jint param1);
void SM_java_lang_Thread_sleepImpl_long_int(jcontext ctx, jlong param0, jint param1);
void M_java_lang_Thread_start(jcontext ctx, jobject self);
void M_java_lang_Thread_stop(jcontext ctx, jobject self);
void M_java_lang_Thread_suspend(jcontext ctx, jobject self);
void M_java_lang_Thread_resume(jcontext ctx, jobject self);
jobject M_java_lang_Thread_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement(jcontext ctx, jobject self);
void SM_java_lang_Thread_yield(jcontext ctx);
void M_java_lang_Thread_finalize(jcontext ctx, jobject self);
void M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self);
void M_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject self, jobject param0);
void SM_java_lang_Thread_setDefaultUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject param0);
jobject M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject self);
jobject SM_java_lang_Thread_getDefaultUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx);
jobject M_java_lang_Thread_getState_R_java_lang_Thread$State(jcontext ctx, jobject self);
jobject M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
