#ifndef HEADER_mindustry_graphics_MinimapRenderer
#define HEADER_mindustry_graphics_MinimapRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_MinimapRenderer {
	java_lang_Object parent;
	jref F_units;
	jref F_pixmap;
	jref F_texture;
	jref F_region;
	jref F_rect;
	jfloat F_zoom;
	jref F_updates;
	jfloat F_updateCounter;
} mindustry_graphics_MinimapRenderer;

extern Class class_mindustry_graphics_MinimapRenderer;

extern jfloat SF_mindustry_graphics_MinimapRenderer_baseSize;
extern jfloat SF_mindustry_graphics_MinimapRenderer_updateInterval;

#define VTABLE_mindustry_graphics_MinimapRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_MinimapRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_MinimapRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_MinimapRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_MinimapRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_MinimapRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_finalize 5
typedef void (*func_mindustry_graphics_MinimapRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_notify 6
typedef void (*func_mindustry_graphics_MinimapRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_MinimapRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_wait 8
typedef void (*func_mindustry_graphics_MinimapRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_wait_long 9
typedef void (*func_mindustry_graphics_MinimapRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_MinimapRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_MinimapRenderer_update 11
typedef void (*func_mindustry_graphics_MinimapRenderer_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap 12
typedef jobject (*func_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture 13
typedef jobject (*func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_zoomBy_float 14
typedef void (*func_mindustry_graphics_MinimapRenderer_zoomBy_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_setZoom_float 15
typedef void (*func_mindustry_graphics_MinimapRenderer_setZoom_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_getZoom_R_float 16
typedef jfloat (*func_mindustry_graphics_MinimapRenderer_getZoom_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_reset 17
typedef void (*func_mindustry_graphics_MinimapRenderer_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean 18
typedef void (*func_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
#define VTABLE_mindustry_graphics_MinimapRenderer_drawSpawns 19
typedef void (*func_mindustry_graphics_MinimapRenderer_drawSpawns)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion 20
typedef jobject (*func_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_updateAll 21
typedef void (*func_mindustry_graphics_MinimapRenderer_updateAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile 22
typedef void (*func_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile 23
typedef void (*func_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_updateUnitArray 24
typedef void (*func_mindustry_graphics_MinimapRenderer_updateUnitArray)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block 25
typedef jobject (*func_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int 26
typedef jint (*func_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float 27
typedef void (*func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4);
#define VTABLE_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean 28
typedef void (*func_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4, jbool param5);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile 29
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$update$0_int 30
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$update$0_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent 31
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent 32
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile 33
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent 34
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile 35
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 36
typedef void (*func_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_MinimapRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_MinimapRenderer(jcontext ctx);
void init_mindustry_graphics_MinimapRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_MinimapRenderer_update(jcontext ctx, jobject self);
jobject M_mindustry_graphics_MinimapRenderer_getPixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jobject M_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
void M_mindustry_graphics_MinimapRenderer_zoomBy_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_graphics_MinimapRenderer_setZoom_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_graphics_MinimapRenderer_getZoom_R_float(jcontext ctx, jobject self);
void M_mindustry_graphics_MinimapRenderer_reset(jcontext ctx, jobject self);
void M_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
void M_mindustry_graphics_MinimapRenderer_drawSpawns(jcontext ctx, jobject self);
jobject M_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
void M_mindustry_graphics_MinimapRenderer_updateAll(jcontext ctx, jobject self);
void M_mindustry_graphics_MinimapRenderer_update_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_updatePixel_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_updateUnitArray(jcontext ctx, jobject self);
jobject M_mindustry_graphics_MinimapRenderer_realBlock_mindustry_world_Tile_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_graphics_MinimapRenderer_colorFor_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4);
void M_mindustry_graphics_MinimapRenderer_drawLabel_float_float_java_lang_String_arc_graphics_Color_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4, jbool param5);
void M_mindustry_graphics_MinimapRenderer_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_graphics_MinimapRenderer_lambda$drawEntities$0_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject param0);
void M_mindustry_graphics_MinimapRenderer_lambda$update$0_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_graphics_MinimapRenderer_lambda$new$5_mindustry_game_EventType$BuildTeamChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_lambda$new$4_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_lambda$new$1_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_lambda$new$2_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MinimapRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
