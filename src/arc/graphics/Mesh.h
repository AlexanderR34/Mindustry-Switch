#ifndef HEADER_arc_graphics_Mesh
#define HEADER_arc_graphics_Mesh

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Mesh {
	java_lang_Object parent;
	jint F_vertexSize;
	jref F_attributes;
	jref F_vertices;
	jref F_indices;
	jbool F_autoBind;
} arc_graphics_Mesh;

extern Class class_arc_graphics_Mesh;


#define VTABLE_arc_graphics_Mesh_hashCode_R_int 0
typedef jint (*func_arc_graphics_Mesh_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Mesh_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Mesh_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Mesh_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Mesh_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Mesh_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_finalize 5
typedef void (*func_arc_graphics_Mesh_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_notify 6
typedef void (*func_arc_graphics_Mesh_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_notifyAll 7
typedef void (*func_arc_graphics_Mesh_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_wait 8
typedef void (*func_arc_graphics_Mesh_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_wait_long 9
typedef void (*func_arc_graphics_Mesh_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Mesh_wait_long_int 10
typedef void (*func_arc_graphics_Mesh_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Mesh_dispose 11
typedef void (*func_arc_graphics_Mesh_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_Mesh_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh 13
typedef jobject (*func_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh 14
typedef jobject (*func_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh 15
typedef jobject (*func_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh 16
typedef jobject (*func_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh 17
typedef jobject (*func_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh 18
typedef jobject (*func_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_Mesh_getIndices_Array1_short 19
typedef void (*func_arc_graphics_Mesh_getIndices_Array1_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Mesh_getIndices_Array1_short_int 20
typedef void (*func_arc_graphics_Mesh_getIndices_Array1_short_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_graphics_Mesh_getIndices_int_Array1_short_int 21
typedef void (*func_arc_graphics_Mesh_getIndices_int_Array1_short_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_arc_graphics_Mesh_getIndices_int_int_Array1_short_int 22
typedef void (*func_arc_graphics_Mesh_getIndices_int_int_Array1_short_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_arc_graphics_Mesh_getNumIndices_R_int 23
typedef jint (*func_arc_graphics_Mesh_getNumIndices_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_getNumVertices_R_int 24
typedef jint (*func_arc_graphics_Mesh_getNumVertices_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_getMaxVertices_R_int 25
typedef jint (*func_arc_graphics_Mesh_getMaxVertices_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_getMaxIndices_R_int 26
typedef jint (*func_arc_graphics_Mesh_getMaxIndices_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_getVertexSize_R_int 27
typedef jint (*func_arc_graphics_Mesh_getVertexSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_setAutoBind_boolean 28
typedef void (*func_arc_graphics_Mesh_setAutoBind_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_Mesh_bind_arc_graphics_gl_Shader 29
typedef void (*func_arc_graphics_Mesh_bind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader 30
typedef void (*func_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int 31
typedef void (*func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int 32
typedef void (*func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean 33
typedef void (*func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer 34
typedef jobject (*func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer 35
typedef jobject (*func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);

void mark_arc_graphics_Mesh(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Mesh(jcontext ctx);
void init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jint param1, jint param2, jobject param3);
void init_arc_graphics_Mesh_boolean_boolean_int_int_Array1_arc_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2, jint param3, jobject param4);
jobject M_arc_graphics_Mesh_setVertices_Array1_float_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_graphics_Mesh_updateVertices_int_Array1_float_R_arc_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_graphics_Mesh_updateVertices_int_Array1_float_int_int_R_arc_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jobject M_arc_graphics_Mesh_setIndices_Array1_short_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Mesh_setIndices_Array1_short_int_int_R_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_Mesh_getIndices_Array1_short(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Mesh_getIndices_Array1_short_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_graphics_Mesh_getIndices_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
void M_arc_graphics_Mesh_getIndices_int_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
jint M_arc_graphics_Mesh_getNumIndices_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Mesh_getNumVertices_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Mesh_getMaxVertices_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Mesh_getMaxIndices_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Mesh_getVertexSize_R_int(jcontext ctx, jobject self);
void M_arc_graphics_Mesh_setAutoBind_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_graphics_Mesh_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Mesh_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
void M_arc_graphics_Mesh_dispose(jcontext ctx, jobject self);
jobject M_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
