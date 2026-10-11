#ifndef HEADER_java_lang_Process
#define HEADER_java_lang_Process

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Process {
	java_lang_Object parent;
} java_lang_Process;

extern Class class_java_lang_Process;


#define VTABLE_java_lang_Process_hashCode_R_int 0
typedef jint (*func_java_lang_Process_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Process_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Process_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Process_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Process_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Process_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_finalize 5
typedef void (*func_java_lang_Process_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_notify 6
typedef void (*func_java_lang_Process_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_notifyAll 7
typedef void (*func_java_lang_Process_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_wait 8
typedef void (*func_java_lang_Process_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_wait_long 9
typedef void (*func_java_lang_Process_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Process_wait_long_int 10
typedef void (*func_java_lang_Process_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Process_getOutputStream_R_java_io_OutputStream 11
typedef jobject (*func_java_lang_Process_getOutputStream_R_java_io_OutputStream)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_getInputStream_R_java_io_InputStream 12
typedef jobject (*func_java_lang_Process_getInputStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_getErrorStream_R_java_io_InputStream 13
typedef jobject (*func_java_lang_Process_getErrorStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_waitFor_R_int 14
typedef jint (*func_java_lang_Process_waitFor_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean 15
typedef jbool (*func_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_java_lang_Process_exitValue_R_int 16
typedef jint (*func_java_lang_Process_exitValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_destroy 17
typedef void (*func_java_lang_Process_destroy)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_destroyForcibly_R_java_lang_Process 18
typedef jobject (*func_java_lang_Process_destroyForcibly_R_java_lang_Process)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_supportsNormalTermination_R_boolean 19
typedef jbool (*func_java_lang_Process_supportsNormalTermination_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_isAlive_R_boolean 20
typedef jbool (*func_java_lang_Process_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process_pid_R_long 21
typedef jlong (*func_java_lang_Process_pid_R_long)(jcontext ctx, jobject self);

void mark_java_lang_Process(jobject object, jint mark, jint depth);
void clinit_java_lang_Process(jcontext ctx);
void init_java_lang_Process(jcontext ctx, jobject self);
jbool M_java_lang_Process_waitFor_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1);
jobject M_java_lang_Process_destroyForcibly_R_java_lang_Process(jcontext ctx, jobject self);
jbool M_java_lang_Process_supportsNormalTermination_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_Process_isAlive_R_boolean(jcontext ctx, jobject self);
jlong M_java_lang_Process_pid_R_long(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
