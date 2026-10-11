#ifndef HEADER_mindustry_graphics_LightRenderer$CircleLight
#define HEADER_mindustry_graphics_LightRenderer$CircleLight

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_LightRenderer$CircleLight {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_color;
	jfloat F_radius;
} mindustry_graphics_LightRenderer$CircleLight;

extern Class class_mindustry_graphics_LightRenderer$CircleLight;


#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_LightRenderer$CircleLight_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_LightRenderer$CircleLight_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_LightRenderer$CircleLight_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_LightRenderer$CircleLight_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_LightRenderer$CircleLight_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_finalize 5
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_notify 6
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_notifyAll 7
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_wait 8
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_wait_long 9
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_wait_long_int 10
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float 11
typedef void (*func_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_mindustry_graphics_LightRenderer$CircleLight(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_LightRenderer$CircleLight(jcontext ctx);
void init_mindustry_graphics_LightRenderer$CircleLight(jcontext ctx, jobject self);
void M_mindustry_graphics_LightRenderer$CircleLight_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
