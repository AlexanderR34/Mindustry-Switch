#ifndef HEADER_java_util_EmptyStackException
#define HEADER_java_util_EmptyStackException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_EmptyStackException {
	java_lang_RuntimeException parent;
} java_util_EmptyStackException;

extern Class class_java_util_EmptyStackException;


#define VTABLE_java_util_EmptyStackException_hashCode_R_int 0
typedef jint (*func_java_util_EmptyStackException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_EmptyStackException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EmptyStackException_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_EmptyStackException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_EmptyStackException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_toString_R_java_lang_String 4
typedef jobject (*func_java_util_EmptyStackException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_finalize 5
typedef void (*func_java_util_EmptyStackException_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_notify 6
typedef void (*func_java_util_EmptyStackException_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_notifyAll 7
typedef void (*func_java_util_EmptyStackException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_wait 8
typedef void (*func_java_util_EmptyStackException_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_wait_long 9
typedef void (*func_java_util_EmptyStackException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_EmptyStackException_wait_long_int 10
typedef void (*func_java_util_EmptyStackException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_EmptyStackException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_util_EmptyStackException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EmptyStackException_getStack_R_java_lang_String 12
typedef jobject (*func_java_util_EmptyStackException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_util_EmptyStackException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_getMessage_R_java_lang_String 14
typedef jobject (*func_java_util_EmptyStackException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_fillInStack 15
typedef void (*func_java_util_EmptyStackException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_util_EmptyStackException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_printStackTrace 17
typedef void (*func_java_util_EmptyStackException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_util_EmptyStackException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EmptyStackException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_util_EmptyStackException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EmptyStackException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_util_EmptyStackException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_util_EmptyStackException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EmptyStackException_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_util_EmptyStackException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EmptyStackException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_util_EmptyStackException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_util_EmptyStackException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_util_EmptyStackException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_util_EmptyStackException(jobject object, jint mark, jint depth);
void clinit_java_util_EmptyStackException(jcontext ctx);
void init_java_util_EmptyStackException(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
