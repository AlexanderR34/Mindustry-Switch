#ifndef HEADER_mindustry_audio_SoundControl$AudioThread
#define HEADER_mindustry_audio_SoundControl$AudioThread

#include "Clearwing.h"
#include "java/lang/Thread.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_audio_SoundControl$AudioThread {
	java_lang_Thread parent;
	volatile jbool F_running;
	jref F_sources;
	jref F_inputSources;
	jref F_sounds;
	jref F_localData;
	jref F_outputData;
} mindustry_audio_SoundControl$AudioThread;

extern Class class_mindustry_audio_SoundControl$AudioThread;

extern jint SF_mindustry_audio_SoundControl$AudioThread_targetFps;
extern jlong SF_mindustry_audio_SoundControl$AudioThread_targetNanos;

#define VTABLE_mindustry_audio_SoundControl$AudioThread_hashCode_R_int 0
typedef jint (*func_mindustry_audio_SoundControl$AudioThread_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_audio_SoundControl$AudioThread_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_finalize 5
typedef void (*func_mindustry_audio_SoundControl$AudioThread_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_notify 6
typedef void (*func_mindustry_audio_SoundControl$AudioThread_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_notifyAll 7
typedef void (*func_mindustry_audio_SoundControl$AudioThread_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_wait 8
typedef void (*func_mindustry_audio_SoundControl$AudioThread_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_wait_long 9
typedef void (*func_mindustry_audio_SoundControl$AudioThread_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_wait_long_int 10
typedef void (*func_mindustry_audio_SoundControl$AudioThread_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_run 11
typedef void (*func_mindustry_audio_SoundControl$AudioThread_run)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getId_R_long 12
typedef jlong (*func_mindustry_audio_SoundControl$AudioThread_getId_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getName_R_java_lang_String 13
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_setName_java_lang_String 14
typedef void (*func_mindustry_audio_SoundControl$AudioThread_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getPriority_R_int 15
typedef jint (*func_mindustry_audio_SoundControl$AudioThread_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_interrupt 16
typedef void (*func_mindustry_audio_SoundControl$AudioThread_interrupt)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_isAlive_R_boolean 17
typedef jbool (*func_mindustry_audio_SoundControl$AudioThread_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_isInterrupted_R_boolean 18
typedef jbool (*func_mindustry_audio_SoundControl$AudioThread_isInterrupted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_isDaemon_R_boolean 19
typedef jbool (*func_mindustry_audio_SoundControl$AudioThread_isDaemon_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_setDaemon_boolean 20
typedef void (*func_mindustry_audio_SoundControl$AudioThread_setDaemon_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_join 21
typedef void (*func_mindustry_audio_SoundControl$AudioThread_join)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_join_long 22
typedef void (*func_mindustry_audio_SoundControl$AudioThread_join_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_join_long_int 23
typedef void (*func_mindustry_audio_SoundControl$AudioThread_join_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_setPriority_int 24
typedef void (*func_mindustry_audio_SoundControl$AudioThread_setPriority_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_start 25
typedef void (*func_mindustry_audio_SoundControl$AudioThread_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_stop 26
typedef void (*func_mindustry_audio_SoundControl$AudioThread_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_suspend 27
typedef void (*func_mindustry_audio_SoundControl$AudioThread_suspend)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_resume 28
typedef void (*func_mindustry_audio_SoundControl$AudioThread_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getStackTrace_R_Array1_java_lang_StackTraceElement 29
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_setContextClassLoader_java_lang_ClassLoader 30
typedef void (*func_mindustry_audio_SoundControl$AudioThread_setContextClassLoader_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getContextClassLoader_R_java_lang_ClassLoader 31
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getContextClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler 32
typedef void (*func_mindustry_audio_SoundControl$AudioThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler 33
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getState_R_java_lang_Thread$State 34
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getState_R_java_lang_Thread$State)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_getThreadGroup_R_java_lang_ThreadGroup 35
typedef jobject (*func_mindustry_audio_SoundControl$AudioThread_getThreadGroup_R_java_lang_ThreadGroup)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$AudioThread_doLoop 36
typedef void (*func_mindustry_audio_SoundControl$AudioThread_doLoop)(jcontext ctx, jobject self);

void mark_mindustry_audio_SoundControl$AudioThread(jobject object, jint mark, jint depth);
void clinit_mindustry_audio_SoundControl$AudioThread(jcontext ctx);
void init_mindustry_audio_SoundControl$AudioThread(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl$AudioThread_doLoop(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl$AudioThread_run(jcontext ctx, jobject self);
void SM_mindustry_audio_SoundControl$AudioThread_lambda$doLoop$0_arc_audio_Sound_mindustry_audio_SoundControl$SoundData(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
