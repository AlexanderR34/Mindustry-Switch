#ifndef HEADER_java_util_concurrent_ForkJoinTask$ExceptionNode
#define HEADER_java_util_concurrent_ForkJoinTask$ExceptionNode

#include "Clearwing.h"
#include "java/lang/ref/WeakReference.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ForkJoinTask$ExceptionNode {
	java_lang_ref_WeakReference parent;
	jref F_ex;
	jref F_next;
	jlong F_thrower;
	jint F_hashCode;
} java_util_concurrent_ForkJoinTask$ExceptionNode;

extern Class class_java_util_concurrent_ForkJoinTask$ExceptionNode;


#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_finalize 5
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_notify 6
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_notifyAll 7
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_wait 8
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_wait_long 9
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_wait_long_int 10
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_clear 11
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object 12
typedef jobject (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_refersTo_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_refersTo_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_ForkJoinTask$ExceptionNode_init_java_lang_Object 14
typedef void (*func_java_util_concurrent_ForkJoinTask$ExceptionNode_init_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_ForkJoinTask$ExceptionNode(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ForkJoinTask$ExceptionNode(jcontext ctx);
void init_java_util_concurrent_ForkJoinTask$ExceptionNode_java_util_concurrent_ForkJoinTask_java_lang_Throwable_java_util_concurrent_ForkJoinTask$ExceptionNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
