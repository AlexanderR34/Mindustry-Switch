#ifndef HEADER_mindustry_game_EventType$TileOverlayChangeEvent
#define HEADER_mindustry_game_EventType$TileOverlayChangeEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$TileOverlayChangeEvent {
	java_lang_Object parent;
	jref F_tile;
	jref F_previous;
	jref F_overlay;
} mindustry_game_EventType$TileOverlayChangeEvent;

extern Class class_mindustry_game_EventType$TileOverlayChangeEvent;


#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$TileOverlayChangeEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$TileOverlayChangeEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$TileOverlayChangeEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$TileOverlayChangeEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$TileOverlayChangeEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_finalize 5
typedef void (*func_mindustry_game_EventType$TileOverlayChangeEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_notify 6
typedef void (*func_mindustry_game_EventType$TileOverlayChangeEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_notifyAll 7
typedef void (*func_mindustry_game_EventType$TileOverlayChangeEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_wait 8
typedef void (*func_mindustry_game_EventType$TileOverlayChangeEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_wait_long 9
typedef void (*func_mindustry_game_EventType$TileOverlayChangeEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_wait_long_int 10
typedef void (*func_mindustry_game_EventType$TileOverlayChangeEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_EventType$TileOverlayChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileOverlayChangeEvent 11
typedef jobject (*func_mindustry_game_EventType$TileOverlayChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileOverlayChangeEvent)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_game_EventType$TileOverlayChangeEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$TileOverlayChangeEvent(jcontext ctx);
void init_mindustry_game_EventType$TileOverlayChangeEvent(jcontext ctx, jobject self);
jobject M_mindustry_game_EventType$TileOverlayChangeEvent_set_mindustry_world_Tile_mindustry_world_blocks_environment_Floor_mindustry_world_blocks_environment_Floor_R_mindustry_game_EventType$TileOverlayChangeEvent(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
