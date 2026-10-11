#ifndef HEADER_mindustry_editor_DrawOperation
#define HEADER_mindustry_editor_DrawOperation

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_DrawOperation {
	java_lang_Object parent;
	jref F_array;
} mindustry_editor_DrawOperation;

extern Class class_mindustry_editor_DrawOperation;

extern jbyte SF_mindustry_editor_DrawOperation_opFloor;
extern jbyte SF_mindustry_editor_DrawOperation_opBlock;
extern jbyte SF_mindustry_editor_DrawOperation_opRotation;
extern jbyte SF_mindustry_editor_DrawOperation_opTeam;
extern jbyte SF_mindustry_editor_DrawOperation_opOverlay;
extern jbyte SF_mindustry_editor_DrawOperation_opData;
extern jbyte SF_mindustry_editor_DrawOperation_opDataExtra;

#define VTABLE_mindustry_editor_DrawOperation_hashCode_R_int 0
typedef jint (*func_mindustry_editor_DrawOperation_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_DrawOperation_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_DrawOperation_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_DrawOperation_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_DrawOperation_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_DrawOperation_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_finalize 5
typedef void (*func_mindustry_editor_DrawOperation_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_notify 6
typedef void (*func_mindustry_editor_DrawOperation_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_notifyAll 7
typedef void (*func_mindustry_editor_DrawOperation_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_wait 8
typedef void (*func_mindustry_editor_DrawOperation_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_wait_long 9
typedef void (*func_mindustry_editor_DrawOperation_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_DrawOperation_wait_long_int 10
typedef void (*func_mindustry_editor_DrawOperation_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_DrawOperation_isEmpty_R_boolean 11
typedef jbool (*func_mindustry_editor_DrawOperation_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_size_R_int 12
typedef jint (*func_mindustry_editor_DrawOperation_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_remove_int 13
typedef void (*func_mindustry_editor_DrawOperation_remove_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_DrawOperation_addOperation_long 14
typedef void (*func_mindustry_editor_DrawOperation_addOperation_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_DrawOperation_undo 15
typedef void (*func_mindustry_editor_DrawOperation_undo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_redo 16
typedef void (*func_mindustry_editor_DrawOperation_redo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_DrawOperation_updateTile_int 17
typedef void (*func_mindustry_editor_DrawOperation_updateTile_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int 18
typedef jint (*func_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int 19
typedef void (*func_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_mindustry_editor_DrawOperation(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_DrawOperation(jcontext ctx);
void init_mindustry_editor_DrawOperation(jcontext ctx, jobject self);
jbool M_mindustry_editor_DrawOperation_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_editor_DrawOperation_size_R_int(jcontext ctx, jobject self);
void M_mindustry_editor_DrawOperation_remove_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_editor_DrawOperation_addOperation_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_editor_DrawOperation_undo(jcontext ctx, jobject self);
void M_mindustry_editor_DrawOperation_redo(jcontext ctx, jobject self);
void M_mindustry_editor_DrawOperation_updateTile_int(jcontext ctx, jobject self, jint param0);
jint M_mindustry_editor_DrawOperation_getTile_mindustry_world_Tile_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_editor_DrawOperation_setTile_mindustry_world_Tile_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void SM_mindustry_editor_DrawOperation_lambda$setTile$2_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_editor_DrawOperation_lambda$setTile$1_int_int_mindustry_world_Tile(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_mindustry_editor_DrawOperation_lambda$setTile$0_mindustry_world_Tile(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
