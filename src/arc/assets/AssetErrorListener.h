#ifndef HEADER_arc_assets_AssetErrorListener
#define HEADER_arc_assets_AssetErrorListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_AssetErrorListener {
	java_lang_Object parent;
} arc_assets_AssetErrorListener;

extern Class class_arc_assets_AssetErrorListener;


#define INDEX_arc_assets_AssetErrorListener_error_arc_assets_AssetDescriptor_java_lang_Throwable 0
typedef void (*func_arc_assets_AssetErrorListener_error_arc_assets_AssetDescriptor_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_assets_AssetErrorListener(jobject object, jint mark, jint depth);
void clinit_arc_assets_AssetErrorListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
