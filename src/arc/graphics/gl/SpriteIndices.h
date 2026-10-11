#ifndef HEADER_arc_graphics_gl_SpriteIndices
#define HEADER_arc_graphics_gl_SpriteIndices

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_SpriteIndices {
	java_lang_Object parent;
} arc_graphics_gl_SpriteIndices;

extern Class class_arc_graphics_gl_SpriteIndices;

extern jint SF_arc_graphics_gl_SpriteIndices_maxIndices;
extern jobject SF_arc_graphics_gl_SpriteIndices_indexData;

#define VTABLE_arc_graphics_gl_SpriteIndices_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_SpriteIndices_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_SpriteIndices_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_SpriteIndices_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_SpriteIndices_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_SpriteIndices_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_SpriteIndices_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_finalize 5
typedef void (*func_arc_graphics_gl_SpriteIndices_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_notify 6
typedef void (*func_arc_graphics_gl_SpriteIndices_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_notifyAll 7
typedef void (*func_arc_graphics_gl_SpriteIndices_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_wait 8
typedef void (*func_arc_graphics_gl_SpriteIndices_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_SpriteIndices_wait_long 9
typedef void (*func_arc_graphics_gl_SpriteIndices_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_SpriteIndices_wait_long_int 10
typedef void (*func_arc_graphics_gl_SpriteIndices_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_gl_SpriteIndices(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_SpriteIndices(jcontext ctx);
void init_arc_graphics_gl_SpriteIndices(jcontext ctx, jobject self);
jobject SM_arc_graphics_gl_SpriteIndices_get_R_arc_graphics_gl_IndexData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
