#ifndef HEADER_mindustry_ai_Pathfinder
#define HEADER_mindustry_ai_Pathfinder

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Pathfinder {
	java_lang_Object parent;
	jref F_tiles;
	jref F_cache;
	jref F_threadList;
	jref F_mainList;
	jref F_queue;
	jref F_thread;
	jref F_tmpArray;
	jbool F_needsRefresh;
	jlong F_lastRefreshTime;
} mindustry_ai_Pathfinder;

extern Class class_mindustry_ai_Pathfinder;

extern jlong SF_mindustry_ai_Pathfinder_maxUpdate;
extern jint SF_mindustry_ai_Pathfinder_neverRefresh;
extern jint SF_mindustry_ai_Pathfinder_updateFPS;
extern jint SF_mindustry_ai_Pathfinder_updateInterval;
extern jint SF_mindustry_ai_Pathfinder_wwidth;
extern jint SF_mindustry_ai_Pathfinder_wheight;
extern jint SF_mindustry_ai_Pathfinder_impassable;
extern jint SF_mindustry_ai_Pathfinder_fieldCore;
extern jint SF_mindustry_ai_Pathfinder_maxFields;
extern jobject SF_mindustry_ai_Pathfinder_fieldTypes;
extern jint SF_mindustry_ai_Pathfinder_costGround;
extern jint SF_mindustry_ai_Pathfinder_costLegs;
extern jint SF_mindustry_ai_Pathfinder_costNaval;
extern jint SF_mindustry_ai_Pathfinder_costNeoplasm;
extern jint SF_mindustry_ai_Pathfinder_costNone;
extern jint SF_mindustry_ai_Pathfinder_costHover;
extern jint SF_mindustry_ai_Pathfinder_maxCosts;
extern jobject SF_mindustry_ai_Pathfinder_costTypes;
extern jlong SF_mindustry_ai_Pathfinder_refreshIntervalMs;

#define VTABLE_mindustry_ai_Pathfinder_hashCode_R_int 0
typedef jint (*func_mindustry_ai_Pathfinder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_Pathfinder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_Pathfinder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_Pathfinder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_Pathfinder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_finalize 5
typedef void (*func_mindustry_ai_Pathfinder_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_notify 6
typedef void (*func_mindustry_ai_Pathfinder_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_notifyAll 7
typedef void (*func_mindustry_ai_Pathfinder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_wait 8
typedef void (*func_mindustry_ai_Pathfinder_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_wait_long 9
typedef void (*func_mindustry_ai_Pathfinder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_Pathfinder_wait_long_int 10
typedef void (*func_mindustry_ai_Pathfinder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder_run 11
typedef void (*func_mindustry_ai_Pathfinder_run)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_clearCache 12
typedef void (*func_mindustry_ai_Pathfinder_clearCache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int 13
typedef jint (*func_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_get_int_int_R_int 14
typedef jint (*func_mindustry_ai_Pathfinder_get_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder_start 15
typedef void (*func_mindustry_ai_Pathfinder_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_stop 16
typedef void (*func_mindustry_ai_Pathfinder_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile 17
typedef void (*func_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield 18
typedef jobject (*func_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile 19
typedef jobject (*func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile 20
typedef jobject (*func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile 21
typedef jobject (*func_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3);
#define VTABLE_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield 22
typedef void (*func_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield 23
typedef void (*func_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield 24
typedef void (*func_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long 25
typedef void (*func_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield 26
typedef void (*func_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield 27
typedef void (*func_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield 28
typedef void (*func_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile 29
typedef void (*func_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$new$5 30
typedef void (*func_mindustry_ai_Pathfinder_lambda$new$5)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_lambda$new$6 31
typedef void (*func_mindustry_ai_Pathfinder_lambda$new$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent 32
typedef void (*func_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent 33
typedef void (*func_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent 34
typedef void (*func_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 35
typedef void (*func_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_Pathfinder(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Pathfinder(jcontext ctx);
void init_mindustry_ai_Pathfinder(jcontext ctx, jobject self);
void M_mindustry_ai_Pathfinder_clearCache(jcontext ctx, jobject self);
jint M_mindustry_ai_Pathfinder_packTile_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_ai_Pathfinder_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_ai_Pathfinder_start(jcontext ctx, jobject self);
void M_mindustry_ai_Pathfinder_stop(jcontext ctx, jobject self);
void M_mindustry_ai_Pathfinder_updateTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_run(jcontext ctx, jobject self);
jobject M_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jobject M_mindustry_ai_Pathfinder_getTargetTile_mindustry_world_Tile_mindustry_ai_Pathfinder$Flowfield_boolean_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3);
void M_mindustry_ai_Pathfinder_updateTargets_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_preloadPath_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_registerPath_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_updateFrontier_mindustry_ai_Pathfinder$Flowfield_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_ai_Pathfinder_lambda$registerPath$0_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$getTargetTile$0_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$getField$0_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$updateTile$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$new$5(jcontext ctx, jobject self);
void M_mindustry_ai_Pathfinder_lambda$new$6(jcontext ctx, jobject self);
void M_mindustry_ai_Pathfinder_lambda$new$4_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$new$3_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$new$2_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_ai_Pathfinder_lambda$new$1_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
jint SM_mindustry_ai_Pathfinder_lambda$static$5_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_Pathfinder_lambda$static$4_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_Pathfinder_lambda$static$3_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_Pathfinder_lambda$static$2_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_Pathfinder_lambda$static$1_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_Pathfinder_lambda$static$0_int_int_R_int(jcontext ctx, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
