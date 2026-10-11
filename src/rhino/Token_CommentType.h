#ifndef HEADER_rhino_Token$CommentType
#define HEADER_rhino_Token$CommentType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Token$CommentType {
	java_lang_Enum parent;
} rhino_Token$CommentType;

extern Class class_rhino_Token$CommentType;

extern jobject SF_rhino_Token$CommentType_LINE;
extern jobject SF_rhino_Token$CommentType_BLOCK_COMMENT;
extern jobject SF_rhino_Token$CommentType_JSDOC;
extern jobject SF_rhino_Token$CommentType_HTML;
extern jobject SF_rhino_Token$CommentType_$VALUES;

#define VTABLE_rhino_Token$CommentType_hashCode_R_int 0
typedef jint (*func_rhino_Token$CommentType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Token$CommentType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Token$CommentType_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Token$CommentType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Token$CommentType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Token$CommentType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_finalize 5
typedef void (*func_rhino_Token$CommentType_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_notify 6
typedef void (*func_rhino_Token$CommentType_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_notifyAll 7
typedef void (*func_rhino_Token$CommentType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_wait 8
typedef void (*func_rhino_Token$CommentType_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_wait_long 9
typedef void (*func_rhino_Token$CommentType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Token$CommentType_wait_long_int 10
typedef void (*func_rhino_Token$CommentType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Token$CommentType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_rhino_Token$CommentType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Token$CommentType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_rhino_Token$CommentType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Token$CommentType_name_R_java_lang_String 13
typedef jobject (*func_rhino_Token$CommentType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_ordinal_R_int 14
typedef jint (*func_rhino_Token$CommentType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token$CommentType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_rhino_Token$CommentType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_Token$CommentType(jobject object, jint mark, jint depth);
void clinit_rhino_Token$CommentType(jcontext ctx);
jobject SM_rhino_Token$CommentType_values_R_Array1_rhino_Token$CommentType(jcontext ctx);
jobject SM_rhino_Token$CommentType_valueOf_java_lang_String_R_rhino_Token$CommentType(jcontext ctx, jobject param0);
void init_rhino_Token$CommentType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
