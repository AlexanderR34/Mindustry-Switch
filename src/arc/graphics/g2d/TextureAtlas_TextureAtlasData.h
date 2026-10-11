#ifndef HEADER_arc_graphics_g2d_TextureAtlas$TextureAtlasData
#define HEADER_arc_graphics_g2d_TextureAtlas$TextureAtlasData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_TextureAtlas$TextureAtlasData {
	java_lang_Object parent;
	jref F_pages;
	jref F_regions;
} arc_graphics_g2d_TextureAtlas$TextureAtlasData;

extern Class class_arc_graphics_g2d_TextureAtlas$TextureAtlasData;

extern jbyte SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatVersion;
extern jobject SF_arc_graphics_g2d_TextureAtlas$TextureAtlasData_formatHeader;

#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_finalize 5
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_notify 6
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_notifyAll 7
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_wait 8
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_wait_long 9
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_wait_long_int 10
typedef void (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq 11
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq 12
typedef jobject (*func_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_TextureAtlas$TextureAtlasData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx);
void init_arc_graphics_g2d_TextureAtlas$TextureAtlasData_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jobject M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
