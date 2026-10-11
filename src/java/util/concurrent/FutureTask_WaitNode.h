#ifndef HEADER_java_util_concurrent_FutureTask$WaitNode
#define HEADER_java_util_concurrent_FutureTask$WaitNode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_FutureTask$WaitNode {
	java_lang_Object parent;
	volatile jref F_thread;
	volatile jref F_next;
} java_util_concurrent_FutureTask$WaitNode;

extern Class class_java_util_concurrent_FutureTask$WaitNode;


#define VTABLE_java_util_concurrent_FutureTask$WaitNode_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_FutureTask$WaitNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_FutureTask$WaitNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_FutureTask$WaitNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_FutureTask$WaitNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_FutureTask$WaitNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_finalize 5
typedef void (*func_java_util_concurrent_FutureTask$WaitNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_notify 6
typedef void (*func_java_util_concurrent_FutureTask$WaitNode_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_notifyAll 7
typedef void (*func_java_util_concurrent_FutureTask$WaitNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_wait 8
typedef void (*func_java_util_concurrent_FutureTask$WaitNode_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_wait_long 9
typedef void (*func_java_util_concurrent_FutureTask$WaitNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_FutureTask$WaitNode_wait_long_int 10
typedef void (*func_java_util_concurrent_FutureTask$WaitNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_concurrent_FutureTask$WaitNode(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_FutureTask$WaitNode(jcontext ctx);
void init_java_util_concurrent_FutureTask$WaitNode(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
