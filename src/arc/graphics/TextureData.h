#ifndef HEADER_arc_graphics_TextureData
#define HEADER_arc_graphics_TextureData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_TextureData {
	java_lang_Object parent;
} arc_graphics_TextureData;

extern Class class_arc_graphics_TextureData;


#define INDEX_arc_graphics_TextureData_isCustom_R_boolean 0
typedef jbool (*func_arc_graphics_TextureData_isCustom_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_isPrepared_R_boolean 1
typedef jbool (*func_arc_graphics_TextureData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_prepare 2
typedef void (*func_arc_graphics_TextureData_prepare)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap 3
typedef jobject (*func_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap 4
typedef jobject (*func_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_disposePixmap_R_boolean 5
typedef jbool (*func_arc_graphics_TextureData_disposePixmap_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_consumeCustomData_int 6
typedef void (*func_arc_graphics_TextureData_consumeCustomData_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_arc_graphics_TextureData_getWidth_R_int 7
typedef jint (*func_arc_graphics_TextureData_getWidth_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_getHeight_R_int 8
typedef jint (*func_arc_graphics_TextureData_getHeight_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_getFormat_R_arc_graphics_Pixmap$Format 9
typedef jobject (*func_arc_graphics_TextureData_getFormat_R_arc_graphics_Pixmap$Format)(jcontext ctx, jobject self);
#define INDEX_arc_graphics_TextureData_useMipMaps_R_boolean 10
typedef jbool (*func_arc_graphics_TextureData_useMipMaps_R_boolean)(jcontext ctx, jobject self);

void mark_arc_graphics_TextureData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_TextureData(jcontext ctx);
jobject M_arc_graphics_TextureData_getPixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self);
jobject SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(jcontext ctx, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
