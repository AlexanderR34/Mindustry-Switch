#ifndef HEADER_mindustry_maps_filters_FilterOption$ToggleOption
#define HEADER_mindustry_maps_filters_FilterOption$ToggleOption

#include "Clearwing.h"
#include "mindustry/maps/filters/FilterOption.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_FilterOption$ToggleOption {
	mindustry_maps_filters_FilterOption parent;
	jref F_name;
	jref F_getter;
	jref F_setter;
} mindustry_maps_filters_FilterOption$ToggleOption;

extern Class class_mindustry_maps_filters_FilterOption$ToggleOption;


#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_FilterOption$ToggleOption_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_FilterOption$ToggleOption_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_FilterOption$ToggleOption_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_FilterOption$ToggleOption_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_FilterOption$ToggleOption_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_finalize 5
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_notify 6
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_notifyAll 7
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_wait 8
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_wait_long 9
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_wait_long_int 10
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table 11
typedef void (*func_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_filters_FilterOption$ToggleOption(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_FilterOption$ToggleOption(jcontext ctx);
void init_mindustry_maps_filters_FilterOption$ToggleOption_java_lang_String_arc_func_Boolp_arc_func_Boolc(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_maps_filters_FilterOption$ToggleOption_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
