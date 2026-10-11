#ifndef HEADER_mindustry_gen_Fire
#define HEADER_mindustry_gen_Fire

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Firec.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Fire {
	java_lang_Object parent;
	jbool F_added;
	jfloat F_animation;
	jfloat F_damageTimer;
	jfloat F_fireballTimer;
	jint F_id;
	jint F_index__all;
	jint F_index__draw;
	jint F_index__sync;
	jlong F_lastUpdated;
	jfloat F_lifetime;
	jfloat F_puddleFlammability;
	jfloat F_spreadTimer;
	jref F_tile;
	jfloat F_time;
	jlong F_updateSpacing;
	jfloat F_warmup;
	jfloat F_x;
	jfloat F_x_LAST_;
	jfloat F_x_TARGET_;
	jfloat F_y;
	jfloat F_y_LAST_;
	jfloat F_y_TARGET_;
} mindustry_gen_Fire;

extern Class class_mindustry_gen_Fire;

extern jfloat SF_mindustry_gen_Fire_damageDelay;
extern jint SF_mindustry_gen_Fire_duration;
extern jfloat SF_mindustry_gen_Fire_fireballDelay;
extern jint SF_mindustry_gen_Fire_frames;
extern jobject SF_mindustry_gen_Fire_regions;
extern jfloat SF_mindustry_gen_Fire_spreadDelay;
extern jfloat SF_mindustry_gen_Fire_ticksPerFrame;
extern jfloat SF_mindustry_gen_Fire_tileDamage;
extern jfloat SF_mindustry_gen_Fire_unitDamage;
extern jfloat SF_mindustry_gen_Fire_warmupDuration;

