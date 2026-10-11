#ifndef HEADER_mindustry_gen_Crawlc
#define HEADER_mindustry_gen_Crawlc

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

typedef struct mindustry_gen_Crawlc {
	java_lang_Object parent;
} mindustry_gen_Crawlc;

extern Class class_mindustry_gen_Crawlc;


#define INDEX_mindustry_gen_Crawlc_crawlTime_R_float 0
typedef jfloat (*func_mindustry_gen_Crawlc_crawlTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_floorSpeedMultiplier_R_float 1
typedef jfloat (*func_mindustry_gen_Crawlc_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_lastCrawlSlowdown_R_float 2
typedef jfloat (*func_mindustry_gen_Crawlc_lastCrawlSlowdown_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_segmentRot_R_float 3
typedef jfloat (*func_mindustry_gen_Crawlc_segmentRot_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_solidity_R_mindustry_entities_EntityCollisions$SolidPred 4
typedef jobject (*func_mindustry_gen_Crawlc_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_drownFloor_R_mindustry_world_blocks_environment_Floor 5
typedef jobject (*func_mindustry_gen_Crawlc_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_lastDeepFloor_R_mindustry_world_blocks_environment_Floor 6
typedef jobject (*func_mindustry_gen_Crawlc_lastDeepFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_add 7
typedef void (*func_mindustry_gen_Crawlc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Crawlc_crawlTime_float 8
typedef void (*func_mindustry_gen_Crawlc_crawlTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Crawlc_lastCrawlSlowdown_float 9
typedef void (*func_mindustry_gen_Crawlc_lastCrawlSlowdown_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Crawlc_lastDeepFloor_mindustry_world_blocks_environment_Floor 10
typedef void (*func_mindustry_gen_Crawlc_lastDeepFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Crawlc_segmentRot_float 11
typedef void (*func_mindustry_gen_Crawlc_segmentRot_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Crawlc_update 12
typedef void (*func_mindustry_gen_Crawlc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Crawlc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Crawlc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
