#ifndef HEADER_java_lang_RuntimeException
#define HEADER_java_lang_RuntimeException

#include "Clearwing.h"
#include "java/lang/Exception.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_RuntimeException {
	java_lang_Exception parent;
} java_lang_RuntimeException;

extern Class class_java_lang_RuntimeException;


#define VTABLE_java_lang_RuntimeException_hashCode_R_int 0
typedef jint (*func_java_lang_RuntimeException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_RuntimeException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_RuntimeException_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_RuntimeException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_RuntimeException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_RuntimeException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_finalize 5
typedef void (*func_java_lang_RuntimeException_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_notify 6
typedef void (*func_java_lang_RuntimeException_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_notifyAll 7
typedef void (*func_java_lang_RuntimeException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_wait 8
typedef void (*func_java_lang_RuntimeException_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_wait_long 9
typedef void (*func_java_lang_RuntimeException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_RuntimeException_wait_long_int 10
typedef void (*func_java_lang_RuntimeException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_RuntimeException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_lang_RuntimeException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_RuntimeException_getStack_R_java_lang_String 12
typedef jobject (*func_java_lang_RuntimeException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_lang_RuntimeException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_getMessage_R_java_lang_String 14
typedef jobject (*func_java_lang_RuntimeException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_fillInStack 15
typedef void (*func_java_lang_RuntimeException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_lang_RuntimeException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_printStackTrace 17
typedef void (*func_java_lang_RuntimeException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_lang_RuntimeException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_RuntimeException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_lang_RuntimeException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_RuntimeException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_lang_RuntimeException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_lang_RuntimeException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_RuntimeException_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_lang_RuntimeException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_RuntimeException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_lang_RuntimeException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_lang_RuntimeException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_lang_RuntimeException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_RuntimeException(jobject object, jint mark, jint depth);
void clinit_java_lang_RuntimeException(jcontext ctx);
void init_java_lang_RuntimeException(jcontext ctx, jobject self);
void init_java_lang_RuntimeException_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_lang_RuntimeException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3);

#ifdef __cplusplus
}
#endif

#endif
