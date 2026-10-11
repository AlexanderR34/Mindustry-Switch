#ifndef HEADER_arc_graphics_g2d_SpriteBatch$CountingSort
#define HEADER_arc_graphics_g2d_SpriteBatch$CountingSort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_SpriteBatch$CountingSort {
	java_lang_Object parent;
} arc_graphics_g2d_SpriteBatch$CountingSort;

extern Class class_arc_graphics_g2d_SpriteBatch$CountingSort;

extern jint SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s;
extern jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures;

#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_SpriteBatch$CountingSort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_SpriteBatch$CountingSort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$CountingSort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$CountingSort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_SpriteBatch$CountingSort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_finalize 5
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_notify 6
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_notifyAll 7
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_wait 8
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_wait_long 9
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort_wait_long_int 10
typedef void (*func_arc_graphics_g2d_SpriteBatch$CountingSort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_SpriteBatch$CountingSort(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_SpriteBatch$CountingSort(jcontext ctx);
void init_arc_graphics_g2d_SpriteBatch$CountingSort(jcontext ctx, jobject self);
jobject SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMapMT_Array1_int_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMap_Array1_int_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
