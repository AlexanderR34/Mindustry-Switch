#ifndef HEADER_mindustry_entities_comp_TeamComp
#define HEADER_mindustry_entities_comp_TeamComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_TeamComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jref F_team;
} mindustry_entities_comp_TeamComp;

extern Class class_mindustry_entities_comp_TeamComp;


#define VTABLE_mindustry_entities_comp_TeamComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_TeamComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_TeamComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_TeamComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_TeamComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_TeamComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_finalize 5
typedef void (*func_mindustry_entities_comp_TeamComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_notify 6
typedef void (*func_mindustry_entities_comp_TeamComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_TeamComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_wait 8
typedef void (*func_mindustry_entities_comp_TeamComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_wait_long 9
typedef void (*func_mindustry_entities_comp_TeamComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_TeamComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_TeamComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_TeamComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_TeamComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_TeamComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_TeamComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_TeamComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TeamComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_TeamComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_TeamComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_TeamComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TeamComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_TeamComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TeamComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_TeamComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TeamComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_TeamComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_TeamComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_TeamComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_TeamComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_TeamComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_TeamComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_TeamComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_TeamComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_TeamComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_TeamComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_add 29
typedef void (*func_mindustry_entities_comp_TeamComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_afterRead 30
typedef void (*func_mindustry_entities_comp_TeamComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_TeamComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_TeamComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_id_int 33
typedef void (*func_mindustry_entities_comp_TeamComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_TeamComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_TeamComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_remove 35
typedef void (*func_mindustry_entities_comp_TeamComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_update 36
typedef void (*func_mindustry_entities_comp_TeamComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_TeamComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_TeamComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_TeamComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_TeamComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_TeamComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_TeamComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_TeamComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_TeamComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_TeamComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_TeamComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_TeamComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_TeamComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TeamComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_TeamComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_TeamComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_TeamComp_x_float 51
typedef void (*func_mindustry_entities_comp_TeamComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TeamComp_y_float 52
typedef void (*func_mindustry_entities_comp_TeamComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_TeamComp_cheating_R_boolean 53
typedef jbool (*func_mindustry_entities_comp_TeamComp_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_inFogTo_mindustry_game_Team_R_boolean 54
typedef jbool (*func_mindustry_entities_comp_TeamComp_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TeamComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 55
typedef jobject (*func_mindustry_entities_comp_TeamComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 56
typedef jobject (*func_mindustry_entities_comp_TeamComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TeamComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 57
typedef jobject (*func_mindustry_entities_comp_TeamComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_TeamComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_TeamComp(jcontext ctx);
void init_mindustry_entities_comp_TeamComp(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_TeamComp_cheating_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_TeamComp_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_comp_TeamComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_TeamComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_TeamComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
