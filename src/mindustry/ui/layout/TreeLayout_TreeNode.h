#ifndef HEADER_mindustry_ui_layout_TreeLayout$TreeNode
#define HEADER_mindustry_ui_layout_TreeLayout$TreeNode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_layout_TreeLayout$TreeNode {
	java_lang_Object parent;
	jfloat F_width;
	jfloat F_height;
	jfloat F_x;
	jfloat F_y;
	jref F_children;
	jref F_parent;
	jfloat F_mode;
	jfloat F_prelim;
	jfloat F_change;
	jfloat F_shift;
	jfloat F_cachedWidth;
	jint F_number;
	jint F_leaves;
	jref F_thread;
	jref F_ancestor;
} mindustry_ui_layout_TreeLayout$TreeNode;

extern Class class_mindustry_ui_layout_TreeLayout$TreeNode;


#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_hashCode_R_int 0
typedef jint (*func_mindustry_ui_layout_TreeLayout$TreeNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_layout_TreeLayout$TreeNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_layout_TreeLayout$TreeNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_layout_TreeLayout$TreeNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_layout_TreeLayout$TreeNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_finalize 5
typedef void (*func_mindustry_ui_layout_TreeLayout$TreeNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_notify 6
typedef void (*func_mindustry_ui_layout_TreeLayout$TreeNode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_notifyAll 7
typedef void (*func_mindustry_ui_layout_TreeLayout$TreeNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_wait 8
typedef void (*func_mindustry_ui_layout_TreeLayout$TreeNode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_wait_long 9
typedef void (*func_mindustry_ui_layout_TreeLayout$TreeNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_wait_long_int 10
typedef void (*func_mindustry_ui_layout_TreeLayout$TreeNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean 11
typedef jbool (*func_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float 12
typedef jfloat (*func_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float)(jcontext ctx, jobject self);

void mark_mindustry_ui_layout_TreeLayout$TreeNode(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx);
void init_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self);
jbool M_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
