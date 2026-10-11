#ifndef HEADER_arc_scene_ui_layout_Scl
#define HEADER_arc_scene_ui_layout_Scl

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_layout_Scl {
	java_lang_Object parent;
} arc_scene_ui_layout_Scl;

extern Class class_arc_scene_ui_layout_Scl;

extern jfloat SF_arc_scene_ui_layout_Scl_scl;
extern jfloat SF_arc_scene_ui_layout_Scl_addition;
extern jfloat SF_arc_scene_ui_layout_Scl_product;
extern jfloat SF_arc_scene_ui_layout_Scl_debugScale;

#define VTABLE_arc_scene_ui_layout_Scl_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_layout_Scl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_layout_Scl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_layout_Scl_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_layout_Scl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_layout_Scl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_layout_Scl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_finalize 5
typedef void (*func_arc_scene_ui_layout_Scl_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_notify 6
typedef void (*func_arc_scene_ui_layout_Scl_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_notifyAll 7
typedef void (*func_arc_scene_ui_layout_Scl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_wait 8
typedef void (*func_arc_scene_ui_layout_Scl_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_layout_Scl_wait_long 9
typedef void (*func_arc_scene_ui_layout_Scl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_layout_Scl_wait_long_int 10
typedef void (*func_arc_scene_ui_layout_Scl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_layout_Scl(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_layout_Scl(jcontext ctx);
void init_arc_scene_ui_layout_Scl(jcontext ctx, jobject self);
void SM_arc_scene_ui_layout_Scl_setProduct_float(jcontext ctx, jfloat param0);
void SM_arc_scene_ui_layout_Scl_setAddition_float(jcontext ctx, jfloat param0);
jfloat SM_arc_scene_ui_layout_Scl_scl_R_float(jcontext ctx);
jfloat SM_arc_scene_ui_layout_Scl_scl_float_R_float(jcontext ctx, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
