#ifndef HEADER_mindustry_ui_builder_UiTreeBuilder$BuildResult
#define HEADER_mindustry_ui_builder_UiTreeBuilder$BuildResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_UiTreeBuilder$BuildResult {
	java_lang_Object parent;
	jref F_idElements;
	jref F_images;
} mindustry_ui_builder_UiTreeBuilder$BuildResult;

extern Class class_mindustry_ui_builder_UiTreeBuilder$BuildResult;


#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_finalize 5
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_notify 6
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_notifyAll 7
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_wait 8
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_wait_long 9
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_UiTreeBuilder$BuildResult_wait_long_int 10
typedef void (*func_mindustry_ui_builder_UiTreeBuilder$BuildResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_builder_UiTreeBuilder$BuildResult(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_UiTreeBuilder$BuildResult(jcontext ctx);
void init_mindustry_ui_builder_UiTreeBuilder$BuildResult_arc_struct_ObjectMap_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
