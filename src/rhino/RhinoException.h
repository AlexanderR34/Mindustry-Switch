#ifndef HEADER_rhino_RhinoException
#define HEADER_rhino_RhinoException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_RhinoException {
	java_lang_RuntimeException parent;
	jref F_sourceName;
	jint F_lineNumber;
	jref F_lineSource;
	jint F_columnNumber;
	jref F_interpreterStackInfo;
	jref F_interpreterLineData;
} rhino_RhinoException;

extern Class class_rhino_RhinoException;

extern jobject SF_rhino_RhinoException_JAVA_STACK_PATTERN;
extern jobject SF_rhino_RhinoException_stackStyle;

#define VTABLE_rhino_RhinoException_hashCode_R_int 0
typedef jint (*func_rhino_RhinoException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_RhinoException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_RhinoException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_RhinoException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_toString_R_java_lang_String 4
typedef jobject (*func_rhino_RhinoException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_finalize 5
typedef void (*func_rhino_RhinoException_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_notify 6
typedef void (*func_rhino_RhinoException_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_notifyAll 7
typedef void (*func_rhino_RhinoException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_wait 8
typedef void (*func_rhino_RhinoException_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_wait_long 9
typedef void (*func_rhino_RhinoException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_RhinoException_wait_long_int 10
typedef void (*func_rhino_RhinoException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_RhinoException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_rhino_RhinoException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_getStack_R_java_lang_String 12
typedef jobject (*func_rhino_RhinoException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_rhino_RhinoException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getMessage_R_java_lang_String 14
typedef jobject (*func_rhino_RhinoException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_fillInStack 15
typedef void (*func_rhino_RhinoException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_rhino_RhinoException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_printStackTrace 17
typedef void (*func_rhino_RhinoException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_printStackTrace_java_io_PrintStream 18
typedef void (*func_rhino_RhinoException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_rhino_RhinoException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_rhino_RhinoException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_rhino_RhinoException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_addSuppressed_java_lang_Throwable 22
typedef void (*func_rhino_RhinoException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_rhino_RhinoException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_rhino_RhinoException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_details_R_java_lang_String 25
typedef jobject (*func_rhino_RhinoException_details_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_sourceName_R_java_lang_String 26
typedef jobject (*func_rhino_RhinoException_sourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_initSourceName_java_lang_String 27
typedef void (*func_rhino_RhinoException_initSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_lineNumber_R_int 28
typedef jint (*func_rhino_RhinoException_lineNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_initLineNumber_int 29
typedef void (*func_rhino_RhinoException_initLineNumber_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_RhinoException_columnNumber_R_int 30
typedef jint (*func_rhino_RhinoException_columnNumber_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_initColumnNumber_int 31
typedef void (*func_rhino_RhinoException_initColumnNumber_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_RhinoException_lineSource_R_java_lang_String 32
typedef jobject (*func_rhino_RhinoException_lineSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_initLineSource_java_lang_String 33
typedef void (*func_rhino_RhinoException_initLineSource_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int 34
typedef void (*func_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_RhinoException_generateStackTrace_R_java_lang_String 35
typedef jobject (*func_rhino_RhinoException_generateStackTrace_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getScriptStackTrace_R_java_lang_String 36
typedef jobject (*func_rhino_RhinoException_getScriptStackTrace_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String 37
typedef jobject (*func_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement 38
typedef jobject (*func_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement 39
typedef jobject (*func_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_rhino_RhinoException(jobject object, jint mark, jint depth);
void clinit_rhino_RhinoException(jcontext ctx);
void init_rhino_RhinoException(jcontext ctx, jobject self);
void init_rhino_RhinoException_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_RhinoException_getMessage_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_RhinoException_details_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_RhinoException_sourceName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_RhinoException_initSourceName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_rhino_RhinoException_lineNumber_R_int(jcontext ctx, jobject self);
void M_rhino_RhinoException_initLineNumber_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_RhinoException_columnNumber_R_int(jcontext ctx, jobject self);
void M_rhino_RhinoException_initColumnNumber_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_RhinoException_lineSource_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_RhinoException_initLineSource_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_RhinoException_recordErrorOrigin_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
jobject M_rhino_RhinoException_generateStackTrace_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_RhinoException_getScriptStackTrace_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_RhinoException_getScriptStackTrace_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jobject SM_rhino_RhinoException_formatStackTrace_Array1_rhino_ScriptStackElement_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject M_rhino_RhinoException_getScriptStack_R_Array1_rhino_ScriptStackElement(jcontext ctx, jobject self);
jobject M_rhino_RhinoException_getScriptStack_int_java_lang_String_R_Array1_rhino_ScriptStackElement(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_RhinoException_printStackTrace_java_io_PrintWriter(jcontext ctx, jobject self, jobject param0);
void M_rhino_RhinoException_printStackTrace_java_io_PrintStream(jcontext ctx, jobject self, jobject param0);
jbool SM_rhino_RhinoException_usesMozillaStackStyle_R_boolean(jcontext ctx);
void SM_rhino_RhinoException_useMozillaStackStyle_boolean(jcontext ctx, jbool param0);
void SM_rhino_RhinoException_setStackStyle_rhino_StackStyle(jcontext ctx, jobject param0);
jobject SM_rhino_RhinoException_getStackStyle_R_rhino_StackStyle(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
