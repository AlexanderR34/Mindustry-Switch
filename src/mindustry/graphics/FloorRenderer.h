#ifndef HEADER_mindustry_graphics_FloorRenderer
#define HEADER_mindustry_graphics_FloorRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_FloorRenderer {
	java_lang_Object parent;
	jref F_vertices;
	jint F_vidx;
	jref F_batch;
	jref F_shader;
	jref F_combinedMat;
	jref F_texture;
	jref F_error;
	jref F_cache;
	jref F_dirty;
	jref F_drawnLayerSet;
	jref F_drawnLayers;
	jref F_used;
	jfloat F_packWidth;
	jfloat F_packHeight;
	jref F_underwaterDraw;
	jref F_underwaterBlend;
} mindustry_graphics_FloorRenderer;

extern Class class_mindustry_graphics_FloorRenderer;

extern jbool SF_mindustry_graphics_FloorRenderer_growSprites;
extern jobject SF_mindustry_graphics_FloorRenderer_attributes;
extern jint SF_mindustry_graphics_FloorRenderer_chunksize;
extern jint SF_mindustry_graphics_FloorRenderer_chunkunits;
extern jint SF_mindustry_graphics_FloorRenderer_vertexSize;
extern jint SF_mindustry_graphics_FloorRenderer_spriteSize;
extern jint SF_mindustry_graphics_FloorRenderer_maxSprites;
extern jfloat SF_mindustry_graphics_FloorRenderer_packPad;
extern jfloat SF_mindustry_graphics_FloorRenderer_pad;
extern jbool SF_mindustry_graphics_FloorRenderer_dynamic;

#define VTABLE_mindustry_graphics_FloorRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_FloorRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_FloorRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_FloorRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_FloorRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_FloorRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_finalize 5
typedef void (*func_mindustry_graphics_FloorRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_notify 6
typedef void (*func_mindustry_graphics_FloorRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_FloorRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_wait 8
typedef void (*func_mindustry_graphics_FloorRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_wait_long 9
typedef void (*func_mindustry_graphics_FloorRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_FloorRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_FloorRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float 11
typedef jobject (*func_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile 12
typedef void (*func_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer_recacheTile_int_int 13
typedef void (*func_mindustry_graphics_FloorRenderer_recacheTile_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_graphics_FloorRenderer_drawFloor 14
typedef void (*func_mindustry_graphics_FloorRenderer_drawFloor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean 15
typedef void (*func_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable 16
typedef void (*func_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer_beginDraw 17
typedef void (*func_mindustry_graphics_FloorRenderer_beginDraw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer 18
typedef void (*func_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean 19
typedef void (*func_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean 20
typedef void (*func_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh 21
typedef jobject (*func_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3);
#define VTABLE_mindustry_graphics_FloorRenderer_reload 22
typedef void (*func_mindustry_graphics_FloorRenderer_reload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer_reload_boolean 23
typedef void (*func_mindustry_graphics_FloorRenderer_reload_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 24
typedef void (*func_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_FloorRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_FloorRenderer(jcontext ctx);
void init_mindustry_graphics_FloorRenderer(jcontext ctx, jobject self);
jobject M_mindustry_graphics_FloorRenderer_getVertexBuffer_R_Array1_float(jcontext ctx, jobject self);
void M_mindustry_graphics_FloorRenderer_recacheTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_FloorRenderer_recacheTile_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_graphics_FloorRenderer_drawFloor(jcontext ctx, jobject self);
void M_mindustry_graphics_FloorRenderer_drawFloor_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_graphics_FloorRenderer_drawUnderwater_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_FloorRenderer_beginDraw(jcontext ctx, jobject self);
void M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_FloorRenderer_drawLayer_mindustry_graphics_CacheLayer_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_graphics_FloorRenderer_cacheChunk_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
jobject M_mindustry_graphics_FloorRenderer_cacheChunkLayer_int_int_mindustry_graphics_CacheLayer_boolean_R_mindustry_graphics_FloorRenderer$ChunkMesh(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3);
void M_mindustry_graphics_FloorRenderer_reload(jcontext ctx, jobject self);
void M_mindustry_graphics_FloorRenderer_reload_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_graphics_FloorRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
