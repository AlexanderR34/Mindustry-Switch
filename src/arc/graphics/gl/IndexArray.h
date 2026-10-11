#ifndef HEADER_arc_graphics_gl_IndexArray
#define HEADER_arc_graphics_gl_IndexArray

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/IndexData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_IndexArray {
	java_lang_Object parent;
	jref F_buffer;
	jref F_byteBuffer;
	jbool F_empty;
} arc_graphics_gl_IndexArray;

extern Class class_arc_graphics_gl_IndexArray;


#define VTABLE_arc_graphics_gl_IndexArray_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_IndexArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_IndexArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_IndexArray_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_IndexArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_IndexArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_IndexArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_finalize 5
typedef void (*func_arc_graphics_gl_IndexArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_notify 6
typedef void (*func_arc_graphics_gl_IndexArray_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_notifyAll 7
typedef void (*func_arc_graphics_gl_IndexArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_wait 8
typedef void (*func_arc_graphics_gl_IndexArray_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_wait_long 9
typedef void (*func_arc_graphics_gl_IndexArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_IndexArray_wait_long_int 10
typedef void (*func_arc_graphics_gl_IndexArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_IndexArray_dispose 11
typedef void (*func_arc_graphics_gl_IndexArray_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_IndexArray_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_size_R_int 13
typedef jint (*func_arc_graphics_gl_IndexArray_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_max_R_int 14
typedef jint (*func_arc_graphics_gl_IndexArray_max_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_set_Array1_short_int_int 15
typedef void (*func_arc_graphics_gl_IndexArray_set_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer 16
typedef void (*func_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int 17
typedef void (*func_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer 18
typedef jobject (*func_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_bind 19
typedef void (*func_arc_graphics_gl_IndexArray_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_IndexArray_unbind 20
typedef void (*func_arc_graphics_gl_IndexArray_unbind)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_IndexArray(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_IndexArray(jcontext ctx);
void init_arc_graphics_gl_IndexArray_int(jcontext ctx, jobject self, jint param0);
jint M_arc_graphics_gl_IndexArray_size_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_IndexArray_max_R_int(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexArray_set_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_gl_IndexArray_set_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_IndexArray_update_int_Array1_short_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jobject M_arc_graphics_gl_IndexArray_buffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexArray_bind(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexArray_unbind(jcontext ctx, jobject self);
void M_arc_graphics_gl_IndexArray_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
