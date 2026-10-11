#ifndef HEADER_mindustry_gen_WaterCrawlc
#define HEADER_mindustry_gen_WaterCrawlc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Crawlc.h"
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

typedef struct mindustry_gen_WaterCrawlc {
	java_lang_Object parent;
} mindustry_gen_WaterCrawlc;

extern Class class_mindustry_gen_WaterCrawlc;


#define INDEX_mindustry_gen_WaterCrawlc_onLiquid_R_boolean 0
typedef jbool (*func_mindustry_gen_WaterCrawlc_onLiquid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterCrawlc_onSolid_R_boolean 1
typedef jbool (*func_mindustry_gen_WaterCrawlc_onSolid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterCrawlc_floorSpeedMultiplier_R_float 2
typedef jfloat (*func_mindustry_gen_WaterCrawlc_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WaterCrawlc_solidity_R_mindustry_entities_EntityCollisions$SolidPred 3
typedef jobject (*func_mindustry_gen_WaterCrawlc_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);

void mark_mindustry_gen_WaterCrawlc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_WaterCrawlc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
