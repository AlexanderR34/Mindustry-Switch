#ifndef HEADER_java_util_concurrent_CompletableFuture$Canceller
#define HEADER_java_util_concurrent_CompletableFuture$Canceller

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/function/BiConsumer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_CompletableFuture$Canceller {
	java_lang_Object parent;
	jref F_f;
} java_util_concurrent_CompletableFuture$Canceller;

extern Class class_java_util_concurrent_CompletableFuture$Canceller;


#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_CompletableFuture$Canceller_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_CompletableFuture$Canceller_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_CompletableFuture$Canceller_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_CompletableFuture$Canceller_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_CompletableFuture$Canceller_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_finalize 5
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_notify 6
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_notifyAll 7
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_wait 8
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_wait_long 9
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_wait_long_int 10
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object 11
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_andThen_java_util_function_BiConsumer_R_java_util_function_BiConsumer 12
typedef jobject (*func_java_util_concurrent_CompletableFuture$Canceller_andThen_java_util_function_BiConsumer_R_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_lambda$andThen$0_java_util_function_BiConsumer_java_lang_Object_java_lang_Object 13
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_lambda$andThen$0_java_util_function_BiConsumer_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable 14
typedef void (*func_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_concurrent_CompletableFuture$Canceller(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_CompletableFuture$Canceller(jcontext ctx);
void init_java_util_concurrent_CompletableFuture$Canceller_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0);
void M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_concurrent_CompletableFuture$Canceller_accept_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
