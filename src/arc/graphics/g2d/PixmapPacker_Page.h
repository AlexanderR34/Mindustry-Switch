#ifndef HEADER_arc_graphics_g2d_PixmapPacker$Page
#define HEADER_arc_graphics_g2d_PixmapPacker$Page

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_PixmapPacker$Page {
	java_lang_Object parent;
	jref F_addedRects;
	jref F_rects;
	jref F_image;
	jref F_texture;
	jbool F_dirty;
} arc_graphics_g2d_PixmapPacker$Page;

extern Class class_arc_graphics_g2d_PixmapPacker$Page;


#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_PixmapPacker$Page_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$Page_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_finalize 5
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_notify 6
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_notifyAll 7
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_wait 8
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_wait_long 9
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_wait_long_int 10
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean 11
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap 12
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap 13
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture 14
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean 15
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);

void mark_arc_graphics_g2d_PixmapPacker$Page(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_PixmapPacker$Page(jcontext ctx);
void init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_PixmapPacker$Page_setDirty_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_PixmapPacker$Page_getRects_R_arc_struct_OrderedMap(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_PixmapPacker$Page_getTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
jbool M_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);

#ifdef __cplusplus
}
#endif

#endif
