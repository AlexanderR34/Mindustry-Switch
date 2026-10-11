#ifndef HEADER_mindustry_logic_RadarTarget
#define HEADER_mindustry_logic_RadarTarget

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_RadarTarget {
	java_lang_Enum parent;
	jref F_func;
} mindustry_logic_RadarTarget;

extern Class class_mindustry_logic_RadarTarget;

extern jobject SF_mindustry_logic_RadarTarget_any;
extern jobject SF_mindustry_logic_RadarTarget_enemy;
extern jobject SF_mindustry_logic_RadarTarget_ally;
extern jobject SF_mindustry_logic_RadarTarget_player;
extern jobject SF_mindustry_logic_RadarTarget_attacker;
extern jobject SF_mindustry_logic_RadarTarget_flying;
extern jobject SF_mindustry_logic_RadarTarget_boss;
extern jobject SF_mindustry_logic_RadarTarget_ground;
extern jobject SF_mindustry_logic_RadarTarget_all;
extern jobject SF_mindustry_logic_RadarTarget_$VALUES;

#define VTABLE_mindustry_logic_RadarTarget_hashCode_R_int 0
typedef jint (*func_mindustry_logic_RadarTarget_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_RadarTarget_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_RadarTarget_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_RadarTarget_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_RadarTarget_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_RadarTarget_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_finalize 5
typedef void (*func_mindustry_logic_RadarTarget_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_notify 6
typedef void (*func_mindustry_logic_RadarTarget_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_notifyAll 7
typedef void (*func_mindustry_logic_RadarTarget_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_wait 8
typedef void (*func_mindustry_logic_RadarTarget_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_wait_long 9
typedef void (*func_mindustry_logic_RadarTarget_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_RadarTarget_wait_long_int 10
typedef void (*func_mindustry_logic_RadarTarget_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_RadarTarget_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_RadarTarget_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_RadarTarget_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_RadarTarget_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_RadarTarget_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_RadarTarget_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_ordinal_R_int 14
typedef jint (*func_mindustry_logic_RadarTarget_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarTarget_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_RadarTarget_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_RadarTarget(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_RadarTarget(jcontext ctx);
jobject SM_mindustry_logic_RadarTarget_values_R_Array1_mindustry_logic_RadarTarget(jcontext ctx);
jobject SM_mindustry_logic_RadarTarget_valueOf_java_lang_String_R_mindustry_logic_RadarTarget(jcontext ctx, jobject param0);
void init_mindustry_logic_RadarTarget_java_lang_String_int_mindustry_logic_RadarTarget$RadarTargetFunc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_logic_RadarTarget_$values_R_Array1_mindustry_logic_RadarTarget(jcontext ctx);
jbool SM_mindustry_logic_RadarTarget_lambda$static$7_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$6_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$5_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$4_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$3_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$2_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$1_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_RadarTarget_lambda$static$0_mindustry_game_Team_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
