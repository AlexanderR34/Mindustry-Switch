#ifndef HEADER_mindustry_ui_builder_UiTreeBuilder$BuildContext
#define HEADER_mindustry_ui_builder_UiTreeBuilder$BuildContext

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_UiTreeBuilder$BuildContext {
	java_lang_Object parent;
	jref F_resultListener;
	jref F_idElements;
	jref F_buttonGroups;
	jref F_images;
} mindustry_ui_builder_UiTreeBuilder$BuildContext;

extern Class class_mindustry_ui_builder_UiTreeBuilder$BuildContext;


#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_finalize 5
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_notify 6
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_notifyAll 7
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_wait 8
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_wait_long 9
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_wait_long_int 10
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup 11
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_builder_UiTreeBuilder$BuildContext(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_UiTreeBuilder$BuildContext(jcontext ctx);
void init_mindustry_ui_builder_UiTreeBuilder$BuildContext_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_builder_UiTreeBuilder$BuildContext_group_java_lang_String_R_arc_scene_ui_ButtonGroup(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
