#ifndef HEADER_arc_assets_loaders_AssetLoader
#define HEADER_arc_assets_loaders_AssetLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_loaders_AssetLoader {
	java_lang_Object parent;
	jref F_resolver;
} arc_assets_loaders_AssetLoader;

extern Class class_arc_assets_loaders_AssetLoader;


#define VTABLE_arc_assets_loaders_AssetLoader_hashCode_R_int 0
typedef jint (*func_arc_assets_loaders_AssetLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_loaders_AssetLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_loaders_AssetLoader_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_loaders_AssetLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_loaders_AssetLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_loaders_AssetLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_finalize 5
typedef void (*func_arc_assets_loaders_AssetLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_notify 6
typedef void (*func_arc_assets_loaders_AssetLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_notifyAll 7
typedef void (*func_arc_assets_loaders_AssetLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_wait 8
typedef void (*func_arc_assets_loaders_AssetLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_AssetLoader_wait_long 9
typedef void (*func_arc_assets_loaders_AssetLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_loaders_AssetLoader_wait_long_int 10
typedef void (*func_arc_assets_loaders_AssetLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi 11
typedef jobject (*func_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_loaders_AssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq 12
typedef jobject (*func_arc_assets_loaders_AssetLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_assets_loaders_AssetLoader(jobject object, jint mark, jint depth);
void clinit_arc_assets_loaders_AssetLoader(jcontext ctx);
void init_arc_assets_loaders_AssetLoader_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0);
jobject M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
