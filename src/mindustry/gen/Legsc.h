#ifndef HEADER_mindustry_gen_Legsc
#define HEADER_mindustry_gen_Legsc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Drawc.h"
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

typedef struct mindustry_gen_Legsc {
	java_lang_Object parent;
} mindustry_gen_Legsc;

extern Class class_mindustry_gen_Legsc;


#define INDEX_mindustry_gen_Legsc_legAngle_int_R_float 0
typedef jfloat (*func_mindustry_gen_Legsc_legAngle_int_R_float)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Legsc_curMoveOffset_R_arc_math_geom_Vec2 1
typedef jobject (*func_mindustry_gen_Legsc_curMoveOffset_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2 2
typedef jobject (*func_mindustry_gen_Legsc_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jint param1);
#define INDEX_mindustry_gen_Legsc_baseRotation_R_float 3
typedef jfloat (*func_mindustry_gen_Legsc_baseRotation_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_defaultLegAngle_int_R_float 4
typedef jfloat (*func_mindustry_gen_Legsc_defaultLegAngle_int_R_float)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Legsc_moveSpace_R_float 5
typedef jfloat (*func_mindustry_gen_Legsc_moveSpace_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_totalLength_R_float 6
typedef jfloat (*func_mindustry_gen_Legsc_totalLength_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_solidity_R_mindustry_entities_EntityCollisions$SolidPred 7
typedef jobject (*func_mindustry_gen_Legsc_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_legs_R_Array1_mindustry_entities_Leg 8
typedef jobject (*func_mindustry_gen_Legsc_legs_R_Array1_mindustry_entities_Leg)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_drownFloor_R_mindustry_world_blocks_environment_Floor 9
typedef jobject (*func_mindustry_gen_Legsc_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_lastDeepFloor_R_mindustry_world_blocks_environment_Floor 10
typedef jobject (*func_mindustry_gen_Legsc_lastDeepFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_add 11
typedef void (*func_mindustry_gen_Legsc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_baseRotation_float 12
typedef void (*func_mindustry_gen_Legsc_baseRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Legsc_curMoveOffset_arc_math_geom_Vec2 13
typedef void (*func_mindustry_gen_Legsc_curMoveOffset_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Legsc_destroy 14
typedef void (*func_mindustry_gen_Legsc_destroy)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_lastDeepFloor_mindustry_world_blocks_environment_Floor 15
typedef void (*func_mindustry_gen_Legsc_lastDeepFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Legsc_legs_Array1_mindustry_entities_Leg 16
typedef void (*func_mindustry_gen_Legsc_legs_Array1_mindustry_entities_Leg)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Legsc_moveSpace_float 17
typedef void (*func_mindustry_gen_Legsc_moveSpace_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Legsc_resetLegs 18
typedef void (*func_mindustry_gen_Legsc_resetLegs)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_resetLegs_float 19
typedef void (*func_mindustry_gen_Legsc_resetLegs_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Legsc_totalLength_float 20
typedef void (*func_mindustry_gen_Legsc_totalLength_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Legsc_unloaded 21
typedef void (*func_mindustry_gen_Legsc_unloaded)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Legsc_update 22
typedef void (*func_mindustry_gen_Legsc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Legsc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Legsc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
