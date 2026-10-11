#ifndef HEADER_java_net_MalformedURLException
#define HEADER_java_net_MalformedURLException

#include "Clearwing.h"
#include "java/io/IOException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_MalformedURLException {
	java_io_IOException parent;
} java_net_MalformedURLException;

extern Class class_java_net_MalformedURLException;


#define VTABLE_java_net_MalformedURLException_hashCode_R_int 0
typedef jint (*func_java_net_MalformedURLException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_MalformedURLException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_MalformedURLException_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_MalformedURLException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_MalformedURLException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_toString_R_java_lang_String 4
typedef jobject (*func_java_net_MalformedURLException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_finalize 5
typedef void (*func_java_net_MalformedURLException_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_notify 6
typedef void (*func_java_net_MalformedURLException_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_notifyAll 7
typedef void (*func_java_net_MalformedURLException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_wait 8
typedef void (*func_java_net_MalformedURLException_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_wait_long 9
typedef void (*func_java_net_MalformedURLException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_MalformedURLException_wait_long_int 10
typedef void (*func_java_net_MalformedURLException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_MalformedURLException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_net_MalformedURLException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_MalformedURLException_getStack_R_java_lang_String 12
typedef jobject (*func_java_net_MalformedURLException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_net_MalformedURLException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_getMessage_R_java_lang_String 14
typedef jobject (*func_java_net_MalformedURLException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_fillInStack 15
typedef void (*func_java_net_MalformedURLException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_net_MalformedURLException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_printStackTrace 17
typedef void (*func_java_net_MalformedURLException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_net_MalformedURLException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_MalformedURLException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_net_MalformedURLException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_MalformedURLException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_net_MalformedURLException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_net_MalformedURLException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_MalformedURLException_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_net_MalformedURLException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_MalformedURLException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_net_MalformedURLException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_net_MalformedURLException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_net_MalformedURLException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_net_MalformedURLException(jobject object, jint mark, jint depth);
void clinit_java_net_MalformedURLException(jcontext ctx);
void init_java_net_MalformedURLException(jcontext ctx, jobject self);
void init_java_net_MalformedURLException_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
