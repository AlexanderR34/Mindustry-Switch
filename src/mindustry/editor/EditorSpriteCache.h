#ifndef HEADER_mindustry_editor_EditorSpriteCache
#define HEADER_mindustry_editor_EditorSpriteCache

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorSpriteCache {
	java_lang_Object parent;
	jref F_mesh;
	jref F_textures;
	jref F_counts;
	jfloat F_packX;
	jfloat F_packY;
	jfloat F_packW;
	jfloat F_packH;
	jref F_tmpVertices;
	jint F_index;
} mindustry_editor_EditorSpriteCache;

extern Class class_mindustry_editor_EditorSpriteCache;

extern jint SF_mindustry_editor_EditorSpriteCache_vertexSize;

#define VTABLE_mindustry_editor_EditorSpriteCache_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorSpriteCache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorSpriteCache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorSpriteCache_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorSpriteCache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorSpriteCache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorSpriteCache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_finalize 5
typedef void (*func_mindustry_editor_EditorSpriteCache_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_notify 6
typedef void (*func_mindustry_editor_EditorSpriteCache_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_notifyAll 7
typedef void (*func_mindustry_editor_EditorSpriteCache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_wait 8
typedef void (*func_mindustry_editor_EditorSpriteCache_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_wait_long 9
typedef void (*func_mindustry_editor_EditorSpriteCache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorSpriteCache_wait_long_int 10
typedef void (*func_mindustry_editor_EditorSpriteCache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorSpriteCache_dispose 11
typedef void (*func_mindustry_editor_EditorSpriteCache_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_editor_EditorSpriteCache_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean 13
typedef jbool (*func_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData 14
typedef void (*func_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float 15
typedef void (*func_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define VTABLE_mindustry_editor_EditorSpriteCache_pack_float_float_R_float 16
typedef jfloat (*func_mindustry_editor_EditorSpriteCache_pack_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader 17
typedef void (*func_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_editor_EditorSpriteCache(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorSpriteCache(jcontext ctx);
void init_mindustry_editor_EditorSpriteCache_Array1_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jbool M_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jfloat M_mindustry_editor_EditorSpriteCache_pack_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorSpriteCache_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
