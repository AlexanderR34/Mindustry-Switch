#ifndef HEADER_rhino_json_JsonParser$ParseException
#define HEADER_rhino_json_JsonParser$ParseException

#include "Clearwing.h"
#include "java/lang/Exception.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_json_JsonParser$ParseException {
	java_lang_Exception parent;
} rhino_json_JsonParser$ParseException;

extern Class class_rhino_json_JsonParser$ParseException;


#define VTABLE_rhino_json_JsonParser$ParseException_hashCode_R_int 0
typedef jint (*func_rhino_json_JsonParser$ParseException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_json_JsonParser$ParseException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser$ParseException_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_json_JsonParser$ParseException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_json_JsonParser$ParseException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_toString_R_java_lang_String 4
typedef jobject (*func_rhino_json_JsonParser$ParseException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_finalize 5
typedef void (*func_rhino_json_JsonParser$ParseException_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_notify 6
typedef void (*func_rhino_json_JsonParser$ParseException_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_notifyAll 7
typedef void (*func_rhino_json_JsonParser$ParseException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_wait 8
typedef void (*func_rhino_json_JsonParser$ParseException_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_wait_long 9
typedef void (*func_rhino_json_JsonParser$ParseException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_json_JsonParser$ParseException_wait_long_int 10
typedef void (*func_rhino_json_JsonParser$ParseException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_json_JsonParser$ParseException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_rhino_json_JsonParser$ParseException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser$ParseException_getStack_R_java_lang_String 12
typedef jobject (*func_rhino_json_JsonParser$ParseException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_rhino_json_JsonParser$ParseException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_getMessage_R_java_lang_String 14
typedef jobject (*func_rhino_json_JsonParser$ParseException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_fillInStack 15
typedef void (*func_rhino_json_JsonParser$ParseException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_rhino_json_JsonParser$ParseException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_printStackTrace 17
typedef void (*func_rhino_json_JsonParser$ParseException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_printStackTrace_java_io_PrintStream 18
typedef void (*func_rhino_json_JsonParser$ParseException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser$ParseException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_rhino_json_JsonParser$ParseException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser$ParseException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_rhino_json_JsonParser$ParseException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_rhino_json_JsonParser$ParseException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser$ParseException_addSuppressed_java_lang_Throwable 22
typedef void (*func_rhino_json_JsonParser$ParseException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_json_JsonParser$ParseException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_rhino_json_JsonParser$ParseException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_rhino_json_JsonParser$ParseException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_rhino_json_JsonParser$ParseException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_json_JsonParser$ParseException(jobject object, jint mark, jint depth);
void clinit_rhino_json_JsonParser$ParseException(jcontext ctx);
void init_rhino_json_JsonParser$ParseException_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_rhino_json_JsonParser$ParseException_java_lang_Exception(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
