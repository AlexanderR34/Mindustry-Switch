#ifndef HEADER_rhino_JavaScriptException
#define HEADER_rhino_JavaScriptException

#include "Clearwing.h"
#include "rhino/RhinoException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_JavaScriptException {
	rhino_RhinoException parent;
	jref F_value;
} rhino_JavaScriptException;

extern Class class_rhino_JavaScriptException;


#define VTABLE_rhino_JavaScriptException_hashCode_R_int 0
typedef jint (*func_rhino_JavaScriptException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_JavaScriptException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_JavaScriptException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_JavaScriptException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_toString_R_java_lang_String 4
typedef jobject (*func_rhino_JavaScriptException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_finalize 5
typedef void (*func_rhino_JavaScriptException_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_notify 6
typedef void (*func_rhino_JavaScriptException_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_notifyAll 7
typedef void (*func_rhino_JavaScriptException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_wait 8
typedef void (*func_rhino_JavaScriptException_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_wait_long 9
typedef void (*func_rhino_JavaScriptException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_JavaScriptException_wait_long_int 10
typedef void (*func_rhino_JavaScriptException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_JavaScriptException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_rhino_JavaScriptException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_getStack_R_java_lang_String 12
typedef jobject (*func_rhino_JavaScriptException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_rhino_JavaScriptException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getMessage_R_java_lang_String 14
typedef jobject (*func_rhino_JavaScriptException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_fillInStack 15
typedef void (*func_rhino_JavaScriptException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_rhino_JavaScriptException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_printStackTrace 17
typedef void (*func_rhino_JavaScriptException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_printStackTrace_java_io_PrintStream 18
typedef void (*func_rhino_JavaScriptException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_rhino_JavaScriptException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_rhino_JavaScriptException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_rhino_JavaScriptException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_addSuppressed_java_lang_Throwable 22
typedef void (*func_rhino_JavaScriptException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_rhino_JavaScriptException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_rhino_JavaScriptException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_details_R_java_lang_String 25
typedef jobject (*func_rhino_JavaScriptException_details_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_sourceName_R_java_lang_String 26
typedef jobject (*func_rhino_JavaScriptException_sourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_initSourceName_java_lang_String 27
typedef void (*func_rhino_JavaScriptException_initSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_lineNumber_R_int 28
typedef jint (*func_rhino_JavaScriptException_lineNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_initLineNumber_int 29
typedef void (*func_rhino_JavaScriptException_initLineNumber_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_JavaScriptException_columnNumber_R_int 30
typedef jint (*func_rhino_JavaScriptException_columnNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_initColumnNumber_int 31
typedef void (*func_rhino_JavaScriptException_initColumnNumber_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_JavaScriptException_lineSource_R_java_lang_String 32
typedef jobject (*func_rhino_JavaScriptException_lineSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_initLineSource_java_lang_String 33
typedef void (*func_rhino_JavaScriptException_initLineSource_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaScriptException_recordErrorOrigin_java_lang_String_int_java_lang_String_int 34
typedef void (*func_rhino_JavaScriptException_recordErrorOrigin_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_JavaScriptException_generateStackTrace_R_java_lang_String 35
typedef jobject (*func_rhino_JavaScriptException_generateStackTrace_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getScriptStackTrace_R_java_lang_String 36
typedef jobject (*func_rhino_JavaScriptException_getScriptStackTrace_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getScriptStackTrace_int_java_lang_String_R_java_lang_String 37
typedef jobject (*func_rhino_JavaScriptException_getScriptStackTrace_int_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_JavaScriptException_getScriptStack_R_Array1_rhino_ScriptStackElement 38
typedef jobject (*func_rhino_JavaScriptException_getScriptStack_R_Array1_rhino_ScriptStackElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaScriptException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement 39
typedef jobject (*func_rhino_JavaScriptException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_JavaScriptException_getValue_R_java_lang_Object 40
typedef jobject (*func_rhino_JavaScriptException_getValue_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_JavaScriptException(jobject object, jint mark, jint depth);
void clinit_rhino_JavaScriptException(jcontext ctx);
void init_rhino_JavaScriptException_java_lang_Object_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_JavaScriptException_details_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_JavaScriptException_getValue_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
