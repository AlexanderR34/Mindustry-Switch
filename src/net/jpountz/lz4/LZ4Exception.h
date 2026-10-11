#ifndef HEADER_net_jpountz_lz4_LZ4Exception
#define HEADER_net_jpountz_lz4_LZ4Exception

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4Exception {
	java_lang_RuntimeException parent;
} net_jpountz_lz4_LZ4Exception;

extern Class class_net_jpountz_lz4_LZ4Exception;

extern jlong SF_net_jpountz_lz4_LZ4Exception_serialVersionUID;

#define VTABLE_net_jpountz_lz4_LZ4Exception_hashCode_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4Exception_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_lz4_LZ4Exception_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_finalize 5
typedef void (*func_net_jpountz_lz4_LZ4Exception_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_notify 6
typedef void (*func_net_jpountz_lz4_LZ4Exception_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_notifyAll 7
typedef void (*func_net_jpountz_lz4_LZ4Exception_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_wait 8
typedef void (*func_net_jpountz_lz4_LZ4Exception_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_wait_long 9
typedef void (*func_net_jpountz_lz4_LZ4Exception_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_wait_long_int 10
typedef void (*func_net_jpountz_lz4_LZ4Exception_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_lz4_LZ4Exception_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getStack_R_java_lang_String 12
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getCause_R_java_lang_Throwable 13
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getMessage_R_java_lang_String 14
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_fillInStack 15
typedef void (*func_net_jpountz_lz4_LZ4Exception_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_printStackTrace 17
typedef void (*func_net_jpountz_lz4_LZ4Exception_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_printStackTrace_java_io_PrintStream 18
typedef void (*func_net_jpountz_lz4_LZ4Exception_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_printStackTrace_java_io_PrintWriter 19
typedef void (*func_net_jpountz_lz4_LZ4Exception_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_net_jpountz_lz4_LZ4Exception_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_addSuppressed_java_lang_Throwable 22
typedef void (*func_net_jpountz_lz4_LZ4Exception_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4Exception_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_net_jpountz_lz4_LZ4Exception_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_net_jpountz_lz4_LZ4Exception(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4Exception(jcontext ctx);
void init_net_jpountz_lz4_LZ4Exception_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_net_jpountz_lz4_LZ4Exception_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_net_jpountz_lz4_LZ4Exception(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
