#ifndef HEADER_mindustry_gen_BlockUnitc
#define HEADER_mindustry_gen_BlockUnitc

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

typedef struct mindustry_gen_BlockUnitc {
	java_lang_Object parent;
} mindustry_gen_BlockUnitc;

extern Class class_mindustry_gen_BlockUnitc;


#define INDEX_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building 0
typedef jobject (*func_mindustry_gen_BlockUnitc_tile_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_icon_R_arc_graphics_g2d_TextureRegion 1
typedef jobject (*func_mindustry_gen_BlockUnitc_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_dead_R_boolean 2
typedef jbool (*func_mindustry_gen_BlockUnitc_dead_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_isAdded_R_boolean 3
typedef jbool (*func_mindustry_gen_BlockUnitc_isAdded_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_isValid_R_boolean 4
typedef jbool (*func_mindustry_gen_BlockUnitc_isValid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_ammo_R_float 5
typedef jfloat (*func_mindustry_gen_BlockUnitc_ammo_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_ammof_R_float 6
typedef jfloat (*func_mindustry_gen_BlockUnitc_ammof_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_add 7
typedef void (*func_mindustry_gen_BlockUnitc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_ammo_float 8
typedef void (*func_mindustry_gen_BlockUnitc_ammo_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_BlockUnitc_damage_float_boolean 9
typedef void (*func_mindustry_gen_BlockUnitc_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define INDEX_mindustry_gen_BlockUnitc_killed 10
typedef void (*func_mindustry_gen_BlockUnitc_killed)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BlockUnitc_team_mindustry_game_Team 11
typedef void (*func_mindustry_gen_BlockUnitc_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building 12
typedef void (*func_mindustry_gen_BlockUnitc_tile_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_BlockUnitc_update 13
typedef void (*func_mindustry_gen_BlockUnitc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_BlockUnitc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_BlockUnitc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
