#ifndef HEADER_mindustry_graphics_g3d_PlanetRenderer$1
#define HEADER_mindustry_graphics_g3d_PlanetRenderer$1

#include "Clearwing.h"
#include "arc/graphics/g2d/Bloom.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_PlanetRenderer$1 {
	arc_graphics_g2d_Bloom parent;
	jref F_this$0;
} mindustry_graphics_g3d_PlanetRenderer$1;

extern Class class_mindustry_graphics_g3d_PlanetRenderer$1;


#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_PlanetRenderer$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_PlanetRenderer$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_PlanetRenderer$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_PlanetRenderer$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_PlanetRenderer$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_finalize 5
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_notify 6
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_wait 8
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_wait_long 9
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_resume 11
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_resize_int_int 12
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_resize_int_int_int 13
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_resize_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_init_int_int_boolean_boolean 14
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_init_int_int_boolean_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_setClearColor_float_float_float_float 15
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_setClearColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_capture 16
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_capture)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_capturePause 17
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_capturePause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_captureContinue 18
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_captureContinue)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_render 19
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_render)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_setBloomIntensity_float 20
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_setBloomIntensity_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_setOriginalIntensity_float 21
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_setOriginalIntensity_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_setThreshold_float 22
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_setThreshold_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_setSize_int_int 23
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_setSize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_buffer_R_arc_graphics_gl_FrameBuffer 24
typedef jobject (*func_mindustry_graphics_g3d_PlanetRenderer$1_buffer_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetRenderer$1_dispose 25
typedef void (*func_mindustry_graphics_g3d_PlanetRenderer$1_dispose)(jcontext ctx, jobject self);

void mark_mindustry_graphics_g3d_PlanetRenderer$1(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_PlanetRenderer$1(jcontext ctx);
void init_mindustry_graphics_g3d_PlanetRenderer$1_mindustry_graphics_g3d_PlanetRenderer_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);

#ifdef __cplusplus
}
#endif

#endif
