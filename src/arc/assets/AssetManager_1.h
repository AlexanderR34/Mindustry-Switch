#ifndef HEADER_arc_assets_AssetManager$1
#define HEADER_arc_assets_AssetManager$1

#include "Clearwing.h"
#include "arc/assets/loaders/CustomLoader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_AssetManager$1 {
	arc_assets_loaders_CustomLoader parent;
	jref F_val$loadasync;
	jref F_val$loadsync;
	jref F_this$0;
} arc_assets_AssetManager$1;

extern Class class_arc_assets_AssetManager$1;


#define VTABLE_arc_assets_AssetManager$1_hashCode_R_int 0
typedef jint (*func_arc_assets_AssetManager$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_AssetManager$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_AssetManager$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_AssetManager$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_AssetManager$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_AssetManager$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_finalize 5
typedef void (*func_arc_assets_AssetManager$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_notify 6
typedef void (*func_arc_assets_AssetManager$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_notifyAll 7
typedef void (*func_arc_assets_AssetManager$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_wait 8
typedef void (*func_arc_assets_AssetManager$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_AssetManager$1_wait_long 9
typedef void (*func_arc_assets_AssetManager$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_AssetManager$1_wait_long_int 10
typedef void (*func_arc_assets_AssetManager$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_assets_AssetManager$1_resolve_java_lang_String_R_arc_files_Fi 11
typedef jobject (*func_arc_assets_AssetManager$1_resolve_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_AssetManager$1_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq 12
typedef jobject (*func_arc_assets_AssetManager$1_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters 13
typedef void (*func_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object 14
typedef jobject (*func_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

void mark_arc_assets_AssetManager$1(jobject object, jint mark, jint depth);
void clinit_arc_assets_AssetManager$1(jcontext ctx);
void init_arc_assets_AssetManager$1_arc_assets_AssetManager_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_assets_AssetManager$1_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_assets_AssetManager$1_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
