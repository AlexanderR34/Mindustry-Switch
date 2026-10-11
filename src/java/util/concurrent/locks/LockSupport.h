#ifndef HEADER_java_util_concurrent_locks_LockSupport
#define HEADER_java_util_concurrent_locks_LockSupport

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_locks_LockSupport {
	java_lang_Object parent;
} java_util_concurrent_locks_LockSupport;

extern Class class_java_util_concurrent_locks_LockSupport;


#define VTABLE_java_util_concurrent_locks_LockSupport_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_locks_LockSupport_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_locks_LockSupport_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_locks_LockSupport_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_locks_LockSupport_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_locks_LockSupport_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_locks_LockSupport_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_finalize 5
typedef void (*func_java_util_concurrent_locks_LockSupport_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_notify 6
typedef void (*func_java_util_concurrent_locks_LockSupport_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_notifyAll 7
typedef void (*func_java_util_concurrent_locks_LockSupport_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_wait 8
typedef void (*func_java_util_concurrent_locks_LockSupport_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_locks_LockSupport_wait_long 9
typedef void (*func_java_util_concurrent_locks_LockSupport_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_locks_LockSupport_wait_long_int 10
typedef void (*func_java_util_concurrent_locks_LockSupport_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_concurrent_locks_LockSupport(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_locks_LockSupport(jcontext ctx);
void init_java_util_concurrent_locks_LockSupport(jcontext ctx, jobject self);
void SM_java_util_concurrent_locks_LockSupport_setBlocker_java_lang_Thread_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(jcontext ctx, jobject param0);
void SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(jcontext ctx, jobject param0);
void SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(jcontext ctx, jobject param0, jlong param1);
void SM_java_util_concurrent_locks_LockSupport_parkUntil_java_lang_Object_long(jcontext ctx, jobject param0, jlong param1);
jobject SM_java_util_concurrent_locks_LockSupport_getBlocker_java_lang_Thread_R_java_lang_Object(jcontext ctx, jobject param0);
void SM_java_util_concurrent_locks_LockSupport_park(jcontext ctx);
void SM_java_util_concurrent_locks_LockSupport_parkNanos_long(jcontext ctx, jlong param0);
void SM_java_util_concurrent_locks_LockSupport_parkUntil_long(jcontext ctx, jlong param0);
jlong SM_java_util_concurrent_locks_LockSupport_getThreadId_java_lang_Thread_R_long(jcontext ctx, jobject param0);
jint SM_java_util_concurrent_locks_LockSupport_nextSecondarySeed_R_int(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
