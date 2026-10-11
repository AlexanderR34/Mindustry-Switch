#ifndef HEADER_arc_graphics_CubemapData
#define HEADER_arc_graphics_CubemapData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_CubemapData {
	java_lang_Object parent;
} arc_graphics_CubemapData;

extern Class class_arc_graphics_CubemapData;


#define INDEX_arc_graphics_CubemapData_isPrepared_R_boolean 0
typedef jbool (*func_arc_graphics_CubemapData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_CubemapData_prepare 1
typedef void (*func_arc_graphics_CubemapData_prepare)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_CubemapData_consumeCubemapData 2
typedef void (*func_arc_graphics_CubemapData_consumeCubemapData)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_CubemapData_getWidth_R_int 3
typedef jint (*func_arc_graphics_CubemapData_getWidth_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_CubemapData_getHeight_R_int 4
typedef jint (*func_arc_graphics_CubemapData_getHeight_R_int)(jcontext ctx, jobject self);

void mark_arc_graphics_CubemapData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_CubemapData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
