#ifndef HEADER_mindustry_graphics_g3d_NoiseMesh$2
#define HEADER_mindustry_graphics_g3d_NoiseMesh$2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/HexMesher.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_NoiseMesh$2 {
	java_lang_Object parent;
	jint F_val$seed;
	jint F_val$octaves;
	jfloat F_val$persistence;
	jfloat F_val$scale;
	jfloat F_val$mag;
	jint F_val$coct;
	jfloat F_val$cper;
	jfloat F_val$cscl;
	jfloat F_val$cthresh;
	jref F_val$color2;
	jref F_val$color1;
	jref F_this$0;
} mindustry_graphics_g3d_NoiseMesh$2;

extern Class class_mindustry_graphics_g3d_NoiseMesh$2;


#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_NoiseMesh$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_NoiseMesh$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_NoiseMesh$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_NoiseMesh$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_NoiseMesh$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_finalize 5
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_notify 6
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_wait 8
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_wait_long 9
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float 11
typedef jfloat (*func_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color 12
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color 13
typedef void (*func_mindustry_graphics_g3d_NoiseMesh$2_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_isEmissive_R_boolean 14
typedef jbool (*func_mindustry_graphics_g3d_NoiseMesh$2_isEmissive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh$2_skip_arc_math_geom_Vec3_R_boolean 15
typedef jbool (*func_mindustry_graphics_g3d_NoiseMesh$2_skip_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_g3d_NoiseMesh$2(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_NoiseMesh$2(jcontext ctx);
void init_mindustry_graphics_g3d_NoiseMesh$2_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jint param6, jfloat param7, jfloat param8, jfloat param9, jobject param10, jobject param11);
jfloat M_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
