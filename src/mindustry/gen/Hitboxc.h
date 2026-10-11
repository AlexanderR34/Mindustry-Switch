#ifndef HEADER_mindustry_gen_Hitboxc
#define HEADER_mindustry_gen_Hitboxc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Hitboxc {
	java_lang_Object parent;
} mindustry_gen_Hitboxc;

extern Class class_mindustry_gen_Hitboxc;


#define INDEX_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean 0
typedef jbool (*func_mindustry_gen_Hitboxc_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Hitboxc_deltaAngle_R_float 1
typedef jfloat (*func_mindustry_gen_Hitboxc_deltaAngle_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_deltaLen_R_float 2
typedef jfloat (*func_mindustry_gen_Hitboxc_deltaLen_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_deltaX_R_float 3
typedef jfloat (*func_mindustry_gen_Hitboxc_deltaX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_deltaY_R_float 4
typedef jfloat (*func_mindustry_gen_Hitboxc_deltaY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_hitSize_R_float 5
typedef jfloat (*func_mindustry_gen_Hitboxc_hitSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_lastX_R_float 6
typedef jfloat (*func_mindustry_gen_Hitboxc_lastX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_lastY_R_float 7
typedef jfloat (*func_mindustry_gen_Hitboxc_lastY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_add 8
typedef void (*func_mindustry_gen_Hitboxc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_afterRead 9
typedef void (*func_mindustry_gen_Hitboxc_afterRead)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float 10
typedef void (*func_mindustry_gen_Hitboxc_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define INDEX_mindustry_gen_Hitboxc_deltaX_float 11
typedef void (*func_mindustry_gen_Hitboxc_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Hitboxc_deltaY_float 12
typedef void (*func_mindustry_gen_Hitboxc_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Hitboxc_getCollisions_arc_func_Cons 13
typedef void (*func_mindustry_gen_Hitboxc_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Hitboxc_hitSize_float 14
typedef void (*func_mindustry_gen_Hitboxc_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect 15
typedef void (*func_mindustry_gen_Hitboxc_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect 16
typedef void (*func_mindustry_gen_Hitboxc_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Hitboxc_lastX_float 17
typedef void (*func_mindustry_gen_Hitboxc_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Hitboxc_lastY_float 18
typedef void (*func_mindustry_gen_Hitboxc_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Hitboxc_update 19
typedef void (*func_mindustry_gen_Hitboxc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Hitboxc_updateLastPosition 20
typedef void (*func_mindustry_gen_Hitboxc_updateLastPosition)(jcontext ctx, jobject self);

void mark_mindustry_gen_Hitboxc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Hitboxc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
