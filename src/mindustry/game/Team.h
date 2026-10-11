#ifndef HEADER_mindustry_game_Team
#define HEADER_mindustry_game_Team

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"
#include "mindustry/logic/Senseable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Team {
	java_lang_Object parent;
	jint F_id;
	jref F_color;
	jref F_palette;
	jref F_palettei;
	jbool F_ignoreUnitCap;
	jref F_emoji;
	jbool F_hasPalette;
	jref F_name;
} mindustry_game_Team;

extern Class class_mindustry_game_Team;

extern jobject SF_mindustry_game_Team_all;
extern jobject SF_mindustry_game_Team_baseTeams;
extern jobject SF_mindustry_game_Team_derelict;
extern jobject SF_mindustry_game_Team_sharded;
extern jobject SF_mindustry_game_Team_crux;
extern jobject SF_mindustry_game_Team_malis;
extern jobject SF_mindustry_game_Team_green;
extern jobject SF_mindustry_game_Team_blue;
extern jobject SF_mindustry_game_Team_neoplastic;

#define VTABLE_mindustry_game_Team_hashCode_R_int 0
typedef jint (*func_mindustry_game_Team_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Team_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Team_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Team_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Team_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Team_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_finalize 5
typedef void (*func_mindustry_game_Team_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_notify 6
typedef void (*func_mindustry_game_Team_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_notifyAll 7
typedef void (*func_mindustry_game_Team_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_wait 8
typedef void (*func_mindustry_game_Team_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_wait_long 9
typedef void (*func_mindustry_game_Team_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Team_wait_long_int 10
typedef void (*func_mindustry_game_Team_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Team_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_game_Team_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double 12
typedef jdouble (*func_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Team_sense_mindustry_ctype_Content_R_double 13
typedef jdouble (*func_mindustry_game_Team_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object 14
typedef jobject (*func_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule 15
typedef jobject (*func_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule 16
typedef jobject (*func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData 17
typedef jobject (*func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 18
typedef jobject (*func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_active_R_boolean 19
typedef jbool (*func_mindustry_game_Team_active_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_isAlive_R_boolean 20
typedef jbool (*func_mindustry_game_Team_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_isAI_R_boolean 21
typedef jbool (*func_mindustry_game_Team_isAI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_isOnlyAI_R_boolean 22
typedef jbool (*func_mindustry_game_Team_isOnlyAI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_needsFlowField_R_boolean 23
typedef jbool (*func_mindustry_game_Team_needsFlowField_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_activateUnitFactories_R_boolean 24
typedef jbool (*func_mindustry_game_Team_activateUnitFactories_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq 25
typedef jobject (*func_mindustry_game_Team_cores_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_localized_R_java_lang_String 26
typedef jobject (*func_mindustry_game_Team_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_coloredName_R_java_lang_String 27
typedef jobject (*func_mindustry_game_Team_coloredName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color 28
typedef void (*func_mindustry_game_Team_setPalette_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color 29
typedef void (*func_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_game_Team_compareTo_mindustry_game_Team_R_int 30
typedef jint (*func_mindustry_game_Team_compareTo_mindustry_game_Team_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Team(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Team(jcontext ctx);
jobject SM_mindustry_game_Team_get_int_R_mindustry_game_Team(jcontext ctx, jint param0);
void init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void init_mindustry_game_Team_int_java_lang_String_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
jobject M_mindustry_game_Team_items_R_mindustry_world_modules_ItemModule(jcontext ctx, jobject self);
jobject M_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule(jcontext ctx, jobject self);
jobject M_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData(jcontext ctx, jobject self);
jobject M_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jbool M_mindustry_game_Team_active_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Team_isAlive_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Team_isAI_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Team_isOnlyAI_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Team_needsFlowField_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Team_activateUnitFactories_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Team_cores_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_game_Team_localized_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Team_coloredName_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_game_Team_setPalette_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Team_setPalette_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint M_mindustry_game_Team_compareTo_mindustry_game_Team_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Team_toString_R_java_lang_String(jcontext ctx, jobject self);
jdouble M_mindustry_game_Team_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Team_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_game_Team_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
