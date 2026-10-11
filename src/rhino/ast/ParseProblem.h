#ifndef HEADER_rhino_ast_ParseProblem
#define HEADER_rhino_ast_ParseProblem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_ParseProblem {
	java_lang_Object parent;
	jref F_type;
	jref F_message;
	jref F_sourceName;
	jint F_offset;
	jint F_length;
} rhino_ast_ParseProblem;

extern Class class_rhino_ast_ParseProblem;


#define VTABLE_rhino_ast_ParseProblem_hashCode_R_int 0
typedef jint (*func_rhino_ast_ParseProblem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_ParseProblem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_ParseProblem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_ParseProblem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_ParseProblem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_finalize 5
typedef void (*func_rhino_ast_ParseProblem_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_notify 6
typedef void (*func_rhino_ast_ParseProblem_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_notifyAll 7
typedef void (*func_rhino_ast_ParseProblem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_wait 8
typedef void (*func_rhino_ast_ParseProblem_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_wait_long 9
typedef void (*func_rhino_ast_ParseProblem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_ParseProblem_wait_long_int 10
typedef void (*func_rhino_ast_ParseProblem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type 11
typedef jobject (*func_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type 12
typedef void (*func_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem_getMessage_R_java_lang_String 13
typedef jobject (*func_rhino_ast_ParseProblem_getMessage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_setMessage_java_lang_String 14
typedef void (*func_rhino_ast_ParseProblem_setMessage_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem_getSourceName_R_java_lang_String 15
typedef jobject (*func_rhino_ast_ParseProblem_getSourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_setSourceName_java_lang_String 16
typedef void (*func_rhino_ast_ParseProblem_setSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ParseProblem_getFileOffset_R_int 17
typedef jint (*func_rhino_ast_ParseProblem_getFileOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_setFileOffset_int 18
typedef void (*func_rhino_ast_ParseProblem_setFileOffset_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ParseProblem_getLength_R_int 19
typedef jint (*func_rhino_ast_ParseProblem_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ParseProblem_setLength_int 20
typedef void (*func_rhino_ast_ParseProblem_setLength_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_ast_ParseProblem(jobject object, jint mark, jint depth);
void clinit_rhino_ast_ParseProblem(jcontext ctx);
void init_rhino_ast_ParseProblem_rhino_ast_ParseProblem$Type_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);
jobject M_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type(jcontext ctx, jobject self);
void M_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ParseProblem_getMessage_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_ParseProblem_setMessage_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ParseProblem_getSourceName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_ParseProblem_setSourceName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_ParseProblem_getFileOffset_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ParseProblem_setFileOffset_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_ParseProblem_getLength_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ParseProblem_setLength_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_ParseProblem_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
