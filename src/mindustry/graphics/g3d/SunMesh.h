#ifndef HEADER_mindustry_graphics_g3d_SunMesh
#define HEADER_mindustry_graphics_g3d_SunMesh

#include "Clearwing.h"
#include "mindustry/graphics/g3d/HexMesh.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_SunMesh {
	mindustry_graphics_g3d_HexMesh parent;
} mindustry_graphics_g3d_SunMesh;

extern Class class_mindustry_graphics_g3d_SunMesh;


#define VTABLE_mindustry_graphics_g3d_SunMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_SunMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_SunMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_SunMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_SunMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_SunMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_SunMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_finalize 5
typedef void (*func_mindustry_graphics_g3d_SunMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_notify 6
typedef void (*func_mindustry_graphics_g3d_SunMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_SunMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_wait 8
typedef void (*func_mindustry_graphics_g3d_SunMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_wait_long 9
typedef void (*func_mindustry_graphics_g3d_SunMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_SunMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_SunMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_SunMesh_dispose 11
typedef void (*func_mindustry_graphics_g3d_SunMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_g3d_SunMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_SunMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 13
typedef void (*func_mindustry_graphics_g3d_SunMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_graphics_g3d_SunMesh_preRender_mindustry_graphics_g3d_PlanetParams 14
typedef void (*func_mindustry_graphics_g3d_SunMesh_preRender_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_g3d_SunMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_SunMesh(jcontext ctx);
void init_mindustry_graphics_g3d_SunMesh_mindustry_type_Planet_int_double_double_double_double_double_float_Array1_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6, jfloat param7, jobject param8);

#ifdef __cplusplus
}
#endif

#endif
