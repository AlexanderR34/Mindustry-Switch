#ifndef HEADER_mindustry_gen_Puddle
#define HEADER_mindustry_gen_Puddle

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Puddlec.h"
#include "mindustry/gen/Syncc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Puddle {
	java_lang_Object parent;
	jfloat F_accepting;
	jbool F_added;
	jfloat F_amount;
	jfloat F_effectTime;
	jint F_id;
	jint F_index__all;
	jint F_index__draw;
	jint F_index__sync;
	jfloat F_lastRipple;
	jlong F_lastUpdated;
	jref F_liquid;
	jref F_tile;
	jlong F_updateSpacing;
	jfloat F_updateTime;
	jfloat F_x;
	jfloat F_x_LAST_;
	jfloat F_x_TARGET_;
	jfloat F_y;
	jfloat F_y_LAST_;
	jfloat F_y_TARGET_;
} mindustry_gen_Puddle;

extern Class class_mindustry_gen_Puddle;

extern jobject SF_mindustry_gen_Puddle_paramPuddle;
extern jobject SF_mindustry_gen_Puddle_rect;
extern jobject SF_mindustry_gen_Puddle_rect2;
extern jobject SF_mindustry_gen_Puddle_unitCons;

#define VTABLE_mindustry_gen_Puddle_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Puddle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Puddle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Puddle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Puddle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Puddle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_finalize 5
typedef void (*func_mindustry_gen_Puddle_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_notify 6
typedef void (*func_mindustry_gen_Puddle_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_notifyAll 7
typedef void (*func_mindustry_gen_Puddle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_wait 8
typedef void (*func_mindustry_gen_Puddle_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_wait_long 9
typedef void (*func_mindustry_gen_Puddle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Puddle_wait_long_int 10
typedef void (*func_mindustry_gen_Puddle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Puddle_reset 11
typedef void (*func_mindustry_gen_Puddle_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc 12
typedef jobject (*func_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_as_R_java_lang_Object 13
typedef jobject (*func_mindustry_gen_Puddle_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_isAdded_R_boolean 14
typedef jbool (*func_mindustry_gen_Puddle_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_Puddle_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_isRemote_R_boolean 16
typedef jbool (*func_mindustry_gen_Puddle_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_serialize_R_boolean 17
typedef jbool (*func_mindustry_gen_Puddle_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_classId_R_int 18
typedef jint (*func_mindustry_gen_Puddle_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_id_R_int 19
typedef jint (*func_mindustry_gen_Puddle_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_add 20
typedef void (*func_mindustry_gen_Puddle_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_afterRead 21
typedef void (*func_mindustry_gen_Puddle_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_afterReadAll 22
typedef void (*func_mindustry_gen_Puddle_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_beforeWrite 23
typedef void (*func_mindustry_gen_Puddle_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_id_int 24
typedef void (*func_mindustry_gen_Puddle_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Puddle_read_arc_util_io_Reads 25
typedef void (*func_mindustry_gen_Puddle_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_remove 26
typedef void (*func_mindustry_gen_Puddle_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_update 27
typedef void (*func_mindustry_gen_Puddle_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_write_arc_util_io_Writes 28
typedef void (*func_mindustry_gen_Puddle_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_getX_R_float 29
typedef jfloat (*func_mindustry_gen_Puddle_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_getY_R_float 30
typedef jfloat (*func_mindustry_gen_Puddle_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_angleTo_arc_math_geom_Position_R_float 31
typedef jfloat (*func_mindustry_gen_Puddle_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_angleTo_float_float_R_float 32
typedef jfloat (*func_mindustry_gen_Puddle_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Puddle_dst2_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_Puddle_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_dst_arc_math_geom_Position_R_float 34
typedef jfloat (*func_mindustry_gen_Puddle_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_dst_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_Puddle_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Puddle_dst2_float_float_R_float 36
typedef jfloat (*func_mindustry_gen_Puddle_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Puddle_within_arc_math_geom_Position_float_R_boolean 37
typedef jbool (*func_mindustry_gen_Puddle_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Puddle_within_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_gen_Puddle_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor 39
typedef jobject (*func_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building 40
typedef jobject (*func_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_onSolid_R_boolean 41
typedef jbool (*func_mindustry_gen_Puddle_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_x_R_float 42
typedef jfloat (*func_mindustry_gen_Puddle_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_y_R_float 43
typedef jfloat (*func_mindustry_gen_Puddle_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_tileX_R_int 44
typedef jint (*func_mindustry_gen_Puddle_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_tileY_R_int 45
typedef jint (*func_mindustry_gen_Puddle_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block 46
typedef jobject (*func_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile 47
typedef jobject (*func_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_set_arc_math_geom_Position 48
typedef void (*func_mindustry_gen_Puddle_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_set_float_float 49
typedef void (*func_mindustry_gen_Puddle_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Puddle_trns_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_Puddle_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_trns_float_float 51
typedef void (*func_mindustry_gen_Puddle_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Puddle_x_float 52
typedef void (*func_mindustry_gen_Puddle_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Puddle_y_float 53
typedef void (*func_mindustry_gen_Puddle_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Puddle_clipSize_R_float 54
typedef jfloat (*func_mindustry_gen_Puddle_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_draw 55
typedef void (*func_mindustry_gen_Puddle_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_setIndex__all_int 56
typedef void (*func_mindustry_gen_Puddle_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Puddle_setIndex__draw_int 57
typedef void (*func_mindustry_gen_Puddle_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Puddle_setIndex__sync_int 58
typedef void (*func_mindustry_gen_Puddle_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean 59
typedef jbool (*func_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_lastUpdated_R_long 60
typedef jlong (*func_mindustry_gen_Puddle_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_updateSpacing_R_long 61
typedef jlong (*func_mindustry_gen_Puddle_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_afterSync 62
typedef void (*func_mindustry_gen_Puddle_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_handleSyncHidden 63
typedef void (*func_mindustry_gen_Puddle_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_interpolate 64
typedef void (*func_mindustry_gen_Puddle_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_lastUpdated_long 65
typedef void (*func_mindustry_gen_Puddle_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Puddle_readSync_arc_util_io_Reads 66
typedef void (*func_mindustry_gen_Puddle_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer 67
typedef void (*func_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_snapInterpolation 68
typedef void (*func_mindustry_gen_Puddle_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_snapSync 69
typedef void (*func_mindustry_gen_Puddle_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Puddle_updateSpacing_long 70
typedef void (*func_mindustry_gen_Puddle_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Puddle_writeSync_arc_util_io_Writes 71
typedef void (*func_mindustry_gen_Puddle_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer 72
typedef void (*func_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Puddle_getFlammability_R_float 73
typedef jfloat (*func_mindustry_gen_Puddle_getFlammability_R_float)(jcontext ctx, jobject self);

void mark_mindustry_gen_Puddle(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Puddle(jcontext ctx);
void init_mindustry_gen_Puddle(jcontext ctx, jobject self);
jobject M_mindustry_gen_Puddle_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Puddle_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Puddle_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Puddle_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Puddle_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Puddle_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Puddle_toString_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_gen_Puddle_lastUpdated_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_Puddle_updateSpacing_R_long(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Puddle_lastUpdated_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Puddle_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Puddle_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Puddle_setIndex__sync_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Puddle_updateSpacing_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Puddle_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Puddle_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Puddle_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Puddle_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_Puddle_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Puddle_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_Puddle_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Puddle_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Puddle_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Puddle_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Puddle_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Puddle_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Puddle_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Puddle_getFlammability_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Puddle_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Puddle_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Puddle_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Puddle_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Puddle_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_Puddle_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_Puddle_create_R_mindustry_gen_Puddle(jcontext ctx);
void M_mindustry_gen_Puddle_add(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_afterSync(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_draw(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_interpolate(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Puddle_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Puddle_remove(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_reset(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Puddle_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Puddle_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_snapSync(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Puddle_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Puddle_update(jcontext ctx, jobject self);
void M_mindustry_gen_Puddle_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Puddle_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_gen_Puddle_lambda$static$0_mindustry_gen_Unit(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
