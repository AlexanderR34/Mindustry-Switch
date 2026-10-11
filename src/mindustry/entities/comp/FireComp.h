#ifndef HEADER_mindustry_entities_comp_FireComp
#define HEADER_mindustry_entities_comp_FireComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Drawc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_FireComp {
	java_lang_Object parent;
	jfloat F_time;
	jfloat F_lifetime;
	jfloat F_x;
	jfloat F_y;
	jref F_tile;
	jfloat F_puddleFlammability;
	jfloat F_damageTimer;
	jfloat F_spreadTimer;
	jfloat F_fireballTimer;
	jfloat F_warmup;
	jfloat F_animation;
} mindustry_entities_comp_FireComp;

extern Class class_mindustry_entities_comp_FireComp;

extern jint SF_mindustry_entities_comp_FireComp_frames;
extern jint SF_mindustry_entities_comp_FireComp_duration;
extern jfloat SF_mindustry_entities_comp_FireComp_spreadDelay;
extern jfloat SF_mindustry_entities_comp_FireComp_fireballDelay;
extern jfloat SF_mindustry_entities_comp_FireComp_ticksPerFrame;
extern jfloat SF_mindustry_entities_comp_FireComp_warmupDuration;
extern jfloat SF_mindustry_entities_comp_FireComp_damageDelay;
extern jfloat SF_mindustry_entities_comp_FireComp_tileDamage;
extern jfloat SF_mindustry_entities_comp_FireComp_unitDamage;
extern jobject SF_mindustry_entities_comp_FireComp_regions;

