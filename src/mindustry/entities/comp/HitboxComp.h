#ifndef HEADER_mindustry_entities_comp_HitboxComp
#define HEADER_mindustry_entities_comp_HitboxComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/Sized.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_HitboxComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_lastX;
	jfloat F_lastY;
	jfloat F_deltaX;
	jfloat F_deltaY;
	jfloat F_hitSize;
} mindustry_entities_comp_HitboxComp;

extern Class class_mindustry_entities_comp_HitboxComp;


#define VTABLE_mindustry_entities_comp_HitboxComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_HitboxComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_HitboxComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_HitboxComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_HitboxComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_HitboxComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_finalize 5
typedef void (*func_mindustry_entities_comp_HitboxComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_notify 6
typedef void (*func_mindustry_entities_comp_HitboxComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_HitboxComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_wait 8
typedef void (*func_mindustry_entities_comp_HitboxComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_wait_long 9
typedef void (*func_mindustry_entities_comp_HitboxComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_HitboxComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_HitboxComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_HitboxComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_HitboxComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_HitboxComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_HitboxComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_HitboxComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_HitboxComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_HitboxComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_HitboxComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_HitboxComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_HitboxComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_add 29
typedef void (*func_mindustry_entities_comp_HitboxComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_afterRead 30
typedef void (*func_mindustry_entities_comp_HitboxComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_HitboxComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_HitboxComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_id_int 33
typedef void (*func_mindustry_entities_comp_HitboxComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_HitboxComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_remove 35
typedef void (*func_mindustry_entities_comp_HitboxComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_update 36
typedef void (*func_mindustry_entities_comp_HitboxComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_HitboxComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_HitboxComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_HitboxComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_HitboxComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_HitboxComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_HitboxComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_HitboxComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_HitboxComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_HitboxComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_HitboxComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_HitboxComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_HitboxComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_HitboxComp_x_float 51
typedef void (*func_mindustry_entities_comp_HitboxComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_y_float 52
typedef void (*func_mindustry_entities_comp_HitboxComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_hitSize_R_float 53
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect 54
typedef void (*func_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons 55
typedef void (*func_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_updateLastPosition 56
typedef void (*func_mindustry_entities_comp_HitboxComp_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float 57
typedef void (*func_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_HitboxComp_deltaLen_R_float 58
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_deltaAngle_R_float 59
typedef jfloat (*func_mindustry_entities_comp_HitboxComp_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean 60
typedef jbool (*func_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect 61
typedef void (*func_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_comp_HitboxComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_HitboxComp(jcontext ctx);
void init_mindustry_entities_comp_HitboxComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HitboxComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HitboxComp_add(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HitboxComp_afterRead(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_HitboxComp_hitSize_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HitboxComp_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_HitboxComp_updateLastPosition(jcontext ctx, jobject self);
void M_mindustry_entities_comp_HitboxComp_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jfloat M_mindustry_entities_comp_HitboxComp_deltaLen_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_HitboxComp_deltaAngle_R_float(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_HitboxComp_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_HitboxComp_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_HitboxComp_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
