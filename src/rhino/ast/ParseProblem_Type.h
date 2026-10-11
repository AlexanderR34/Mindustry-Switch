#ifndef HEADER_rhino_ast_ParseProblem$Type
#define HEADER_rhino_ast_ParseProblem$Type

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_ParseProblem$Type {
	java_lang_Enum parent;
} rhino_ast_ParseProblem$Type;

extern Class class_rhino_ast_ParseProblem$Type;

extern jobject SF_rhino_ast_ParseProblem$Type_Error;
extern jobject SF_rhino_ast_ParseProblem$Type_Warning;
extern jobject SF_rhino_ast_ParseProblem$Type_$VALUES;

#define VTABLE_rhino_ast_ParseProblem$Type_hashCode_R_int 0
typedef jint (*func_rhino_ast_ParseProblem$Type_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_ParseProblem$Type_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem$Type_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_ParseProblem$Type_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_ParseProblem$Type_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_ParseProblem$Type_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_finalize 5
typedef void (*func_rhino_ast_ParseProblem$Type_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_notify 6
typedef void (*func_rhino_ast_ParseProblem$Type_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_notifyAll 7
typedef void (*func_rhino_ast_ParseProblem$Type_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_wait 8
typedef void (*func_rhino_ast_ParseProblem$Type_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_wait_long 9
typedef void (*func_rhino_ast_ParseProblem$Type_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_ParseProblem$Type_wait_long_int 10
typedef void (*func_rhino_ast_ParseProblem$Type_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_ParseProblem$Type_compareTo_java_lang_Object_R_int 11
typedef jint (*func_rhino_ast_ParseProblem$Type_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem$Type_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_rhino_ast_ParseProblem$Type_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem$Type_name_R_java_lang_String 13
typedef jobject (*func_rhino_ast_ParseProblem$Type_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_ordinal_R_int 14
typedef jint (*func_rhino_ast_ParseProblem$Type_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem$Type_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_rhino_ast_ParseProblem$Type_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_ast_ParseProblem$Type(jobject object, jint mark, jint depth);
void clinit_rhino_ast_ParseProblem$Type(jcontext ctx);
jobject SM_rhino_ast_ParseProblem$Type_values_R_Array1_rhino_ast_ParseProblem$Type(jcontext ctx);
jobject SM_rhino_ast_ParseProblem$Type_valueOf_java_lang_String_R_rhino_ast_ParseProblem$Type(jcontext ctx, jobject param0);
void init_rhino_ast_ParseProblem$Type_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
