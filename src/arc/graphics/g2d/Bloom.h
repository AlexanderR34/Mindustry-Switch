#ifndef HEADER_arc_graphics_g2d_Bloom
#define HEADER_arc_graphics_g2d_Bloom

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Bloom {
	java_lang_Object parent;
	jint F_blurPasses;
	jbool F_blending;
	jref F_thresholdShader;
	jref F_bloomShader;
	jref F_blurShader;
	jref F_buffer;
	jref F_pingPong1;
	jref F_pingPong2;
	jfloat F_bloomIntensity;
	jfloat F_originalIntensity;
	jfloat F_threshold;
	jbool F_capturing;
	jfloat F_r;
	jfloat F_g;
	jfloat F_b;
	jfloat F_a;
} arc_graphics_g2d_Bloom;

extern Class class_arc_graphics_g2d_Bloom;


#define VTABLE_arc_graphics_g2d_Bloom_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Bloom_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Bloom_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Bloom_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Bloom_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Bloom_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Bloom_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_finalize 5
typedef void (*func_arc_graphics_g2d_Bloom_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_notify 6
typedef void (*func_arc_graphics_g2d_Bloom_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_notifyAll 7
typedef void (*func_arc_graphics_g2d_Bloom_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_wait 8
typedef void (*func_arc_graphics_g2d_Bloom_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_wait_long 9
typedef void (*func_arc_graphics_g2d_Bloom_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Bloom_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Bloom_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_Bloom_resume 11
typedef void (*func_arc_graphics_g2d_Bloom_resume)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_resize_int_int 12
typedef void (*func_arc_graphics_g2d_Bloom_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_Bloom_resize_int_int_int 13
typedef void (*func_arc_graphics_g2d_Bloom_resize_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean 14
typedef void (*func_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3);
#define VTABLE_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float 15
typedef void (*func_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_Bloom_capture 16
typedef void (*func_arc_graphics_g2d_Bloom_capture)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_capturePause 17
typedef void (*func_arc_graphics_g2d_Bloom_capturePause)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_captureContinue 18
typedef void (*func_arc_graphics_g2d_Bloom_captureContinue)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_render 19
typedef void (*func_arc_graphics_g2d_Bloom_render)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_setBloomIntensity_float 20
typedef void (*func_arc_graphics_g2d_Bloom_setBloomIntensity_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Bloom_setOriginalIntensity_float 21
typedef void (*func_arc_graphics_g2d_Bloom_setOriginalIntensity_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Bloom_setThreshold_float 22
typedef void (*func_arc_graphics_g2d_Bloom_setThreshold_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Bloom_setSize_int_int 23
typedef void (*func_arc_graphics_g2d_Bloom_setSize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer 24
typedef jobject (*func_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Bloom_dispose 25
typedef void (*func_arc_graphics_g2d_Bloom_dispose)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_Bloom(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Bloom(jcontext ctx);
void M_arc_graphics_g2d_Bloom_resume(jcontext ctx, jobject self);
void init_arc_graphics_g2d_Bloom(jcontext ctx, jobject self);
void init_arc_graphics_g2d_Bloom_boolean(jcontext ctx, jobject self, jbool param0);
void init_arc_graphics_g2d_Bloom_int_int_boolean_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3);
void M_arc_graphics_g2d_Bloom_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_graphics_g2d_Bloom_resize_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_graphics_g2d_Bloom_init_int_int_boolean_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3);
void M_arc_graphics_g2d_Bloom_setClearColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g2d_Bloom_capture(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Bloom_capturePause(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Bloom_captureContinue(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Bloom_render(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Bloom_setBloomIntensity_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_Bloom_setOriginalIntensity_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_Bloom_setThreshold_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_Bloom_setSize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_graphics_g2d_Bloom_buffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Bloom_dispose(jcontext ctx, jobject self);
jobject SM_arc_graphics_g2d_Bloom_createShader_java_lang_String_java_lang_String_R_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
