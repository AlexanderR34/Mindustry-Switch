#ifndef HEADER_mindustry_game_FogControl$DynamicFogThread
#define HEADER_mindustry_game_FogControl$DynamicFogThread

#include "Clearwing.h"
#include "java/lang/Thread.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_FogControl$DynamicFogThread {
	java_lang_Thread parent;
	jref F_cleared;
	jref F_this$0;
} mindustry_game_FogControl$DynamicFogThread;

extern Class class_mindustry_game_FogControl$DynamicFogThread;


#define VTABLE_mindustry_game_FogControl$DynamicFogThread_hashCode_R_int 0
typedef jint (*func_mindustry_game_FogControl$DynamicFogThread_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_FogControl$DynamicFogThread_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_finalize 5
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_notify 6
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_notifyAll 7
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_wait 8
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_wait_long 9
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_wait_long_int 10
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_run 11
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_run)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getId_R_long 12
typedef jlong (*func_mindustry_game_FogControl$DynamicFogThread_getId_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getName_R_java_lang_String 13
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_setName_java_lang_String 14
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getPriority_R_int 15
typedef jint (*func_mindustry_game_FogControl$DynamicFogThread_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_interrupt 16
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_interrupt)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_isAlive_R_boolean 17
typedef jbool (*func_mindustry_game_FogControl$DynamicFogThread_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_isInterrupted_R_boolean 18
typedef jbool (*func_mindustry_game_FogControl$DynamicFogThread_isInterrupted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_isDaemon_R_boolean 19
typedef jbool (*func_mindustry_game_FogControl$DynamicFogThread_isDaemon_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_setDaemon_boolean 20
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_setDaemon_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_join 21
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_join)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_join_long 22
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_join_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_join_long_int 23
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_join_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_setPriority_int 24
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_setPriority_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_start 25
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_stop 26
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_suspend 27
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_suspend)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_resume 28
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getStackTrace_R_Array1_java_lang_StackTraceElement 29
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_setContextClassLoader_java_lang_ClassLoader 30
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_setContextClassLoader_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getContextClassLoader_R_java_lang_ClassLoader 31
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getContextClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler 32
typedef void (*func_mindustry_game_FogControl$DynamicFogThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler 33
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getState_R_java_lang_Thread$State 34
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getState_R_java_lang_Thread$State)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$DynamicFogThread_getThreadGroup_R_java_lang_ThreadGroup 35
typedef jobject (*func_mindustry_game_FogControl$DynamicFogThread_getThreadGroup_R_java_lang_ThreadGroup)(jcontext ctx, jobject self);

void mark_mindustry_game_FogControl$DynamicFogThread(jobject object, jint mark, jint depth);
void clinit_mindustry_game_FogControl$DynamicFogThread(jcontext ctx);
void init_mindustry_game_FogControl$DynamicFogThread_mindustry_game_FogControl(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl$DynamicFogThread_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
