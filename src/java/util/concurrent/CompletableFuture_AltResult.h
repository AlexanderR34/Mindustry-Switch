#ifndef HEADER_java_util_concurrent_CompletableFuture$AltResult
#define HEADER_java_util_concurrent_CompletableFuture$AltResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_CompletableFuture$AltResult {
	java_lang_Object parent;
	jref F_ex;
} java_util_concurrent_CompletableFuture$AltResult;

extern Class class_java_util_concurrent_CompletableFuture$AltResult;


#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_CompletableFuture$AltResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_CompletableFuture$AltResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_CompletableFuture$AltResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_CompletableFuture$AltResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_CompletableFuture$AltResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_finalize 5
typedef void (*func_java_util_concurrent_CompletableFuture$AltResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_notify 6
typedef void (*func_java_util_concurrent_CompletableFuture$AltResult_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_notifyAll 7
typedef void (*func_java_util_concurrent_CompletableFuture$AltResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_wait 8
typedef void (*func_java_util_concurrent_CompletableFuture$AltResult_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_wait_long 9
typedef void (*func_java_util_concurrent_CompletableFuture$AltResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_CompletableFuture$AltResult_wait_long_int 10
typedef void (*func_java_util_concurrent_CompletableFuture$AltResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_concurrent_CompletableFuture$AltResult(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_CompletableFuture$AltResult(jcontext ctx);
void init_java_util_concurrent_CompletableFuture$AltResult_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
