#ifndef HEADER_rhino_DefaultErrorReporter
#define HEADER_rhino_DefaultErrorReporter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ErrorReporter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_DefaultErrorReporter {
	java_lang_Object parent;
	jbool F_forEval;
	jref F_chainedReporter;
} rhino_DefaultErrorReporter;

extern Class class_rhino_DefaultErrorReporter;

extern jobject SF_rhino_DefaultErrorReporter_instance;

#define VTABLE_rhino_DefaultErrorReporter_hashCode_R_int 0
typedef jint (*func_rhino_DefaultErrorReporter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_DefaultErrorReporter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefaultErrorReporter_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_DefaultErrorReporter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_DefaultErrorReporter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_toString_R_java_lang_String 4
typedef jobject (*func_rhino_DefaultErrorReporter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_finalize 5
typedef void (*func_rhino_DefaultErrorReporter_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_notify 6
typedef void (*func_rhino_DefaultErrorReporter_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_notifyAll 7
typedef void (*func_rhino_DefaultErrorReporter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_wait 8
typedef void (*func_rhino_DefaultErrorReporter_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefaultErrorReporter_wait_long 9
typedef void (*func_rhino_DefaultErrorReporter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_DefaultErrorReporter_wait_long_int 10
typedef void (*func_rhino_DefaultErrorReporter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int 11
typedef void (*func_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int 12
typedef void (*func_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException 13
typedef jobject (*func_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);

void mark_rhino_DefaultErrorReporter(jobject object, jint mark, jint depth);
void clinit_rhino_DefaultErrorReporter(jcontext ctx);
void init_rhino_DefaultErrorReporter(jcontext ctx, jobject self);
jobject SM_rhino_DefaultErrorReporter_forEval_rhino_ErrorReporter_R_rhino_ErrorReporter(jcontext ctx, jobject param0);
void M_rhino_DefaultErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
void M_rhino_DefaultErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
jobject M_rhino_DefaultErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
