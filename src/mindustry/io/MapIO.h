#ifndef HEADER_mindustry_io_MapIO
#define HEADER_mindustry_io_MapIO

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_MapIO {
	java_lang_Object parent;
} mindustry_io_MapIO;

extern Class class_mindustry_io_MapIO;

extern jobject SF_mindustry_io_MapIO_pngHeader;

#define VTABLE_mindustry_io_MapIO_hashCode_R_int 0
typedef jint (*func_mindustry_io_MapIO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_MapIO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_MapIO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_MapIO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_MapIO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_finalize 5
typedef void (*func_mindustry_io_MapIO_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_notify 6
typedef void (*func_mindustry_io_MapIO_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_notifyAll 7
typedef void (*func_mindustry_io_MapIO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_wait 8
typedef void (*func_mindustry_io_MapIO_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO_wait_long 9
typedef void (*func_mindustry_io_MapIO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_MapIO_wait_long_int 10
typedef void (*func_mindustry_io_MapIO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_io_MapIO(jobject object, jint mark, jint depth);
void clinit_mindustry_io_MapIO(jcontext ctx);
void init_mindustry_io_MapIO(jcontext ctx, jobject self);
jbool SM_mindustry_io_MapIO_isImage_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_io_MapIO_createMap_arc_files_Fi_boolean_R_mindustry_maps_Map(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_io_MapIO_writeMap_arc_files_Fi_mindustry_maps_Map_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map(jcontext ctx, jobject param0);
void SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map_mindustry_world_WorldContext(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_io_MapIO_generatePreview_mindustry_maps_Map_R_arc_graphics_Pixmap(jcontext ctx, jobject param0);
void SM_mindustry_io_MapIO_readPreviewContentHeader_java_io_DataInput(jcontext ctx, jobject param0);
jobject SM_mindustry_io_MapIO_generatePreview_mindustry_world_Tiles_R_arc_graphics_Pixmap(jcontext ctx, jobject param0);
jint SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_mindustry_io_MapIO_writeImage_mindustry_world_Tiles_R_arc_graphics_Pixmap(jcontext ctx, jobject param0);
void SM_mindustry_io_MapIO_readImage_arc_graphics_Pixmap_mindustry_world_Tiles(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_io_MapIO_lambda$generatePreview$0_mindustry_io_SaveVersion_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean_java_io_DataInput(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jint param6, jobject param7, jobject param8);
void SM_mindustry_io_MapIO_lambda$createMap$0_arc_struct_StringMap_mindustry_io_SaveVersion_java_io_DataInput(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
