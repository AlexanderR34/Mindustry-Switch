#ifndef HEADER_rhino_ScriptableObject$SlotAccess
#define HEADER_rhino_ScriptableObject$SlotAccess

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptableObject$SlotAccess {
	java_lang_Enum parent;
} rhino_ScriptableObject$SlotAccess;

extern Class class_rhino_ScriptableObject$SlotAccess;

extern jobject SF_rhino_ScriptableObject$SlotAccess_QUERY;
extern jobject SF_rhino_ScriptableObject$SlotAccess_MODIFY;
extern jobject SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
extern jobject SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
extern jobject SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA;
extern jobject SF_rhino_ScriptableObject$SlotAccess_$VALUES;

#define VTABLE_rhino_ScriptableObject$SlotAccess_hashCode_R_int 0
typedef jint (*func_rhino_ScriptableObject$SlotAccess_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptableObject$SlotAccess_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$SlotAccess_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptableObject$SlotAccess_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptableObject$SlotAccess_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptableObject$SlotAccess_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_finalize 5
typedef void (*func_rhino_ScriptableObject$SlotAccess_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_notify 6
typedef void (*func_rhino_ScriptableObject$SlotAccess_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_notifyAll 7
typedef void (*func_rhino_ScriptableObject$SlotAccess_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_wait 8
typedef void (*func_rhino_ScriptableObject$SlotAccess_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_wait_long 9
typedef void (*func_rhino_ScriptableObject$SlotAccess_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptableObject$SlotAccess_wait_long_int 10
typedef void (*func_rhino_ScriptableObject$SlotAccess_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ScriptableObject$SlotAccess_compareTo_java_lang_Object_R_int 11
typedef jint (*func_rhino_ScriptableObject$SlotAccess_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$SlotAccess_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_rhino_ScriptableObject$SlotAccess_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$SlotAccess_name_R_java_lang_String 13
typedef jobject (*func_rhino_ScriptableObject$SlotAccess_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_ordinal_R_int 14
typedef jint (*func_rhino_ScriptableObject$SlotAccess_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$SlotAccess_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_rhino_ScriptableObject$SlotAccess_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_ScriptableObject$SlotAccess(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptableObject$SlotAccess(jcontext ctx);
jobject SM_rhino_ScriptableObject$SlotAccess_values_R_Array1_rhino_ScriptableObject$SlotAccess(jcontext ctx);
jobject SM_rhino_ScriptableObject$SlotAccess_valueOf_java_lang_String_R_rhino_ScriptableObject$SlotAccess(jcontext ctx, jobject param0);
void init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
