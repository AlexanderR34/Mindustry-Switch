#ifndef HEADER_arc_graphics_gl_IndexData
#define HEADER_arc_graphics_gl_IndexData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_IndexData {
	java_lang_Object parent;
} arc_graphics_gl_IndexData;

extern Class class_arc_graphics_gl_IndexData;


#define INDEX_arc_graphics_gl_IndexData_size_R_int 0
typedef jint (*func_arc_graphics_gl_IndexData_size_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_IndexData_max_R_int 1
typedef jint (*func_arc_graphics_gl_IndexData_max_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_IndexData_set_Array1_short_int_int 2
typedef void (*func_arc_graphics_gl_IndexData_set_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_arc_graphics_gl_IndexData_set_java_nio_ShortBuffer 3
typedef void (*func_arc_graphics_gl_IndexData_set_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_graphics_gl_IndexData_update_int_Array1_short_int_int 4
typedef void (*func_arc_graphics_gl_IndexData_update_int_Array1_short_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define INDEX_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer 5
typedef jobject (*func_arc_graphics_gl_IndexData_buffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_IndexData_bind 6
typedef void (*func_arc_graphics_gl_IndexData_bind)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_IndexData_unbind 7
typedef void (*func_arc_graphics_gl_IndexData_unbind)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_gl_IndexData_dispose 8
typedef void (*func_arc_graphics_gl_IndexData_dispose)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_IndexData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_IndexData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
