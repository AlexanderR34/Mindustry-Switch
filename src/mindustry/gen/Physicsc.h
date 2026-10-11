#ifndef HEADER_mindustry_gen_Physicsc
#define HEADER_mindustry_gen_Physicsc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Velc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Physicsc {
	java_lang_Object parent;
} mindustry_gen_Physicsc;

extern Class class_mindustry_gen_Physicsc;


#define INDEX_mindustry_gen_Physicsc_hasPhysicsRef_R_boolean 0
typedef jbool (*func_mindustry_gen_Physicsc_hasPhysicsRef_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Physicsc_mass_R_float 1
typedef jfloat (*func_mindustry_gen_Physicsc_mass_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Physicsc_hasPhysicsRef_boolean 2
typedef void (*func_mindustry_gen_Physicsc_hasPhysicsRef_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Physicsc_impulse_arc_math_geom_Vec2 3
typedef void (*func_mindustry_gen_Physicsc_impulse_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Physicsc_impulse_float_float 4
typedef void (*func_mindustry_gen_Physicsc_impulse_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Physicsc_impulseNet_arc_math_geom_Vec2 5
typedef void (*func_mindustry_gen_Physicsc_impulseNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Physicsc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Physicsc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
