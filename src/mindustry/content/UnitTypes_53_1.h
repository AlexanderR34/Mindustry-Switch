#ifndef HEADER_mindustry_content_UnitTypes$53$1
#define HEADER_mindustry_content_UnitTypes$53$1

#include "Clearwing.h"
#include "mindustry/entities/abilities/SuppressionFieldAbility.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_UnitTypes$53$1 {
	mindustry_entities_abilities_SuppressionFieldAbility parent;
	jfloat F_val$orbRad;
	jfloat F_val$partRad;
	jint F_val$parts;
	jref F_this$0;
} mindustry_content_UnitTypes$53$1;

extern Class class_mindustry_content_UnitTypes$53$1;


#define VTABLE_mindustry_content_UnitTypes$53$1_hashCode_R_int 0
typedef jint (*func_mindustry_content_UnitTypes$53$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_UnitTypes$53$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_UnitTypes$53$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_UnitTypes$53$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_UnitTypes$53$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_finalize 5
typedef void (*func_mindustry_content_UnitTypes$53$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_notify 6
typedef void (*func_mindustry_content_UnitTypes$53$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_notifyAll 7
typedef void (*func_mindustry_content_UnitTypes$53$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_wait 8
typedef void (*func_mindustry_content_UnitTypes$53$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_wait_long 9
typedef void (*func_mindustry_content_UnitTypes$53$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_wait_long_int 10
typedef void (*func_mindustry_content_UnitTypes$53$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_UnitTypes$53$1_update_mindustry_gen_Unit 11
typedef void (*func_mindustry_content_UnitTypes$53$1_update_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_draw_mindustry_gen_Unit 12
typedef void (*func_mindustry_content_UnitTypes$53$1_draw_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_death_mindustry_gen_Unit 13
typedef void (*func_mindustry_content_UnitTypes$53$1_death_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_created_mindustry_gen_Unit 14
typedef void (*func_mindustry_content_UnitTypes$53$1_created_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_init_mindustry_type_UnitType 15
typedef void (*func_mindustry_content_UnitTypes$53$1_init_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table 16
typedef void (*func_mindustry_content_UnitTypes$53$1_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$53$1_display_arc_scene_ui_layout_Table 17
typedef void (*func_mindustry_content_UnitTypes$53$1_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_addStats_arc_scene_ui_layout_Table 18
typedef void (*func_mindustry_content_UnitTypes$53$1_addStats_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$53$1_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String 19
typedef jobject (*func_mindustry_content_UnitTypes$53$1_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$53$1_copy_R_mindustry_entities_abilities_Ability 20
typedef jobject (*func_mindustry_content_UnitTypes$53$1_copy_R_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_localized_R_java_lang_String 21
typedef jobject (*func_mindustry_content_UnitTypes$53$1_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_getBundle_R_java_lang_String 22
typedef jobject (*func_mindustry_content_UnitTypes$53$1_getBundle_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$53$1_lambda$display$0_arc_scene_ui_layout_Table 23
typedef void (*func_mindustry_content_UnitTypes$53$1_lambda$display$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_content_UnitTypes$53$1(jobject object, jint mark, jint depth);
void clinit_mindustry_content_UnitTypes$53$1(jcontext ctx);
void init_mindustry_content_UnitTypes$53$1_mindustry_content_UnitTypes$53_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
