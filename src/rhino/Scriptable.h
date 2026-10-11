#ifndef HEADER_rhino_Scriptable
#define HEADER_rhino_Scriptable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Scriptable {
	java_lang_Object parent;
} rhino_Scriptable;

extern Class class_rhino_Scriptable;

extern jobject SF_rhino_Scriptable_NOT_FOUND;

#define INDEX_rhino_Scriptable_getClassName_R_java_lang_String 0
typedef jobject (*func_rhino_Scriptable_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 1
typedef jobject (*func_rhino_Scriptable_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object 2
typedef jobject (*func_rhino_Scriptable_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean 3
typedef jbool (*func_rhino_Scriptable_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean 4
typedef jbool (*func_rhino_Scriptable_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object 5
typedef void (*func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object 6
typedef void (*func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define INDEX_rhino_Scriptable_delete_java_lang_String 7
typedef void (*func_rhino_Scriptable_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Scriptable_delete_int 8
typedef void (*func_rhino_Scriptable_delete_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable 9
typedef jobject (*func_rhino_Scriptable_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define INDEX_rhino_Scriptable_setPrototype_rhino_Scriptable 10
typedef void (*func_rhino_Scriptable_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable 11
typedef jobject (*func_rhino_Scriptable_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define INDEX_rhino_Scriptable_setParentScope_rhino_Scriptable 12
typedef void (*func_rhino_Scriptable_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Scriptable_getIds_R_Array1_java_lang_Object 13
typedef jobject (*func_rhino_Scriptable_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object 14
typedef jobject (*func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_Scriptable_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_Scriptable(jobject object, jint mark, jint depth);
void clinit_rhino_Scriptable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
