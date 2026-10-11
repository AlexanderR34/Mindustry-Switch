#ifndef HEADER_arc_assets_loaders_FileHandleResolver
#define HEADER_arc_assets_loaders_FileHandleResolver

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_loaders_FileHandleResolver {
	java_lang_Object parent;
} arc_assets_loaders_FileHandleResolver;

extern Class class_arc_assets_loaders_FileHandleResolver;


#define INDEX_arc_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_arc_files_Fi 0
typedef jobject (*func_arc_assets_loaders_FileHandleResolver_resolve_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_arc_assets_loaders_FileHandleResolver(jobject object, jint mark, jint depth);
void clinit_arc_assets_loaders_FileHandleResolver(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
