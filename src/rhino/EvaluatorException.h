#ifndef HEADER_rhino_EvaluatorException
#define HEADER_rhino_EvaluatorException

#include "Clearwing.h"
#include "rhino/RhinoException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_EvaluatorException {
	rhino_RhinoException parent;
} rhino_EvaluatorException;

extern Class class_rhino_EvaluatorException;


#define VTABLE_rhino_EvaluatorException_hashCode_R_int 0
typedef jint (*func_rhino_EvaluatorException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_EvaluatorException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_EvaluatorException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_EvaluatorException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_toString_R_java_lang_String 4
typedef jobject (*func_rhino_EvaluatorException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_finalize 5
typedef void (*func_rhino_EvaluatorException_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_notify 6
typedef void (*func_rhino_EvaluatorException_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_notifyAll 7
typedef void (*func_rhino_EvaluatorException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_wait 8
typedef void (*func_rhino_EvaluatorException_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_wait_long 9
typedef void (*func_rhino_EvaluatorException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_EvaluatorException_wait_long_int 10
typedef void (*func_rhino_EvaluatorException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_EvaluatorException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_rhino_EvaluatorException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_getStack_R_java_lang_String 12
typedef jobject (*func_rhino_EvaluatorException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_rhino_EvaluatorException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getMessage_R_java_lang_String 14
typedef jobject (*func_rhino_EvaluatorException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_fillInStack 15
typedef void (*func_rhino_EvaluatorException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_rhino_EvaluatorException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_printStackTrace 17
typedef void (*func_rhino_EvaluatorException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_printStackTrace_java_io_PrintStream 18
typedef void (*func_rhino_EvaluatorException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_rhino_EvaluatorException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_rhino_EvaluatorException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_rhino_EvaluatorException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_addSuppressed_java_lang_Throwable 22
typedef void (*func_rhino_EvaluatorException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_rhino_EvaluatorException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_rhino_EvaluatorException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_details_R_java_lang_String 25
typedef jobject (*func_rhino_EvaluatorException_details_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_sourceName_R_java_lang_String 26
typedef jobject (*func_rhino_EvaluatorException_sourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_initSourceName_java_lang_String 27
typedef void (*func_rhino_EvaluatorException_initSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_lineNumber_R_int 28
typedef jint (*func_rhino_EvaluatorException_lineNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_initLineNumber_int 29
typedef void (*func_rhino_EvaluatorException_initLineNumber_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_EvaluatorException_columnNumber_R_int 30
typedef jint (*func_rhino_EvaluatorException_columnNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_initColumnNumber_int 31
typedef void (*func_rhino_EvaluatorException_initColumnNumber_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_EvaluatorException_lineSource_R_java_lang_String 32
typedef jobject (*func_rhino_EvaluatorException_lineSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_initLineSource_java_lang_String 33
typedef void (*func_rhino_EvaluatorException_initLineSource_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_EvaluatorException_recordErrorOrigin_java_lang_String_int_java_lang_String_int 34
typedef void (*func_rhino_EvaluatorException_recordErrorOrigin_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_EvaluatorException_generateStackTrace_R_java_lang_String 35
typedef jobject (*func_rhino_EvaluatorException_generateStackTrace_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getScriptStackTrace_R_java_lang_String 36
typedef jobject (*func_rhino_EvaluatorException_getScriptStackTrace_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getScriptStackTrace_int_java_lang_String_R_java_lang_String 37
typedef jobject (*func_rhino_EvaluatorException_getScriptStackTrace_int_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_EvaluatorException_getScriptStack_R_Array1_rhino_ScriptStackElement 38
typedef jobject (*func_rhino_EvaluatorException_getScriptStack_R_Array1_rhino_ScriptStackElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_EvaluatorException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement 39
typedef jobject (*func_rhino_EvaluatorException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_rhino_EvaluatorException(jobject object, jint mark, jint depth);
void clinit_rhino_EvaluatorException(jcontext ctx);
void init_rhino_EvaluatorException_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_rhino_EvaluatorException_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void init_rhino_EvaluatorException_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
