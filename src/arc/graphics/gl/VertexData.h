#ifndef HEADER_arc_graphics_gl_VertexData
#define HEADER_arc_graphics_gl_VertexData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_VertexData {
	java_lang_Object parent;
} arc_graphics_gl_VertexData;

extern Class class_arc_graphics_gl_VertexData;


#define INDEX_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int 0
typedef void (*func_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define INDEX_arc_graphics_gl_VertexData_size_R_int 1
typedef jint (*func_arc_graphics_gl_VertexData_size_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_VertexData_max_R_int 2
typedef jint (*func_arc_graphics_gl_VertexData_max_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_VertexData_set_Array1_float_int_int 3
typedef void (*func_arc_graphics_gl_VertexData_set_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_arc_graphics_gl_VertexData_update_int_Array1_float_int_int 4
typedef void (*func_arc_graphics_gl_VertexData_update_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define INDEX_arc_graphics_gl_VertexData_buffer_R_java_nio_FloatBuffer 5
typedef jobject (*func_arc_graphics_gl_VertexData_buffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_VertexData_bind_arc_graphics_gl_Shader 6
typedef void (*func_arc_graphics_gl_VertexData_bind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_graphics_gl_VertexData_unbind_arc_graphics_gl_Shader 7
typedef void (*func_arc_graphics_gl_VertexData_unbind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_gl_VertexData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_VertexData(jcontext ctx);
void M_arc_graphics_gl_VertexData_render_arc_graphics_gl_IndexData_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
