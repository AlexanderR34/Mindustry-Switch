#ifndef HEADER_arc_graphics_gl_FacedCubemapData
#define HEADER_arc_graphics_gl_FacedCubemapData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/graphics/CubemapData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_FacedCubemapData {
	java_lang_Object parent;
	jref F_data;
} arc_graphics_gl_FacedCubemapData;

extern Class class_arc_graphics_gl_FacedCubemapData;


#define VTABLE_arc_graphics_gl_FacedCubemapData_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_FacedCubemapData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_FacedCubemapData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FacedCubemapData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_FacedCubemapData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_FacedCubemapData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_FacedCubemapData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_finalize 5
typedef void (*func_arc_graphics_gl_FacedCubemapData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_notify 6
typedef void (*func_arc_graphics_gl_FacedCubemapData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_notifyAll 7
typedef void (*func_arc_graphics_gl_FacedCubemapData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_wait 8
typedef void (*func_arc_graphics_gl_FacedCubemapData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_wait_long 9
typedef void (*func_arc_graphics_gl_FacedCubemapData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_FacedCubemapData_wait_long_int 10
typedef void (*func_arc_graphics_gl_FacedCubemapData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean 11
typedef jbool (*func_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_prepare 12
typedef void (*func_arc_graphics_gl_FacedCubemapData_prepare)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_consumeCubemapData 13
typedef void (*func_arc_graphics_gl_FacedCubemapData_consumeCubemapData)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_getWidth_R_int 14
typedef jint (*func_arc_graphics_gl_FacedCubemapData_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_getHeight_R_int 15
typedef jint (*func_arc_graphics_gl_FacedCubemapData_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi 16
typedef void (*func_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap 17
typedef void (*func_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean 18
typedef jbool (*func_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData 19
typedef jobject (*func_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_gl_FacedCubemapData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_FacedCubemapData(jcontext ctx);
void init_arc_graphics_gl_FacedCubemapData(jcontext ctx, jobject self);
void init_arc_graphics_gl_FacedCubemapData_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void init_arc_graphics_gl_FacedCubemapData_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6);
void init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6);
void init_arc_graphics_gl_FacedCubemapData_int_int_int_arc_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_gl_FacedCubemapData_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_FacedCubemapData_getHeight_R_int(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_FacedCubemapData_prepare(jcontext ctx, jobject self);
void M_arc_graphics_gl_FacedCubemapData_consumeCubemapData(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
