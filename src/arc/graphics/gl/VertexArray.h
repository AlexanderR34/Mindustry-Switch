#ifndef HEADER_arc_graphics_gl_VertexArray
#define HEADER_arc_graphics_gl_VertexArray

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/VertexData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_VertexArray {
	java_lang_Object parent;
	jref F_mesh;
	jref F_buffer;
	jref F_byteBuffer;
	jbool F_isBound;
} arc_graphics_gl_VertexArray;

extern Class class_arc_graphics_gl_VertexArray;


#define VTABLE_arc_graphics_gl_VertexArray_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_VertexArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_VertexArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexArray_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_VertexArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_VertexArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_VertexArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_finalize 5
typedef void (*func_arc_graphics_gl_VertexArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_notify 6
typedef void (*func_arc_graphics_gl_VertexArray_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_notifyAll 7
typedef void (*func_arc_graphics_gl_VertexArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_wait 8
typedef void (*func_arc_graphics_gl_VertexArray_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_wait_long 9
typedef void (*func_arc_graphics_gl_VertexArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_VertexArray_wait_long_int 10
typedef void (*func_arc_graphics_gl_VertexArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_VertexArray_dispose 11
typedef void (*func_arc_graphics_gl_VertexArray_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_VertexArray_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int 13
typedef void (*func_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_VertexArray_size_R_int 14
typedef jint (*func_arc_graphics_gl_VertexArray_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_max_R_int 15
typedef jint (*func_arc_graphics_gl_VertexArray_max_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_set_Array1_float_int_int 16
typedef void (*func_arc_graphics_gl_VertexArray_set_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int 17
typedef void (*func_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer 18
typedef jobject (*func_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader 19
typedef void (*func_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader 20
typedef void (*func_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_gl_VertexArray(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_VertexArray(jcontext ctx);
void init_arc_graphics_gl_VertexArray_int_arc_graphics_Mesh(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_VertexArray_render_arc_graphics_gl_IndexData_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_arc_graphics_gl_VertexArray_dispose(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_VertexArray_buffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jint M_arc_graphics_gl_VertexArray_size_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_VertexArray_max_R_int(jcontext ctx, jobject self);
void M_arc_graphics_gl_VertexArray_set_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_gl_VertexArray_update_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_VertexArray_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_VertexArray_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
