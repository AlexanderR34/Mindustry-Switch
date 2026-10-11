#ifndef HEADER_arc_util_Http$HttpStatusException
#define HEADER_arc_util_Http$HttpStatusException

#include "Clearwing.h"
#include "java/lang/RuntimeException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Http$HttpStatusException {
	java_lang_RuntimeException parent;
	jref F_status;
	jref F_response;
} arc_util_Http$HttpStatusException;

extern Class class_arc_util_Http$HttpStatusException;


#define VTABLE_arc_util_Http$HttpStatusException_hashCode_R_int 0
typedef jint (*func_arc_util_Http$HttpStatusException_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Http$HttpStatusException_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatusException_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Http$HttpStatusException_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Http$HttpStatusException_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Http$HttpStatusException_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_finalize 5
typedef void (*func_arc_util_Http$HttpStatusException_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_notify 6
typedef void (*func_arc_util_Http$HttpStatusException_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_notifyAll 7
typedef void (*func_arc_util_Http$HttpStatusException_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_wait 8
typedef void (*func_arc_util_Http$HttpStatusException_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_wait_long 9
typedef void (*func_arc_util_Http$HttpStatusException_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Http$HttpStatusException_wait_long_int 10
typedef void (*func_arc_util_Http$HttpStatusException_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Http$HttpStatusException_initCause_java_lang_Throwable_R_java_lang_Throwable 11
typedef jobject (*func_arc_util_Http$HttpStatusException_initCause_java_lang_Throwable_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatusException_getStack_R_java_lang_String 12
typedef jobject (*func_arc_util_Http$HttpStatusException_getStack_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_getCause_R_java_lang_Throwable 13
typedef jobject (*func_arc_util_Http$HttpStatusException_getCause_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_getMessage_R_java_lang_String 14
typedef jobject (*func_arc_util_Http$HttpStatusException_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_fillInStack 15
typedef void (*func_arc_util_Http$HttpStatusException_fillInStack)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_fillInStackTrace_R_java_lang_Throwable 16
typedef jobject (*func_arc_util_Http$HttpStatusException_fillInStackTrace_R_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_printStackTrace 17
typedef void (*func_arc_util_Http$HttpStatusException_printStackTrace)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_printStackTrace_java_io_PrintStream 18
typedef void (*func_arc_util_Http$HttpStatusException_printStackTrace_java_io_PrintStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatusException_printStackTrace_java_io_PrintWriter 19
typedef void (*func_arc_util_Http$HttpStatusException_printStackTrace_java_io_PrintWriter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatusException_getStackTrace_R_Array1_java_lang_StackTraceElement 20
typedef jobject (*func_arc_util_Http$HttpStatusException_getStackTrace_R_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_setStackTrace_Array1_java_lang_StackTraceElement 21
typedef void (*func_arc_util_Http$HttpStatusException_setStackTrace_Array1_java_lang_StackTraceElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatusException_addSuppressed_java_lang_Throwable 22
typedef void (*func_arc_util_Http$HttpStatusException_addSuppressed_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatusException_getSuppressed_R_Array1_java_lang_Throwable 23
typedef jobject (*func_arc_util_Http$HttpStatusException_getSuppressed_R_Array1_java_lang_Throwable)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatusException_getLocalizedMessage_R_java_lang_String 24
typedef jobject (*func_arc_util_Http$HttpStatusException_getLocalizedMessage_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_util_Http$HttpStatusException(jobject object, jint mark, jint depth);
void clinit_arc_util_Http$HttpStatusException(jcontext ctx);
void init_arc_util_Http$HttpStatusException_java_lang_String_arc_util_Http$HttpStatus_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
