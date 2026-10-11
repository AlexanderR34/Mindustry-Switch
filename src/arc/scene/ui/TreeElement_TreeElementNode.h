#ifndef HEADER_arc_scene_ui_TreeElement$TreeElementNode
#define HEADER_arc_scene_ui_TreeElement$TreeElementNode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TreeElement$TreeElementNode {
	java_lang_Object parent;
	jref F_children;
	jref F_childProvider;
	jref F_element;
	jref F_parent;
	jbool F_selectable;
	jbool F_hoverable;
	jbool F_expanded;
	jref F_icon;
	jfloat F_height;
	jref F_object;
} arc_scene_ui_TreeElement$TreeElementNode;

extern Class class_arc_scene_ui_TreeElement$TreeElementNode;


#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TreeElement$TreeElementNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TreeElement$TreeElementNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_finalize 5
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_notify 6
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_notifyAll 7
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_wait 8
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_wait_long 9
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_wait_long_int 10
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode 11
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode 12
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean 13
typedef jbool (*func_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement 14
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement 15
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode 16
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode 17
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode 18
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_remove 19
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode 20
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeAll 21
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_removeAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement 22
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean 23
typedef jbool (*func_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean 24
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq 25
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_updateChildren 26
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_updateChildren)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode 27
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object 28
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object 29
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable 30
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable 31
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int 32
typedef jint (*func_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode 33
typedef jobject (*func_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_collapseAll 34
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_collapseAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandAll 35
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_expandAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandTo 36
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_expandTo)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean 37
typedef jbool (*func_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean 38
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq 39
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq 40
typedef void (*func_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float 41
typedef jfloat (*func_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float)(jcontext ctx, jobject self);

void mark_arc_scene_ui_TreeElement$TreeElementNode(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx);
void init_arc_scene_ui_TreeElement$TreeElementNode_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_scene_ui_TreeElement$TreeElementNode_remove(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TreeElement$TreeElementNode_removeAll(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement(jcontext ctx, jobject self);
jbool M_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_updateChildren(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0);
jint M_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int(jcontext ctx, jobject self);
jobject M_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TreeElement$TreeElementNode_collapseAll(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_expandAll(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_expandTo(jcontext ctx, jobject self);
jbool M_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
