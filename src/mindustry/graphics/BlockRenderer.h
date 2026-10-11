#ifndef HEADER_mindustry_graphics_BlockRenderer
#define HEADER_mindustry_graphics_BlockRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_BlockRenderer {
	java_lang_Object parent;
	jref F_floor;
	jref F_cracks;
	jref F_chunksToDraw;
	jref F_chunksToDrawSet;
	jref F_tileview;
	jref F_tileExtraCachedView;
	jref F_tileWithConsumerView;
	jref F_lightview;
	jref F_updateFloors;
	jbool F_hadMapLimit;
	jint F_lastCamX;
	jint F_lastCamY;
	jint F_lastRangeX;
	jint F_lastRangeY;
	jref F_lastTeam;
	jfloat F_brokenFade;
	jref F_shadows;
	jref F_dark;
	jref F_outArray2;
	jref F_shadowEvents;
	jref F_darkEvents;
	jref F_procLinks;
	jref F_procLights;
	jref F_blockTree;
	jref F_blockCachedTree;
	jref F_blockLightTree;
	jref F_overlayTree;
	jref F_floorTree;
	jref F_cacheChunks;
	jref F_cbatch;
	jref F_caches;
	jref F_queuedCacheDraws;
	jref F_queuedCacheIndices;
	jref F_dirtyChunks;
	jref F_blockDrawSprites;
	jref F_blockDrawTotal;
} mindustry_graphics_BlockRenderer;

extern Class class_mindustry_graphics_BlockRenderer;

extern jint SF_mindustry_graphics_BlockRenderer_crackRegions;
extern jint SF_mindustry_graphics_BlockRenderer_maxCrackSize;
extern jint SF_mindustry_graphics_BlockRenderer_chunkSize;
extern jint SF_mindustry_graphics_BlockRenderer_maxSpritesPerCacheTile;
extern jbool SF_mindustry_graphics_BlockRenderer_drawQuadtreeDebug;
extern jbool SF_mindustry_graphics_BlockRenderer_blockDrawCountDebug;
extern jobject SF_mindustry_graphics_BlockRenderer_shadowColor;
extern jobject SF_mindustry_graphics_BlockRenderer_blendShadowColor;
extern jint SF_mindustry_graphics_BlockRenderer_initialRequests;

#define VTABLE_mindustry_graphics_BlockRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_BlockRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_BlockRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_BlockRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_BlockRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_BlockRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_finalize 5
typedef void (*func_mindustry_graphics_BlockRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_notify 6
typedef void (*func_mindustry_graphics_BlockRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_BlockRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_wait 8
typedef void (*func_mindustry_graphics_BlockRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_wait_long 9
typedef void (*func_mindustry_graphics_BlockRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_BlockRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_BlockRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile 11
typedef void (*func_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int 12
typedef void (*func_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_BlockRenderer_reload 13
typedef void (*func_mindustry_graphics_BlockRenderer_reload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean 14
typedef void (*func_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_graphics_BlockRenderer_updateDarkness 15
typedef void (*func_mindustry_graphics_BlockRenderer_updateDarkness)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile 16
typedef void (*func_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer 17
typedef jobject (*func_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile 18
typedef void (*func_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile 19
typedef void (*func_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile 20
typedef void (*func_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile 21
typedef void (*func_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean 22
typedef jbool (*func_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean 23
typedef jbool (*func_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean 24
typedef jbool (*func_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean 25
typedef jbool (*func_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile 26
typedef void (*func_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile 27
typedef void (*func_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_checkChanges 28
typedef void (*func_mindustry_graphics_BlockRenderer_checkChanges)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_drawDarkness 29
typedef void (*func_mindustry_graphics_BlockRenderer_drawDarkness)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_drawDestroyed 30
typedef void (*func_mindustry_graphics_BlockRenderer_drawDestroyed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_processShadows 31
typedef void (*func_mindustry_graphics_BlockRenderer_processShadows)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean 32
typedef void (*func_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_graphics_BlockRenderer_drawShadows 33
typedef void (*func_mindustry_graphics_BlockRenderer_drawShadows)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_processBlocks 34
typedef void (*func_mindustry_graphics_BlockRenderer_processBlocks)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree 35
typedef void (*func_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_drawBlocks 36
typedef void (*func_mindustry_graphics_BlockRenderer_drawBlocks)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building 37
typedef void (*func_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile 38
typedef void (*func_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int 39
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int 40
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int 41
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int 42
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile 43
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile 44
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent 45
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent 46
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$new$2 47
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$new$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent 48
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent 49
typedef void (*func_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_BlockRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_BlockRenderer(jcontext ctx);
void init_mindustry_graphics_BlockRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_recacheBuilding_mindustry_graphics_BuildingCacheLayer_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_graphics_BlockRenderer_cacheChunk_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_mindustry_graphics_BlockRenderer_reload(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_updateShadows_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_graphics_BlockRenderer_updateDarkness(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_invalidateTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_graphics_BlockRenderer_getShadowBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_removeFloorIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_addFloorIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_removeOverlayIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_addOverlayIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_graphics_BlockRenderer_indexBlock_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_graphics_BlockRenderer_indexBlockCached_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_graphics_BlockRenderer_indexOverlay_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_graphics_BlockRenderer_indexFloor_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_recordIndex_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_recacheWall_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_checkChanges(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_drawDarkness(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_drawDestroyed(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_processShadows(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_processShadows_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_graphics_BlockRenderer_drawShadows(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_processBlocks(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_drawTree_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_drawBlocks(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_updateShadow_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$0_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$2_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_graphics_BlockRenderer_lambda$drawBlocks$1_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_graphics_BlockRenderer_lambda$processBlocks$2_mindustry_game_Team_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_graphics_BlockRenderer_lambda$processBlocks$1_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_graphics_BlockRenderer_lambda$processBlocks$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_graphics_BlockRenderer_lambda$drawDarkness$0_int(jcontext ctx, jint param0);
void SM_mindustry_graphics_BlockRenderer_lambda$checkChanges$0_int(jcontext ctx, jint param0);
void SM_mindustry_graphics_BlockRenderer_lambda$cacheChunk$0_int_int_int_int_int_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6);
void M_mindustry_graphics_BlockRenderer_lambda$new$4_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_lambda$new$2(jcontext ctx, jobject self);
void M_mindustry_graphics_BlockRenderer_lambda$new$1_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_BlockRenderer_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
