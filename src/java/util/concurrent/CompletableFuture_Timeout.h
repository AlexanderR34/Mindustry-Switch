#ifndef HEADER_java_util_concurrent_CompletableFuture$Timeout
#define HEADER_java_util_concurrent_CompletableFuture$Timeout

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_CompletableFuture$Timeout {
	java_lang_Object parent;
	jref F_f;
} java_util_concurrent_CompletableFuture$Timeout;

extern Class class_java_util_concurrent_CompletableFuture$Timeout;


#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_CompletableFuture$Timeout_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_CompletableFuture$Timeout_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_CompletableFuture$Timeout_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_CompletableFuture$Timeout_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_CompletableFuture$Timeout_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_finalize 5
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_notify 6
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_notifyAll 7
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_wait 8
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_wait_long 9
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_wait_long_int 10
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_CompletableFuture$Timeout_run 11
typedef void (*func_java_util_concurrent_CompletableFuture$Timeout_run)(jcontext ctx, jobject self);

void mark_java_util_concurrent_CompletableFuture$Timeout(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_CompletableFuture$Timeout(jcontext ctx);
void init_java_util_concurrent_CompletableFuture$Timeout_java_util_concurrent_CompletableFuture(jcontext ctx, jobject self, jobject param0);
void M_java_util_concurrent_CompletableFuture$Timeout_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
