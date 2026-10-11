#ifndef HEADER_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2
#define HEADER_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2 {
	java_lang_Object parent;
	jint F_start;
	jint F_end;
	jint F_id;
} arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2;

extern Class class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2;

extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest;

#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_finalize 5
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_notify 6
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_notifyAll 7
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_wait 8
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_wait_long 9
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_wait_long_int 10
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run 11
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int 12
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);

void mark_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(jcontext ctx);
void init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
