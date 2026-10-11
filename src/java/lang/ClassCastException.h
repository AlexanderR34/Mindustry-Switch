#ifndef HEADER_java_lang_ClassCastException
#define HEADER_java_lang_ClassCastException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ClassCastException {
	java_lang_RuntimeException parent;
} java_lang_ClassCastException;

extern Class class_java_lang_ClassCastException;


#define VTABLE_java_lang_ClassCastException_hashCode_R_int 0
typedef jint (*func_java_lang_ClassCastException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ClassCastException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassCastException_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ClassCastException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ClassCastException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ClassCastException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_finalize 5
typedef void (*func_java_lang_ClassCastException_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_notify 6
typedef void (*func_java_lang_ClassCastException_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_notifyAll 7
typedef void (*func_java_lang_ClassCastException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_wait 8
typedef void (*func_java_lang_ClassCastException_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_wait_long 9
typedef void (*func_java_lang_ClassCastException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ClassCastException_wait_long_int 10
typedef void (*func_java_lang_ClassCastException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ClassCastException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_lang_ClassCastException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassCastException_getStack_R_java_lang_String 12
typedef jobject (*func_java_lang_ClassCastException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_lang_ClassCastException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_getMessage_R_java_lang_String 14
typedef jobject (*func_java_lang_ClassCastException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_fillInStack 15
typedef void (*func_java_lang_ClassCastException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_lang_ClassCastException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_printStackTrace 17
typedef void (*func_java_lang_ClassCastException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_lang_ClassCastException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassCastException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_lang_ClassCastException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassCastException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_lang_ClassCastException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_lang_ClassCastException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassCastException_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_lang_ClassCastException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassCastException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_lang_ClassCastException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassCastException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_lang_ClassCastException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_ClassCastException(jobject object, jint mark, jint depth);
void clinit_java_lang_ClassCastException(jcontext ctx);
void init_java_lang_ClassCastException(jcontext ctx, jobject self);
void init_java_lang_ClassCastException_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
