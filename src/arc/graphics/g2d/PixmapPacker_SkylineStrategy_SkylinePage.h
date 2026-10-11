#ifndef HEADER_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage
#define HEADER_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage

#include "Clearwing.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage {
	arc_graphics_g2d_PixmapPacker$Page parent;
	jref F_rows;
} arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage;

extern Class class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage;


#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_finalize 5
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_notify 6
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_notifyAll 7
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_wait 8
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_wait_long 9
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_wait_long_int 10
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_setDirty_boolean 11
typedef void (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_setDirty_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getPixmap_R_arc_graphics_Pixmap 12
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getRects_R_arc_struct_OrderedMap 13
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getRects_R_arc_struct_OrderedMap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getTexture_R_arc_graphics_Texture 14
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_getTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean 15
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);

void mark_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(jcontext ctx);
void init_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_arc_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
