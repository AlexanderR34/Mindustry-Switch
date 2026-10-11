#ifndef HEADER_arc_graphics_gl_IndexBufferObject
#define HEADER_arc_graphics_gl_IndexBufferObject

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/IndexData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_IndexBufferObject {
	java_lang_Object parent;
	jref F_buffer;
	jref F_byteBuffer;
	jbool F_isDirect;
	jint F_usage;
	jbool F_empty;
	jint F_bufferHandle;
	jbool F_dirty;
	jbool F_bound;
	jbool F_created;
} arc_graphics_gl_IndexBufferObject;

extern Class class_arc_graphics_gl_IndexBufferObject;


#define VTABLE_arc_graphics_gl_IndexBufferObject_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_IndexBufferObject_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_IndexBufferObject_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_IndexBufferObject_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_IndexBufferObject_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_IndexBufferObject_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_IndexBufferObject_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_finalize 5
typedef void (*func_arc_graphics_gl_IndexBufferObject_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_notify 6
typedef void (*func_arc_graphics_gl_IndexBufferObject_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_notifyAll 7
typedef void (*func_arc_graphics_gl_IndexBufferObject_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_wait 8
typedef void (*func_arc_graphics_gl_IndexBufferObject_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_wait_long 9
typedef void (*func_arc_graphics_gl_IndexBufferObject_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_IndexBufferObject_wait_long_int 10
typedef void (*func_arc_graphics_gl_IndexBufferObject_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_IndexBufferObject_dispose 11
typedef void (*func_arc_graphics_gl_IndexBufferObject_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_IndexBufferObject_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_size_R_int 13
typedef jint (*func_arc_graphics_gl_IndexBufferObject_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_max_R_int 14
typedef jint (*func_arc_graphics_gl_IndexBufferObject_max_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int 15
typedef void (*func_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer 16
typedef void (*func_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int 17
typedef void (*func_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer 18
typedef jobject (*func_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_bind 19
typedef void (*func_arc_graphics_gl_IndexBufferObject_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexBufferObject_unbind 20
typedef void (*func_arc_graphics_gl_IndexBufferObject_unbind)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_IndexBufferObject(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_IndexBufferObject(jcontext ctx);
void init_arc_graphics_gl_IndexBufferObject_int(jcontext ctx, jobject self, jint param0);
void init_arc_graphics_gl_IndexBufferObject_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
jint M_arc_graphics_gl_IndexBufferObject_size_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_IndexBufferObject_max_R_int(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexBufferObject_set_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_gl_IndexBufferObject_set_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_IndexBufferObject_update_int_Array1_short_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jobject M_arc_graphics_gl_IndexBufferObject_buffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexBufferObject_bind(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexBufferObject_unbind(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexBufferObject_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
