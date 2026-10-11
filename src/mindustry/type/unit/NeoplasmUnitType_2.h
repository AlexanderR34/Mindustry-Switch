#ifndef HEADER_mindustry_type_unit_NeoplasmUnitType$2
#define HEADER_mindustry_type_unit_NeoplasmUnitType$2

#include "Clearwing.h"
#include "mindustry/entities/abilities/LiquidExplodeAbility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_unit_NeoplasmUnitType$2 {
	mindustry_entities_abilities_LiquidExplodeAbility parent;
	jref F_this$0;
} mindustry_type_unit_NeoplasmUnitType$2;

extern Class class_mindustry_type_unit_NeoplasmUnitType$2;


#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_hashCode_R_int 0
typedef jint (*func_mindustry_type_unit_NeoplasmUnitType$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_unit_NeoplasmUnitType$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_finalize 5
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_notify 6
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_notifyAll 7
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_wait 8
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_wait_long 9
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_wait_long_int 10
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_update_mindustry_gen_Unit 11
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_update_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_draw_mindustry_gen_Unit 12
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_draw_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_death_mindustry_gen_Unit 13
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_death_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_created_mindustry_gen_Unit 14
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_created_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_init_mindustry_type_UnitType 15
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_init_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table 16
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_display_arc_scene_ui_layout_Table 17
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_addStats_arc_scene_ui_layout_Table 18
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_addStats_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String 19
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_copy_R_mindustry_entities_abilities_Ability 20
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_copy_R_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_localized_R_java_lang_String 21
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_getBundle_R_java_lang_String 22
typedef jobject (*func_mindustry_type_unit_NeoplasmUnitType$2_getBundle_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_unit_NeoplasmUnitType$2_lambda$display$0_arc_scene_ui_layout_Table 23
typedef void (*func_mindustry_type_unit_NeoplasmUnitType$2_lambda$display$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_type_unit_NeoplasmUnitType$2(jobject object, jint mark, jint depth);
void clinit_mindustry_type_unit_NeoplasmUnitType$2(jcontext ctx);
void init_mindustry_type_unit_NeoplasmUnitType$2_mindustry_type_unit_NeoplasmUnitType(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