#define VTABLE_mindustry_gen_Fire_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Fire_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Fire_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Fire_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Fire_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Fire_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_finalize 5
typedef void (*func_mindustry_gen_Fire_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_notify 6
typedef void (*func_mindustry_gen_Fire_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_notifyAll 7
typedef void (*func_mindustry_gen_Fire_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_wait 8
typedef void (*func_mindustry_gen_Fire_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_wait_long 9
typedef void (*func_mindustry_gen_Fire_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Fire_wait_long_int 10
typedef void (*func_mindustry_gen_Fire_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Fire_reset 11
typedef void (*func_mindustry_gen_Fire_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_self_R_mindustry_gen_Entityc 12
typedef jobject (*func_mindustry_gen_Fire_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_as_R_java_lang_Object 13
typedef jobject (*func_mindustry_gen_Fire_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_isAdded_R_boolean 14
typedef jbool (*func_mindustry_gen_Fire_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_Fire_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_isRemote_R_boolean 16
typedef jbool (*func_mindustry_gen_Fire_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_serialize_R_boolean 17
typedef jbool (*func_mindustry_gen_Fire_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_classId_R_int 18
typedef jint (*func_mindustry_gen_Fire_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_id_R_int 19
typedef jint (*func_mindustry_gen_Fire_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_add 20
typedef void (*func_mindustry_gen_Fire_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_afterRead 21
typedef void (*func_mindustry_gen_Fire_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_afterReadAll 22
typedef void (*func_mindustry_gen_Fire_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_beforeWrite 23
typedef void (*func_mindustry_gen_Fire_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_id_int 24
typedef void (*func_mindustry_gen_Fire_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Fire_read_arc_util_io_Reads 25
typedef void (*func_mindustry_gen_Fire_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_remove 26
typedef void (*func_mindustry_gen_Fire_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_update 27
typedef void (*func_mindustry_gen_Fire_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_write_arc_util_io_Writes 28
typedef void (*func_mindustry_gen_Fire_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_getX_R_float 29
typedef jfloat (*func_mindustry_gen_Fire_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_getY_R_float 30
typedef jfloat (*func_mindustry_gen_Fire_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_angleTo_arc_math_geom_Position_R_float 31
typedef jfloat (*func_mindustry_gen_Fire_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_angleTo_float_float_R_float 32
typedef jfloat (*func_mindustry_gen_Fire_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Fire_dst2_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_Fire_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_dst_arc_math_geom_Position_R_float 34
typedef jfloat (*func_mindustry_gen_Fire_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_dst_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_Fire_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Fire_dst2_float_float_R_float 36
typedef jfloat (*func_mindustry_gen_Fire_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Fire_within_arc_math_geom_Position_float_R_boolean 37
typedef jbool (*func_mindustry_gen_Fire_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Fire_within_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_gen_Fire_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor 39
typedef jobject (*func_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building 40
typedef jobject (*func_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_onSolid_R_boolean 41
typedef jbool (*func_mindustry_gen_Fire_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_x_R_float 42
typedef jfloat (*func_mindustry_gen_Fire_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_y_R_float 43
typedef jfloat (*func_mindustry_gen_Fire_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_tileX_R_int 44
typedef jint (*func_mindustry_gen_Fire_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_tileY_R_int 45
typedef jint (*func_mindustry_gen_Fire_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_blockOn_R_mindustry_world_Block 46
typedef jobject (*func_mindustry_gen_Fire_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile 47
typedef jobject (*func_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_set_arc_math_geom_Position 48
typedef void (*func_mindustry_gen_Fire_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_set_float_float 49
typedef void (*func_mindustry_gen_Fire_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Fire_trns_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_Fire_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_trns_float_float 51
typedef void (*func_mindustry_gen_Fire_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Fire_x_float 52
typedef void (*func_mindustry_gen_Fire_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Fire_y_float 53
typedef void (*func_mindustry_gen_Fire_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Fire_clipSize_R_float 54
typedef jfloat (*func_mindustry_gen_Fire_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_draw 55
typedef void (*func_mindustry_gen_Fire_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean 56
typedef jbool (*func_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_lastUpdated_R_long 57
typedef jlong (*func_mindustry_gen_Fire_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_updateSpacing_R_long 58
typedef jlong (*func_mindustry_gen_Fire_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_afterSync 59
typedef void (*func_mindustry_gen_Fire_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_handleSyncHidden 60
typedef void (*func_mindustry_gen_Fire_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_interpolate 61
typedef void (*func_mindustry_gen_Fire_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_lastUpdated_long 62
typedef void (*func_mindustry_gen_Fire_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Fire_readSync_arc_util_io_Reads 63
typedef void (*func_mindustry_gen_Fire_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer 64
typedef void (*func_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_snapInterpolation 65
typedef void (*func_mindustry_gen_Fire_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_snapSync 66
typedef void (*func_mindustry_gen_Fire_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_updateSpacing_long 67
typedef void (*func_mindustry_gen_Fire_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Fire_writeSync_arc_util_io_Writes 68
typedef void (*func_mindustry_gen_Fire_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer 69
typedef void (*func_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_fin_R_float 70
typedef jfloat (*func_mindustry_gen_Fire_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_fout_R_float 71
typedef jfloat (*func_mindustry_gen_Fire_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_fout_arc_math_Interp_R_float 72
typedef jfloat (*func_mindustry_gen_Fire_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_fout_float_R_float 73
typedef jfloat (*func_mindustry_gen_Fire_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Fire_fin_arc_math_Interp_R_float 74
typedef jfloat (*func_mindustry_gen_Fire_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Fire_finpow_R_float 75
typedef jfloat (*func_mindustry_gen_Fire_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_foutpow_R_float 76
typedef jfloat (*func_mindustry_gen_Fire_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_finpowdown_R_float 77
typedef jfloat (*func_mindustry_gen_Fire_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_foutpowdown_R_float 78
typedef jfloat (*func_mindustry_gen_Fire_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_fslope_R_float 79
typedef jfloat (*func_mindustry_gen_Fire_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_lifetime_R_float 80
typedef jfloat (*func_mindustry_gen_Fire_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_time_R_float 81
typedef jfloat (*func_mindustry_gen_Fire_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Fire_lifetime_float 82
typedef void (*func_mindustry_gen_Fire_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Fire_time_float 83
typedef void (*func_mindustry_gen_Fire_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Fire_setIndex__all_int 84
typedef void (*func_mindustry_gen_Fire_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Fire_setIndex__draw_int 85
typedef void (*func_mindustry_gen_Fire_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Fire_setIndex__sync_int 86
typedef void (*func_mindustry_gen_Fire_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_gen_Fire(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Fire(jcontext ctx);
void init_mindustry_gen_Fire(jcontext ctx, jobject self);
jobject M_mindustry_gen_Fire_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Fire_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_time_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Fire_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Fire_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Fire_toString_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_gen_Fire_lastUpdated_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_Fire_updateSpacing_R_long(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Fire_lastUpdated_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Fire_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Fire_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Fire_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Fire_setIndex__sync_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Fire_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Fire_updateSpacing_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Fire_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Fire_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Fire_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Fire_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_Fire_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Fire_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_Fire_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Fire_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Fire_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Fire_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Fire_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Fire_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Fire_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Fire_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Fire_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Fire_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_Fire_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_Fire_create_R_mindustry_gen_Fire(jcontext ctx);
void M_mindustry_gen_Fire_add(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_afterSync(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_draw(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_interpolate(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Fire_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Fire_remove(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_reset(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Fire_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Fire_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_snapSync(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Fire_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Fire_update(jcontext ctx, jobject self);
void M_mindustry_gen_Fire_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Fire_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_gen_Fire_lambda$update$1_mindustry_gen_Unit(jcontext ctx, jobject param0);
jbool SM_mindustry_gen_Fire_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
