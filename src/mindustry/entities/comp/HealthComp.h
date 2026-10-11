#ifndef HEADER_mindustry_entities_comp_HealthComp
#define HEADER_mindustry_entities_comp_HealthComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_HealthComp {
	java_lang_Object parent;
	jfloat F_health;
	jfloat F_hitTime;
	jfloat F_maxHealth;
	jbool F_dead;
} mindustry_entities_comp_HealthComp;

extern Class class_mindustry_entities_comp_HealthComp;

extern jfloat SF_mindustry_entities_comp_HealthComp_hitDuration;

#define VTABLE_mindustry_entities_comp_HealthComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_HealthComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_HealthComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_HealthComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_HealthComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_HealthComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_finalize 5
typedef void (*func_mindustry_entities_comp_HealthComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_notify 6
typedef void (*func_mindustry_entities_comp_HealthComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_HealthComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_wait 8
typedef void (*func_mindustry_entities_comp_HealthComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_wait_long 9
typedef void (*func_mindustry_entities_comp_HealthComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_HealthComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_HealthComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_HealthComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_HealthComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_HealthComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_HealthComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_HealthComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_HealthComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_HealthComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_HealthComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_HealthComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_add 19
typedef void (*func_mindustry_entities_comp_HealthComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_afterRead 20
typedef void (*func_mindustry_entities_comp_HealthComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_HealthComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_HealthComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_id_int 23
typedef void (*func_mindustry_entities_comp_HealthComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_HealthComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_HealthComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_remove 25
typedef void (*func_mindustry_entities_comp_HealthComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_update 26
typedef void (*func_mindustry_entities_comp_HealthComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_HealthComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_getX_R_float 28
typedef jfloat (*func_mindustry_entities_comp_HealthComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_getY_R_float 29
typedef jfloat (*func_mindustry_entities_comp_HealthComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_entities_comp_HealthComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_HealthComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_entities_comp_HealthComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_entities_comp_HealthComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_entities_comp_HealthComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_entities_comp_HealthComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_HealthComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_entities_comp_HealthComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_HealthComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_HealthComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_HealthComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_HealthComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_HealthComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_HealthComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_HealthComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_HealthComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_HealthComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_HealthComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_HealthComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_HealthComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_HealthComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HealthComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_HealthComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_x_float 51
typedef void (*func_mindustry_entities_comp_HealthComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_y_float 52
typedef void (*func_mindustry_entities_comp_HealthComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_isValid_R_boolean 53
typedef jbool (*func_mindustry_entities_comp_HealthComp_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_healthf_R_float 54
typedef jfloat (*func_mindustry_entities_comp_HealthComp_healthf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_killed 55
typedef void (*func_mindustry_entities_comp_HealthComp_killed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_kill 56
typedef void (*func_mindustry_entities_comp_HealthComp_kill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_heal 57
typedef void (*func_mindustry_entities_comp_HealthComp_heal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_damaged_R_boolean 58
typedef jbool (*func_mindustry_entities_comp_HealthComp_damaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_damagePierce_float_boolean 59
typedef void (*func_mindustry_entities_comp_HealthComp_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_entities_comp_HealthComp_damagePierce_float 60
typedef void (*func_mindustry_entities_comp_HealthComp_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean 61
typedef void (*func_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_entities_comp_HealthComp_damageArmorMult_float_float 62
typedef void (*func_mindustry_entities_comp_HealthComp_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_damage_float 63
typedef void (*func_mindustry_entities_comp_HealthComp_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_damage_float_boolean 64
typedef void (*func_mindustry_entities_comp_HealthComp_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_entities_comp_HealthComp_damageContinuous_float 65
typedef void (*func_mindustry_entities_comp_HealthComp_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_damageContinuousPierce_float 66
typedef void (*func_mindustry_entities_comp_HealthComp_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float 67
typedef void (*func_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HealthComp_clampHealth 68
typedef void (*func_mindustry_entities_comp_HealthComp_clampHealth)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HealthComp_heal_float 69
typedef void (*func_mindustry_entities_comp_HealthComp_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HealthComp_healFract_float 70
typedef void (*func_mindustry_entities_comp_HealthComp_healFract_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_entities_comp_HealthComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_HealthComp(jcontext ctx);
void init_mindustry_entities_comp_HealthComp(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_HealthComp_isValid_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_HealthComp_healthf_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HealthComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HealthComp_killed(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HealthComp_kill(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HealthComp_heal(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_HealthComp_damaged_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HealthComp_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_mindustry_entities_comp_HealthComp_damagePierce_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_mindustry_entities_comp_HealthComp_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_HealthComp_damage_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_HealthComp_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_mindustry_entities_comp_HealthComp_damageContinuous_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_HealthComp_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_HealthComp_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_HealthComp_clampHealth(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HealthComp_heal_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_HealthComp_healFract_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
