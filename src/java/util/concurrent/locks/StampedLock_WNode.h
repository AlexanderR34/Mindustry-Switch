#ifndef HEADER_java_util_concurrent_locks_StampedLock$WNode
#define HEADER_java_util_concurrent_locks_StampedLock$WNode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_locks_StampedLock$WNode {
	java_lang_Object parent;
	volatile jref F_prev;
	volatile jref F_next;
	volatile jref F_cowait;
	volatile jref F_thread;
	volatile jint F_status;
	jint F_mode;
} java_util_concurrent_locks_StampedLock$WNode;

extern Class class_java_util_concurrent_locks_StampedLock$WNode;


#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_locks_StampedLock$WNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_locks_StampedLock$WNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_locks_StampedLock$WNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_locks_StampedLock$WNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_locks_StampedLock$WNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_finalize 5
typedef void (*func_java_util_concurrent_locks_StampedLock$WNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_notify 6
typedef void (*func_java_util_concurrent_locks_StampedLock$WNode_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_notifyAll 7
typedef void (*func_java_util_concurrent_locks_StampedLock$WNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_wait 8
typedef void (*func_java_util_concurrent_locks_StampedLock$WNode_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_wait_long 9
typedef void (*func_java_util_concurrent_locks_StampedLock$WNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_locks_StampedLock$WNode_wait_long_int 10
typedef void (*func_java_util_concurrent_locks_StampedLock$WNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_concurrent_locks_StampedLock$WNode(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_locks_StampedLock$WNode(jcontext ctx);
void init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
