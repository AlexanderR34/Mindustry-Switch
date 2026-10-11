#ifndef HEADER_mindustry_maps_filters_FilterOption$SliderOption
#define HEADER_mindustry_maps_filters_FilterOption$SliderOption

#include "Clearwing.h"
#include "mindustry/maps/filters/FilterOption.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_FilterOption$SliderOption {
	mindustry_maps_filters_FilterOption parent;
	jref F_name;
	jref F_getter;
	jref F_setter;
	jfloat F_min;
	jfloat F_max;
	jfloat F_step;
	jbool F_display;
} mindustry_maps_filters_FilterOption$SliderOption;

extern Class class_mindustry_maps_filters_FilterOption$SliderOption;


#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_FilterOption$SliderOption_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_FilterOption$SliderOption_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_FilterOption$SliderOption_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_FilterOption$SliderOption_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_FilterOption$SliderOption_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_finalize 5
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_notify 6
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_notifyAll 7
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_wait 8
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_wait_long 9
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_wait_long_int 10
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table 11
typedef void (*func_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption 12
typedef jobject (*func_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence 13
typedef jobject (*func_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence)(jcontext ctx, jobject self);

void mark_mindustry_maps_filters_FilterOption$SliderOption(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_FilterOption$SliderOption(jcontext ctx);
void init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
void init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption(jcontext ctx, jobject self);
void M_mindustry_maps_filters_FilterOption$SliderOption_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_filters_FilterOption$SliderOption_lambda$build$0_R_java_lang_CharSequence(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
