#ifndef HEADER_mindustry_graphics_g3d_HexSkyMesh
#define HEADER_mindustry_graphics_g3d_HexSkyMesh

#include "Clearwing.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_HexSkyMesh {
	mindustry_graphics_g3d_PlanetMesh parent;
	jfloat F_speed;
} mindustry_graphics_g3d_HexSkyMesh;

extern Class class_mindustry_graphics_g3d_HexSkyMesh;

extern jobject SF_mindustry_graphics_g3d_HexSkyMesh_mat;

#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_HexSkyMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_HexSkyMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_HexSkyMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_HexSkyMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_HexSkyMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_finalize 5
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_notify 6
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_wait 8
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_wait_long 9
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_dispose 11
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_g3d_HexSkyMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 13
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams 14
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float 15
typedef jfloat (*func_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float)(jcontext ctx, jobject self);

void mark_mindustry_graphics_g3d_HexSkyMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_HexSkyMesh(jcontext ctx);
void init_mindustry_graphics_g3d_HexSkyMesh_mindustry_type_Planet_int_float_float_int_arc_graphics_Color_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jint param4, jobject param5, jint param6, jfloat param7, jfloat param8, jfloat param9);
void init_mindustry_graphics_g3d_HexSkyMesh(jcontext ctx, jobject self);
jfloat M_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float(jcontext ctx, jobject self);
void M_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
