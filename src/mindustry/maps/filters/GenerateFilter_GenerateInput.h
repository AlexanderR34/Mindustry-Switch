#ifndef HEADER_mindustry_maps_filters_GenerateFilter$GenerateInput
#define HEADER_mindustry_maps_filters_GenerateFilter$GenerateInput

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_GenerateFilter$GenerateInput {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_width;
	jint F_height;
	jref F_floor;
	jref F_block;
	jref F_overlay;
	jlong F_packedData;
	jref F_buffer;
} mindustry_maps_filters_GenerateFilter$GenerateInput;

extern Class class_mindustry_maps_filters_GenerateFilter$GenerateInput;


#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_finalize 5
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_notify 6
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_notifyAll 7
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_wait 8
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_wait_long 9
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_wait_long_int 10
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long 11
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jlong param5);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile 12
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider 13
typedef void (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile 14
typedef jobject (*func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_mindustry_maps_filters_GenerateFilter$GenerateInput(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx);
void init_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self);
void M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_long(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4, jlong param5);
void M_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_GenerateFilter$GenerateInput_begin_int_int_mindustry_maps_filters_GenerateFilter$GenerateInput$TileProvider(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
