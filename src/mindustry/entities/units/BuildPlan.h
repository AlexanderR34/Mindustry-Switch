#ifndef HEADER_mindustry_entities_units_BuildPlan
#define HEADER_mindustry_entities_units_BuildPlan

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_units_BuildPlan {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_rotation;
	jref F_block;
	jbool F_breaking;
	jref F_config;
	jfloat F_progress;
	jbool F_initialized;
	jbool F_stuck;
	jbool F_cachedValid;
	jbool F_worldContext;
	jfloat F_animScale;
} mindustry_entities_units_BuildPlan;

extern Class class_mindustry_entities_units_BuildPlan;


#define VTABLE_mindustry_entities_units_BuildPlan_hashCode_R_int 0
typedef jint (*func_mindustry_entities_units_BuildPlan_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_units_BuildPlan_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_units_BuildPlan_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_units_BuildPlan_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_units_BuildPlan_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_finalize 5
typedef void (*func_mindustry_entities_units_BuildPlan_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_notify 6
typedef void (*func_mindustry_entities_units_BuildPlan_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_notifyAll 7
typedef void (*func_mindustry_entities_units_BuildPlan_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_wait 8
typedef void (*func_mindustry_entities_units_BuildPlan_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_wait_long 9
typedef void (*func_mindustry_entities_units_BuildPlan_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_units_BuildPlan_wait_long_int 10
typedef void (*func_mindustry_entities_units_BuildPlan_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_units_BuildPlan_getX_R_float 11
typedef jfloat (*func_mindustry_entities_units_BuildPlan_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_getY_R_float 12
typedef jfloat (*func_mindustry_entities_units_BuildPlan_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_units_BuildPlan_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_units_BuildPlan_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_units_BuildPlan_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_units_BuildPlan_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_units_BuildPlan_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_units_BuildPlan_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_units_BuildPlan_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_units_BuildPlan_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_units_BuildPlan_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_units_BuildPlan_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_units_BuildPlan_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_units_BuildPlan_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect 21
typedef void (*func_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean 22
typedef jbool (*func_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean 23
typedef jbool (*func_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean 24
typedef jbool (*func_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean 25
typedef jbool (*func_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons 26
typedef void (*func_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan 27
typedef jobject (*func_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect 28
typedef jobject (*func_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan 29
typedef jobject (*func_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float 30
typedef jfloat (*func_mindustry_entities_units_BuildPlan_drawx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float 31
typedef jfloat (*func_mindustry_entities_units_BuildPlan_drawy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_isDone_R_boolean 32
typedef jbool (*func_mindustry_entities_units_BuildPlan_isDone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile 33
typedef jobject (*func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building 34
typedef jobject (*func_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building)(jcontext ctx, jobject self);

void mark_mindustry_entities_units_BuildPlan(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_units_BuildPlan(jcontext ctx);
void init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3, jobject param4);
void init_mindustry_entities_units_BuildPlan_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self);
jbool M_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_units_BuildPlan_isRotation_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_units_BuildPlan_isDerelictRepair_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_units_BuildPlan_samePos_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_entities_units_BuildPlan_pointConfig_mindustry_world_Block_java_lang_Object_arc_func_Cons_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self);
jobject M_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jfloat M_mindustry_entities_units_BuildPlan_drawx_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_units_BuildPlan_drawy_R_float(jcontext ctx, jobject self);
jbool M_mindustry_entities_units_BuildPlan_isDone_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building(jcontext ctx, jobject self);
void M_mindustry_entities_units_BuildPlan_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_entities_units_BuildPlan_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_units_BuildPlan_getY_R_float(jcontext ctx, jobject self);
jobject M_mindustry_entities_units_BuildPlan_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
