#ifndef HEADER_arc_graphics_Pixmap
#define HEADER_arc_graphics_Pixmap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Pixmap {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jref F_pixels;
	jlong F_handle;
} arc_graphics_Pixmap;

extern Class class_arc_graphics_Pixmap;

extern jbool SF_arc_graphics_Pixmap_supportsBufferCopy;

#define VTABLE_arc_graphics_Pixmap_hashCode_R_int 0
typedef jint (*func_arc_graphics_Pixmap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Pixmap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Pixmap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Pixmap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Pixmap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_finalize 5
typedef void (*func_arc_graphics_Pixmap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_notify 6
typedef void (*func_arc_graphics_Pixmap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_notifyAll 7
typedef void (*func_arc_graphics_Pixmap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_wait 8
typedef void (*func_arc_graphics_Pixmap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_wait_long 9
typedef void (*func_arc_graphics_Pixmap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Pixmap_wait_long_int 10
typedef void (*func_arc_graphics_Pixmap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_dispose 11
typedef void (*func_arc_graphics_Pixmap_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_Pixmap_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap 13
typedef jobject (*func_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_each_arc_func_Intc2 14
typedef void (*func_arc_graphics_Pixmap_each_arc_func_Intc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap_replace_arc_func_IntIntf 15
typedef void (*func_arc_graphics_Pixmap_replace_arc_func_IntIntf)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap_fill_int 16
typedef void (*func_arc_graphics_Pixmap_fill_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Pixmap_fill_arc_graphics_Color 17
typedef void (*func_arc_graphics_Pixmap_fill_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap_in_int_int_R_boolean 18
typedef jbool (*func_arc_graphics_Pixmap_in_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap 19
typedef jobject (*func_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap 20
typedef jobject (*func_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap 21
typedef jobject (*func_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap 22
typedef jobject (*func_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap 23
typedef jobject (*func_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_drawLine_int_int_int_int_int 24
typedef void (*func_arc_graphics_Pixmap_drawLine_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_Pixmap_drawRect_int_int_int_int_int 25
typedef void (*func_arc_graphics_Pixmap_drawRect_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_Pixmap_circlePoints_int_int_int_int_int 26
typedef void (*func_arc_graphics_Pixmap_circlePoints_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_Pixmap_drawCircle_int_int_int_int 27
typedef void (*func_arc_graphics_Pixmap_drawCircle_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion 28
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean 29
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int 30
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int 31
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int 32
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int 33
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean 34
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap 35
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int 36
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean 37
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int 38
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean 39
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int 40
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int 41
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean 42
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9);
#define VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean 43
typedef void (*func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9, jbool param10);
#define VTABLE_arc_graphics_Pixmap_fillRect_int_int_int_int_int 44
typedef void (*func_arc_graphics_Pixmap_fillRect_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_Pixmap_fillCircle_int_int_int_int 45
typedef void (*func_arc_graphics_Pixmap_fillCircle_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Pixmap_get_int_int_R_int 46
typedef jint (*func_arc_graphics_Pixmap_get_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int 47
typedef jint (*func_arc_graphics_Pixmap_getClamp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int 48
typedef jint (*func_arc_graphics_Pixmap_getRaw_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_getA_int_int_R_int 49
typedef jint (*func_arc_graphics_Pixmap_getA_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean 50
typedef jbool (*func_arc_graphics_Pixmap_empty_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_Pixmap_getWidth_R_int 51
typedef jint (*func_arc_graphics_Pixmap_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_getHeight_R_int 52
typedef jint (*func_arc_graphics_Pixmap_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_set_int_int_arc_graphics_Color 53
typedef void (*func_arc_graphics_Pixmap_set_int_int_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_arc_graphics_Pixmap_set_int_int_int 54
typedef void (*func_arc_graphics_Pixmap_set_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_graphics_Pixmap_setRaw_int_int_int 55
typedef void (*func_arc_graphics_Pixmap_setRaw_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_graphics_Pixmap_getGLFormat_R_int 56
typedef jint (*func_arc_graphics_Pixmap_getGLFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_getGLInternalFormat_R_int 57
typedef jint (*func_arc_graphics_Pixmap_getGLInternalFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_getGLType_R_int 58
typedef jint (*func_arc_graphics_Pixmap_getGLType_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer 59
typedef jobject (*func_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap_hline_int_int_int_int 60
typedef void (*func_arc_graphics_Pixmap_hline_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Pixmap_vline_int_int_int_int 61
typedef void (*func_arc_graphics_Pixmap_vline_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String 62
typedef void (*func_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String 63
typedef void (*func_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_graphics_Pixmap_load_int_int 64
typedef void (*func_arc_graphics_Pixmap_load_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_arc_graphics_Pixmap(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Pixmap(jcontext ctx);
void init_arc_graphics_Pixmap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_arc_graphics_Pixmap_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_Pixmap_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_arc_graphics_Pixmap_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_Pixmap_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_Pixmap_java_nio_ByteBuffer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
void M_arc_graphics_Pixmap_each_arc_func_Intc2(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Pixmap_replace_arc_func_IntIntf(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Pixmap_fill_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_Pixmap_fill_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jbool M_arc_graphics_Pixmap_in_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_graphics_Pixmap_crop_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_arc_graphics_Pixmap_flipY_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jobject M_arc_graphics_Pixmap_flipX_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jobject M_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_graphics_Pixmap_outline_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_graphics_Pixmap_drawLine_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_Pixmap_drawRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_Pixmap_circlePoints_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_Pixmap_drawCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void M_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9);
void M_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jbool param9, jbool param10);
void M_arc_graphics_Pixmap_fillRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_graphics_Pixmap_fillCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jint M_arc_graphics_Pixmap_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_Pixmap_getClamp_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_Pixmap_getRaw_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_Pixmap_getA_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_graphics_Pixmap_empty_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_graphics_Pixmap_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Pixmap_getHeight_R_int(jcontext ctx, jobject self);
void M_arc_graphics_Pixmap_dispose(jcontext ctx, jobject self);
jbool M_arc_graphics_Pixmap_isDisposed_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_Pixmap_set_int_int_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_graphics_Pixmap_set_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_graphics_Pixmap_setRaw_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_arc_graphics_Pixmap_getGLFormat_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Pixmap_getGLInternalFormat_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Pixmap_getGLType_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer(jcontext ctx, jobject self);
void M_arc_graphics_Pixmap_hline_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_graphics_Pixmap_vline_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jint SM_arc_graphics_Pixmap_blend_int_int_R_int(jcontext ctx, jint param0, jint param1);
jbool SM_arc_graphics_Pixmap_empty_int_R_boolean(jcontext ctx, jint param0);
void M_arc_graphics_Pixmap_load_Array1_byte_int_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_arc_graphics_Pixmap_loadJava_Array1_byte_int_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_arc_graphics_Pixmap_load_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_graphics_Pixmap_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_arc_graphics_Pixmap_copyMem_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
jobject SM_arc_graphics_Pixmap_loadJni_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_arc_graphics_Pixmap_createJni_Array1_long_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_arc_graphics_Pixmap_free_long(jcontext ctx, jlong param0);
jobject SM_arc_graphics_Pixmap_getFailureReason_R_java_lang_String(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
