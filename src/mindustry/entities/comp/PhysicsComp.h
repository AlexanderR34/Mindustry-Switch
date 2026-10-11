#ifndef HEADER_mindustry_entities_comp_PhysicsComp
#define HEADER_mindustry_entities_comp_PhysicsComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Hitboxc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_PhysicsComp {
	java_lang_Object parent;
	jfloat F_hitSize;
	jfloat F_x;
	jfloat F_y;
	jref F_vel;
	jbool F_hasPhysicsRef;
} mindustry_entities_comp_PhysicsComp;

extern Class class_mindustry_entities_comp_PhysicsComp;


#define VTABLE_mindustry_entities_comp_PhysicsComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_PhysicsComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_finalize 5
typedef void (*func_mindustry_entities_comp_PhysicsComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_notify 6
typedef void (*func_mindustry_entities_comp_PhysicsComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_PhysicsComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_wait 8
typedef void (*func_mindustry_entities_comp_PhysicsComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_wait_long 9
typedef void (*func_mindustry_entities_comp_PhysicsComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_PhysicsComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_PhysicsComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_PhysicsComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_add 19
typedef void (*func_mindustry_entities_comp_PhysicsComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_afterRead 20
typedef void (*func_mindustry_entities_comp_PhysicsComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_PhysicsComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_PhysicsComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_id_int 23
typedef void (*func_mindustry_entities_comp_PhysicsComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_PhysicsComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_remove 25
typedef void (*func_mindustry_entities_comp_PhysicsComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_update 26
typedef void (*func_mindustry_entities_comp_PhysicsComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_PhysicsComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_getX_R_float 28
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_getY_R_float 29
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_PhysicsComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_PhysicsComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_PhysicsComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_PhysicsComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_PhysicsComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_PhysicsComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_PhysicsComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_x_float 51
typedef void (*func_mindustry_entities_comp_PhysicsComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_y_float 52
typedef void (*func_mindustry_entities_comp_PhysicsComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred 53
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_canPassOn_R_boolean 54
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_canPassOn_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_canPass_int_int_R_boolean 55
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_canPass_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_vel_R_arc_math_geom_Vec2 56
typedef jobject (*func_mindustry_entities_comp_PhysicsComp_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_ignoreSolids_R_boolean 57
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_moving_R_boolean 58
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_moving_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_drag_R_float 59
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_drag_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_drag_float 60
typedef void (*func_mindustry_entities_comp_PhysicsComp_drag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_move_arc_math_geom_Vec2 61
typedef void (*func_mindustry_entities_comp_PhysicsComp_move_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_move_float_float 62
typedef void (*func_mindustry_entities_comp_PhysicsComp_move_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_vel_arc_math_geom_Vec2 63
typedef void (*func_mindustry_entities_comp_PhysicsComp_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_velAddNet_arc_math_geom_Vec2 64
typedef void (*func_mindustry_entities_comp_PhysicsComp_velAddNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_velAddNet_float_float 65
typedef void (*func_mindustry_entities_comp_PhysicsComp_velAddNet_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_hitbox_arc_math_geom_Rect 66
typedef void (*func_mindustry_entities_comp_PhysicsComp_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_hitSize_R_float 67
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_collides_mindustry_gen_Hitboxc_R_boolean 68
typedef jbool (*func_mindustry_entities_comp_PhysicsComp_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_deltaAngle_R_float 69
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_deltaLen_R_float 70
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_deltaX_R_float 71
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_deltaX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_deltaY_R_float 72
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_deltaY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_lastX_R_float 73
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_lastX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_lastY_R_float 74
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_lastY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_collision_mindustry_gen_Hitboxc_float_float 75
typedef void (*func_mindustry_entities_comp_PhysicsComp_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_PhysicsComp_deltaX_float 76
typedef void (*func_mindustry_entities_comp_PhysicsComp_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_deltaY_float 77
typedef void (*func_mindustry_entities_comp_PhysicsComp_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_getCollisions_arc_func_Cons 78
typedef void (*func_mindustry_entities_comp_PhysicsComp_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_hitSize_float 79
typedef void (*func_mindustry_entities_comp_PhysicsComp_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_hitboxTile_arc_math_geom_Rect 80
typedef void (*func_mindustry_entities_comp_PhysicsComp_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_lastX_float 81
typedef void (*func_mindustry_entities_comp_PhysicsComp_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_lastY_float 82
typedef void (*func_mindustry_entities_comp_PhysicsComp_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_updateLastPosition 83
typedef void (*func_mindustry_entities_comp_PhysicsComp_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_mass_R_float 84
typedef jfloat (*func_mindustry_entities_comp_PhysicsComp_mass_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PhysicsComp_impulse_float_float 85
typedef void (*func_mindustry_entities_comp_PhysicsComp_impulse_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2 86
typedef void (*func_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2 87
typedef void (*func_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_comp_PhysicsComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_PhysicsComp(jcontext ctx);
void init_mindustry_entities_comp_PhysicsComp(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PhysicsComp_mass_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PhysicsComp_impulse_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_PhysicsComp_impulse_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PhysicsComp_impulseNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
