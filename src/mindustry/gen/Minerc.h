#ifndef HEADER_mindustry_gen_Minerc
#define HEADER_mindustry_gen_Minerc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Teamc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Minerc {
	java_lang_Object parent;
} mindustry_gen_Minerc;

extern Class class_mindustry_gen_Minerc;


#define INDEX_mindustry_gen_Minerc_mineTile_R_mindustry_world_Tile 0
typedef jobject (*func_mindustry_gen_Minerc_mineTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Minerc_canMine_R_boolean 1
typedef jbool (*func_mindustry_gen_Minerc_canMine_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Minerc_canMine_mindustry_type_Item_R_boolean 2
typedef jbool (*func_mindustry_gen_Minerc_canMine_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Minerc_mining_R_boolean 3
typedef jbool (*func_mindustry_gen_Minerc_mining_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Minerc_offloadImmediately_R_boolean 4
typedef jbool (*func_mindustry_gen_Minerc_offloadImmediately_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Minerc_validMine_mindustry_world_Tile_R_boolean 5
typedef jbool (*func_mindustry_gen_Minerc_validMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Minerc_validMine_mindustry_world_Tile_boolean_R_boolean 6
typedef jbool (*func_mindustry_gen_Minerc_validMine_mindustry_world_Tile_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define INDEX_mindustry_gen_Minerc_mineTimer_R_float 7
typedef jfloat (*func_mindustry_gen_Minerc_mineTimer_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Minerc_getMineResult_mindustry_world_Tile_R_mindustry_type_Item 8
typedef jobject (*func_mindustry_gen_Minerc_getMineResult_mindustry_world_Tile_R_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Minerc_mineTile_mindustry_world_Tile 9
typedef void (*func_mindustry_gen_Minerc_mineTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Minerc_mineTimer_float 10
typedef void (*func_mindustry_gen_Minerc_mineTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Minerc_update 11
typedef void (*func_mindustry_gen_Minerc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Minerc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Minerc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
