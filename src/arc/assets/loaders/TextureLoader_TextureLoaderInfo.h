#ifndef HEADER_arc_assets_loaders_TextureLoader$TextureLoaderInfo
#define HEADER_arc_assets_loaders_TextureLoader$TextureLoaderInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_loaders_TextureLoader$TextureLoaderInfo {
	java_lang_Object parent;
	jref F_filename;
	jref F_data;
	jref F_texture;
} arc_assets_loaders_TextureLoader$TextureLoaderInfo;

extern Class class_arc_assets_loaders_TextureLoader$TextureLoaderInfo;


#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_hashCode_R_int 0
typedef jint (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_finalize 5
typedef void (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_notify 6
typedef void (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_notifyAll 7
typedef void (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_wait 8
typedef void (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_wait_long 9
typedef void (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_loaders_TextureLoader$TextureLoaderInfo_wait_long_int 10
typedef void (*func_arc_assets_loaders_TextureLoader$TextureLoaderInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_assets_loaders_TextureLoader$TextureLoaderInfo(jobject object, jint mark, jint depth);
void clinit_arc_assets_loaders_TextureLoader$TextureLoaderInfo(jcontext ctx);
void init_arc_assets_loaders_TextureLoader$TextureLoaderInfo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
