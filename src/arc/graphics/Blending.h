#ifndef HEADER_arc_graphics_Blending
#define HEADER_arc_graphics_Blending

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Blending {
	java_lang_Object parent;
	jint F_src;
	jint F_dst;
	jint F_srcAlpha;
	jint F_dstAlpha;
} arc_graphics_Blending;

extern Class class_arc_graphics_Blending;

extern jobject SF_arc_graphics_Blending_normal;
extern jobject SF_arc_graphics_Blending_additive;
extern jobject SF_arc_graphics_Blending_disabled;

#define VTABLE_arc_graphics_Blending_hashCode_R_int 0
typedef jint (*func_arc_graphics_Blending_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Blending_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Blending_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Blending_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Blending_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Blending_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_finalize 5
typedef void (*func_arc_graphics_Blending_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_notify 6
typedef void (*func_arc_graphics_Blending_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_notifyAll 7
typedef void (*func_arc_graphics_Blending_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_wait 8
typedef void (*func_arc_graphics_Blending_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Blending_wait_long 9
typedef void (*func_arc_graphics_Blending_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Blending_wait_long_int 10
typedef void (*func_arc_graphics_Blending_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Blending_apply 11
typedef void (*func_arc_graphics_Blending_apply)(jcontext ctx, jobject self);

void mark_arc_graphics_Blending(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Blending(jcontext ctx);
void init_arc_graphics_Blending_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_arc_graphics_Blending_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_graphics_Blending_apply(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
