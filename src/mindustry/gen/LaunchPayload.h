#ifndef HEADER_mindustry_gen_LaunchPayload
#define HEADER_mindustry_gen_LaunchPayload

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/LaunchPayloadc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_LaunchPayload {
	java_lang_Object parent;
	jbool F_added;
	jint F_id;
	jref F_in;
	jint F_index__all;
	jint F_index__draw;
	jfloat F_lifetime;
	jref F_stacks;
	jref F_team;
	jfloat F_time;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_LaunchPayload;

extern Class class_mindustry_gen_LaunchPayload;


#define VTABLE_mindustry_gen_LaunchPayload_hashCode_R_int 0
typedef jint (*func_mindustry_gen_LaunchPayload_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_LaunchPayload_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_LaunchPayload_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_LaunchPayload_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_LaunchPayload_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_finalize 5
typedef void (*func_mindustry_gen_LaunchPayload_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_notify 6
typedef void (*func_mindustry_gen_LaunchPayload_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_notifyAll 7
typedef void (*func_mindustry_gen_LaunchPayload_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_wait 8
typedef void (*func_mindustry_gen_LaunchPayload_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_wait_long 9
typedef void (*func_mindustry_gen_LaunchPayload_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_LaunchPayload_wait_long_int 10
typedef void (*func_mindustry_gen_LaunchPayload_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_LaunchPayload_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_LaunchPayload_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_LaunchPayload_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_LaunchPayload_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_LaunchPayload_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_classId_R_int 17
typedef jint (*func_mindustry_gen_LaunchPayload_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_id_R_int 18
typedef jint (*func_mindustry_gen_LaunchPayload_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_add 19
typedef void (*func_mindustry_gen_LaunchPayload_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_afterRead 20
typedef void (*func_mindustry_gen_LaunchPayload_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_afterReadAll 21
typedef void (*func_mindustry_gen_LaunchPayload_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_beforeWrite 22
typedef void (*func_mindustry_gen_LaunchPayload_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_id_int 23
typedef void (*func_mindustry_gen_LaunchPayload_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_LaunchPayload_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_LaunchPayload_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_remove 25
typedef void (*func_mindustry_gen_LaunchPayload_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_update 26
typedef void (*func_mindustry_gen_LaunchPayload_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_LaunchPayload_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_getX_R_float 28
typedef jfloat (*func_mindustry_gen_LaunchPayload_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_getY_R_float 29
typedef jfloat (*func_mindustry_gen_LaunchPayload_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_gen_LaunchPayload_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_gen_LaunchPayload_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchPayload_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_gen_LaunchPayload_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_LaunchPayload_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_LaunchPayload_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchPayload_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_LaunchPayload_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchPayload_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_gen_LaunchPayload_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchPayload_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_gen_LaunchPayload_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_onSolid_R_boolean 40
typedef jbool (*func_mindustry_gen_LaunchPayload_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_x_R_float 41
typedef jfloat (*func_mindustry_gen_LaunchPayload_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_y_R_float 42
typedef jfloat (*func_mindustry_gen_LaunchPayload_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_tileX_R_int 43
typedef jint (*func_mindustry_gen_LaunchPayload_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_tileY_R_int 44
typedef jint (*func_mindustry_gen_LaunchPayload_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_set_arc_math_geom_Position 47
typedef void (*func_mindustry_gen_LaunchPayload_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_set_float_float 48
typedef void (*func_mindustry_gen_LaunchPayload_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_trns_float_float 50
typedef void (*func_mindustry_gen_LaunchPayload_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchPayload_x_float 51
typedef void (*func_mindustry_gen_LaunchPayload_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchPayload_y_float 52
typedef void (*func_mindustry_gen_LaunchPayload_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchPayload_clipSize_R_float 53
typedef jfloat (*func_mindustry_gen_LaunchPayload_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_draw 54
typedef void (*func_mindustry_gen_LaunchPayload_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_setIndex__all_int 55
typedef void (*func_mindustry_gen_LaunchPayload_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_LaunchPayload_setIndex__draw_int 56
typedef void (*func_mindustry_gen_LaunchPayload_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean 57
typedef jbool (*func_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_cheating_R_boolean 58
typedef jbool (*func_mindustry_gen_LaunchPayload_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team 59
typedef jobject (*func_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 60
typedef jobject (*func_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 61
typedef jobject (*func_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 62
typedef jobject (*func_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_team_mindustry_game_Team 63
typedef void (*func_mindustry_gen_LaunchPayload_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_fin_R_float 64
typedef jfloat (*func_mindustry_gen_LaunchPayload_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_fout_R_float 65
typedef jfloat (*func_mindustry_gen_LaunchPayload_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_fout_arc_math_Interp_R_float 66
typedef jfloat (*func_mindustry_gen_LaunchPayload_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_fout_float_R_float 67
typedef jfloat (*func_mindustry_gen_LaunchPayload_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float 68
typedef jfloat (*func_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_finpow_R_float 69
typedef jfloat (*func_mindustry_gen_LaunchPayload_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_foutpow_R_float 70
typedef jfloat (*func_mindustry_gen_LaunchPayload_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_finpowdown_R_float 71
typedef jfloat (*func_mindustry_gen_LaunchPayload_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_foutpowdown_R_float 72
typedef jfloat (*func_mindustry_gen_LaunchPayload_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_fslope_R_float 73
typedef jfloat (*func_mindustry_gen_LaunchPayload_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_lifetime_R_float 74
typedef jfloat (*func_mindustry_gen_LaunchPayload_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_time_R_float 75
typedef jfloat (*func_mindustry_gen_LaunchPayload_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_lifetime_float 76
typedef void (*func_mindustry_gen_LaunchPayload_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchPayload_time_float 77
typedef void (*func_mindustry_gen_LaunchPayload_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq 78
typedef jobject (*func_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_in_R_arc_util_Interval 79
typedef jobject (*func_mindustry_gen_LaunchPayload_in_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_cx_R_float 80
typedef jfloat (*func_mindustry_gen_LaunchPayload_cx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_cy_R_float 81
typedef jfloat (*func_mindustry_gen_LaunchPayload_cy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchPayload_in_arc_util_Interval 82
typedef void (*func_mindustry_gen_LaunchPayload_in_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq 83
typedef void (*func_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_LaunchPayload(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_LaunchPayload(jcontext ctx);
void init_mindustry_gen_LaunchPayload(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_in_R_arc_util_Interval(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_time_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchPayload_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchPayload_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_LaunchPayload_in_arc_util_Interval(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchPayload_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchPayload_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_LaunchPayload_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchPayload_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchPayload_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchPayload_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchPayload_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchPayload_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchPayload_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchPayload_cheating_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_LaunchPayload_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchPayload_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchPayload_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchPayload_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchPayload_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_cx_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_cy_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchPayload_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchPayload_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchPayload_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_LaunchPayload_create_R_mindustry_gen_LaunchPayload(jcontext ctx);
void M_mindustry_gen_LaunchPayload_add(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_draw(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_remove(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchPayload_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchPayload_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchPayload_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_LaunchPayload_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