#define VTABLE_mindustry_entities_comp_FireComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_FireComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_FireComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_FireComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_FireComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_FireComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_finalize 5
typedef void (*func_mindustry_entities_comp_FireComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_notify 6
typedef void (*func_mindustry_entities_comp_FireComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_FireComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_wait 8
typedef void (*func_mindustry_entities_comp_FireComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_wait_long 9
typedef void (*func_mindustry_entities_comp_FireComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_FireComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_FireComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_FireComp_fin_R_float 11
typedef jfloat (*func_mindustry_entities_comp_FireComp_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_fout_R_float 12
typedef jfloat (*func_mindustry_entities_comp_FireComp_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_fout_arc_math_Interp_R_float 13
typedef jfloat (*func_mindustry_entities_comp_FireComp_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_fout_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_FireComp_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_FireComp_fin_arc_math_Interp_R_float 15
typedef jfloat (*func_mindustry_entities_comp_FireComp_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_finpow_R_float 16
typedef jfloat (*func_mindustry_entities_comp_FireComp_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_foutpow_R_float 17
typedef jfloat (*func_mindustry_entities_comp_FireComp_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_finpowdown_R_float 18
typedef jfloat (*func_mindustry_entities_comp_FireComp_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_foutpowdown_R_float 19
typedef jfloat (*func_mindustry_entities_comp_FireComp_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_fslope_R_float 20
typedef jfloat (*func_mindustry_entities_comp_FireComp_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_FireComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_FireComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_FireComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_FireComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_FireComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_FireComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_FireComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_FireComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_add 29
typedef void (*func_mindustry_entities_comp_FireComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_afterRead 30
typedef void (*func_mindustry_entities_comp_FireComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_FireComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_FireComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_id_int 33
typedef void (*func_mindustry_entities_comp_FireComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_FireComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_FireComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_remove 35
typedef void (*func_mindustry_entities_comp_FireComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_update 36
typedef void (*func_mindustry_entities_comp_FireComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_FireComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_lifetime_R_float 38
typedef jfloat (*func_mindustry_entities_comp_FireComp_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_time_R_float 39
typedef jfloat (*func_mindustry_entities_comp_FireComp_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_lifetime_float 40
typedef void (*func_mindustry_entities_comp_FireComp_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_FireComp_time_float 41
typedef void (*func_mindustry_entities_comp_FireComp_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_FireComp_getX_R_float 42
typedef jfloat (*func_mindustry_entities_comp_FireComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_getY_R_float 43
typedef jfloat (*func_mindustry_entities_comp_FireComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_angleTo_arc_math_geom_Position_R_float 44
typedef jfloat (*func_mindustry_entities_comp_FireComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_angleTo_float_float_R_float 45
typedef jfloat (*func_mindustry_entities_comp_FireComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_FireComp_dst2_arc_math_geom_Position_R_float 46
typedef jfloat (*func_mindustry_entities_comp_FireComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_dst_arc_math_geom_Position_R_float 47
typedef jfloat (*func_mindustry_entities_comp_FireComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_dst_float_float_R_float 48
typedef jfloat (*func_mindustry_entities_comp_FireComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_FireComp_dst2_float_float_R_float 49
typedef jfloat (*func_mindustry_entities_comp_FireComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_FireComp_within_arc_math_geom_Position_float_R_boolean 50
typedef jbool (*func_mindustry_entities_comp_FireComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_FireComp_within_float_float_float_R_boolean 51
typedef jbool (*func_mindustry_entities_comp_FireComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_FireComp_floorOn_R_mindustry_world_blocks_environment_Floor 52
typedef jobject (*func_mindustry_entities_comp_FireComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_buildOn_R_mindustry_gen_Building 53
typedef jobject (*func_mindustry_entities_comp_FireComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_onSolid_R_boolean 54
typedef jbool (*func_mindustry_entities_comp_FireComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_x_R_float 55
typedef jfloat (*func_mindustry_entities_comp_FireComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_y_R_float 56
typedef jfloat (*func_mindustry_entities_comp_FireComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_tileX_R_int 57
typedef jint (*func_mindustry_entities_comp_FireComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_tileY_R_int 58
typedef jint (*func_mindustry_entities_comp_FireComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_blockOn_R_mindustry_world_Block 59
typedef jobject (*func_mindustry_entities_comp_FireComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_tileOn_R_mindustry_world_Tile 60
typedef jobject (*func_mindustry_entities_comp_FireComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_set_arc_math_geom_Position 61
typedef void (*func_mindustry_entities_comp_FireComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_set_float_float 62
typedef void (*func_mindustry_entities_comp_FireComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_FireComp_trns_arc_math_geom_Position 63
typedef void (*func_mindustry_entities_comp_FireComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_trns_float_float 64
typedef void (*func_mindustry_entities_comp_FireComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_FireComp_x_float 65
typedef void (*func_mindustry_entities_comp_FireComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_FireComp_y_float 66
typedef void (*func_mindustry_entities_comp_FireComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_FireComp_isSyncHidden_mindustry_game_Team_R_boolean 67
typedef jbool (*func_mindustry_entities_comp_FireComp_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_lastUpdated_R_long 68
typedef jlong (*func_mindustry_entities_comp_FireComp_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_updateSpacing_R_long 69
typedef jlong (*func_mindustry_entities_comp_FireComp_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_afterSync 70
typedef void (*func_mindustry_entities_comp_FireComp_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_handleSyncHidden 71
typedef void (*func_mindustry_entities_comp_FireComp_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_interpolate 72
typedef void (*func_mindustry_entities_comp_FireComp_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_lastUpdated_long 73
typedef void (*func_mindustry_entities_comp_FireComp_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_FireComp_readSync_arc_util_io_Reads 74
typedef void (*func_mindustry_entities_comp_FireComp_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_readSyncManual_java_nio_FloatBuffer 75
typedef void (*func_mindustry_entities_comp_FireComp_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_snapInterpolation 76
typedef void (*func_mindustry_entities_comp_FireComp_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_snapSync 77
typedef void (*func_mindustry_entities_comp_FireComp_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_updateSpacing_long 78
typedef void (*func_mindustry_entities_comp_FireComp_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_FireComp_writeSync_arc_util_io_Writes 79
typedef void (*func_mindustry_entities_comp_FireComp_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_writeSyncManual_java_nio_FloatBuffer 80
typedef void (*func_mindustry_entities_comp_FireComp_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_FireComp_clipSize_R_float 81
typedef jfloat (*func_mindustry_entities_comp_FireComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_FireComp_draw 82
typedef void (*func_mindustry_entities_comp_FireComp_draw)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_FireComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_FireComp(jcontext ctx);
void init_mindustry_entities_comp_FireComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_FireComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_FireComp_draw(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_FireComp_clipSize_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_FireComp_remove(jcontext ctx, jobject self);
void M_mindustry_entities_comp_FireComp_afterRead(jcontext ctx, jobject self);
void M_mindustry_entities_comp_FireComp_afterSync(jcontext ctx, jobject self);
void SM_mindustry_entities_comp_FireComp_lambda$update$1_mindustry_gen_Unit(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_comp_FireComp_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
