#ifndef HEADER_mindustry_maps_MapPreviewLoader$MapPreviewParameter
#define HEADER_mindustry_maps_MapPreviewLoader$MapPreviewParameter

#include "Clearwing.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_MapPreviewLoader$MapPreviewParameter {
	arc_assets_loaders_TextureLoader$TextureParameter parent;
	jref F_map;
} mindustry_maps_MapPreviewLoader$MapPreviewParameter;

extern Class class_mindustry_maps_MapPreviewLoader$MapPreviewParameter;


#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_hashCode_R_int 0
typedef jint (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_finalize 5
typedef void (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_notify 6
typedef void (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_notifyAll 7
typedef void (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_wait 8
typedef void (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_wait_long 9
typedef void (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_MapPreviewLoader$MapPreviewParameter_wait_long_int 10
typedef void (*func_mindustry_maps_MapPreviewLoader$MapPreviewParameter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_maps_MapPreviewLoader$MapPreviewParameter(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_MapPreviewLoader$MapPreviewParameter(jcontext ctx);
void init_mindustry_maps_MapPreviewLoader$MapPreviewParameter_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
