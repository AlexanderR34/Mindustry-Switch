#ifndef HEADER_mindustry_maps_filters_GenerateFilter$PackTileStruct
#define HEADER_mindustry_maps_filters_GenerateFilter$PackTileStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_GenerateFilter$PackTileStruct {
	java_lang_Object parent;
	jshort F_block;
	jshort F_floor;
	jshort F_overlay;
	jref F_this$0;
} mindustry_maps_filters_GenerateFilter$PackTileStruct;

extern Class class_mindustry_maps_filters_GenerateFilter$PackTileStruct;


#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_finalize 5
typedef void (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_notify 6
typedef void (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_notifyAll 7
typedef void (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_wait 8
typedef void (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_wait_long 9
typedef void (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_GenerateFilter$PackTileStruct_wait_long_int 10
typedef void (*func_mindustry_maps_filters_GenerateFilter$PackTileStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_maps_filters_GenerateFilter$PackTileStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_GenerateFilter$PackTileStruct(jcontext ctx);
void init_mindustry_maps_filters_GenerateFilter$PackTileStruct_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
