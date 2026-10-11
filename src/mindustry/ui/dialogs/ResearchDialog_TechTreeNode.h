#ifndef HEADER_mindustry_ui_dialogs_ResearchDialog$TechTreeNode
#define HEADER_mindustry_ui_dialogs_ResearchDialog$TechTreeNode

#include "Clearwing.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_ResearchDialog$TechTreeNode {
	mindustry_ui_layout_TreeLayout$TreeNode parent;
	jref F_node;
	jbool F_visible;
	jbool F_selectable;
	jref F_this$0;
} mindustry_ui_dialogs_ResearchDialog$TechTreeNode;

extern Class class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode;


#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_finalize 5
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_notify 6
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_wait 8
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_wait_long 9
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_isLeaf_R_boolean 11
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_isLeaf_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_calcWidth_R_float 12
typedef jfloat (*func_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_calcWidth_R_float)(jcontext ctx, jobject self);

void mark_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx);
void init_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog_mindustry_content_TechTree$TechNode_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
