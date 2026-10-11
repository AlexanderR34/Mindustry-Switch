#ifndef HEADER_rhino_Parser$ParserException
#define HEADER_rhino_Parser$ParserException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Parser$ParserException {
	java_lang_RuntimeException parent;
} rhino_Parser$ParserException;

extern Class class_rhino_Parser$ParserException;


#define VTABLE_rhino_Parser$ParserException_hashCode_R_int 0
typedef jint (*func_rhino_Parser$ParserException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Parser$ParserException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ParserException_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Parser$ParserException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Parser$ParserException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Parser$ParserException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_finalize 5
typedef void (*func_rhino_Parser$ParserException_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_notify 6
typedef void (*func_rhino_Parser$ParserException_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_notifyAll 7
typedef void (*func_rhino_Parser$ParserException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_wait 8
typedef void (*func_rhino_Parser$ParserException_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_wait_long 9
typedef void (*func_rhino_Parser$ParserException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Parser$ParserException_wait_long_int 10
typedef void (*func_rhino_Parser$ParserException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Parser$ParserException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_rhino_Parser$ParserException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ParserException_getStack_R_java_lang_String 12
typedef jobject (*func_rhino_Parser$ParserException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_rhino_Parser$ParserException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_getMessage_R_java_lang_String 14
typedef jobject (*func_rhino_Parser$ParserException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_fillInStack 15
typedef void (*func_rhino_Parser$ParserException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_rhino_Parser$ParserException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_printStackTrace 17
typedef void (*func_rhino_Parser$ParserException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_printStackTrace_java_io_PrintStream 18
typedef void (*func_rhino_Parser$ParserException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ParserException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_rhino_Parser$ParserException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ParserException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_rhino_Parser$ParserException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_rhino_Parser$ParserException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ParserException_addSuppressed_java_lang_Throwable 22
typedef void (*func_rhino_Parser$ParserException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ParserException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_rhino_Parser$ParserException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ParserException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_rhino_Parser$ParserException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_Parser$ParserException(jobject object, jint mark, jint depth);
void clinit_rhino_Parser$ParserException(jcontext ctx);
void init_rhino_Parser$ParserException(jcontext ctx, jobject self);
void init_rhino_Parser$ParserException_rhino_Parser$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
