#ifndef HEADER_arc_graphics_g2d_PixmapPacker$Page$1
#define HEADER_arc_graphics_g2d_PixmapPacker$Page$1

#include "Clearwing.h"
#include "arc/graphics/Texture.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_PixmapPacker$Page$1 {
	arc_graphics_Texture parent;
	jref F_this$0;
} arc_graphics_g2d_PixmapPacker$Page$1;

extern Class class_arc_graphics_g2d_PixmapPacker$Page$1;


#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_PixmapPacker$Page$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$Page$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_finalize 5
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_notify 6
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_notifyAll 7
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_wait 8
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_wait_long 9
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_wait_long_int 10
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_dispose 11
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_PixmapPacker$Page$1_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getDepth_R_int 13
typedef jint (*func_arc_graphics_g2d_PixmapPacker$Page$1_getDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_bind 14
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_bind_int 15
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_bind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getMinFilter_R_arc_graphics_Texture$TextureFilter 16
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_getMinFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getMagFilter_R_arc_graphics_Texture$TextureFilter 17
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_getMagFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getUWrap_R_arc_graphics_Texture$TextureWrap 18
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_getUWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getVWrap_R_arc_graphics_Texture$TextureWrap 19
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_getVWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getTextureObjectHandle_R_int 20
typedef jint (*func_arc_graphics_g2d_PixmapPacker$Page$1_getTextureObjectHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 21
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean 22
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_setWrap_arc_graphics_Texture$TextureWrap 23
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_setWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 24
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 25
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean 26
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_setFilter_arc_graphics_Texture$TextureFilter 27
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_setFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 28
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_load_arc_graphics_TextureData 29
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_load_arc_graphics_TextureData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_draw_arc_graphics_Pixmap 30
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_draw_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_draw_arc_graphics_Pixmap_int_int 31
typedef void (*func_arc_graphics_g2d_PixmapPacker$Page$1_draw_arc_graphics_Pixmap_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_g2d_PixmapPacker$Page$1_getTextureData_R_arc_graphics_TextureData 32
typedef jobject (*func_arc_graphics_g2d_PixmapPacker$Page$1_getTextureData_R_arc_graphics_TextureData)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_PixmapPacker$Page$1(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_PixmapPacker$Page$1(jcontext ctx);
void init_arc_graphics_g2d_PixmapPacker$Page$1_arc_graphics_g2d_PixmapPacker$Page_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_g2d_PixmapPacker$Page$1_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
