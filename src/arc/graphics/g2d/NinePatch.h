#ifndef HEADER_arc_graphics_g2d_NinePatch
#define HEADER_arc_graphics_g2d_NinePatch

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_NinePatch {
	java_lang_Object parent;
	jref F_color;
	jref F_texture;
	jint F_bottomLeft;
	jint F_bottomCenter;
	jint F_bottomRight;
	jint F_middleLeft;
	jint F_middleCenter;
	jint F_middleRight;
	jint F_topLeft;
	jint F_topCenter;
	jint F_topRight;
	jfloat F_leftWidth;
	jfloat F_rightWidth;
	jfloat F_middleWidth;
	jfloat F_middleHeight;
	jfloat F_topHeight;
	jfloat F_bottomHeight;
	jref F_vertices;
	jint F_idx;
	jfloat F_padLeft;
	jfloat F_padRight;
	jfloat F_padTop;
	jfloat F_padBottom;
} arc_graphics_g2d_NinePatch;

extern Class class_arc_graphics_g2d_NinePatch;

extern jint SF_arc_graphics_g2d_NinePatch_TOP_LEFT;
extern jint SF_arc_graphics_g2d_NinePatch_TOP_CENTER;
extern jint SF_arc_graphics_g2d_NinePatch_TOP_RIGHT;
extern jint SF_arc_graphics_g2d_NinePatch_MIDDLE_LEFT;
extern jint SF_arc_graphics_g2d_NinePatch_MIDDLE_CENTER;
extern jint SF_arc_graphics_g2d_NinePatch_MIDDLE_RIGHT;
extern jint SF_arc_graphics_g2d_NinePatch_BOTTOM_LEFT;
extern jint SF_arc_graphics_g2d_NinePatch_BOTTOM_CENTER;
extern jint SF_arc_graphics_g2d_NinePatch_BOTTOM_RIGHT;
extern jobject SF_arc_graphics_g2d_NinePatch_tmpDrawColor;

#define VTABLE_arc_graphics_g2d_NinePatch_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_NinePatch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_NinePatch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_NinePatch_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_NinePatch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_NinePatch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_NinePatch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_finalize 5
typedef void (*func_arc_graphics_g2d_NinePatch_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_notify 6
typedef void (*func_arc_graphics_g2d_NinePatch_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_notifyAll 7
typedef void (*func_arc_graphics_g2d_NinePatch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_wait 8
typedef void (*func_arc_graphics_g2d_NinePatch_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_wait_long 9
typedef void (*func_arc_graphics_g2d_NinePatch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_NinePatch_wait_long_int 10
typedef void (*func_arc_graphics_g2d_NinePatch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion 11
typedef void (*func_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int 12
typedef jint (*func_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jbool param3);
#define VTABLE_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float 13
typedef void (*func_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float 14
typedef void (*func_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float 15
typedef void (*func_arc_graphics_g2d_NinePatch_draw_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float 16
typedef void (*func_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define VTABLE_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color 17
typedef jobject (*func_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color 18
typedef void (*func_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getLeftWidth_R_float 19
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getLeftWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setLeftWidth_float 20
typedef void (*func_arc_graphics_g2d_NinePatch_setLeftWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getRightWidth_R_float 21
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getRightWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setRightWidth_float 22
typedef void (*func_arc_graphics_g2d_NinePatch_setRightWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getTopHeight_R_float 23
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getTopHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setTopHeight_float 24
typedef void (*func_arc_graphics_g2d_NinePatch_setTopHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getBottomHeight_R_float 25
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getBottomHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setBottomHeight_float 26
typedef void (*func_arc_graphics_g2d_NinePatch_setBottomHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float 27
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setMiddleWidth_float 28
typedef void (*func_arc_graphics_g2d_NinePatch_setMiddleWidth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float 29
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setMiddleHeight_float 30
typedef void (*func_arc_graphics_g2d_NinePatch_setMiddleHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getTotalWidth_R_float 31
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getTotalWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_getTotalHeight_R_float 32
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getTotalHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float 33
typedef void (*func_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_NinePatch_getPadLeft_R_float 34
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getPadLeft_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setPadLeft_float 35
typedef void (*func_arc_graphics_g2d_NinePatch_setPadLeft_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getPadRight_R_float 36
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getPadRight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setPadRight_float 37
typedef void (*func_arc_graphics_g2d_NinePatch_setPadRight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getPadTop_R_float 38
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getPadTop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setPadTop_float 39
typedef void (*func_arc_graphics_g2d_NinePatch_setPadTop_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_getPadBottom_R_float 40
typedef jfloat (*func_arc_graphics_g2d_NinePatch_getPadBottom_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_NinePatch_setPadBottom_float 41
typedef void (*func_arc_graphics_g2d_NinePatch_setPadBottom_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_NinePatch_scale_float_float 42
typedef void (*func_arc_graphics_g2d_NinePatch_scale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture 43
typedef jobject (*func_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_NinePatch(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_NinePatch(jcontext ctx);
void init_arc_graphics_g2d_NinePatch_arc_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void init_arc_graphics_g2d_NinePatch_arc_graphics_Texture_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_graphics_g2d_NinePatch_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_NinePatch_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jbool param3);
void M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void M_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g2d_NinePatch_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jobject M_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_graphics_g2d_NinePatch_getLeftWidth_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setLeftWidth_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getRightWidth_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setRightWidth_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getTopHeight_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setTopHeight_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getBottomHeight_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setBottomHeight_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setMiddleWidth_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setMiddleHeight_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getTotalWidth_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_NinePatch_getTotalHeight_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat M_arc_graphics_g2d_NinePatch_getPadLeft_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setPadLeft_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getPadRight_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setPadRight_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getPadTop_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setPadTop_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_NinePatch_getPadBottom_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_NinePatch_setPadBottom_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_NinePatch_scale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
