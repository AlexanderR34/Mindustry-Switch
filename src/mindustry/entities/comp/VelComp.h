#ifndef HEADER_mindustry_entities_comp_VelComp
#define HEADER_mindustry_entities_comp_VelComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_VelComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jref F_vel;
	jfloat F_drag;
} mindustry_entities_comp_VelComp;

extern Class class_mindustry_entities_comp_VelComp;


#define VTABLE_mindustry_entities_comp_VelComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_VelComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_VelComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_VelComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_VelComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_VelComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_finalize 5
typedef void (*func_mindustry_entities_comp_VelComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_notify 6
typedef void (*func_mindustry_entities_comp_VelComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_VelComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_wait 8
typedef void (*func_mindustry_entities_comp_VelComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_wait_long 9
typedef void (*func_mindustry_entities_comp_VelComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_VelComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_VelComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_VelComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_VelComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_VelComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_VelComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_VelComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_VelComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_VelComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_VelComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_VelComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_VelComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_VelComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_VelComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_VelComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_VelComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_VelComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_VelComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_VelComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_VelComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_VelComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_VelComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_add 29
typedef void (*func_mindustry_entities_comp_VelComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_afterRead 30
typedef void (*func_mindustry_entities_comp_VelComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_VelComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_VelComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_id_int 33
typedef void (*func_mindustry_entities_comp_VelComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_VelComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_VelComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_remove 35
typedef void (*func_mindustry_entities_comp_VelComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_update 36
typedef void (*func_mindustry_entities_comp_VelComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_VelComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_VelComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_VelComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_VelComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_VelComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_VelComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_VelComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_VelComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_VelComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_VelComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_VelComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_VelComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_VelComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_VelComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_x_float 51
typedef void (*func_mindustry_entities_comp_VelComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_VelComp_y_float 52
typedef void (*func_mindustry_entities_comp_VelComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred 53
typedef jobject (*func_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean 54
typedef jbool (*func_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean 55
typedef jbool (*func_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_entities_comp_VelComp_canPassOn_R_boolean 56
typedef jbool (*func_mindustry_entities_comp_VelComp_canPassOn_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_moving_R_boolean 57
typedef jbool (*func_mindustry_entities_comp_VelComp_moving_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2 58
typedef void (*func_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_move_float_float 59
typedef void (*func_mindustry_entities_comp_VelComp_move_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2 60
typedef void (*func_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_VelComp_velAddNet_float_float 61
typedef void (*func_mindustry_entities_comp_VelComp_velAddNet_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_mindustry_entities_comp_VelComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_VelComp(jcontext ctx);
void init_mindustry_entities_comp_VelComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_VelComp_update(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_VelComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_VelComp_ignoreSolids_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_VelComp_canPass_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_entities_comp_VelComp_canPassOn_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_VelComp_moving_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_VelComp_move_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_VelComp_move_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_VelComp_velAddNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_VelComp_velAddNet_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
