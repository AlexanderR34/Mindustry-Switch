#ifndef HEADER_mindustry_entities_comp_TimedKillComp
#define HEADER_mindustry_entities_comp_TimedKillComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "arc/math/Scaled.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_TimedKillComp {
	java_lang_Object parent;
	jfloat F_time;
	jfloat F_lifetime;
} mindustry_entities_comp_TimedKillComp;

extern Class class_mindustry_entities_comp_TimedKillComp;


#define VTABLE_mindustry_entities_comp_TimedKillComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_TimedKillComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_finalize 5
typedef void (*func_mindustry_entities_comp_TimedKillComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_notify 6
typedef void (*func_mindustry_entities_comp_TimedKillComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_TimedKillComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_wait 8
typedef void (*func_mindustry_entities_comp_TimedKillComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_wait_long 9
typedef void (*func_mindustry_entities_comp_TimedKillComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_TimedKillComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_TimedKillComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_TimedKillComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_add 19
typedef void (*func_mindustry_entities_comp_TimedKillComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_afterRead 20
typedef void (*func_mindustry_entities_comp_TimedKillComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_TimedKillComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_TimedKillComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_id_int 23
typedef void (*func_mindustry_entities_comp_TimedKillComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_TimedKillComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_remove 25
typedef void (*func_mindustry_entities_comp_TimedKillComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_update 26
typedef void (*func_mindustry_entities_comp_TimedKillComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_TimedKillComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_getX_R_float 28
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_getY_R_float 29
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_TimedKillComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_TimedKillComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_TimedKillComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_TimedKillComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_TimedKillComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_TimedKillComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_TimedKillComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_TimedKillComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_x_float 51
typedef void (*func_mindustry_entities_comp_TimedKillComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_y_float 52
typedef void (*func_mindustry_entities_comp_TimedKillComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damageArmorMult_float_float 53
typedef void (*func_mindustry_entities_comp_TimedKillComp_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damageArmorMult_float_float_boolean 54
typedef void (*func_mindustry_entities_comp_TimedKillComp_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damagePierce_float 55
typedef void (*func_mindustry_entities_comp_TimedKillComp_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damagePierce_float_boolean 56
typedef void (*func_mindustry_entities_comp_TimedKillComp_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_healFract_float 57
typedef void (*func_mindustry_entities_comp_TimedKillComp_healFract_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_heal_float 58
typedef void (*func_mindustry_entities_comp_TimedKillComp_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damaged_R_boolean 59
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_damaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_dead_R_boolean 60
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_isValid_R_boolean 61
typedef jbool (*func_mindustry_entities_comp_TimedKillComp_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_health_R_float 62
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_health_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_healthf_R_float 63
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_healthf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_hitTime_R_float 64
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_hitTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_maxHealth_R_float 65
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_maxHealth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_clampHealth 66
typedef void (*func_mindustry_entities_comp_TimedKillComp_clampHealth)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damage_float 67
typedef void (*func_mindustry_entities_comp_TimedKillComp_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damage_float_boolean 68
typedef void (*func_mindustry_entities_comp_TimedKillComp_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damageContinuous_float 69
typedef void (*func_mindustry_entities_comp_TimedKillComp_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damageContinuousArmorMult_float_float 70
typedef void (*func_mindustry_entities_comp_TimedKillComp_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TimedKillComp_damageContinuousPierce_float 71
typedef void (*func_mindustry_entities_comp_TimedKillComp_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_dead_boolean 72
typedef void (*func_mindustry_entities_comp_TimedKillComp_dead_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_heal 73
typedef void (*func_mindustry_entities_comp_TimedKillComp_heal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_health_float 74
typedef void (*func_mindustry_entities_comp_TimedKillComp_health_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_hitTime_float 75
typedef void (*func_mindustry_entities_comp_TimedKillComp_hitTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_kill 76
typedef void (*func_mindustry_entities_comp_TimedKillComp_kill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_killed 77
typedef void (*func_mindustry_entities_comp_TimedKillComp_killed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_maxHealth_float 78
typedef void (*func_mindustry_entities_comp_TimedKillComp_maxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_fin_R_float 79
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_fout_R_float 80
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_fout_arc_math_Interp_R_float 81
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_fout_float_R_float 82
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_fin_arc_math_Interp_R_float 83
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimedKillComp_finpow_R_float 84
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_foutpow_R_float 85
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_finpowdown_R_float 86
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_foutpowdown_R_float 87
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimedKillComp_fslope_R_float 88
typedef jfloat (*func_mindustry_entities_comp_TimedKillComp_fslope_R_float)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_TimedKillComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_TimedKillComp(jcontext ctx);
void init_mindustry_entities_comp_TimedKillComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_TimedKillComp_update(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_TimedKillComp_fin_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
