#ifndef HEADER_arc_backend_sdl_SdlApplication$SdlError
#define HEADER_arc_backend_sdl_SdlApplication$SdlError

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlApplication$SdlError {
	java_lang_RuntimeException parent;
} arc_backend_sdl_SdlApplication$SdlError;

extern Class class_arc_backend_sdl_SdlApplication$SdlError;


#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlApplication$SdlError_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlApplication$SdlError_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_finalize 5
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_notify 6
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_wait 8
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_wait_long 9
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getStack_R_java_lang_String 12
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getCause_R_java_lang_Throwable 13
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getMessage_R_java_lang_String 14
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_fillInStack 15
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_printStackTrace 17
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_printStackTrace_java_io_PrintStream 18
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_printStackTrace_java_io_PrintWriter 19
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_addSuppressed_java_lang_Throwable 22
typedef void (*func_arc_backend_sdl_SdlApplication$SdlError_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication$SdlError_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_arc_backend_sdl_SdlApplication$SdlError_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_backend_sdl_SdlApplication$SdlError(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlApplication$SdlError(jcontext ctx);
void init_arc_backend_sdl_SdlApplication$SdlError(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
