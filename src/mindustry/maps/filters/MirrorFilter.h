#ifndef HEADER_mindustry_maps_filters_MirrorFilter
#define HEADER_mindustry_maps_filters_MirrorFilter

#include "Clearwing.h"
#include "mindustry/maps/filters/GenerateFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_MirrorFilter {
	mindustry_maps_filters_GenerateFilter parent;
	jint F_angle;
	jbool F_rotate;
	jfloat F_axisX;
	jfloat F_axisY;
} mindustry_maps_filters_MirrorFilter;

extern Class class_mindustry_maps_filters_MirrorFilter;

extern jobject SF_mindustry_maps_filters_MirrorFilter_v1;
extern jobject SF_mindustry_maps_filters_MirrorFilter_v2;
extern jobject SF_mindustry_maps_filters_MirrorFilter_v3;

#define VTABLE_mindustry_maps_filters_MirrorFilter_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_MirrorFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_MirrorFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_MirrorFilter_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_finalize 5
typedef void (*func_mindustry_maps_filters_MirrorFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_notify 6
typedef void (*func_mindustry_maps_filters_MirrorFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_notifyAll 7
typedef void (*func_mindustry_maps_filters_MirrorFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_wait 8
typedef void (*func_mindustry_maps_filters_MirrorFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_wait_long 9
typedef void (*func_mindustry_maps_filters_MirrorFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_MirrorFilter_wait_long_int 10
typedef void (*func_mindustry_maps_filters_MirrorFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_MirrorFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput 11
typedef void (*func_mindustry_maps_filters_MirrorFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption 12
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput 13
typedef void (*func_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image 14
typedef void (*func_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_MirrorFilter_simpleName_R_java_lang_String 15
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_simpleName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_name_R_java_lang_String 16
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_icon_R_char 17
typedef jchar (*func_mindustry_maps_filters_MirrorFilter_icon_R_char)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_randomize 18
typedef void (*func_mindustry_maps_filters_MirrorFilter_randomize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_isBuffered_R_boolean 19
typedef jbool (*func_mindustry_maps_filters_MirrorFilter_isBuffered_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_isPost_R_boolean 20
typedef jbool (*func_mindustry_maps_filters_MirrorFilter_isPost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float 21
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_filters_MirrorFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float 22
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_maps_filters_MirrorFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float 23
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_maps_filters_MirrorFilter_noise_float_float_float_float_float_float_R_float 24
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_noise_float_float_float_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_maps_filters_MirrorFilter_rnoise_float_float_float_float_R_float 25
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_rnoise_float_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_filters_MirrorFilter_rnoise_float_float_int_float_float_float_R_float 26
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_rnoise_float_float_int_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_maps_filters_MirrorFilter_chance_int_int_R_float 27
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_chance_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_maps_filters_MirrorFilter_copy_R_mindustry_maps_filters_GenerateFilter 28
typedef jobject (*func_mindustry_maps_filters_MirrorFilter_copy_R_mindustry_maps_filters_GenerateFilter)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float 29
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float 30
typedef void (*func_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 31
typedef jbool (*func_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float 32
typedef void (*func_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean 33
typedef void (*func_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean 34
typedef jbool (*func_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$1_float 35
typedef void (*func_mindustry_maps_filters_MirrorFilter_lambda$options$1_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float 36
typedef jfloat (*func_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float)(jcontext ctx, jobject self);

void mark_mindustry_maps_filters_MirrorFilter(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_MirrorFilter(jcontext ctx);
void init_mindustry_maps_filters_MirrorFilter(jcontext ctx, jobject self);
jobject M_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self);
jchar M_mindustry_maps_filters_MirrorFilter_icon_R_char(jcontext ctx, jobject self);
void M_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_maps_filters_MirrorFilter_getDrawRect_arc_scene_ui_Image_arc_math_geom_Rect(jcontext ctx, jobject param0, jobject param1);
jfloat M_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float(jcontext ctx, jobject self, jfloat param0, jint param1);
void M_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
jbool M_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean(jcontext ctx, jobject self);
void M_mindustry_maps_filters_MirrorFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
