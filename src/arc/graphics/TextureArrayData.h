#ifndef HEADER_arc_graphics_TextureArrayData
#define HEADER_arc_graphics_TextureArrayData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_TextureArrayData {
	java_lang_Object parent;
} arc_graphics_TextureArrayData;

extern Class class_arc_graphics_TextureArrayData;


#define INDEX_arc_graphics_TextureArrayData_isPrepared_R_boolean 0
typedef jbool (*func_arc_graphics_TextureArrayData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_prepare 1
typedef void (*func_arc_graphics_TextureArrayData_prepare)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_consumeTextureArrayData 2
typedef void (*func_arc_graphics_TextureArrayData_consumeTextureArrayData)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_getWidth_R_int 3
typedef jint (*func_arc_graphics_TextureArrayData_getWidth_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_getHeight_R_int 4
typedef jint (*func_arc_graphics_TextureArrayData_getHeight_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_getDepth_R_int 5
typedef jint (*func_arc_graphics_TextureArrayData_getDepth_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_getInternalFormat_R_int 6
typedef jint (*func_arc_graphics_TextureArrayData_getInternalFormat_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureArrayData_getGLType_R_int 7
typedef jint (*func_arc_graphics_TextureArrayData_getGLType_R_int)(jcontext ctx, jobject self);

void mark_arc_graphics_TextureArrayData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_TextureArrayData(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
