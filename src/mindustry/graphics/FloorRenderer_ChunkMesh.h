#ifndef HEADER_mindustry_graphics_FloorRenderer$ChunkMesh
#define HEADER_mindustry_graphics_FloorRenderer$ChunkMesh

#include "Clearwing.h"
#include "arc/graphics/Mesh.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_FloorRenderer$ChunkMesh {
	arc_graphics_Mesh parent;
	jref F_bounds;
} mindustry_graphics_FloorRenderer$ChunkMesh;

extern Class class_mindustry_graphics_FloorRenderer$ChunkMesh;


#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_FloorRenderer$ChunkMesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_FloorRenderer$ChunkMesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_finalize 5
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_notify 6
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_notifyAll 7
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_wait 8
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_wait_long 9
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_wait_long_int 10
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_dispose 11
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_FloorRenderer$ChunkMesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_setVertices_Array1_float_R_arc_graphics_Mesh 13
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_setVertices_Array1_float_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh 14
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh 15
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh 16
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_setIndices_Array1_short_R_arc_graphics_Mesh 17
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_setIndices_Array1_short_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh 18
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_Array1_short 19
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_Array1_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_Array1_short_int 20
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_Array1_short_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_int_Array1_short_int 21
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_int_Array1_short_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_int_int_Array1_short_int 22
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getIndices_int_int_Array1_short_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getNumIndices_R_int 23
typedef jint (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getNumIndices_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getNumVertices_R_int 24
typedef jint (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getNumVertices_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getMaxVertices_R_int 25
typedef jint (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getMaxVertices_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getMaxIndices_R_int 26
typedef jint (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getMaxIndices_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getVertexSize_R_int 27
typedef jint (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getVertexSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_setAutoBind_boolean 28
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_setAutoBind_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_bind_arc_graphics_gl_Shader 29
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_bind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_unbind_arc_graphics_gl_Shader 30
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_unbind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int 31
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int_int_int 32
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int_int_int_boolean 33
typedef void (*func_mindustry_graphics_FloorRenderer$ChunkMesh_render_arc_graphics_gl_Shader_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getVerticesBuffer_R_java_nio_FloatBuffer 34
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getVerticesBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FloorRenderer$ChunkMesh_getIndicesBuffer_R_java_nio_ShortBuffer 35
typedef jobject (*func_mindustry_graphics_FloorRenderer$ChunkMesh_getIndicesBuffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);

void mark_mindustry_graphics_FloorRenderer$ChunkMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_FloorRenderer$ChunkMesh(jcontext ctx);
void init_mindustry_graphics_FloorRenderer$ChunkMesh_boolean_int_int_Array1_arc_graphics_VertexAttribute_float_float_float_float(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jobject param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);

#ifdef __cplusplus
}
#endif

#endif
