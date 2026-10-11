#ifndef HEADER_arc_assets_AssetLoaderParameters$LoadedCallback
#define HEADER_arc_assets_AssetLoaderParameters$LoadedCallback

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_AssetLoaderParameters$LoadedCallback {
	java_lang_Object parent;
} arc_assets_AssetLoaderParameters$LoadedCallback;

extern Class class_arc_assets_AssetLoaderParameters$LoadedCallback;


#define INDEX_arc_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_arc_assets_AssetManager_java_lang_String_java_lang_Class 0
typedef void (*func_arc_assets_AssetLoaderParameters$LoadedCallback_finishedLoading_arc_assets_AssetManager_java_lang_String_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_assets_AssetLoaderParameters$LoadedCallback(jobject object, jint mark, jint depth);
void clinit_arc_assets_AssetLoaderParameters$LoadedCallback(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
