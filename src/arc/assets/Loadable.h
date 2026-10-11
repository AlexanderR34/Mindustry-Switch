#ifndef HEADER_arc_assets_Loadable
#define HEADER_arc_assets_Loadable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_Loadable {
	java_lang_Object parent;
} arc_assets_Loadable;

extern Class class_arc_assets_Loadable;


#define INDEX_arc_assets_Loadable_loadAsync 0
typedef void (*func_arc_assets_Loadable_loadAsync)(jcontext ctx, jobject self);
#define INDEX_arc_assets_Loadable_loadSync 1
typedef void (*func_arc_assets_Loadable_loadSync)(jcontext ctx, jobject self);
#define INDEX_arc_assets_Loadable_getName_R_java_lang_String 2
typedef jobject (*func_arc_assets_Loadable_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_arc_assets_Loadable_getDependencies_R_arc_struct_Seq 3
typedef jobject (*func_arc_assets_Loadable_getDependencies_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_assets_Loadable(jobject object, jint mark, jint depth);
void clinit_arc_assets_Loadable(jcontext ctx);
void M_arc_assets_Loadable_loadAsync(jcontext ctx, jobject self);
void M_arc_assets_Loadable_loadSync(jcontext ctx, jobject self);
jobject M_arc_assets_Loadable_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_assets_Loadable_getDependencies_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
