#ifndef HEADER_mindustry_game_Schematics$1
#define HEADER_mindustry_game_Schematics$1

#include "Clearwing.h"
#include "mindustry/entities/units/BuildPlan.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Schematics$1 {
	mindustry_entities_units_BuildPlan parent;
	jref F_this$0;
} mindustry_game_Schematics$1;

extern Class class_mindustry_game_Schematics$1;


#define VTABLE_mindustry_game_Schematics$1_hashCode_R_int 0
typedef jint (*func_mindustry_game_Schematics$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Schematics$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Schematics$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Schematics$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Schematics$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_finalize 5
typedef void (*func_mindustry_game_Schematics$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_notify 6
typedef void (*func_mindustry_game_Schematics$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_notifyAll 7
typedef void (*func_mindustry_game_Schematics$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_wait 8
typedef void (*func_mindustry_game_Schematics$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_wait_long 9
typedef void (*func_mindustry_game_Schematics$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Schematics$1_wait_long_int 10
typedef void (*func_mindustry_game_Schematics$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Schematics$1_getX_R_float 11
typedef jfloat (*func_mindustry_game_Schematics$1_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_getY_R_float 12
typedef jfloat (*func_mindustry_game_Schematics$1_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_game_Schematics$1_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_game_Schematics$1_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_game_Schematics$1_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_game_Schematics$1_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_game_Schematics$1_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_game_Schematics$1_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_game_Schematics$1_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_game_Schematics$1_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_game_Schematics$1_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_game_Schematics$1_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_game_Schematics$1_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_game_Schematics$1_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_game_Schematics$1_hitbox_arc_math_geom_Rect 21
typedef void (*func_mindustry_game_Schematics$1_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_placeable_mindustry_game_Team_R_boolean 22
typedef jbool (*func_mindustry_game_Schematics$1_placeable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_isRotation_mindustry_game_Team_R_boolean 23
typedef jbool (*func_mindustry_game_Schematics$1_isRotation_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_isDerelictRepair_R_boolean 24
typedef jbool (*func_mindustry_game_Schematics$1_isDerelictRepair_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_samePos_mindustry_entities_units_BuildPlan_R_boolean 25
typedef jbool (*func_mindustry_game_Schematics$1_samePos_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_pointConfig_arc_func_Cons 26
typedef void (*func_mindustry_game_Schematics$1_pointConfig_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_copy_R_mindustry_entities_units_BuildPlan 27
typedef jobject (*func_mindustry_game_Schematics$1_copy_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect 28
typedef jobject (*func_mindustry_game_Schematics$1_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics$1_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan 29
typedef jobject (*func_mindustry_game_Schematics$1_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_game_Schematics$1_drawx_R_float 30
typedef jfloat (*func_mindustry_game_Schematics$1_drawx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_drawy_R_float 31
typedef jfloat (*func_mindustry_game_Schematics$1_drawy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_isDone_R_boolean 32
typedef jbool (*func_mindustry_game_Schematics$1_isDone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile 33
typedef jobject (*func_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics$1_build_R_mindustry_gen_Building 34
typedef jobject (*func_mindustry_game_Schematics$1_build_R_mindustry_gen_Building)(jcontext ctx, jobject self);

void mark_mindustry_game_Schematics$1(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Schematics$1(jcontext ctx);
void init_mindustry_game_Schematics$1_mindustry_game_Schematics_int_int_int_mindustry_world_Block_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
jobject M_mindustry_game_Schematics$1_tile_R_mindustry_world_Tile(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
