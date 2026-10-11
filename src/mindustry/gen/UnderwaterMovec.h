#ifndef HEADER_mindustry_gen_UnderwaterMovec
#define HEADER_mindustry_gen_UnderwaterMovec

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
#include "mindustry/gen/WaterMovec.h"
#include "mindustry/gen/Weaponsc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_UnderwaterMovec {
	java_lang_Object parent;
} mindustry_gen_UnderwaterMovec;

extern Class class_mindustry_gen_UnderwaterMovec;


#define INDEX_mindustry_gen_UnderwaterMovec_hittable_R_boolean 0
typedef jbool (*func_mindustry_gen_UnderwaterMovec_hittable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_UnderwaterMovec_targetable_mindustry_game_Team_R_boolean 1
typedef jbool (*func_mindustry_gen_UnderwaterMovec_targetable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_UnderwaterMovec_collisionLayer_R_int 2
typedef jint (*func_mindustry_gen_UnderwaterMovec_collisionLayer_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_UnderwaterMovec_draw 3
typedef void (*func_mindustry_gen_UnderwaterMovec_draw)(jcontext ctx, jobject self);

void mark_mindustry_gen_UnderwaterMovec(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_UnderwaterMovec(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
