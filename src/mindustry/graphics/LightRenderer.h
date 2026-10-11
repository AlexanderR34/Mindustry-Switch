#ifndef HEADER_mindustry_graphics_LightRenderer
#define HEADER_mindustry_graphics_LightRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_LightRenderer {
	java_lang_Object parent;
	jref F_vertices;
	jref F_buffer;
	jref F_lights;
	jref F_circles;
	jint F_circleIndex;
	jref F_circleRegion;
} mindustry_graphics_LightRenderer;

extern Class class_mindustry_graphics_LightRenderer;

extern jint SF_mindustry_graphics_LightRenderer_scaling;

#define VTABLE_mindustry_graphics_LightRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_LightRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_LightRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_LightRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_LightRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_LightRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_LightRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_finalize 5
typedef void (*func_mindustry_graphics_LightRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_notify 6
typedef void (*func_mindustry_graphics_LightRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_LightRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_wait 8
typedef void (*func_mindustry_graphics_LightRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_wait_long 9
typedef void (*func_mindustry_graphics_LightRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_LightRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_LightRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_LightRenderer_add_java_lang_Runnable 11
typedef void (*func_mindustry_graphics_LightRenderer_add_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float 12
typedef void (*func_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jfloat param4);
#define VTABLE_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float 13
typedef void (*func_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4);
#define VTABLE_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float 14
typedef void (*func_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jfloat param3, jobject param4, jfloat param5);
#define VTABLE_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float 15
typedef void (*func_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6);
#define VTABLE_mindustry_graphics_LightRenderer_enabled_R_boolean 16
typedef jbool (*func_mindustry_graphics_LightRenderer_enabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_draw 17
typedef void (*func_mindustry_graphics_LightRenderer_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float 18
typedef void (*func_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);

void mark_mindustry_graphics_LightRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_LightRenderer(jcontext ctx);
void init_mindustry_graphics_LightRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_LightRenderer_add_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jfloat param4);
void M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4);
void M_mindustry_graphics_LightRenderer_add_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jfloat param3, jobject param4, jfloat param5);
void M_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6);
jbool M_mindustry_graphics_LightRenderer_enabled_R_boolean(jcontext ctx, jobject self);
void M_mindustry_graphics_LightRenderer_draw(jcontext ctx, jobject self);
void M_mindustry_graphics_LightRenderer_lambda$line$0_arc_graphics_Color_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_LightRenderer_lambda$add$0_float_float_float_float_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jfloat param6, jfloat param7);

#ifdef __cplusplus
}
#endif

#endif
