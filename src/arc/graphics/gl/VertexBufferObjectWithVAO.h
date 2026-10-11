#ifndef HEADER_arc_graphics_gl_VertexBufferObjectWithVAO
#define HEADER_arc_graphics_gl_VertexBufferObjectWithVAO

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/VertexData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_VertexBufferObjectWithVAO {
	java_lang_Object parent;
	jref F_mesh;
	jref F_buffer;
	jref F_byteBuffer;
	jbool F_isStatic;
	jint F_usage;
	jint F_bufferHandle;
	jbool F_isDirty;
	jbool F_isBound;
	jint F_vaoHandle;
	jref F_cachedLocations;
	jbool F_created;
} arc_graphics_gl_VertexBufferObjectWithVAO;

extern Class class_arc_graphics_gl_VertexBufferObjectWithVAO;

extern jobject SF_arc_graphics_gl_VertexBufferObjectWithVAO_tmpHandle;

#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_VertexBufferObjectWithVAO_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_VertexBufferObjectWithVAO_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_VertexBufferObjectWithVAO_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_VertexBufferObjectWithVAO_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_VertexBufferObjectWithVAO_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_finalize 5
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_notify 6
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_notifyAll 7
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_wait 8
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_wait_long 9
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_wait_long_int 10
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_dispose 11
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_VertexBufferObjectWithVAO_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_render_arc_graphics_gl_IndexData_int_int_int 13
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_render_arc_graphics_gl_IndexData_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int 14
typedef jint (*func_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int 15
typedef jint (*func_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int 16
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int 17
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer 18
typedef jobject (*func_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader 19
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader 20
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_upload 21
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_upload)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged 22
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader 23
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader 24
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_bindData 25
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_bindData)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO 26
typedef void (*func_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_VertexBufferObjectWithVAO(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_VertexBufferObjectWithVAO(jcontext ctx);
void init_arc_graphics_gl_VertexBufferObjectWithVAO_boolean_int_arc_graphics_Mesh(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2);
jint M_arc_graphics_gl_VertexBufferObjectWithVAO_size_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_VertexBufferObjectWithVAO_max_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_VertexBufferObjectWithVAO_buffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_upload(jcontext ctx, jobject self);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_bufferChanged(jcontext ctx, jobject self);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_set_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_update_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_bind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_bindAttributes_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_unbindAttributes_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_bindData(jcontext ctx, jobject self);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_unbind_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_dispose(jcontext ctx, jobject self);
void M_arc_graphics_gl_VertexBufferObjectWithVAO_deleteVAO(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
