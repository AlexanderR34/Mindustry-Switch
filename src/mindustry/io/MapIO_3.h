#ifndef HEADER_mindustry_io_MapIO$3
#define HEADER_mindustry_io_MapIO$3

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_MapIO$3 {
	java_lang_Object parent;
	jref F_val$tile;
	jref F_val$walls;
	jref F_val$floors;
	jref F_val$map;
	jref F_val$floorIds;
	jint F_val$width;
	jref F_val$overlays;
} mindustry_io_MapIO$3;

extern Class class_mindustry_io_MapIO$3;


#define VTABLE_mindustry_io_MapIO$3_hashCode_R_int 0
typedef jint (*func_mindustry_io_MapIO$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_MapIO$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_MapIO$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_MapIO$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_MapIO$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_finalize 5
typedef void (*func_mindustry_io_MapIO$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_notify 6
typedef void (*func_mindustry_io_MapIO$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_notifyAll 7
typedef void (*func_mindustry_io_MapIO$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_wait 8
typedef void (*func_mindustry_io_MapIO$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_wait_long 9
typedef void (*func_mindustry_io_MapIO$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_MapIO$3_wait_long_int 10
typedef void (*func_mindustry_io_MapIO$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile 11
typedef jobject (*func_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_io_MapIO$3_resize_int_int 12
typedef void (*func_mindustry_io_MapIO$3_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile 13
typedef jobject (*func_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_io_MapIO$3_isGenerating_R_boolean 14
typedef jbool (*func_mindustry_io_MapIO$3_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_begin 15
typedef void (*func_mindustry_io_MapIO$3_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_end 16
typedef void (*func_mindustry_io_MapIO$3_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_onReadBuilding 17
typedef void (*func_mindustry_io_MapIO$3_onReadBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_onReadTileData 18
typedef void (*func_mindustry_io_MapIO$3_onReadTileData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_getSector_R_mindustry_type_Sector 19
typedef jobject (*func_mindustry_io_MapIO$3_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$3_isMap_R_boolean 20
typedef jbool (*func_mindustry_io_MapIO$3_isMap_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_io_MapIO$3(jobject object, jint mark, jint depth);
void clinit_mindustry_io_MapIO$3(jcontext ctx);
void init_mindustry_io_MapIO$3_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jobject param6);
void M_mindustry_io_MapIO$3_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_io_MapIO$3_isGenerating_R_boolean(jcontext ctx, jobject self);
void M_mindustry_io_MapIO$3_begin(jcontext ctx, jobject self);
void M_mindustry_io_MapIO$3_end(jcontext ctx, jobject self);
void M_mindustry_io_MapIO$3_onReadBuilding(jcontext ctx, jobject self);
jobject M_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_mindustry_io_MapIO$3_onReadTileData(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
