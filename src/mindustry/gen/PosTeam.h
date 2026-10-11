#ifndef HEADER_mindustry_gen_PosTeam
#define HEADER_mindustry_gen_PosTeam

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_PosTeam {
	java_lang_Object parent;
	jbool F_added;
	jint F_id;
	jint F_index__all;
	jref F_team;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_PosTeam;

extern Class class_mindustry_gen_PosTeam;


#define VTABLE_mindustry_gen_PosTeam_hashCode_R_int 0
typedef jint (*func_mindustry_gen_PosTeam_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_PosTeam_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_PosTeam_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_PosTeam_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_PosTeam_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_finalize 5
typedef void (*func_mindustry_gen_PosTeam_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_notify 6
typedef void (*func_mindustry_gen_PosTeam_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_notifyAll 7
typedef void (*func_mindustry_gen_PosTeam_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_wait 8
typedef void (*func_mindustry_gen_PosTeam_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_wait_long 9
typedef void (*func_mindustry_gen_PosTeam_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_PosTeam_wait_long_int 10
typedef void (*func_mindustry_gen_PosTeam_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_PosTeam_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_PosTeam_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_PosTeam_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_PosTeam_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_PosTeam_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_PosTeam_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_PosTeam_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_classId_R_int 17
typedef jint (*func_mindustry_gen_PosTeam_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_id_R_int 18
typedef jint (*func_mindustry_gen_PosTeam_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_add 19
typedef void (*func_mindustry_gen_PosTeam_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_afterRead 20
typedef void (*func_mindustry_gen_PosTeam_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_afterReadAll 21
typedef void (*func_mindustry_gen_PosTeam_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_beforeWrite 22
typedef void (*func_mindustry_gen_PosTeam_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_id_int 23
typedef void (*func_mindustry_gen_PosTeam_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_PosTeam_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_PosTeam_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_remove 25
typedef void (*func_mindustry_gen_PosTeam_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_update 26
typedef void (*func_mindustry_gen_PosTeam_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_PosTeam_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_setIndex__all_int 28
typedef void (*func_mindustry_gen_PosTeam_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_PosTeam_getX_R_float 29
typedef jfloat (*func_mindustry_gen_PosTeam_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_getY_R_float 30
typedef jfloat (*func_mindustry_gen_PosTeam_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_angleTo_arc_math_geom_Position_R_float 31
typedef jfloat (*func_mindustry_gen_PosTeam_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_angleTo_float_float_R_float 32
typedef jfloat (*func_mindustry_gen_PosTeam_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_PosTeam_dst2_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_PosTeam_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_dst_arc_math_geom_Position_R_float 34
typedef jfloat (*func_mindustry_gen_PosTeam_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_dst_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_PosTeam_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_PosTeam_dst2_float_float_R_float 36
typedef jfloat (*func_mindustry_gen_PosTeam_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_PosTeam_within_arc_math_geom_Position_float_R_boolean 37
typedef jbool (*func_mindustry_gen_PosTeam_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_PosTeam_within_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_gen_PosTeam_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_PosTeam_floorOn_R_mindustry_world_blocks_environment_Floor 39
typedef jobject (*func_mindustry_gen_PosTeam_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_buildOn_R_mindustry_gen_Building 40
typedef jobject (*func_mindustry_gen_PosTeam_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_onSolid_R_boolean 41
typedef jbool (*func_mindustry_gen_PosTeam_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_x_R_float 42
typedef jfloat (*func_mindustry_gen_PosTeam_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_y_R_float 43
typedef jfloat (*func_mindustry_gen_PosTeam_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_tileX_R_int 44
typedef jint (*func_mindustry_gen_PosTeam_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_tileY_R_int 45
typedef jint (*func_mindustry_gen_PosTeam_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_blockOn_R_mindustry_world_Block 46
typedef jobject (*func_mindustry_gen_PosTeam_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_tileOn_R_mindustry_world_Tile 47
typedef jobject (*func_mindustry_gen_PosTeam_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_set_arc_math_geom_Position 48
typedef void (*func_mindustry_gen_PosTeam_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_set_float_float 49
typedef void (*func_mindustry_gen_PosTeam_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_PosTeam_trns_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_PosTeam_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_trns_float_float 51
typedef void (*func_mindustry_gen_PosTeam_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_PosTeam_x_float 52
typedef void (*func_mindustry_gen_PosTeam_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_PosTeam_y_float 53
typedef void (*func_mindustry_gen_PosTeam_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_PosTeam_inFogTo_mindustry_game_Team_R_boolean 54
typedef jbool (*func_mindustry_gen_PosTeam_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_PosTeam_cheating_R_boolean 55
typedef jbool (*func_mindustry_gen_PosTeam_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_team_R_mindustry_game_Team 56
typedef jobject (*func_mindustry_gen_PosTeam_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 57
typedef jobject (*func_mindustry_gen_PosTeam_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 58
typedef jobject (*func_mindustry_gen_PosTeam_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 59
typedef jobject (*func_mindustry_gen_PosTeam_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_PosTeam_team_mindustry_game_Team 60
typedef void (*func_mindustry_gen_PosTeam_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_PosTeam(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_PosTeam(jcontext ctx);
void init_mindustry_gen_PosTeam(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jfloat M_mindustry_gen_PosTeam_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_PosTeam_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_PosTeam_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_PosTeam_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_team_R_mindustry_game_Team(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_PosTeam_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_PosTeam_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_PosTeam_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_PosTeam_y_float(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_gen_PosTeam_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_PosTeam_cheating_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PosTeam_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_PosTeam_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PosTeam_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PosTeam_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PosTeam_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_PosTeam_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_PosTeam_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_PosTeam_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_PosTeam_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_PosTeam_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_PosTeam_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_PosTeam_create_R_mindustry_gen_PosTeam(jcontext ctx);
void M_mindustry_gen_PosTeam_add(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_PosTeam_remove(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_PosTeam_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_PosTeam_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_PosTeam_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_PosTeam_update(jcontext ctx, jobject self);
void M_mindustry_gen_PosTeam_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
