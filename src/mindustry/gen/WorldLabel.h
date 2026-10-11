#ifndef HEADER_mindustry_gen_WorldLabel
#define HEADER_mindustry_gen_WorldLabel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/WorldLabelc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_WorldLabel {
	java_lang_Object parent;
	jbool F_added;
	jfloat F_duration;
	jref F_expired;
	jbyte F_flags;
	jfloat F_fontSize;
	jint F_id;
	jint F_index__all;
	jint F_index__draw;
	jint F_index__sync;
	jlong F_lastUpdated;
	jref F_parent;
	jref F_text;
	jlong F_updateSpacing;
	jfloat F_x;
	jfloat F_x_LAST_;
	jfloat F_x_TARGET_;
	jfloat F_y;
	jfloat F_y_LAST_;
	jfloat F_y_TARGET_;
	jfloat F_z;
} mindustry_gen_WorldLabel;

extern Class class_mindustry_gen_WorldLabel;

extern jbyte SF_mindustry_gen_WorldLabel_flagAlignLeft;
extern jbyte SF_mindustry_gen_WorldLabel_flagAlignRight;
extern jbyte SF_mindustry_gen_WorldLabel_flagAutoscale;
extern jbyte SF_mindustry_gen_WorldLabel_flagBackground;
extern jbyte SF_mindustry_gen_WorldLabel_flagOutline;

#define VTABLE_mindustry_gen_WorldLabel_hashCode_R_int 0
typedef jint (*func_mindustry_gen_WorldLabel_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_WorldLabel_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_WorldLabel_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_WorldLabel_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_WorldLabel_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_finalize 5
typedef void (*func_mindustry_gen_WorldLabel_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_notify 6
typedef void (*func_mindustry_gen_WorldLabel_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_notifyAll 7
typedef void (*func_mindustry_gen_WorldLabel_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_wait 8
typedef void (*func_mindustry_gen_WorldLabel_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_wait_long 9
typedef void (*func_mindustry_gen_WorldLabel_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_WorldLabel_wait_long_int 10
typedef void (*func_mindustry_gen_WorldLabel_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_WorldLabel_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_WorldLabel_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_WorldLabel_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_WorldLabel_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_WorldLabel_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_classId_R_int 17
typedef jint (*func_mindustry_gen_WorldLabel_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_id_R_int 18
typedef jint (*func_mindustry_gen_WorldLabel_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_add 19
typedef void (*func_mindustry_gen_WorldLabel_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_afterRead 20
typedef void (*func_mindustry_gen_WorldLabel_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_afterReadAll 21
typedef void (*func_mindustry_gen_WorldLabel_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_beforeWrite 22
typedef void (*func_mindustry_gen_WorldLabel_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_id_int 23
typedef void (*func_mindustry_gen_WorldLabel_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WorldLabel_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_WorldLabel_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_remove 25
typedef void (*func_mindustry_gen_WorldLabel_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_update 26
typedef void (*func_mindustry_gen_WorldLabel_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_WorldLabel_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_getX_R_float 28
typedef jfloat (*func_mindustry_gen_WorldLabel_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_getY_R_float 29
typedef jfloat (*func_mindustry_gen_WorldLabel_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_gen_WorldLabel_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_gen_WorldLabel_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WorldLabel_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_gen_WorldLabel_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_WorldLabel_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_WorldLabel_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WorldLabel_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_WorldLabel_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WorldLabel_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_gen_WorldLabel_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_WorldLabel_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_gen_WorldLabel_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_onSolid_R_boolean 40
typedef jbool (*func_mindustry_gen_WorldLabel_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_x_R_float 41
typedef jfloat (*func_mindustry_gen_WorldLabel_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_y_R_float 42
typedef jfloat (*func_mindustry_gen_WorldLabel_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_tileX_R_int 43
typedef jint (*func_mindustry_gen_WorldLabel_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_tileY_R_int 44
typedef jint (*func_mindustry_gen_WorldLabel_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_set_arc_math_geom_Position 47
typedef void (*func_mindustry_gen_WorldLabel_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_set_float_float 48
typedef void (*func_mindustry_gen_WorldLabel_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WorldLabel_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_gen_WorldLabel_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_trns_float_float 50
typedef void (*func_mindustry_gen_WorldLabel_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WorldLabel_x_float 51
typedef void (*func_mindustry_gen_WorldLabel_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WorldLabel_y_float 52
typedef void (*func_mindustry_gen_WorldLabel_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WorldLabel_clipSize_R_float 53
typedef jfloat (*func_mindustry_gen_WorldLabel_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_draw 54
typedef void (*func_mindustry_gen_WorldLabel_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_setIndex__all_int 55
typedef void (*func_mindustry_gen_WorldLabel_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WorldLabel_setIndex__draw_int 56
typedef void (*func_mindustry_gen_WorldLabel_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WorldLabel_setIndex__sync_int 57
typedef void (*func_mindustry_gen_WorldLabel_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean 58
typedef jbool (*func_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_lastUpdated_R_long 59
typedef jlong (*func_mindustry_gen_WorldLabel_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_updateSpacing_R_long 60
typedef jlong (*func_mindustry_gen_WorldLabel_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_afterSync 61
typedef void (*func_mindustry_gen_WorldLabel_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_handleSyncHidden 62
typedef void (*func_mindustry_gen_WorldLabel_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_interpolate 63
typedef void (*func_mindustry_gen_WorldLabel_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_lastUpdated_long 64
typedef void (*func_mindustry_gen_WorldLabel_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads 65
typedef void (*func_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer 66
typedef void (*func_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_snapInterpolation 67
typedef void (*func_mindustry_gen_WorldLabel_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_snapSync 68
typedef void (*func_mindustry_gen_WorldLabel_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_updateSpacing_long 69
typedef void (*func_mindustry_gen_WorldLabel_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes 70
typedef void (*func_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer 71
typedef void (*func_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_hide 72
typedef void (*func_mindustry_gen_WorldLabel_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WorldLabel_hide_mindustry_gen_Player 73
typedef void (*func_mindustry_gen_WorldLabel_hide_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WorldLabel_show_mindustry_gen_Player 74
typedef void (*func_mindustry_gen_WorldLabel_show_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_WorldLabel(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_WorldLabel(jcontext ctx);
void init_mindustry_gen_WorldLabel(jcontext ctx, jobject self);
jobject M_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WorldLabel_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WorldLabel_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_WorldLabel_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_WorldLabel_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_WorldLabel_toString_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_gen_WorldLabel_lastUpdated_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_WorldLabel_updateSpacing_R_long(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WorldLabel_lastUpdated_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_WorldLabel_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WorldLabel_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WorldLabel_setIndex__sync_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WorldLabel_updateSpacing_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_WorldLabel_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WorldLabel_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WorldLabel_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_WorldLabel_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_WorldLabel_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WorldLabel_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WorldLabel_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_WorldLabel_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WorldLabel_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WorldLabel_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WorldLabel_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WorldLabel_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_WorldLabel_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_WorldLabel_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_WorldLabel_create_R_mindustry_gen_WorldLabel(jcontext ctx);
void SM_mindustry_gen_WorldLabel_drawAt_java_lang_String_float_float_float_int_float_int_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jfloat param5, jint param6, jint param7);
void M_mindustry_gen_WorldLabel_add(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_afterSync(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_draw(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_hide(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_hide_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_interpolate(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_remove(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_WorldLabel_show_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_snapSync(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_WorldLabel_update(jcontext ctx, jobject self);
void M_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
