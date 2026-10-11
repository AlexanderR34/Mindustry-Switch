#ifndef HEADER_java_nio_InvalidMarkException
#define HEADER_java_nio_InvalidMarkException

#include "Clearwing.h"
#include "java/lang/IllegalStateException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_InvalidMarkException {
	java_lang_IllegalStateException parent;
} java_nio_InvalidMarkException;

extern Class class_java_nio_InvalidMarkException;

extern jlong SF_java_nio_InvalidMarkException_serialVersionUID;

#define VTABLE_java_nio_InvalidMarkException_hashCode_R_int 0
typedef jint (*func_java_nio_InvalidMarkException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_InvalidMarkException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_InvalidMarkException_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_InvalidMarkException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_InvalidMarkException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_InvalidMarkException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_finalize 5
typedef void (*func_java_nio_InvalidMarkException_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_notify 6
typedef void (*func_java_nio_InvalidMarkException_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_notifyAll 7
typedef void (*func_java_nio_InvalidMarkException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_wait 8
typedef void (*func_java_nio_InvalidMarkException_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_wait_long 9
typedef void (*func_java_nio_InvalidMarkException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_InvalidMarkException_wait_long_int 10
typedef void (*func_java_nio_InvalidMarkException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_InvalidMarkException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_nio_InvalidMarkException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_InvalidMarkException_getStack_R_java_lang_String 12
typedef jobject (*func_java_nio_InvalidMarkException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_nio_InvalidMarkException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_getMessage_R_java_lang_String 14
typedef jobject (*func_java_nio_InvalidMarkException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_fillInStack 15
typedef void (*func_java_nio_InvalidMarkException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_nio_InvalidMarkException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_printStackTrace 17
typedef void (*func_java_nio_InvalidMarkException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_nio_InvalidMarkException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_InvalidMarkException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_nio_InvalidMarkException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_InvalidMarkException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_nio_InvalidMarkException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_nio_InvalidMarkException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_InvalidMarkException_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_nio_InvalidMarkException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_InvalidMarkException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_nio_InvalidMarkException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_nio_InvalidMarkException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_nio_InvalidMarkException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_nio_InvalidMarkException(jobject object, jint mark, jint depth);
void clinit_java_nio_InvalidMarkException(jcontext ctx);
void init_java_nio_InvalidMarkException(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
