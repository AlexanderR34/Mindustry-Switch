#ifndef HEADER_rhino_ast_ErrorCollector
#define HEADER_rhino_ast_ErrorCollector

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ast/IdeErrorReporter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_ErrorCollector {
	java_lang_Object parent;
	jref F_errors;
} rhino_ast_ErrorCollector;

extern Class class_rhino_ast_ErrorCollector;


#define VTABLE_rhino_ast_ErrorCollector_hashCode_R_int 0
typedef jint (*func_rhino_ast_ErrorCollector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_ErrorCollector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ErrorCollector_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_ErrorCollector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_ErrorCollector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_ErrorCollector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_finalize 5
typedef void (*func_rhino_ast_ErrorCollector_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_notify 6
typedef void (*func_rhino_ast_ErrorCollector_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_notifyAll 7
typedef void (*func_rhino_ast_ErrorCollector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_wait 8
typedef void (*func_rhino_ast_ErrorCollector_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ErrorCollector_wait_long 9
typedef void (*func_rhino_ast_ErrorCollector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_ErrorCollector_wait_long_int 10
typedef void (*func_rhino_ast_ErrorCollector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int 11
typedef void (*func_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int 12
typedef void (*func_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException 13
typedef jobject (*func_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int 14
typedef void (*func_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int 15
typedef void (*func_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_ast_ErrorCollector_getErrors_R_java_util_List 16
typedef jobject (*func_rhino_ast_ErrorCollector_getErrors_R_java_util_List)(jcontext ctx, jobject self);

void mark_rhino_ast_ErrorCollector(jobject object, jint mark, jint depth);
void clinit_rhino_ast_ErrorCollector(jcontext ctx);
void init_rhino_ast_ErrorCollector(jcontext ctx, jobject self);
void M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
void M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
void M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jobject M_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
jobject M_rhino_ast_ErrorCollector_getErrors_R_java_util_List(jcontext ctx, jobject self);
jobject M_rhino_ast_ErrorCollector_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
