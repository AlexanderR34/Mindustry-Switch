#ifndef HEADER_arc_util_Timer$TimerThread
#define HEADER_arc_util_Timer$TimerThread

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Timer$TimerThread {
	java_lang_Object parent;
	jref F_files;
	jref F_instances;
	jref F_instance;
	jlong F_pauseMillis;
} arc_util_Timer$TimerThread;

extern Class class_arc_util_Timer$TimerThread;


#define VTABLE_arc_util_Timer$TimerThread_hashCode_R_int 0
typedef jint (*func_arc_util_Timer$TimerThread_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Timer$TimerThread_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Timer$TimerThread_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Timer$TimerThread_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Timer$TimerThread_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Timer$TimerThread_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_finalize 5
typedef void (*func_arc_util_Timer$TimerThread_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_notify 6
typedef void (*func_arc_util_Timer$TimerThread_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_notifyAll 7
typedef void (*func_arc_util_Timer$TimerThread_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_wait 8
typedef void (*func_arc_util_Timer$TimerThread_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_wait_long 9
typedef void (*func_arc_util_Timer$TimerThread_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Timer$TimerThread_wait_long_int 10
typedef void (*func_arc_util_Timer$TimerThread_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Timer$TimerThread_run 11
typedef void (*func_arc_util_Timer$TimerThread_run)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_init 12
typedef void (*func_arc_util_Timer$TimerThread_init)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_resize_int_int 13
typedef void (*func_arc_util_Timer$TimerThread_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_util_Timer$TimerThread_update 14
typedef void (*func_arc_util_Timer$TimerThread_update)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_pause 15
typedef void (*func_arc_util_Timer$TimerThread_pause)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_resume 16
typedef void (*func_arc_util_Timer$TimerThread_resume)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_dispose 17
typedef void (*func_arc_util_Timer$TimerThread_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_exit 18
typedef void (*func_arc_util_Timer$TimerThread_exit)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timer$TimerThread_fileDropped_arc_files_Fi 19
typedef void (*func_arc_util_Timer$TimerThread_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_Timer$TimerThread(jobject object, jint mark, jint depth);
void clinit_arc_util_Timer$TimerThread(jcontext ctx);
void init_arc_util_Timer$TimerThread(jcontext ctx, jobject self);
void M_arc_util_Timer$TimerThread_run(jcontext ctx, jobject self);
void M_arc_util_Timer$TimerThread_resume(jcontext ctx, jobject self);
void M_arc_util_Timer$TimerThread_pause(jcontext ctx, jobject self);
void M_arc_util_Timer$TimerThread_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
