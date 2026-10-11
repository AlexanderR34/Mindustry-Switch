#ifndef HEADER_mindustry_ui_Elems
#define HEADER_mindustry_ui_Elems

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Elems {
	java_lang_Object parent;
} mindustry_ui_Elems;

extern Class class_mindustry_ui_Elems;


#define VTABLE_mindustry_ui_Elems_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Elems_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Elems_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Elems_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Elems_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Elems_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Elems_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_finalize 5
typedef void (*func_mindustry_ui_Elems_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_notify 6
typedef void (*func_mindustry_ui_Elems_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_notifyAll 7
typedef void (*func_mindustry_ui_Elems_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_wait 8
typedef void (*func_mindustry_ui_Elems_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Elems_wait_long 9
typedef void (*func_mindustry_ui_Elems_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Elems_wait_long_int 10
typedef void (*func_mindustry_ui_Elems_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Elems(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Elems(jcontext ctx);
void init_mindustry_ui_Elems(jcontext ctx, jobject self);
jobject SM_mindustry_ui_Elems_check_java_lang_String_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_Button(jcontext ctx, jobject param0, jbool param1, jobject param2);
jobject SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3);
void SM_mindustry_ui_Elems_lambda$check$2_arc_func_Boolc_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_Elems_lambda$check$1_arc_scene_ui_Button_arc_func_Boolp(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_Elems_lambda$check$0_arc_scene_ui_Button_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
