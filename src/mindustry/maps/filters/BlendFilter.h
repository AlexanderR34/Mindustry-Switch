#ifndef HEADER_mindustry_maps_filters_BlendFilter
#define HEADER_mindustry_maps_filters_BlendFilter

#include "Clearwing.h"
#include "mindustry/maps/filters/GenerateFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_BlendFilter {
	mindustry_maps_filters_GenerateFilter parent;
	jfloat F_radius;
	jref F_block;
	jref F_floor;
	jref F_ignore;
} mindustry_maps_filters_BlendFilter;

extern Class class_mindustry_maps_filters_BlendFilter;


#define VTABLE_mindustry_maps_filters_BlendFilter_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_BlendFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_BlendFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_BlendFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_BlendFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_BlendFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_finalize 5
typedef void (*func_mindustry_maps_filters_BlendFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_notify 6
typedef void (*func_mindustry_maps_filters_BlendFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_notifyAll 7
typedef void (*func_mindustry_maps_filters_BlendFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_wait 8
typedef void (*func_mindustry_maps_filters_BlendFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_wait_long 9
typedef void (*func_mindustry_maps_filters_BlendFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_wait_long_int 10
typedef void (*func_mindustry_maps_filters_BlendFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_BlendFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput 11
typedef void (*func_mindustry_maps_filters_BlendFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption 12
typedef jobject (*func_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput 13
typedef void (*func_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_draw_arc_scene_ui_Image 14
typedef void (*func_mindustry_maps_filters_BlendFilter_draw_arc_scene_ui_Image)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_simpleName_R_java_lang_String 15
typedef jobject (*func_mindustry_maps_filters_BlendFilter_simpleName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_name_R_java_lang_String 16
typedef jobject (*func_mindustry_maps_filters_BlendFilter_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_icon_R_char 17
typedef jchar (*func_mindustry_maps_filters_BlendFilter_icon_R_char)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_randomize 18
typedef void (*func_mindustry_maps_filters_BlendFilter_randomize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean 19
typedef jbool (*func_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_isPost_R_boolean 20
typedef jbool (*func_mindustry_maps_filters_BlendFilter_isPost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float 21
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_filters_BlendFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float 22
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_maps_filters_BlendFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float 23
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_maps_filters_BlendFilter_noise_float_float_float_float_float_float_R_float 24
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_noise_float_float_float_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_maps_filters_BlendFilter_rnoise_float_float_float_float_R_float 25
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_rnoise_float_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_filters_BlendFilter_rnoise_float_float_int_float_float_float_R_float 26
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_rnoise_float_float_int_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_maps_filters_BlendFilter_chance_int_int_R_float 27
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_chance_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_maps_filters_BlendFilter_copy_R_mindustry_maps_filters_GenerateFilter 28
typedef jobject (*func_mindustry_maps_filters_BlendFilter_copy_R_mindustry_maps_filters_GenerateFilter)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block 29
typedef void (*func_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block 30
typedef jobject (*func_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block 31
typedef void (*func_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block 32
typedef jobject (*func_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block 33
typedef void (*func_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block 34
typedef jobject (*func_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$1_float 35
typedef void (*func_mindustry_maps_filters_BlendFilter_lambda$options$1_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float 36
typedef jfloat (*func_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float)(jcontext ctx, jobject self);

void mark_mindustry_maps_filters_BlendFilter(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_BlendFilter(jcontext ctx);
void init_mindustry_maps_filters_BlendFilter(jcontext ctx, jobject self);
jobject M_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self);
jbool M_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean(jcontext ctx, jobject self);
jchar M_mindustry_maps_filters_BlendFilter_icon_R_char(jcontext ctx, jobject self);
void M_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block(jcontext ctx, jobject self);
void M_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block(jcontext ctx, jobject self);
void M_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block(jcontext ctx, jobject self);
void M_mindustry_maps_filters_BlendFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
