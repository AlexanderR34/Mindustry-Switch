#ifndef HEADER_arc_graphics_Pixmaps
#define HEADER_arc_graphics_Pixmaps

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Pixmaps {
	java_lang_Object parent;
} arc_graphics_Pixmaps;

extern Class class_arc_graphics_Pixmaps;

extern jobject SF_arc_graphics_Pixmaps_offsets;
extern jobject SF_arc_graphics_Pixmaps_drawPixmap;
extern jobject SF_arc_graphics_Pixmaps_tmpArray;

#define VTABLE_arc_graphics_Pixmaps_hashCode_R_int 0
typedef jint (*func_arc_graphics_Pixmaps_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Pixmaps_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmaps_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Pixmaps_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Pixmaps_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Pixmaps_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_finalize 5
typedef void (*func_arc_graphics_Pixmaps_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_notify 6
typedef void (*func_arc_graphics_Pixmaps_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_notifyAll 7
typedef void (*func_arc_graphics_Pixmaps_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_wait 8
typedef void (*func_arc_graphics_Pixmaps_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmaps_wait_long 9
typedef void (*func_arc_graphics_Pixmaps_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Pixmaps_wait_long_int 10
typedef void (*func_arc_graphics_Pixmaps_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_Pixmaps(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Pixmaps(jcontext ctx);
void init_arc_graphics_Pixmaps(jcontext ctx, jobject self);
jobject SM_arc_graphics_Pixmaps_noise_int_int_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1);
jobject SM_arc_graphics_Pixmaps_noiseTex_int_int_R_arc_graphics_Texture(jcontext ctx, jint param0, jint param1);
void SM_arc_graphics_Pixmaps_flip_arc_graphics_Pixmap(jcontext ctx, jobject param0);
jobject SM_arc_graphics_Pixmaps_blend_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1, jfloat param2);
jobject SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jdouble param2);
jobject SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_arc_struct_IntSeq_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jdouble param2, jobject param3);
jobject SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_int_int_boolean_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jobject SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jfloat param1);
jobject SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jobject SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_arc_graphics_Pixmaps_outline_arc_graphics_Pixmap_arc_graphics_Color_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_graphics_Pixmaps_zoom_arc_graphics_Pixmap_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jobject SM_arc_graphics_Pixmaps_crop_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jobject SM_arc_graphics_Pixmaps_rotate_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jfloat param1);
jbool SM_arc_graphics_Pixmaps_empty_int_R_boolean(jcontext ctx, jint param0);
jobject SM_arc_graphics_Pixmaps_huePixmap_int_int_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1);
jobject SM_arc_graphics_Pixmaps_hueTexture_int_int_R_arc_graphics_Texture(jcontext ctx, jint param0, jint param1);
jobject SM_arc_graphics_Pixmaps_blankPixmap_R_arc_graphics_Pixmap(jcontext ctx);
jobject SM_arc_graphics_Pixmaps_blankTexture_R_arc_graphics_Texture(jcontext ctx);
jobject SM_arc_graphics_Pixmaps_blankTextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx);
void SM_arc_graphics_Pixmaps_drawPixel_arc_graphics_Texture_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jobject SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject param0);
void SM_arc_graphics_Pixmaps_antialias_arc_graphics_Pixmap(jcontext ctx, jobject param0);
jobject SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1);
void SM_arc_graphics_Pixmaps_lambda$median$0_arc_struct_IntSeq_arc_graphics_Pixmap_int_arc_graphics_Pixmap_double_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jdouble param4, jint param5, jint param6);
void SM_arc_graphics_Pixmaps_lambda$median$1_arc_struct_IntSeq_arc_graphics_Pixmap_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
