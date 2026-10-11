#ifndef HEADER_mindustry_ui_fragments_MinimapFragment
#define HEADER_mindustry_ui_fragments_MinimapFragment

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_MinimapFragment {
	java_lang_Object parent;
	jbool F_shown;
	jfloat F_panx;
	jfloat F_pany;
	jfloat F_zoom;
	jfloat F_lastZoom;
	jfloat F_baseSize;
	jref F_elem;
} mindustry_ui_fragments_MinimapFragment;

extern Class class_mindustry_ui_fragments_MinimapFragment;


#define VTABLE_mindustry_ui_fragments_MinimapFragment_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_MinimapFragment_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_MinimapFragment_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_MinimapFragment_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_MinimapFragment_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_MinimapFragment_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_finalize 5
typedef void (*func_mindustry_ui_fragments_MinimapFragment_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_notify 6
typedef void (*func_mindustry_ui_fragments_MinimapFragment_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_notifyAll 7
typedef void (*func_mindustry_ui_fragments_MinimapFragment_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_wait 8
typedef void (*func_mindustry_ui_fragments_MinimapFragment_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_wait_long 9
typedef void (*func_mindustry_ui_fragments_MinimapFragment_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_MinimapFragment_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect 11
typedef jobject (*func_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group 12
typedef void (*func_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_panTo_float_float 13
typedef void (*func_mindustry_ui_fragments_MinimapFragment_panTo_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2 14
typedef jobject (*func_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_shown_R_boolean 15
typedef jbool (*func_mindustry_ui_fragments_MinimapFragment_shown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_hide 16
typedef void (*func_mindustry_ui_fragments_MinimapFragment_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_toggle 17
typedef void (*func_mindustry_ui_fragments_MinimapFragment_toggle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table 18
typedef void (*func_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$6 19
typedef void (*func_mindustry_ui_fragments_MinimapFragment_lambda$build$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean 20
typedef jbool (*func_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$2 21
typedef void (*func_mindustry_ui_fragments_MinimapFragment_lambda$build$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean 22
typedef jbool (*func_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float 23
typedef void (*func_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_mindustry_ui_fragments_MinimapFragment(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_MinimapFragment(jcontext ctx);
void init_mindustry_ui_fragments_MinimapFragment(jcontext ctx, jobject self);
jobject M_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MinimapFragment_panTo_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_ui_fragments_MinimapFragment_shown_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MinimapFragment_hide(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MinimapFragment_toggle(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MinimapFragment_lambda$build$6(jcontext ctx, jobject self);
void SM_mindustry_ui_fragments_MinimapFragment_lambda$build$5_arc_scene_ui_layout_Table(jcontext ctx, jobject param0);
jbool M_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MinimapFragment_lambda$build$2(jcontext ctx, jobject self);
jbool M_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
