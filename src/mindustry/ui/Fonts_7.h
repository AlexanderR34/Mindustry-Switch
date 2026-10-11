#ifndef HEADER_mindustry_ui_Fonts$7
#define HEADER_mindustry_ui_Fonts$7

#include "Clearwing.h"
#include "arc/freetype/FreetypeFontLoader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Fonts$7 {
	arc_freetype_FreetypeFontLoader parent;
	jref F_scaled;
} mindustry_ui_Fonts$7;

extern Class class_mindustry_ui_Fonts$7;


#define VTABLE_mindustry_ui_Fonts$7_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Fonts$7_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Fonts$7_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Fonts$7_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Fonts$7_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Fonts$7_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Fonts$7_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_finalize 5
typedef void (*func_mindustry_ui_Fonts$7_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_notify 6
typedef void (*func_mindustry_ui_Fonts$7_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_notifyAll 7
typedef void (*func_mindustry_ui_Fonts$7_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_wait 8
typedef void (*func_mindustry_ui_Fonts$7_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$7_wait_long 9
typedef void (*func_mindustry_ui_Fonts$7_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Fonts$7_wait_long_int 10
typedef void (*func_mindustry_ui_Fonts$7_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_Fonts$7_resolve_java_lang_String_R_arc_files_Fi 11
typedef jobject (*func_mindustry_ui_Fonts$7_resolve_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Fonts$7_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq 12
typedef jobject (*func_mindustry_ui_Fonts$7_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_Fonts$7_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters 13
typedef void (*func_mindustry_ui_Fonts$7_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object 14
typedef jobject (*func_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ui_Fonts$7_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter 15
typedef void (*func_mindustry_ui_Fonts$7_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font 16
typedef jobject (*func_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ui_Fonts$7_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq 17
typedef jobject (*func_mindustry_ui_Fonts$7_getDependencies_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_ui_Fonts$7(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Fonts$7(jcontext ctx);
void init_mindustry_ui_Fonts$7_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_freetype_FreetypeFontLoader$FreeTypeFontLoaderParameter_R_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_mindustry_ui_Fonts$7_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
