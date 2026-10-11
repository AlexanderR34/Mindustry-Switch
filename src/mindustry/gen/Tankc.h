#ifndef HEADER_mindustry_gen_Tankc
#define HEADER_mindustry_gen_Tankc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/ElevationMovec.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Weaponsc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Tankc {
	java_lang_Object parent;
} mindustry_gen_Tankc;

extern Class class_mindustry_gen_Tankc;


#define INDEX_mindustry_gen_Tankc_walked_R_boolean 0
typedef jbool (*func_mindustry_gen_Tankc_walked_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Tankc_floorSpeedMultiplier_R_float 1
typedef jfloat (*func_mindustry_gen_Tankc_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Tankc_treadTime_R_float 2
typedef jfloat (*func_mindustry_gen_Tankc_treadTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Tankc_drownFloor_R_mindustry_world_blocks_environment_Floor 3
typedef jobject (*func_mindustry_gen_Tankc_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Tankc_lastDeepFloor_R_mindustry_world_blocks_environment_Floor 4
typedef jobject (*func_mindustry_gen_Tankc_lastDeepFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Tankc_approach_arc_math_geom_Vec2 5
typedef void (*func_mindustry_gen_Tankc_approach_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Tankc_lastDeepFloor_mindustry_world_blocks_environment_Floor 6
typedef void (*func_mindustry_gen_Tankc_lastDeepFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Tankc_moveAt_arc_math_geom_Vec2_float 7
typedef void (*func_mindustry_gen_Tankc_moveAt_arc_math_geom_Vec2_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_mindustry_gen_Tankc_treadTime_float 8
typedef void (*func_mindustry_gen_Tankc_treadTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Tankc_update 9
typedef void (*func_mindustry_gen_Tankc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Tankc_walked_boolean 10
typedef void (*func_mindustry_gen_Tankc_walked_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_mindustry_gen_Tankc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Tankc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
