#ifndef HEADER_java_util_concurrent_CompletableFuture$TaskSubmitter
#define HEADER_java_util_concurrent_CompletableFuture$TaskSubmitter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_CompletableFuture$TaskSubmitter {
	java_lang_Object parent;
	jref F_executor;
	jref F_action;
} java_util_concurrent_CompletableFuture$TaskSubmitter;

extern Class class_java_util_concurrent_CompletableFuture$TaskSubmitter;


#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_finalize 5
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_notify 6
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_notifyAll 7
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_wait 8
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_wait_long 9
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_wait_long_int 10
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_CompletableFuture$TaskSubmitter_run 11
typedef void (*func_java_util_concurrent_CompletableFuture$TaskSubmitter_run)(jcontext ctx, jobject self);

void mark_java_util_concurrent_CompletableFuture$TaskSubmitter(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_CompletableFuture$TaskSubmitter(jcontext ctx);
void init_java_util_concurrent_CompletableFuture$TaskSubmitter_java_util_concurrent_Executor_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_concurrent_CompletableFuture$TaskSubmitter_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
