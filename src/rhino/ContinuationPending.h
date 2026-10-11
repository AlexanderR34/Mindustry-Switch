#ifndef HEADER_rhino_ContinuationPending
#define HEADER_rhino_ContinuationPending

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ContinuationPending {
	java_lang_RuntimeException parent;
	jref F_continuationState;
	jref F_applicationState;
} rhino_ContinuationPending;

extern Class class_rhino_ContinuationPending;


#define VTABLE_rhino_ContinuationPending_hashCode_R_int 0
typedef jint (*func_rhino_ContinuationPending_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ContinuationPending_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ContinuationPending_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ContinuationPending_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ContinuationPending_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_finalize 5
typedef void (*func_rhino_ContinuationPending_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_notify 6
typedef void (*func_rhino_ContinuationPending_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_notifyAll 7
typedef void (*func_rhino_ContinuationPending_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_wait 8
typedef void (*func_rhino_ContinuationPending_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_wait_long 9
typedef void (*func_rhino_ContinuationPending_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ContinuationPending_wait_long_int 10
typedef void (*func_rhino_ContinuationPending_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ContinuationPending_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_rhino_ContinuationPending_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_getStack_R_java_lang_String 12
typedef jobject (*func_rhino_ContinuationPending_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_getCause_R_java_lang_Throwable 13
typedef jobject (*func_rhino_ContinuationPending_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_getMessage_R_java_lang_String 14
typedef jobject (*func_rhino_ContinuationPending_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_fillInStack 15
typedef void (*func_rhino_ContinuationPending_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_rhino_ContinuationPending_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_printStackTrace 17
typedef void (*func_rhino_ContinuationPending_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_printStackTrace_java_io_PrintStream 18
typedef void (*func_rhino_ContinuationPending_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_printStackTrace_java_io_PrintWriter 19
typedef void (*func_rhino_ContinuationPending_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_rhino_ContinuationPending_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_rhino_ContinuationPending_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_addSuppressed_java_lang_Throwable 22
typedef void (*func_rhino_ContinuationPending_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_rhino_ContinuationPending_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_rhino_ContinuationPending_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_getContinuation_R_java_lang_Object 25
typedef jobject (*func_rhino_ContinuationPending_getContinuation_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation 26
typedef void (*func_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation 27
typedef jobject (*func_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContinuationPending_setApplicationState_java_lang_Object 28
typedef void (*func_rhino_ContinuationPending_setApplicationState_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContinuationPending_getApplicationState_R_java_lang_Object 29
typedef jobject (*func_rhino_ContinuationPending_getApplicationState_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_ContinuationPending(jobject object, jint mark, jint depth);
void clinit_rhino_ContinuationPending(jcontext ctx);
void init_rhino_ContinuationPending_rhino_NativeContinuation(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContinuationPending_getContinuation_R_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_ContinuationPending_setContinuation_rhino_NativeContinuation(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContinuationPending_getContinuationState_R_rhino_NativeContinuation(jcontext ctx, jobject self);
void M_rhino_ContinuationPending_setApplicationState_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContinuationPending_getApplicationState_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
