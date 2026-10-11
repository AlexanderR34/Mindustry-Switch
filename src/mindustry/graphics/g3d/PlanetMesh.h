#ifndef HEADER_mindustry_graphics_g3d_PlanetMesh
#define HEADER_mindustry_graphics_g3d_PlanetMesh

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/GenericMesh.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_PlanetMesh {
	java_lang_Object parent;
	jref F_mesh;
	jref F_planet;
	jref F_shader;
} mindustry_graphics_g3d_PlanetMesh;

extern Class class_mindustry_graphics_g3d_PlanetMesh;


#define VTABLE_mindustry_graphics_g3d_PlanetMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_PlanetMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_PlanetMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_PlanetMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_PlanetMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_PlanetMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_finalize 5
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_notify 6
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_wait 8
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_wait_long 9
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_dispose 11
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_g3d_PlanetMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 13
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams 14
typedef void (*func_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_g3d_PlanetMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_PlanetMesh(jcontext ctx);
void init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_graphics_g3d_PlanetMesh(jcontext ctx, jobject self);
void M_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_graphics_g3d_PlanetMesh_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
