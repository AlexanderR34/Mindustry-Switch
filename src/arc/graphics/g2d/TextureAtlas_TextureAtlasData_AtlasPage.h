#ifndef HEADER_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage
#define HEADER_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage {
	java_lang_Object parent;
	jref F_textureFile;
	jint F_width;
	jint F_height;
	jbool F_useMipMaps;
	jref F_minFilter;
	jref F_magFilter;
	jref F_uWrap;
	jref F_vWrap;
	jref F_texture;
} arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage;

extern Class class_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage;


#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_finalize 5
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_notify 6
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_notifyAll 7
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_wait 8
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_wait_long 9
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_wait_long_int 10
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage(jcontext ctx);
void init_arc_graphics_g2d_TextureAtlas$TextureAtlasData$AtlasPage_arc_files_Fi_int_int_boolean_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jobject param4, jobject param5, jobject param6, jobject param7);

#ifdef __cplusplus
}
#endif

#endif
