#ifndef HEADER_mindustry_graphics_CubemapMesh
#define HEADER_mindustry_graphics_CubemapMesh

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_CubemapMesh {
	java_lang_Object parent;
	jref F_mesh;
	jref F_shader;
	jref F_map;
} mindustry_graphics_CubemapMesh;

extern Class class_mindustry_graphics_CubemapMesh;

extern jobject SF_mindustry_graphics_CubemapMesh_vertices;

#define VTABLE_mindustry_graphics_CubemapMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_CubemapMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_CubemapMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_CubemapMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_CubemapMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_CubemapMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_CubemapMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_finalize 5
typedef void (*func_mindustry_graphics_CubemapMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_notify 6
typedef void (*func_mindustry_graphics_CubemapMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_notifyAll 7
typedef void (*func_mindustry_graphics_CubemapMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_wait 8
typedef void (*func_mindustry_graphics_CubemapMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_wait_long 9
typedef void (*func_mindustry_graphics_CubemapMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_CubemapMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_CubemapMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_CubemapMesh_dispose 11
typedef void (*func_mindustry_graphics_CubemapMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_CubemapMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap 13
typedef void (*func_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D 14
typedef void (*func_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_CubemapMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_CubemapMesh(jcontext ctx);
void init_mindustry_graphics_CubemapMesh_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_CubemapMesh_setCubemap_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_CubemapMesh_render_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_CubemapMesh_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
