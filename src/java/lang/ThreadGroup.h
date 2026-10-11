#ifndef HEADER_java_lang_ThreadGroup
#define HEADER_java_lang_ThreadGroup

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ThreadGroup {
	java_lang_Object parent;
	jref F_parent;
	jref F_name;
	jint F_maxPriority;
	jbool F_destroyed;
	jbool F_daemon;
	jint F_nUnstartedThreads;
	jint F_nthreads;
	jref F_threads;
	jint F_ngroups;
	jref F_groups;
} java_lang_ThreadGroup;

extern Class class_java_lang_ThreadGroup;


#define VTABLE_java_lang_ThreadGroup_hashCode_R_int 0
typedef jint (*func_java_lang_ThreadGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ThreadGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ThreadGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ThreadGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ThreadGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_finalize 5
typedef void (*func_java_lang_ThreadGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_notify 6
typedef void (*func_java_lang_ThreadGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_notifyAll 7
typedef void (*func_java_lang_ThreadGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_wait 8
typedef void (*func_java_lang_ThreadGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_wait_long 9
typedef void (*func_java_lang_ThreadGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ThreadGroup_wait_long_int 10
typedef void (*func_java_lang_ThreadGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable 11
typedef void (*func_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_ThreadGroup_getName_R_java_lang_String 12
typedef jobject (*func_java_lang_ThreadGroup_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup 13
typedef jobject (*func_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_getMaxPriority_R_int 14
typedef jint (*func_java_lang_ThreadGroup_getMaxPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_isDaemon_R_boolean 15
typedef jbool (*func_java_lang_ThreadGroup_isDaemon_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_isDestroyed_R_boolean 16
typedef jbool (*func_java_lang_ThreadGroup_isDestroyed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_setDaemon_boolean 17
typedef void (*func_java_lang_ThreadGroup_setDaemon_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_ThreadGroup_setMaxPriority_int 18
typedef void (*func_java_lang_ThreadGroup_setMaxPriority_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean 19
typedef jbool (*func_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_checkAccess 20
typedef void (*func_java_lang_ThreadGroup_checkAccess)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_activeCount_R_int 21
typedef jint (*func_java_lang_ThreadGroup_activeCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int 22
typedef jint (*func_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int 23
typedef jint (*func_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int 24
typedef jint (*func_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_java_lang_ThreadGroup_activeGroupCount_R_int 25
typedef jint (*func_java_lang_ThreadGroup_activeGroupCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int 26
typedef jint (*func_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int 27
typedef jint (*func_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int 28
typedef jint (*func_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_java_lang_ThreadGroup_stop 29
typedef void (*func_java_lang_ThreadGroup_stop)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_interrupt 30
typedef void (*func_java_lang_ThreadGroup_interrupt)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_suspend 31
typedef void (*func_java_lang_ThreadGroup_suspend)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean 32
typedef jbool (*func_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_ThreadGroup_resume 33
typedef void (*func_java_lang_ThreadGroup_resume)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_destroy 34
typedef void (*func_java_lang_ThreadGroup_destroy)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_add_java_lang_ThreadGroup 35
typedef void (*func_java_lang_ThreadGroup_add_java_lang_ThreadGroup)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_remove_java_lang_ThreadGroup 36
typedef void (*func_java_lang_ThreadGroup_remove_java_lang_ThreadGroup)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_addUnstarted 37
typedef void (*func_java_lang_ThreadGroup_addUnstarted)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_add_java_lang_Thread 38
typedef void (*func_java_lang_ThreadGroup_add_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread 39
typedef void (*func_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_threadTerminated_java_lang_Thread 40
typedef void (*func_java_lang_ThreadGroup_threadTerminated_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_remove_java_lang_Thread 41
typedef void (*func_java_lang_ThreadGroup_remove_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadGroup_list 42
typedef void (*func_java_lang_ThreadGroup_list)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadGroup_list_java_io_PrintStream_int 43
typedef void (*func_java_lang_ThreadGroup_list_java_io_PrintStream_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean 44
typedef jbool (*func_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_java_lang_ThreadGroup(jobject object, jint mark, jint depth);
void clinit_java_lang_ThreadGroup(jcontext ctx);
void init_java_lang_ThreadGroup(jcontext ctx, jobject self);
void init_java_lang_ThreadGroup_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_lang_ThreadGroup_java_lang_ThreadGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_lang_ThreadGroup_java_lang_Void_java_lang_ThreadGroup_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_java_lang_ThreadGroup_checkParentAccess_java_lang_ThreadGroup_R_java_lang_Void(jcontext ctx, jobject param0);
jobject M_java_lang_ThreadGroup_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_ThreadGroup_getParent_R_java_lang_ThreadGroup(jcontext ctx, jobject self);
jint M_java_lang_ThreadGroup_getMaxPriority_R_int(jcontext ctx, jobject self);
jbool M_java_lang_ThreadGroup_isDaemon_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_ThreadGroup_isDestroyed_R_boolean(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_setDaemon_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_lang_ThreadGroup_setMaxPriority_int(jcontext ctx, jobject self, jint param0);
jbool M_java_lang_ThreadGroup_parentOf_java_lang_ThreadGroup_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_checkAccess(jcontext ctx, jobject self);
jint M_java_lang_ThreadGroup_activeCount_R_int(jcontext ctx, jobject self);
jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_Thread_int_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
jint M_java_lang_ThreadGroup_activeGroupCount_R_int(jcontext ctx, jobject self);
jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_java_lang_ThreadGroup_enumerate_Array1_java_lang_ThreadGroup_int_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
void M_java_lang_ThreadGroup_stop(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_interrupt(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_suspend(jcontext ctx, jobject self);
jbool M_java_lang_ThreadGroup_stopOrSuspend_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_lang_ThreadGroup_resume(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_destroy(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_add_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_remove_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_addUnstarted(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_add_java_lang_Thread(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_threadStartFailed_java_lang_Thread(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_threadTerminated_java_lang_Thread(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_remove_java_lang_Thread(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadGroup_list(jcontext ctx, jobject self);
void M_java_lang_ThreadGroup_list_java_io_PrintStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_lang_ThreadGroup_uncaughtException_java_lang_Thread_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_lang_ThreadGroup_allowThreadSuspension_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_java_lang_ThreadGroup_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
