#ifndef HEADER_mindustry_mod_Mods$1
#define HEADER_mindustry_mod_Mods$1

#include "Clearwing.h"
#include "arc/graphics/g2d/TextureAtlas.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$1 {
	arc_graphics_g2d_TextureAtlas parent;
	jref F_val$shadow;
	jref F_val$whiteRegion;
	jref F_val$packer;
	jref F_this$0;
} mindustry_mod_Mods$1;

extern Class class_mindustry_mod_Mods$1;


#define VTABLE_mindustry_mod_Mods$1_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_finalize 5
typedef void (*func_mindustry_mod_Mods$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_notify 6
typedef void (*func_mindustry_mod_Mods$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_notifyAll 7
typedef void (*func_mindustry_mod_Mods$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_wait 8
typedef void (*func_mindustry_mod_Mods$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_wait_long 9
typedef void (*func_mindustry_mod_Mods$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$1_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods$1_dispose 11
typedef void (*func_mindustry_mod_Mods$1_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_mod_Mods$1_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_setDrawableScale_float 13
typedef void (*func_mindustry_mod_Mods$1_setDrawableScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_mod_Mods$1_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData 14
typedef void (*func_mindustry_mod_Mods$1_load_arc_graphics_g2d_TextureAtlas$TextureAtlasData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion 15
typedef jobject (*func_mindustry_mod_Mods$1_getPixmap_java_lang_String_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion 16
typedef jobject (*func_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion 17
typedef jobject (*func_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getPixmaps_R_arc_struct_ObjectMap 18
typedef jobject (*func_mindustry_mod_Mods$1_getPixmaps_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_disposePixmap_arc_graphics_Texture 19
typedef void (*func_mindustry_mod_Mods$1_disposePixmap_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion 20
typedef jobject (*func_mindustry_mod_Mods$1_addRegion_java_lang_String_arc_graphics_Texture_int_int_int_int_R_arc_graphics_g2d_TextureAtlas$AtlasRegion)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jint param5);
#define VTABLE_mindustry_mod_Mods$1_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion 21
typedef jobject (*func_mindustry_mod_Mods$1_addRegion_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureAtlas$AtlasRegion)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$1_getRegions_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_mod_Mods$1_getRegions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_getRegionMap_R_arc_struct_ObjectMap 23
typedef jobject (*func_mindustry_mod_Mods$1_getRegionMap_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion 24
typedef jobject (*func_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_setErrorRegion_java_lang_String_R_boolean 25
typedef jbool (*func_mindustry_mod_Mods$1_setErrorRegion_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean 26
typedef jbool (*func_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion 27
typedef jobject (*func_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion 28
typedef jobject (*func_mindustry_mod_Mods$1_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion 29
typedef jobject (*func_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods$1_has_java_lang_String_R_boolean 30
typedef jbool (*func_mindustry_mod_Mods$1_has_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getDrawable_java_lang_String_R_arc_scene_style_Drawable 31
typedef jobject (*func_mindustry_mod_Mods$1_getDrawable_java_lang_String_R_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_drawable_java_lang_String_R_arc_scene_style_Drawable 32
typedef jobject (*func_mindustry_mod_Mods$1_drawable_java_lang_String_R_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getDrawables_R_arc_struct_ObjectMap 33
typedef jobject (*func_mindustry_mod_Mods$1_getDrawables_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch 34
typedef jobject (*func_mindustry_mod_Mods$1_createPatch_java_lang_String_R_arc_graphics_g2d_NinePatch)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1_getTextures_R_arc_struct_ObjectSet 35
typedef jobject (*func_mindustry_mod_Mods$1_getTextures_R_arc_struct_ObjectSet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1_texture_R_arc_graphics_Texture 36
typedef jobject (*func_mindustry_mod_Mods$1_texture_R_arc_graphics_Texture)(jcontext ctx, jobject self);

void mark_mindustry_mod_Mods$1(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$1(jcontext ctx);
void init_mindustry_mod_Mods$1_mindustry_mod_Mods_arc_graphics_g2d_TextureAtlas_arc_graphics_g2d_TextureAtlas$AtlasRegion_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_mindustry_mod_Mods$1_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$1_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_Mods$1_isFound_arc_graphics_g2d_TextureRegion_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods$1_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_mod_Mods$1_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods$1_getPixmap_arc_graphics_g2d_TextureAtlas$AtlasRegion_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
