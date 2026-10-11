#ifndef HEADER_mindustry_net_ValidateException
#define HEADER_mindustry_net_ValidateException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ValidateException {
	java_lang_RuntimeException parent;
	jref F_player;
} mindustry_net_ValidateException;

extern Class class_mindustry_net_ValidateException;


#define VTABLE_mindustry_net_ValidateException_hashCode_R_int 0
typedef jint (*func_mindustry_net_ValidateException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ValidateException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ValidateException_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ValidateException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ValidateException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ValidateException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_finalize 5
typedef void (*func_mindustry_net_ValidateException_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_notify 6
typedef void (*func_mindustry_net_ValidateException_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_notifyAll 7
typedef void (*func_mindustry_net_ValidateException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_wait 8
typedef void (*func_mindustry_net_ValidateException_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_wait_long 9
typedef void (*func_mindustry_net_ValidateException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ValidateException_wait_long_int 10
typedef void (*func_mindustry_net_ValidateException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ValidateException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_mindustry_net_ValidateException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ValidateException_getStack_R_java_lang_String 12
typedef jobject (*func_mindustry_net_ValidateException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_mindustry_net_ValidateException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_getMessage_R_java_lang_String 14
typedef jobject (*func_mindustry_net_ValidateException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_fillInStack 15
typedef void (*func_mindustry_net_ValidateException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_mindustry_net_ValidateException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_printStackTrace 17
typedef void (*func_mindustry_net_ValidateException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_printStackTrace_java_io_PrintStream 18
typedef void (*func_mindustry_net_ValidateException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ValidateException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_mindustry_net_ValidateException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ValidateException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_mindustry_net_ValidateException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_mindustry_net_ValidateException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ValidateException_addSuppressed_java_lang_Throwable 22
typedef void (*func_mindustry_net_ValidateException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ValidateException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_mindustry_net_ValidateException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ValidateException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_mindustry_net_ValidateException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_net_ValidateException(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ValidateException(jcontext ctx);
void init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
