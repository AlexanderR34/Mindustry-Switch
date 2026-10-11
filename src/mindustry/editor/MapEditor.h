#ifndef HEADER_mindustry_editor_MapEditor
#define HEADER_mindustry_editor_MapEditor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_MapEditor {
	java_lang_Object parent;
	jref F_tags;
	jref F_renderer;
	jref F_context;
	jref F_stack;
	jref F_currentOp;
	jbool F_loading;
	jfloat F_brushSize;
	jint F_rotation;
	jref F_drawBlock;
	jref F_drawTeam;
	jbool F_showTerrain;
	jbool F_showFloor;
	jbool F_showBuildings;
} mindustry_editor_MapEditor;

extern Class class_mindustry_editor_MapEditor;

extern jobject SF_mindustry_editor_MapEditor_brushSizes;

#define VTABLE_mindustry_editor_MapEditor_hashCode_R_int 0
typedef jint (*func_mindustry_editor_MapEditor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_MapEditor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_MapEditor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_MapEditor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_MapEditor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_finalize 5
typedef void (*func_mindustry_editor_MapEditor_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_notify 6
typedef void (*func_mindustry_editor_MapEditor_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_notifyAll 7
typedef void (*func_mindustry_editor_MapEditor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_wait 8
typedef void (*func_mindustry_editor_MapEditor_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_wait_long 9
typedef void (*func_mindustry_editor_MapEditor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_MapEditor_wait_long_int 10
typedef void (*func_mindustry_editor_MapEditor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_isLoading_R_boolean 11
typedef jbool (*func_mindustry_editor_MapEditor_isLoading_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_beginEdit_int_int 12
typedef void (*func_mindustry_editor_MapEditor_beginEdit_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map 13
typedef void (*func_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap 14
typedef void (*func_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_updateRenderer 15
typedef void (*func_mindustry_editor_MapEditor_updateRenderer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_load_java_lang_Runnable 16
typedef void (*func_mindustry_editor_MapEditor_load_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_createTiles_int_int 17
typedef void (*func_mindustry_editor_MapEditor_createTiles_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map 18
typedef jobject (*func_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_reset 19
typedef void (*func_mindustry_editor_MapEditor_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles 20
typedef jobject (*func_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile 21
typedef jobject (*func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_width_R_int 22
typedef jint (*func_mindustry_editor_MapEditor_width_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_height_R_int 23
typedef jint (*func_mindustry_editor_MapEditor_height_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_drawBlocksReplace_int_int 24
typedef void (*func_mindustry_editor_MapEditor_drawBlocksReplace_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int 25
typedef void (*func_mindustry_editor_MapEditor_drawBlocks_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf 26
typedef void (*func_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf 27
typedef void (*func_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3, jobject param4);
#define VTABLE_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean 28
typedef jbool (*func_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor_addCliffs 29
typedef void (*func_mindustry_editor_MapEditor_addCliffs)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons 30
typedef void (*func_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons 31
typedef void (*func_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_editor_MapEditor_resize_int_int_int_int 32
typedef void (*func_mindustry_editor_MapEditor_resize_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_editor_MapEditor_clearOp 33
typedef void (*func_mindustry_editor_MapEditor_clearOp)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_undo 34
typedef void (*func_mindustry_editor_MapEditor_undo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_redo 35
typedef void (*func_mindustry_editor_MapEditor_redo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_canUndo_R_boolean 36
typedef jbool (*func_mindustry_editor_MapEditor_canUndo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_canRedo_R_boolean 37
typedef jbool (*func_mindustry_editor_MapEditor_canRedo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_flushOp 38
typedef void (*func_mindustry_editor_MapEditor_flushOp)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_addTileOp_long 39
typedef void (*func_mindustry_editor_MapEditor_addTileOp_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_MapEditor_ops_R_int 40
typedef jint (*func_mindustry_editor_MapEditor_ops_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor_removeLastOps_int 41
typedef void (*func_mindustry_editor_MapEditor_removeLastOps_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile 42
typedef void (*func_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3);
#define VTABLE_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean 43
typedef jbool (*func_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap 44
typedef void (*func_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map 45
typedef void (*func_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_editor_MapEditor(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_MapEditor(jcontext ctx);
void init_mindustry_editor_MapEditor(jcontext ctx, jobject self);
jbool M_mindustry_editor_MapEditor_isLoading_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_beginEdit_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_MapEditor_updateRenderer(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_load_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_MapEditor_createTiles_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_MapEditor_reset(jcontext ctx, jobject self);
jobject M_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles(jcontext ctx, jobject self);
jobject M_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jint M_mindustry_editor_MapEditor_width_R_int(jcontext ctx, jobject self);
jint M_mindustry_editor_MapEditor_height_R_int(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_drawBlocksReplace_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_MapEditor_drawBlocks_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3, jobject param4);
jbool M_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_MapEditor_addCliffs(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_mindustry_editor_MapEditor_resize_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_editor_MapEditor_clearOp(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_undo(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_redo(jcontext ctx, jobject self);
jbool M_mindustry_editor_MapEditor_canUndo_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_editor_MapEditor_canRedo_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_flushOp(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_addTileOp_long(jcontext ctx, jobject self, jlong param0);
jint M_mindustry_editor_MapEditor_ops_R_int(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor_removeLastOps_int(jcontext ctx, jobject self, jint param0);
void SM_mindustry_editor_MapEditor_lambda$resize$0_mindustry_world_Tile_int_int_arc_math_geom_Point2(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void M_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3);
jbool SM_mindustry_editor_MapEditor_lambda$drawBlocks$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
jbool M_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_editor_MapEditor_lambda$updateRenderer$0_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0);
void M_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
