#ifndef HEADER_arc_assets_loaders_CubemapLoader$CubemapParameter
#define HEADER_arc_assets_loaders_CubemapLoader$CubemapParameter

#include "Clearwing.h"
#include "arc/assets/AssetLoaderParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_loaders_CubemapLoader$CubemapParameter {
	arc_assets_AssetLoaderParameters parent;
	jref F_format;
	jref F_cubemap;
	jref F_cubemapData;
	jref F_minFilter;
	jref F_magFilter;
	jref F_wrapU;
	jref F_wrapV;
} arc_assets_loaders_CubemapLoader$CubemapParameter;

extern Class class_arc_assets_loaders_CubemapLoader$CubemapParameter;


#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_hashCode_R_int 0
typedef jint (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_finalize 5
typedef void (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_notify 6
typedef void (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_notifyAll 7
typedef void (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_wait 8
typedef void (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_wait_long 9
typedef void (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_loaders_CubemapLoader$CubemapParameter_wait_long_int 10
typedef void (*func_arc_assets_loaders_CubemapLoader$CubemapParameter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_assets_loaders_CubemapLoader$CubemapParameter(jobject object, jint mark, jint depth);
void clinit_arc_assets_loaders_CubemapLoader$CubemapParameter(jcontext ctx);
void init_arc_assets_loaders_CubemapLoader$CubemapParameter(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
