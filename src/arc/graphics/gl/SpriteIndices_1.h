#ifndef HEADER_arc_graphics_gl_SpriteIndices$1
#define HEADER_arc_graphics_gl_SpriteIndices$1

#include "Clearwing.h"
#include "arc/graphics/gl/IndexBufferObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_SpriteIndices$1 {
	arc_graphics_gl_IndexBufferObject parent;
} arc_graphics_gl_SpriteIndices$1;

extern Class class_arc_graphics_gl_SpriteIndices$1;


#define VTABLE_arc_graphics_gl_SpriteIndices$1_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_SpriteIndices$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_SpriteIndices$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_SpriteIndices$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_SpriteIndices$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_SpriteIndices$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_finalize 5
typedef void (*func_arc_graphics_gl_SpriteIndices$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_notify 6
typedef void (*func_arc_graphics_gl_SpriteIndices$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_notifyAll 7
typedef void (*func_arc_graphics_gl_SpriteIndices$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_wait 8
typedef void (*func_arc_graphics_gl_SpriteIndices$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_wait_long 9
typedef void (*func_arc_graphics_gl_SpriteIndices$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_wait_long_int 10
typedef void (*func_arc_graphics_gl_SpriteIndices$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_dispose 11
typedef void (*func_arc_graphics_gl_SpriteIndices$1_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_SpriteIndices$1_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_size_R_int 13
typedef jint (*func_arc_graphics_gl_SpriteIndices$1_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_max_R_int 14
typedef jint (*func_arc_graphics_gl_SpriteIndices$1_max_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_set_Array1_short_int_int 15
typedef void (*func_arc_graphics_gl_SpriteIndices$1_set_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_set_java_nio_ShortBuffer 16
typedef void (*func_arc_graphics_gl_SpriteIndices$1_set_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_update_int_Array1_short_int_int 17
typedef void (*func_arc_graphics_gl_SpriteIndices$1_update_int_Array1_short_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_buffer_R_java_nio_ShortBuffer 18
typedef jobject (*func_arc_graphics_gl_SpriteIndices$1_buffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_bind 19
typedef void (*func_arc_graphics_gl_SpriteIndices$1_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices$1_unbind 20
typedef void (*func_arc_graphics_gl_SpriteIndices$1_unbind)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_SpriteIndices$1(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_SpriteIndices$1(jcontext ctx);
void init_arc_graphics_gl_SpriteIndices$1_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void M_arc_graphics_gl_SpriteIndices$1_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
