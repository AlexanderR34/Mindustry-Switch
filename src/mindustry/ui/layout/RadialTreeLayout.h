#ifndef HEADER_mindustry_ui_layout_RadialTreeLayout
#define HEADER_mindustry_ui_layout_RadialTreeLayout

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/ui/layout/TreeLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_layout_RadialTreeLayout {
	java_lang_Object parent;
	jfloat F_startRadius;
	jfloat F_delta;
} mindustry_ui_layout_RadialTreeLayout;

extern Class class_mindustry_ui_layout_RadialTreeLayout;

extern jobject SF_mindustry_ui_layout_RadialTreeLayout_visited;
extern jobject SF_mindustry_ui_layout_RadialTreeLayout_queue;

#define VTABLE_mindustry_ui_layout_RadialTreeLayout_hashCode_R_int 0
typedef jint (*func_mindustry_ui_layout_RadialTreeLayout_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_layout_RadialTreeLayout_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_layout_RadialTreeLayout_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_layout_RadialTreeLayout_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_layout_RadialTreeLayout_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_finalize 5
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_notify 6
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_notifyAll 7
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_wait 8
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_wait_long 9
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_wait_long_int 10
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode 11
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float 12
typedef void (*func_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int 13
typedef jint (*func_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);

void mark_mindustry_ui_layout_RadialTreeLayout(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_layout_RadialTreeLayout(jcontext ctx);
void init_mindustry_ui_layout_RadialTreeLayout(jcontext ctx, jobject self);
void M_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jint M_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
