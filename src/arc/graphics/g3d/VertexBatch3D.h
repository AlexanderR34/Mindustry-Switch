#ifndef HEADER_arc_graphics_g3d_VertexBatch3D
#define HEADER_arc_graphics_g3d_VertexBatch3D

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g3d_VertexBatch3D {
	java_lang_Object parent;
	jint F_maxVertices;
	jref F_mesh;
	jint F_numTexCoords;
	jint F_vertexSize;
	jint F_normalOffset;
	jint F_colorOffset;
	jint F_texCoordOffset;
	jref F_proj;
	jref F_vertices;
	jref F_shaderUniformNames;
	jint F_vertexIdx;
	jint F_numSetTexCoords;
	jint F_numVertices;
	jref F_shader;
	jbool F_ownsShader;
} arc_graphics_g3d_VertexBatch3D;

extern Class class_arc_graphics_g3d_VertexBatch3D;


#define VTABLE_arc_graphics_g3d_VertexBatch3D_hashCode_R_int 0
typedef jint (*func_arc_graphics_g3d_VertexBatch3D_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g3d_VertexBatch3D_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g3d_VertexBatch3D_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g3d_VertexBatch3D_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g3d_VertexBatch3D_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_finalize 5
typedef void (*func_arc_graphics_g3d_VertexBatch3D_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_notify 6
typedef void (*func_arc_graphics_g3d_VertexBatch3D_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_notifyAll 7
typedef void (*func_arc_graphics_g3d_VertexBatch3D_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_wait 8
typedef void (*func_arc_graphics_g3d_VertexBatch3D_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_wait_long 9
typedef void (*func_arc_graphics_g3d_VertexBatch3D_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_wait_long_int 10
typedef void (*func_arc_graphics_g3d_VertexBatch3D_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute 11
typedef jobject (*func_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute)(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader 12
typedef void (*func_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color 13
typedef void (*func_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float 14
typedef void (*func_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_color_float 15
typedef void (*func_arc_graphics_g3d_VertexBatch3D_color_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_texCoord_float_float 16
typedef void (*func_arc_graphics_g3d_VertexBatch3D_texCoord_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3 17
typedef void (*func_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_normal_float_float_float 18
typedef void (*func_arc_graphics_g3d_VertexBatch3D_normal_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color 19
typedef void (*func_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color 20
typedef void (*func_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color 21
typedef void (*func_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color 22
typedef void (*func_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color 23
typedef void (*func_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3 24
typedef void (*func_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float 25
typedef void (*func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float 26
typedef void (*func_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float 27
typedef void (*func_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D 28
typedef jobject (*func_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D 29
typedef void (*func_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int 30
typedef void (*func_arc_graphics_g3d_VertexBatch3D_flush_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader 31
typedef void (*func_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int 32
typedef jint (*func_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int 33
typedef jint (*func_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_VertexBatch3D_dispose 34
typedef void (*func_arc_graphics_g3d_VertexBatch3D_dispose)(jcontext ctx, jobject self);

void mark_arc_graphics_g3d_VertexBatch3D(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g3d_VertexBatch3D(jcontext ctx);
void init_arc_graphics_g3d_VertexBatch3D_boolean_boolean_int(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2);
void init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jint param3);
void init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2, jint param3, jobject param4);
jobject SM_arc_graphics_g3d_VertexBatch3D_createVertexShader_boolean_boolean_int_R_java_lang_String(jcontext ctx, jbool param0, jbool param1, jint param2);
jobject SM_arc_graphics_g3d_VertexBatch3D_createFragmentShader_boolean_boolean_int_R_java_lang_String(jcontext ctx, jbool param0, jbool param1, jint param2);
jobject SM_arc_graphics_g3d_VertexBatch3D_createDefaultShader_boolean_boolean_int_R_arc_graphics_gl_Shader(jcontext ctx, jbool param0, jbool param1, jint param2);
jobject M_arc_graphics_g3d_VertexBatch3D_buildVertexAttributes_boolean_boolean_int_R_Array1_arc_graphics_VertexAttribute(jcontext ctx, jobject self, jbool param0, jbool param1, jint param2);
void M_arc_graphics_g3d_VertexBatch3D_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_VertexBatch3D_color_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g3d_VertexBatch3D_color_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g3d_VertexBatch3D_texCoord_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_graphics_g3d_VertexBatch3D_normal_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_VertexBatch3D_normal_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_graphics_g3d_VertexBatch3D_tri_float_float_float_float_float_float_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9);
void M_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
void M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g3d_VertexBatch3D_vertex_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D(jcontext ctx, jobject self);
void M_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_VertexBatch3D_flush_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_g3d_VertexBatch3D_flush_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_arc_graphics_g3d_VertexBatch3D_getNumVertices_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int(jcontext ctx, jobject self);
void M_arc_graphics_g3d_VertexBatch3D_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
