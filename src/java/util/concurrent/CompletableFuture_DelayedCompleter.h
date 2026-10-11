#ifndef HEADER_java_util_concurrent_CompletableFuture$DelayedCompleter
#define HEADER_java_util_concurrent_CompletableFuture$DelayedCompleter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_CompletableFuture$DelayedCompleter {
	java_lang_Object parent;
	jref F_f;
	jref F_u;
} java_util_concurrent_CompletableFuture$DelayedCompleter;

extern Class class_java_util_concurrent_CompletableFuture$DelayedCompleter;


#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_finalize 5
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_notify 6
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_notifyAll 7
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_wait 8
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_wait_long 9
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_wait_long_int 10
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_CompletableFuture$DelayedCompleter_run 11
typedef void (*func_java_util_concurrent_CompletableFuture$DelayedCompleter_run)(jcontext ctx, jobject self);

void mark_java_util_concurrent_CompletableFuture$DelayedCompleter(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_CompletableFuture$DelayedCompleter(jcontext ctx);
void init_java_util_concurrent_CompletableFuture$DelayedCompleter_java_util_concurrent_CompletableFuture_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_concurrent_CompletableFuture$DelayedCompleter_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
