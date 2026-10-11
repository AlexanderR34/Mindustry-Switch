#ifndef HEADER_mindustry_graphics_g3d_NoiseMesh
#define HEADER_mindustry_graphics_g3d_NoiseMesh

#include "Clearwing.h"
#include "mindustry/graphics/g3d/HexMesh.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_NoiseMesh {
	mindustry_graphics_g3d_HexMesh parent;
} mindustry_graphics_g3d_NoiseMesh;

extern Class class_mindustry_graphics_g3d_NoiseMesh;


#define VTABLE_mindustry_graphics_g3d_NoiseMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_NoiseMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_NoiseMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_NoiseMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_NoiseMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_NoiseMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_finalize 5
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_notify 6
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_wait 8
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_wait_long 9
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_dispose 11
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_g3d_NoiseMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 13
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_graphics_g3d_NoiseMesh_preRender_mindustry_graphics_g3d_PlanetParams 14
typedef void (*func_mindustry_graphics_g3d_NoiseMesh_preRender_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_g3d_NoiseMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_NoiseMesh(jcontext ctx);
void init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_arc_graphics_Color_float_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jfloat param4, jint param5, jfloat param6, jfloat param7, jfloat param8);
void init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jfloat param3, jint param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jint param10, jfloat param11, jfloat param12, jfloat param13);

#ifdef __cplusplus
}
#endif

#endif
