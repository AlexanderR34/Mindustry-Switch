#ifndef HEADER_java_net_ProtocolException
#define HEADER_java_net_ProtocolException

#include "Clearwing.h"
#include "java/io/IOException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_ProtocolException {
	java_io_IOException parent;
} java_net_ProtocolException;

extern Class class_java_net_ProtocolException;

extern jlong SF_java_net_ProtocolException_serialVersionUID;

#define VTABLE_java_net_ProtocolException_hashCode_R_int 0
typedef jint (*func_java_net_ProtocolException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_ProtocolException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ProtocolException_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_ProtocolException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_ProtocolException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_toString_R_java_lang_String 4
typedef jobject (*func_java_net_ProtocolException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_finalize 5
typedef void (*func_java_net_ProtocolException_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_notify 6
typedef void (*func_java_net_ProtocolException_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_notifyAll 7
typedef void (*func_java_net_ProtocolException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_wait 8
typedef void (*func_java_net_ProtocolException_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_wait_long 9
typedef void (*func_java_net_ProtocolException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_ProtocolException_wait_long_int 10
typedef void (*func_java_net_ProtocolException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_ProtocolException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_java_net_ProtocolException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ProtocolException_getStack_R_java_lang_String 12
typedef jobject (*func_java_net_ProtocolException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_java_net_ProtocolException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_getMessage_R_java_lang_String 14
typedef jobject (*func_java_net_ProtocolException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_fillInStack 15
typedef void (*func_java_net_ProtocolException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_java_net_ProtocolException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_printStackTrace 17
typedef void (*func_java_net_ProtocolException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_printStackTrace_java_io_PrintStream 18
typedef void (*func_java_net_ProtocolException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ProtocolException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_java_net_ProtocolException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ProtocolException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_java_net_ProtocolException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_java_net_ProtocolException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ProtocolException_addSuppressed_java_lang_Throwable 22
typedef void (*func_java_net_ProtocolException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ProtocolException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_java_net_ProtocolException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_java_net_ProtocolException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_java_net_ProtocolException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_net_ProtocolException(jobject object, jint mark, jint depth);
void clinit_java_net_ProtocolException(jcontext ctx);
void init_java_net_ProtocolException_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_net_ProtocolException(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
