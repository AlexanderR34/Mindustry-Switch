#ifndef HEADER_mindustry_gen_WaterMovec
#define HEADER_mindustry_gen_WaterMovec

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

typedef struct mindustry_gen_WaterMovec {
	java_lang_Object parent;
} mindustry_gen_WaterMovec;

extern Class class_mindustry_gen_WaterMovec;


#define INDEX_mindustry_gen_WaterMovec_onLiquid_R_boolean 0
typedef jbool (*func_mindustry_gen_WaterMovec_onLiquid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterMovec_onSolid_R_boolean 1
typedef jbool (*func_mindustry_gen_WaterMovec_onSolid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterMovec_floorSpeedMultiplier_R_float 2
typedef jfloat (*func_mindustry_gen_WaterMovec_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterMovec_solidity_R_mindustry_entities_EntityCollisions$SolidPred 3
typedef jobject (*func_mindustry_gen_WaterMovec_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterMovec_add 4
typedef void (*func_mindustry_gen_WaterMovec_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterMovec_draw 5
typedef void (*func_mindustry_gen_WaterMovec_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterMovec_update 6
typedef void (*func_mindustry_gen_WaterMovec_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_WaterMovec(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_WaterMovec(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
