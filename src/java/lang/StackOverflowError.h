#ifndef HEADER_java_lang_StackOverflowError
#define HEADER_java_lang_StackOverflowError

#include "Clearwing.h"
#include "java/lang/VirtualMachineError.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_StackOverflowError {
	java_lang_VirtualMachineError parent;
} java_lang_StackOverflowError;

extern Class class_java_lang_StackOverflowError;


#define VTABLE_java_lang_StackOverflowError_hashCode_R_int 0
typedef jint (*func_java_lang_StackOverflowError_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_StackOverflowError_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StackOverflowError_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_StackOverflowError_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_StackOverflowError_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_StackOverflowError_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_finalize 5
typedef void (*func_java_lang_StackOverflowError_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_notify 6
typedef void (*func_java_lang_StackOverflowError_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_notifyAll 7
typedef void (*func_java_lang_StackOverflowError_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_wait 8
typedef void (*func_java_lang_StackOverflowError_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_wait_long 9
typedef void (*func_java_lang_StackOverflowError_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StackOverflowError_wait_long_int 10
typedef void (*func_java_lang_StackOverflowError_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_StackOverflowError_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_lang_StackOverflowError_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StackOverflowError_getStack_R_java_lang_String 12
typedef jobject (*func_java_lang_StackOverflowError_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_lang_StackOverflowError_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_getMessage_R_java_lang_String 14
typedef jobject (*func_java_lang_StackOverflowError_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_fillInStack 15
typedef void (*func_java_lang_StackOverflowError_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_lang_StackOverflowError_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_printStackTrace 17
typedef void (*func_java_lang_StackOverflowError_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_lang_StackOverflowError_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StackOverflowError_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_lang_StackOverflowError_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StackOverflowError_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_lang_StackOverflowError_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_lang_StackOverflowError_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StackOverflowError_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_lang_StackOverflowError_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StackOverflowError_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_lang_StackOverflowError_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StackOverflowError_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_lang_StackOverflowError_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_StackOverflowError(jobject object, jint mark, jint depth);
void clinit_java_lang_StackOverflowError(jcontext ctx);
void init_java_lang_StackOverflowError(jcontext ctx, jobject self);
void init_java_lang_StackOverflowError_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
