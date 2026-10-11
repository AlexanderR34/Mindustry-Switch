#ifndef HEADER_mindustry_io_SaveIO$SaveException
#define HEADER_mindustry_io_SaveIO$SaveException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_SaveIO$SaveException {
	java_lang_RuntimeException parent;
} mindustry_io_SaveIO$SaveException;

extern Class class_mindustry_io_SaveIO$SaveException;


#define VTABLE_mindustry_io_SaveIO$SaveException_hashCode_R_int 0
typedef jint (*func_mindustry_io_SaveIO$SaveException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_SaveIO$SaveException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_SaveIO$SaveException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_SaveIO$SaveException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_finalize 5
typedef void (*func_mindustry_io_SaveIO$SaveException_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_notify 6
typedef void (*func_mindustry_io_SaveIO$SaveException_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_notifyAll 7
typedef void (*func_mindustry_io_SaveIO$SaveException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_wait 8
typedef void (*func_mindustry_io_SaveIO$SaveException_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_wait_long 9
typedef void (*func_mindustry_io_SaveIO$SaveException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_wait_long_int 10
typedef void (*func_mindustry_io_SaveIO$SaveException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_SaveIO$SaveException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_mindustry_io_SaveIO$SaveException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_getStack_R_java_lang_String 12
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_getMessage_R_java_lang_String 14
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_fillInStack 15
typedef void (*func_mindustry_io_SaveIO$SaveException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_mindustry_io_SaveIO$SaveException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_printStackTrace 17
typedef void (*func_mindustry_io_SaveIO$SaveException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_printStackTrace_java_io_PrintStream 18
typedef void (*func_mindustry_io_SaveIO$SaveException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_mindustry_io_SaveIO$SaveException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_mindustry_io_SaveIO$SaveException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_addSuppressed_java_lang_Throwable 22
typedef void (*func_mindustry_io_SaveIO$SaveException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_SaveIO$SaveException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_SaveIO$SaveException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_mindustry_io_SaveIO$SaveException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_io_SaveIO$SaveException(jobject object, jint mark, jint depth);
void clinit_mindustry_io_SaveIO$SaveException(jcontext ctx);
void init_mindustry_io_SaveIO$SaveException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
