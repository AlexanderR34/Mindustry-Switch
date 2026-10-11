#ifndef HEADER_mindustry_mod_Mods$ModState
#define HEADER_mindustry_mod_Mods$ModState

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$ModState {
	java_lang_Enum parent;
} mindustry_mod_Mods$ModState;

extern Class class_mindustry_mod_Mods$ModState;

extern jobject SF_mindustry_mod_Mods$ModState_enabled;
extern jobject SF_mindustry_mod_Mods$ModState_contentErrors;
extern jobject SF_mindustry_mod_Mods$ModState_missingDependencies;
extern jobject SF_mindustry_mod_Mods$ModState_incompleteDependencies;
extern jobject SF_mindustry_mod_Mods$ModState_circularDependencies;
extern jobject SF_mindustry_mod_Mods$ModState_unsupported;
extern jobject SF_mindustry_mod_Mods$ModState_disabled;
extern jobject SF_mindustry_mod_Mods$ModState_$VALUES;

#define VTABLE_mindustry_mod_Mods$ModState_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$ModState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$ModState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$ModState_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$ModState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$ModState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$ModState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_finalize 5
typedef void (*func_mindustry_mod_Mods$ModState_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_notify 6
typedef void (*func_mindustry_mod_Mods$ModState_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_notifyAll 7
typedef void (*func_mindustry_mod_Mods$ModState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_wait 8
typedef void (*func_mindustry_mod_Mods$ModState_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_wait_long 9
typedef void (*func_mindustry_mod_Mods$ModState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$ModState_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$ModState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods$ModState_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_mod_Mods$ModState_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$ModState_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_mod_Mods$ModState_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$ModState_name_R_java_lang_String 13
typedef jobject (*func_mindustry_mod_Mods$ModState_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_ordinal_R_int 14
typedef jint (*func_mindustry_mod_Mods$ModState_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModState_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_mod_Mods$ModState_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_mod_Mods$ModState(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$ModState(jcontext ctx);
jobject SM_mindustry_mod_Mods$ModState_values_R_Array1_mindustry_mod_Mods$ModState(jcontext ctx);
jobject SM_mindustry_mod_Mods$ModState_valueOf_java_lang_String_R_mindustry_mod_Mods$ModState(jcontext ctx, jobject param0);
void init_mindustry_mod_Mods$ModState_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_mod_Mods$ModState_$values_R_Array1_mindustry_mod_Mods$ModState(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
