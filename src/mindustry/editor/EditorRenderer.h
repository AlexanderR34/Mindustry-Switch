#ifndef HEADER_mindustry_editor_EditorRenderer
#define HEADER_mindustry_editor_EditorRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorRenderer {
	java_lang_Object parent;
	jref F_chunks;
	jref F_recacheChunks;
	jint F_width;
	jint F_height;
	jfloat F_packWidth;
	jfloat F_packHeight;
	jref F_shader;
} mindustry_editor_EditorRenderer;

extern Class class_mindustry_editor_EditorRenderer;

extern jfloat SF_mindustry_editor_EditorRenderer_packPad;
extern jint SF_mindustry_editor_EditorRenderer_chunkSize;
extern jobject SF_mindustry_editor_EditorRenderer_tmpTiles;

#define VTABLE_mindustry_editor_EditorRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_finalize 5
typedef void (*func_mindustry_editor_EditorRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_notify 6
typedef void (*func_mindustry_editor_EditorRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_notifyAll 7
typedef void (*func_mindustry_editor_EditorRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_wait 8
typedef void (*func_mindustry_editor_EditorRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_wait_long 9
typedef void (*func_mindustry_editor_EditorRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorRenderer_wait_long_int 10
typedef void (*func_mindustry_editor_EditorRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorRenderer_dispose 11
typedef void (*func_mindustry_editor_EditorRenderer_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_editor_EditorRenderer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_resize_int_int 13
typedef void (*func_mindustry_editor_EditorRenderer_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorRenderer_draw_float_float_float_float 14
typedef void (*func_mindustry_editor_EditorRenderer_draw_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int 15
typedef void (*func_mindustry_editor_EditorRenderer_updateStatic_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile 16
typedef void (*func_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorRenderer_updateBlock_int_int 17
typedef void (*func_mindustry_editor_EditorRenderer_updateBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorRenderer_recache 18
typedef void (*func_mindustry_editor_EditorRenderer_recache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_recacheTerrain 19
typedef void (*func_mindustry_editor_EditorRenderer_recacheTerrain)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_recacheShadows 20
typedef void (*func_mindustry_editor_EditorRenderer_recacheShadows)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorRenderer_recacheChunk_int_int 21
typedef void (*func_mindustry_editor_EditorRenderer_recacheChunk_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorRenderer_lambda$draw$0_int 22
typedef void (*func_mindustry_editor_EditorRenderer_lambda$draw$0_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_editor_EditorRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorRenderer(jcontext ctx);
void init_mindustry_editor_EditorRenderer(jcontext ctx, jobject self);
void M_mindustry_editor_EditorRenderer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorRenderer_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_editor_EditorRenderer_updateStatic_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorRenderer_updateBlock_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorRenderer_recache(jcontext ctx, jobject self);
void M_mindustry_editor_EditorRenderer_recacheTerrain(jcontext ctx, jobject self);
void M_mindustry_editor_EditorRenderer_recacheShadows(jcontext ctx, jobject self);
void M_mindustry_editor_EditorRenderer_recacheChunk_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorRenderer_dispose(jcontext ctx, jobject self);
jbool SM_mindustry_editor_EditorRenderer_lambda$recacheChunk$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_editor_EditorRenderer_lambda$draw$0_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
