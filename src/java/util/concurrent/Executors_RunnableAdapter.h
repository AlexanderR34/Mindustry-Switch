#ifndef HEADER_java_util_concurrent_Executors$RunnableAdapter
#define HEADER_java_util_concurrent_Executors$RunnableAdapter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/Callable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Executors$RunnableAdapter {
	java_lang_Object parent;
	jref F_task;
	jref F_result;
} java_util_concurrent_Executors$RunnableAdapter;

extern Class class_java_util_concurrent_Executors$RunnableAdapter;


#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_Executors$RunnableAdapter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_Executors$RunnableAdapter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_Executors$RunnableAdapter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_Executors$RunnableAdapter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_Executors$RunnableAdapter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_finalize 5
typedef void (*func_java_util_concurrent_Executors$RunnableAdapter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_notify 6
typedef void (*func_java_util_concurrent_Executors$RunnableAdapter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_notifyAll 7
typedef void (*func_java_util_concurrent_Executors$RunnableAdapter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_wait 8
typedef void (*func_java_util_concurrent_Executors$RunnableAdapter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_wait_long 9
typedef void (*func_java_util_concurrent_Executors$RunnableAdapter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_wait_long_int 10
typedef void (*func_java_util_concurrent_Executors$RunnableAdapter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object 11
typedef jobject (*func_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_concurrent_Executors$RunnableAdapter(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Executors$RunnableAdapter(jcontext ctx);
void init_java_util_concurrent_Executors$RunnableAdapter_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_concurrent_Executors$RunnableAdapter_call_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
