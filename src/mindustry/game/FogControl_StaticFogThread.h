#ifndef HEADER_mindustry_game_FogControl$StaticFogThread
#define HEADER_mindustry_game_FogControl$StaticFogThread

#include "Clearwing.h"
#include "java/lang/Thread.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_FogControl$StaticFogThread {
	java_lang_Thread parent;
	jref F_this$0;
} mindustry_game_FogControl$StaticFogThread;

extern Class class_mindustry_game_FogControl$StaticFogThread;


#define VTABLE_mindustry_game_FogControl$StaticFogThread_hashCode_R_int 0
typedef jint (*func_mindustry_game_FogControl$StaticFogThread_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_FogControl$StaticFogThread_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_finalize 5
typedef void (*func_mindustry_game_FogControl$StaticFogThread_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_notify 6
typedef void (*func_mindustry_game_FogControl$StaticFogThread_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_notifyAll 7
typedef void (*func_mindustry_game_FogControl$StaticFogThread_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_wait 8
typedef void (*func_mindustry_game_FogControl$StaticFogThread_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_wait_long 9
typedef void (*func_mindustry_game_FogControl$StaticFogThread_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_wait_long_int 10
typedef void (*func_mindustry_game_FogControl$StaticFogThread_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_run 11
typedef void (*func_mindustry_game_FogControl$StaticFogThread_run)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getId_R_long 12
typedef jlong (*func_mindustry_game_FogControl$StaticFogThread_getId_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getName_R_java_lang_String 13
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_setName_java_lang_String 14
typedef void (*func_mindustry_game_FogControl$StaticFogThread_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getPriority_R_int 15
typedef jint (*func_mindustry_game_FogControl$StaticFogThread_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_interrupt 16
typedef void (*func_mindustry_game_FogControl$StaticFogThread_interrupt)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_isAlive_R_boolean 17
typedef jbool (*func_mindustry_game_FogControl$StaticFogThread_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_isInterrupted_R_boolean 18
typedef jbool (*func_mindustry_game_FogControl$StaticFogThread_isInterrupted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_isDaemon_R_boolean 19
typedef jbool (*func_mindustry_game_FogControl$StaticFogThread_isDaemon_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_setDaemon_boolean 20
typedef void (*func_mindustry_game_FogControl$StaticFogThread_setDaemon_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_join 21
typedef void (*func_mindustry_game_FogControl$StaticFogThread_join)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_join_long 22
typedef void (*func_mindustry_game_FogControl$StaticFogThread_join_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_join_long_int 23
typedef void (*func_mindustry_game_FogControl$StaticFogThread_join_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_setPriority_int 24
typedef void (*func_mindustry_game_FogControl$StaticFogThread_setPriority_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_start 25
typedef void (*func_mindustry_game_FogControl$StaticFogThread_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_stop 26
typedef void (*func_mindustry_game_FogControl$StaticFogThread_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_suspend 27
typedef void (*func_mindustry_game_FogControl$StaticFogThread_suspend)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_resume 28
typedef void (*func_mindustry_game_FogControl$StaticFogThread_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getStackTrace_R_Array1_java_lang_StackTraceElement 29
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_setContextClassLoader_java_lang_ClassLoader 30
typedef void (*func_mindustry_game_FogControl$StaticFogThread_setContextClassLoader_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getContextClassLoader_R_java_lang_ClassLoader 31
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getContextClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler 32
typedef void (*func_mindustry_game_FogControl$StaticFogThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler 33
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getState_R_java_lang_Thread$State 34
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getState_R_java_lang_Thread$State)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_FogControl$StaticFogThread_getThreadGroup_R_java_lang_ThreadGroup 35
typedef jobject (*func_mindustry_game_FogControl$StaticFogThread_getThreadGroup_R_java_lang_ThreadGroup)(jcontext ctx, jobject self);

void mark_mindustry_game_FogControl$StaticFogThread(jobject object, jint mark, jint depth);
void clinit_mindustry_game_FogControl$StaticFogThread(jcontext ctx);
void init_mindustry_game_FogControl$StaticFogThread_mindustry_game_FogControl(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_FogControl$StaticFogThread_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
