#ifndef HEADER_mindustry_gen_Velc
#define HEADER_mindustry_gen_Velc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Velc {
	java_lang_Object parent;
} mindustry_gen_Velc;

extern Class class_mindustry_gen_Velc;


#define INDEX_mindustry_gen_Velc_solidity_R_mindustry_entities_EntityCollisions$SolidPred 0
typedef jobject (*func_mindustry_gen_Velc_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_canPassOn_R_boolean 1
typedef jbool (*func_mindustry_gen_Velc_canPassOn_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_canPass_int_int_R_boolean 2
typedef jbool (*func_mindustry_gen_Velc_canPass_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_mindustry_gen_Velc_vel_R_arc_math_geom_Vec2 3
typedef jobject (*func_mindustry_gen_Velc_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_ignoreSolids_R_boolean 4
typedef jbool (*func_mindustry_gen_Velc_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_moving_R_boolean 5
typedef jbool (*func_mindustry_gen_Velc_moving_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_drag_R_float 6
typedef jfloat (*func_mindustry_gen_Velc_drag_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_drag_float 7
typedef void (*func_mindustry_gen_Velc_drag_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Velc_move_arc_math_geom_Vec2 8
typedef void (*func_mindustry_gen_Velc_move_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Velc_move_float_float 9
typedef void (*func_mindustry_gen_Velc_move_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Velc_update 10
typedef void (*func_mindustry_gen_Velc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Velc_vel_arc_math_geom_Vec2 11
typedef void (*func_mindustry_gen_Velc_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Velc_velAddNet_arc_math_geom_Vec2 12
typedef void (*func_mindustry_gen_Velc_velAddNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Velc_velAddNet_float_float 13
typedef void (*func_mindustry_gen_Velc_velAddNet_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_mindustry_gen_Velc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Velc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
