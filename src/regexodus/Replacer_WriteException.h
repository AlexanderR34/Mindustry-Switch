#ifndef HEADER_regexodus_Replacer$WriteException
#define HEADER_regexodus_Replacer$WriteException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Replacer$WriteException {
	java_lang_RuntimeException parent;
	jref F_reason;
} regexodus_Replacer$WriteException;

extern Class class_regexodus_Replacer$WriteException;


#define VTABLE_regexodus_Replacer$WriteException_hashCode_R_int 0
typedef jint (*func_regexodus_Replacer$WriteException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Replacer$WriteException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$WriteException_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Replacer$WriteException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Replacer$WriteException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Replacer$WriteException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_finalize 5
typedef void (*func_regexodus_Replacer$WriteException_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_notify 6
typedef void (*func_regexodus_Replacer$WriteException_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_notifyAll 7
typedef void (*func_regexodus_Replacer$WriteException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_wait 8
typedef void (*func_regexodus_Replacer$WriteException_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_wait_long 9
typedef void (*func_regexodus_Replacer$WriteException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Replacer$WriteException_wait_long_int 10
typedef void (*func_regexodus_Replacer$WriteException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Replacer$WriteException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_regexodus_Replacer$WriteException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$WriteException_getStack_R_java_lang_String 12
typedef jobject (*func_regexodus_Replacer$WriteException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_regexodus_Replacer$WriteException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_getMessage_R_java_lang_String 14
typedef jobject (*func_regexodus_Replacer$WriteException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_fillInStack 15
typedef void (*func_regexodus_Replacer$WriteException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_regexodus_Replacer$WriteException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_printStackTrace 17
typedef void (*func_regexodus_Replacer$WriteException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_printStackTrace_java_io_PrintStream 18
typedef void (*func_regexodus_Replacer$WriteException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$WriteException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_regexodus_Replacer$WriteException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$WriteException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_regexodus_Replacer$WriteException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_regexodus_Replacer$WriteException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$WriteException_addSuppressed_java_lang_Throwable 22
typedef void (*func_regexodus_Replacer$WriteException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Replacer$WriteException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_regexodus_Replacer$WriteException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Replacer$WriteException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_regexodus_Replacer$WriteException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_regexodus_Replacer$WriteException(jobject object, jint mark, jint depth);
void clinit_regexodus_Replacer$WriteException(jcontext ctx);
void init_regexodus_Replacer$WriteException_java_io_IOException(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
