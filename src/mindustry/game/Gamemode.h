#ifndef HEADER_mindustry_game_Gamemode
#define HEADER_mindustry_game_Gamemode

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Gamemode {
	java_lang_Enum parent;
	jref F_rules;
	jref F_validator;
	jbool F_hidden;
} mindustry_game_Gamemode;

extern Class class_mindustry_game_Gamemode;

extern jobject SF_mindustry_game_Gamemode_survival;
extern jobject SF_mindustry_game_Gamemode_sandbox;
extern jobject SF_mindustry_game_Gamemode_attack;
extern jobject SF_mindustry_game_Gamemode_pvp;
extern jobject SF_mindustry_game_Gamemode_editor;
extern jobject SF_mindustry_game_Gamemode_all;
extern jobject SF_mindustry_game_Gamemode_$VALUES;

#define VTABLE_mindustry_game_Gamemode_hashCode_R_int 0
typedef jint (*func_mindustry_game_Gamemode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Gamemode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Gamemode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Gamemode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Gamemode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Gamemode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_finalize 5
typedef void (*func_mindustry_game_Gamemode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_notify 6
typedef void (*func_mindustry_game_Gamemode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_notifyAll 7
typedef void (*func_mindustry_game_Gamemode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_wait 8
typedef void (*func_mindustry_game_Gamemode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_wait_long 9
typedef void (*func_mindustry_game_Gamemode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Gamemode_wait_long_int 10
typedef void (*func_mindustry_game_Gamemode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Gamemode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_game_Gamemode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Gamemode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_game_Gamemode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Gamemode_name_R_java_lang_String 13
typedef jobject (*func_mindustry_game_Gamemode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_ordinal_R_int 14
typedef jint (*func_mindustry_game_Gamemode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_game_Gamemode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules 16
typedef jobject (*func_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean 17
typedef jbool (*func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Gamemode_description_R_java_lang_String 18
typedef jobject (*func_mindustry_game_Gamemode_description_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_game_Gamemode(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Gamemode(jcontext ctx);
jobject SM_mindustry_game_Gamemode_values_R_Array1_mindustry_game_Gamemode(jcontext ctx);
jobject SM_mindustry_game_Gamemode_valueOf_java_lang_String_R_mindustry_game_Gamemode(jcontext ctx, jobject param0);
void init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jobject param3);
void init_mindustry_game_Gamemode_java_lang_String_int_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void init_mindustry_game_Gamemode_java_lang_String_int_boolean_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jobject param3, jobject param4);
jobject M_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Gamemode_description_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Gamemode_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_game_Gamemode_$values_R_Array1_mindustry_game_Gamemode(jcontext ctx);
jbool SM_mindustry_game_Gamemode_lambda$new$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Gamemode_lambda$static$7_mindustry_game_Rules(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Gamemode_lambda$static$6_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Gamemode_lambda$static$5_mindustry_game_Rules(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Gamemode_lambda$static$4_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Gamemode_lambda$static$3_mindustry_game_Rules(jcontext ctx, jobject param0);
void SM_mindustry_game_Gamemode_lambda$static$2_mindustry_game_Rules(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Gamemode_lambda$static$1_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Gamemode_lambda$static$0_mindustry_game_Rules(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
