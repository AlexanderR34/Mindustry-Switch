#ifndef HEADER_arc_graphics_Cubemap
#define HEADER_arc_graphics_Cubemap

#include "Clearwing.h"
#include "arc/graphics/GLTexture.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Cubemap {
	arc_graphics_GLTexture parent;
	jref F_data;
} arc_graphics_Cubemap;

extern Class class_arc_graphics_Cubemap;


#define VTABLE_arc_graphics_Cubemap_hashCode_R_int 0
typedef jint (*func_arc_graphics_Cubemap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Cubemap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Cubemap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Cubemap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Cubemap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_finalize 5
typedef void (*func_arc_graphics_Cubemap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_notify 6
typedef void (*func_arc_graphics_Cubemap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_notifyAll 7
typedef void (*func_arc_graphics_Cubemap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_wait 8
typedef void (*func_arc_graphics_Cubemap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_wait_long 9
typedef void (*func_arc_graphics_Cubemap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Cubemap_wait_long_int 10
typedef void (*func_arc_graphics_Cubemap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Cubemap_dispose 11
typedef void (*func_arc_graphics_Cubemap_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_Cubemap_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_getDepth_R_int 13
typedef jint (*func_arc_graphics_Cubemap_getDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_bind 14
typedef void (*func_arc_graphics_Cubemap_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_bind_int 15
typedef void (*func_arc_graphics_Cubemap_bind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Cubemap_getMinFilter_R_arc_graphics_Texture$TextureFilter 16
typedef jobject (*func_arc_graphics_Cubemap_getMinFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_getMagFilter_R_arc_graphics_Texture$TextureFilter 17
typedef jobject (*func_arc_graphics_Cubemap_getMagFilter_R_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_getUWrap_R_arc_graphics_Texture$TextureWrap 18
typedef jobject (*func_arc_graphics_Cubemap_getUWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_getVWrap_R_arc_graphics_Texture$TextureWrap 19
typedef jobject (*func_arc_graphics_Cubemap_getVWrap_R_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_getTextureObjectHandle_R_int 20
typedef jint (*func_arc_graphics_Cubemap_getTextureObjectHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 21
typedef void (*func_arc_graphics_Cubemap_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_Cubemap_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean 22
typedef void (*func_arc_graphics_Cubemap_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap 23
typedef void (*func_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap 24
typedef void (*func_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_Cubemap_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 25
typedef void (*func_arc_graphics_Cubemap_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_Cubemap_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean 26
typedef void (*func_arc_graphics_Cubemap_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter 27
typedef void (*func_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 28
typedef void (*func_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_Cubemap_load_arc_graphics_CubemapData 29
typedef void (*func_arc_graphics_Cubemap_load_arc_graphics_CubemapData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData 30
typedef jobject (*func_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData)(jcontext ctx, jobject self);

void mark_arc_graphics_Cubemap(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Cubemap(jcontext ctx);
void init_arc_graphics_Cubemap_arc_graphics_CubemapData(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_Cubemap_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6);
void init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6);
void init_arc_graphics_Cubemap_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void M_arc_graphics_Cubemap_load_arc_graphics_CubemapData(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData(jcontext ctx, jobject self);
jint M_arc_graphics_Cubemap_getDepth_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
