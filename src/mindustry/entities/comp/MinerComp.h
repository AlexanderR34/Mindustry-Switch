#ifndef HEADER_mindustry_entities_comp_MinerComp
#define HEADER_mindustry_entities_comp_MinerComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Drawc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_MinerComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_rotation;
	jfloat F_hitSize;
	jref F_type;
	jfloat F_mineTimer;
	jref F_mineTile;
} mindustry_entities_comp_MinerComp;

extern Class class_mindustry_entities_comp_MinerComp;


#define VTABLE_mindustry_entities_comp_MinerComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_MinerComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_MinerComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_MinerComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_MinerComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_MinerComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_finalize 5
typedef void (*func_mindustry_entities_comp_MinerComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_notify 6
typedef void (*func_mindustry_entities_comp_MinerComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_MinerComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_wait 8
typedef void (*func_mindustry_entities_comp_MinerComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_wait_long 9
typedef void (*func_mindustry_entities_comp_MinerComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_MinerComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_MinerComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_MinerComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_MinerComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_MinerComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_MinerComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_MinerComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_MinerComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_MinerComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_add 19
typedef void (*func_mindustry_entities_comp_MinerComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_afterRead 20
typedef void (*func_mindustry_entities_comp_MinerComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_MinerComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_MinerComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_id_int 23
typedef void (*func_mindustry_entities_comp_MinerComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_MinerComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_MinerComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_remove 25
typedef void (*func_mindustry_entities_comp_MinerComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_update 26
typedef void (*func_mindustry_entities_comp_MinerComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_MinerComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_getX_R_float 28
typedef jfloat (*func_mindustry_entities_comp_MinerComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_getY_R_float 29
typedef jfloat (*func_mindustry_entities_comp_MinerComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_entities_comp_MinerComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_MinerComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_MinerComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_entities_comp_MinerComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_entities_comp_MinerComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_entities_comp_MinerComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_MinerComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_entities_comp_MinerComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_MinerComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_MinerComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_MinerComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_entities_comp_MinerComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_MinerComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_MinerComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_MinerComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_MinerComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_MinerComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_MinerComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_MinerComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_MinerComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_MinerComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_MinerComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_MinerComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_MinerComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_MinerComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_MinerComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_MinerComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_MinerComp_x_float 51
typedef void (*func_mindustry_entities_comp_MinerComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_MinerComp_y_float 52
typedef void (*func_mindustry_entities_comp_MinerComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_MinerComp_acceptsItem_mindustry_type_Item_R_boolean 53
typedef jbool (*func_mindustry_entities_comp_MinerComp_acceptsItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_hasItem_R_boolean 54
typedef jbool (*func_mindustry_entities_comp_MinerComp_hasItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_itemTime_R_float 55
typedef jfloat (*func_mindustry_entities_comp_MinerComp_itemTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_itemCapacity_R_int 56
typedef jint (*func_mindustry_entities_comp_MinerComp_itemCapacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_maxAccepted_mindustry_type_Item_R_int 57
typedef jint (*func_mindustry_entities_comp_MinerComp_maxAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item 58
typedef jobject (*func_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_stack_R_mindustry_type_ItemStack 59
typedef jobject (*func_mindustry_entities_comp_MinerComp_stack_R_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_addItem_mindustry_type_Item 60
typedef void (*func_mindustry_entities_comp_MinerComp_addItem_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_addItem_mindustry_type_Item_int 61
typedef void (*func_mindustry_entities_comp_MinerComp_addItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_entities_comp_MinerComp_clearItem 62
typedef void (*func_mindustry_entities_comp_MinerComp_clearItem)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_itemTime_float 63
typedef void (*func_mindustry_entities_comp_MinerComp_itemTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_MinerComp_stack_mindustry_type_ItemStack 64
typedef void (*func_mindustry_entities_comp_MinerComp_stack_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_inFogTo_mindustry_game_Team_R_boolean 65
typedef jbool (*func_mindustry_entities_comp_MinerComp_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_cheating_R_boolean 66
typedef jbool (*func_mindustry_entities_comp_MinerComp_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team 67
typedef jobject (*func_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 68
typedef jobject (*func_mindustry_entities_comp_MinerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 69
typedef jobject (*func_mindustry_entities_comp_MinerComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 70
typedef jobject (*func_mindustry_entities_comp_MinerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_team_mindustry_game_Team 71
typedef void (*func_mindustry_entities_comp_MinerComp_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_rotation_R_float 72
typedef jfloat (*func_mindustry_entities_comp_MinerComp_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_rotation_float 73
typedef void (*func_mindustry_entities_comp_MinerComp_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_MinerComp_clipSize_R_float 74
typedef jfloat (*func_mindustry_entities_comp_MinerComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_draw 75
typedef void (*func_mindustry_entities_comp_MinerComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean 76
typedef jbool (*func_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean 77
typedef jbool (*func_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_mining_R_boolean 78
typedef jbool (*func_mindustry_entities_comp_MinerComp_mining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item 79
typedef jobject (*func_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean 80
typedef jbool (*func_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean 81
typedef jbool (*func_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_MinerComp_canMine_R_boolean 82
typedef jbool (*func_mindustry_entities_comp_MinerComp_canMine_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_MinerComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_MinerComp(jcontext ctx);
void init_mindustry_entities_comp_MinerComp(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_MinerComp_mining_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_MinerComp_canMine_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_MinerComp_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
