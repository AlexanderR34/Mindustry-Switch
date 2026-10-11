#ifndef HEADER_java_lang_ref_ReferenceQueue
#define HEADER_java_lang_ref_ReferenceQueue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ref_ReferenceQueue {
	java_lang_Object parent;
	jref F_head;
} java_lang_ref_ReferenceQueue;

extern Class class_java_lang_ref_ReferenceQueue;

extern jint SF_java_lang_ref_ReferenceQueue_NANOS_PER_MILLI;
extern jobject SF_java_lang_ref_ReferenceQueue_unenqueued;

#define VTABLE_java_lang_ref_ReferenceQueue_hashCode_R_int 0
typedef jint (*func_java_lang_ref_ReferenceQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ref_ReferenceQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ref_ReferenceQueue_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ref_ReferenceQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ref_ReferenceQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ref_ReferenceQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_finalize 5
typedef void (*func_java_lang_ref_ReferenceQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_notify 6
typedef void (*func_java_lang_ref_ReferenceQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_notifyAll 7
typedef void (*func_java_lang_ref_ReferenceQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_wait 8
typedef void (*func_java_lang_ref_ReferenceQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_wait_long 9
typedef void (*func_java_lang_ref_ReferenceQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ref_ReferenceQueue_wait_long_int 10
typedef void (*func_java_lang_ref_ReferenceQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference 11
typedef jobject (*func_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference 12
typedef jobject (*func_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference 13
typedef jobject (*func_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference 14
typedef void (*func_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_ref_ReferenceQueue(jobject object, jint mark, jint depth);
void clinit_java_lang_ref_ReferenceQueue(jcontext ctx);
void init_java_lang_ref_ReferenceQueue(jcontext ctx, jobject self);
jobject M_java_lang_ref_ReferenceQueue_poll_R_java_lang_ref_Reference(jcontext ctx, jobject self);
jobject M_java_lang_ref_ReferenceQueue_remove_R_java_lang_ref_Reference(jcontext ctx, jobject self);
jobject M_java_lang_ref_ReferenceQueue_remove_long_R_java_lang_ref_Reference(jcontext ctx, jobject self, jlong param0);
void M_java_lang_ref_ReferenceQueue_enqueue_java_lang_ref_Reference(jcontext ctx, jobject self, jobject param0);
void SM_java_lang_ref_ReferenceQueue_add_java_lang_ref_Reference(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
