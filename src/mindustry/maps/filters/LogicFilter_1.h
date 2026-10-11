#ifndef HEADER_mindustry_maps_filters_LogicFilter$1
#define HEADER_mindustry_maps_filters_LogicFilter$1

#include "Clearwing.h"
#include "mindustry/maps/filters/FilterOption.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_filters_LogicFilter$1 {
	mindustry_maps_filters_FilterOption parent;
	jref F_this$0;
} mindustry_maps_filters_LogicFilter$1;

extern Class class_mindustry_maps_filters_LogicFilter$1;


#define VTABLE_mindustry_maps_filters_LogicFilter$1_hashCode_R_int 0
typedef jint (*func_mindustry_maps_filters_LogicFilter$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_filters_LogicFilter$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_filters_LogicFilter$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_filters_LogicFilter$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_filters_LogicFilter$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_finalize 5
typedef void (*func_mindustry_maps_filters_LogicFilter$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_notify 6
typedef void (*func_mindustry_maps_filters_LogicFilter$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_notifyAll 7
typedef void (*func_mindustry_maps_filters_LogicFilter$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_wait 8
typedef void (*func_mindustry_maps_filters_LogicFilter$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_wait_long 9
typedef void (*func_mindustry_maps_filters_LogicFilter$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_wait_long_int 10
typedef void (*func_mindustry_maps_filters_LogicFilter$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table 11
typedef void (*func_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_lambda$build$1 12
typedef void (*func_mindustry_maps_filters_LogicFilter$1_lambda$build$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String 13
typedef void (*func_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_filters_LogicFilter$1(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_filters_LogicFilter$1(jcontext ctx);
void init_mindustry_maps_filters_LogicFilter$1_mindustry_maps_filters_LogicFilter(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_LogicFilter$1_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_filters_LogicFilter$1_lambda$build$1(jcontext ctx, jobject self);
void M_mindustry_maps_filters_LogicFilter$1_lambda$build$2_java_lang_String(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_maps_filters_LogicFilter$1_lambda$build$0_arc_scene_ui_Button(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
