#ifndef HEADER_mindustry_graphics_g3d_MultiMesh
#define HEADER_mindustry_graphics_g3d_MultiMesh

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/GenericMesh.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_MultiMesh {
	java_lang_Object parent;
	jref F_meshes;
} mindustry_graphics_g3d_MultiMesh;

extern Class class_mindustry_graphics_g3d_MultiMesh;


#define VTABLE_mindustry_graphics_g3d_MultiMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_MultiMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_MultiMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_MultiMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_MultiMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_MultiMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_finalize 5
typedef void (*func_mindustry_graphics_g3d_MultiMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_notify 6
typedef void (*func_mindustry_graphics_g3d_MultiMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_MultiMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_wait 8
typedef void (*func_mindustry_graphics_g3d_MultiMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_wait_long 9
typedef void (*func_mindustry_graphics_g3d_MultiMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_MultiMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_dispose 11
typedef void (*func_mindustry_graphics_g3d_MultiMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_g3d_MultiMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 13
typedef void (*func_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_graphics_g3d_MultiMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_MultiMesh(jcontext ctx);
void init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_g3d_MultiMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_graphics_g3d_MultiMesh_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
