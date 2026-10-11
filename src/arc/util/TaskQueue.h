#ifndef HEADER_arc_util_TaskQueue
#define HEADER_arc_util_TaskQueue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_TaskQueue {
	java_lang_Object parent;
	jref F_runnables;
	jref F_executedRunnables;
} arc_util_TaskQueue;

extern Class class_arc_util_TaskQueue;


#define VTABLE_arc_util_TaskQueue_hashCode_R_int 0
typedef jint (*func_arc_util_TaskQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_TaskQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_TaskQueue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_TaskQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_TaskQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_TaskQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_finalize 5
typedef void (*func_arc_util_TaskQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_notify 6
typedef void (*func_arc_util_TaskQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_notifyAll 7
typedef void (*func_arc_util_TaskQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_wait 8
typedef void (*func_arc_util_TaskQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_wait_long 9
typedef void (*func_arc_util_TaskQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_TaskQueue_wait_long_int 10
typedef void (*func_arc_util_TaskQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_TaskQueue_run 11
typedef void (*func_arc_util_TaskQueue_run)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_size_R_int 12
typedef jint (*func_arc_util_TaskQueue_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_clear 13
typedef void (*func_arc_util_TaskQueue_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_util_TaskQueue_post_java_lang_Runnable 14
typedef void (*func_arc_util_TaskQueue_post_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_TaskQueue(jobject object, jint mark, jint depth);
void clinit_arc_util_TaskQueue(jcontext ctx);
void init_arc_util_TaskQueue(jcontext ctx, jobject self);
void M_arc_util_TaskQueue_run(jcontext ctx, jobject self);
jint M_arc_util_TaskQueue_size_R_int(jcontext ctx, jobject self);
void M_arc_util_TaskQueue_clear(jcontext ctx, jobject self);
void M_arc_util_TaskQueue_post_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
