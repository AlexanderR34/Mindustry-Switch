#ifndef HEADER_arc_graphics_g2d_TextureAtlas$AtlasRegion
#define HEADER_arc_graphics_g2d_TextureAtlas$AtlasRegion

#include "Clearwing.h"
#include "arc/graphics/g2d/TextureRegion.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_TextureAtlas$AtlasRegion {
	arc_graphics_g2d_TextureRegion parent;
	jref F_pixmapRegion;
	jref F_name;
	jfloat F_offsetX;
	jfloat F_offsetY;
	jint F_packedWidth;
	jint F_packedHeight;
	jint F_originalWidth;
	jint F_originalHeight;
	jbool F_rotate;
	jref F_splits;
	jref F_pads;
} arc_graphics_g2d_TextureAtlas$AtlasRegion;

extern Class class_arc_graphics_g2d_TextureAtlas$AtlasRegion;


#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_finalize 5
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_notify 6
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_notifyAll 7
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_wait 8
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_wait_long 9
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_wait_long_int 10
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion 11
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_found_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_found_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_Texture 13
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion 14
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_float_float_float_float 15
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion 16
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int 17
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_Texture_int_int_int_int 18
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_Texture_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setU_float 19
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setU_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setV_float 20
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setV_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setU2_float 21
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setU2_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setV2_float 22
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setV2_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getX_R_int 23
typedef jint (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setX_int 24
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setX_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setX_float 25
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getY_R_int 26
typedef jint (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setY_int 27
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setY_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setY_float 28
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setWidth_int 29
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setWidth_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setHeight_int 30
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setHeight_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setWidth_float 31
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_setHeight_float 32
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_setHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean 33
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_ratio_R_float 34
typedef jfloat (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_ratio_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_isFlipX_R_boolean 35
typedef jbool (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_isFlipX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_isFlipY_R_boolean 36
typedef jbool (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_isFlipY_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_scroll_float_float 37
typedef void (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_scroll_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion 38
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_scl_R_float 39
typedef jfloat (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_scl_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float 40
typedef jfloat (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float 41
typedef jfloat (*func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_TextureAtlas$AtlasRegion(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx);
void init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void init_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self);
void init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jfloat M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
