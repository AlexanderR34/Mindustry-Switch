#ifndef HEADER_mindustry_content_Blocks$319$1$1$1
#define HEADER_mindustry_content_Blocks$319$1$1$1

#include "Clearwing.h"
#include "mindustry/type/Weapon.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$319$1$1$1 {
	mindustry_type_Weapon parent;
	jref F_this$2;
} mindustry_content_Blocks$319$1$1$1;

extern Class class_mindustry_content_Blocks$319$1$1$1;


#define VTABLE_mindustry_content_Blocks$319$1$1$1_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$319$1$1$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$319$1$1$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$319$1$1$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$319$1$1$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$319$1$1$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_finalize 5
typedef void (*func_mindustry_content_Blocks$319$1$1$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_notify 6
typedef void (*func_mindustry_content_Blocks$319$1$1$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_notifyAll 7
typedef void (*func_mindustry_content_Blocks$319$1$1$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_wait 8
typedef void (*func_mindustry_content_Blocks$319$1$1$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_wait_long 9
typedef void (*func_mindustry_content_Blocks$319$1$1$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$319$1$1$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_hasStats_mindustry_type_UnitType_R_boolean 11
typedef jbool (*func_mindustry_content_Blocks$319$1$1$1_hasStats_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table 12
typedef void (*func_mindustry_content_Blocks$319$1$1$1_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_dps_R_float 13
typedef jfloat (*func_mindustry_content_Blocks$319$1$1$1_dps_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_shotsPerSec_R_float 14
typedef jfloat (*func_mindustry_content_Blocks$319$1$1$1_shotsPerSec_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount 15
typedef void (*func_mindustry_content_Blocks$319$1$1$1_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount 16
typedef void (*func_mindustry_content_Blocks$319$1$1$1_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_range_R_float 17
typedef jfloat (*func_mindustry_content_Blocks$319$1$1$1_range_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount 18
typedef void (*func_mindustry_content_Blocks$319$1$1$1_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 19
typedef jobject (*func_mindustry_content_Blocks$319$1$1$1_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_content_Blocks$319$1$1$1_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float 21
typedef jfloat (*func_mindustry_content_Blocks$319$1$1$1_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float 22
typedef void (*func_mindustry_content_Blocks$319$1$1$1_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover 23
typedef void (*func_mindustry_content_Blocks$319$1$1$1_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet 24
typedef void (*func_mindustry_content_Blocks$319$1$1$1_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_flip 25
typedef void (*func_mindustry_content_Blocks$319$1$1$1_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_copy_R_mindustry_type_Weapon 26
typedef jobject (*func_mindustry_content_Blocks$319$1$1$1_copy_R_mindustry_type_Weapon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_init 27
typedef void (*func_mindustry_content_Blocks$319$1$1$1_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_load 28
typedef void (*func_mindustry_content_Blocks$319$1$1$1_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover 29
typedef void (*func_mindustry_content_Blocks$319$1$1$1_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
#define VTABLE_mindustry_content_Blocks$319$1$1$1_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover 30
typedef void (*func_mindustry_content_Blocks$319$1$1$1_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);

void mark_mindustry_content_Blocks$319$1$1$1(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$319$1$1$1(jcontext ctx);
void init_mindustry_content_Blocks$319$1$1$1_mindustry_content_Blocks$319$1$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
