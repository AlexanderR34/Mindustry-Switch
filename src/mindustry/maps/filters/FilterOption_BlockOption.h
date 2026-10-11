#ifndef HEADER_mindustry_maps_filters_FilterOption$BlockOption
#define HEADER_mindustry_maps_filters_FilterOption$BlockOption

#include "Clearwing.h"
#include "mindustry/maps/filters/FilterOption.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_FilterOption$BlockOption {
	mindustry_maps_filters_FilterOption parent;
	jref F_name;
	jref F_supplier;
	jref F_consumer;
	jref F_filter;
} mindustry_maps_filters_FilterOption$BlockOption;

extern Class class_mindustry_maps_filters_FilterOption$BlockOption;


#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_FilterOption$BlockOption_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_FilterOption$BlockOption_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_FilterOption$BlockOption_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_FilterOption$BlockOption_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_FilterOption$BlockOption_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_finalize 5
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_notify 6
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_notifyAll 7
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_wait 8
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_wait_long 9
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_wait_long_int 10
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table 11
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6 12
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5 13
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2 14
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table 15
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog 16
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button 17
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image 18
typedef void (*func_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_filters_FilterOption$BlockOption(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_FilterOption$BlockOption(jcontext ctx);
void init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_maps_filters_FilterOption$BlockOption_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$6(jcontext ctx, jobject self);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$5(jcontext ctx, jobject self);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$2(jcontext ctx, jobject self);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$3_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$4_mindustry_world_Block_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$0_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_FilterOption$BlockOption_lambda$build$1_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
