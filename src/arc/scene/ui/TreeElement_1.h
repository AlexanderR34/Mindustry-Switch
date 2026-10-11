#ifndef HEADER_arc_scene_ui_TreeElement$1
#define HEADER_arc_scene_ui_TreeElement$1

#include "Clearwing.h"
#include "arc/scene/utils/Selection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TreeElement$1 {
	arc_scene_utils_Selection parent;
	jref F_this$0;
} arc_scene_ui_TreeElement$1;

extern Class class_arc_scene_ui_TreeElement$1;


#define VTABLE_arc_scene_ui_TreeElement$1_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TreeElement$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TreeElement$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TreeElement$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TreeElement$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TreeElement$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_finalize 5
typedef void (*func_arc_scene_ui_TreeElement$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_notify 6
typedef void (*func_arc_scene_ui_TreeElement$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_notifyAll 7
typedef void (*func_arc_scene_ui_TreeElement$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_wait 8
typedef void (*func_arc_scene_ui_TreeElement$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_wait_long 9
typedef void (*func_arc_scene_ui_TreeElement$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TreeElement$1_wait_long_int 10
typedef void (*func_arc_scene_ui_TreeElement$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_TreeElement$1_isDisabled_R_boolean 11
typedef jbool (*func_arc_scene_ui_TreeElement$1_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_setDisabled_boolean 12
typedef void (*func_arc_scene_ui_TreeElement$1_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$1_iterator_R_java_util_Iterator 13
typedef jobject (*func_arc_scene_ui_TreeElement$1_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_forEach_java_util_function_Consumer 14
typedef void (*func_arc_scene_ui_TreeElement$1_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_spliterator_R_java_util_Spliterator 15
typedef jobject (*func_arc_scene_ui_TreeElement$1_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_setActor_arc_scene_Element 16
typedef void (*func_arc_scene_ui_TreeElement$1_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_choose_java_lang_Object 17
typedef void (*func_arc_scene_ui_TreeElement$1_choose_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_hasItems_R_boolean 18
typedef jbool (*func_arc_scene_ui_TreeElement$1_hasItems_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_isEmpty_R_boolean 19
typedef jbool (*func_arc_scene_ui_TreeElement$1_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_size_R_int 20
typedef jint (*func_arc_scene_ui_TreeElement$1_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_items_R_arc_struct_OrderedSet 21
typedef jobject (*func_arc_scene_ui_TreeElement$1_items_R_arc_struct_OrderedSet)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_first_R_java_lang_Object 22
typedef jobject (*func_arc_scene_ui_TreeElement$1_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_snapshot 23
typedef void (*func_arc_scene_ui_TreeElement$1_snapshot)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_revert 24
typedef void (*func_arc_scene_ui_TreeElement$1_revert)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_cleanup 25
typedef void (*func_arc_scene_ui_TreeElement$1_cleanup)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_set_java_lang_Object 26
typedef void (*func_arc_scene_ui_TreeElement$1_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_setAll_arc_struct_Seq 27
typedef void (*func_arc_scene_ui_TreeElement$1_setAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_add_java_lang_Object 28
typedef void (*func_arc_scene_ui_TreeElement$1_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_addAll_arc_struct_Seq 29
typedef void (*func_arc_scene_ui_TreeElement$1_addAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_remove_java_lang_Object 30
typedef void (*func_arc_scene_ui_TreeElement$1_remove_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_removeAll_arc_struct_Seq 31
typedef void (*func_arc_scene_ui_TreeElement$1_removeAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_clear 32
typedef void (*func_arc_scene_ui_TreeElement$1_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_changed 33
typedef void (*func_arc_scene_ui_TreeElement$1_changed)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_fireChangeEvent_R_boolean 34
typedef jbool (*func_arc_scene_ui_TreeElement$1_fireChangeEvent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_contains_java_lang_Object_R_boolean 35
typedef jbool (*func_arc_scene_ui_TreeElement$1_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_getLastSelected_R_java_lang_Object 36
typedef jobject (*func_arc_scene_ui_TreeElement$1_getLastSelected_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_toArray_R_arc_struct_Seq 37
typedef jobject (*func_arc_scene_ui_TreeElement$1_toArray_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_toArray_arc_struct_Seq_R_arc_struct_Seq 38
typedef jobject (*func_arc_scene_ui_TreeElement$1_toArray_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$1_getToggle_R_boolean 39
typedef jbool (*func_arc_scene_ui_TreeElement$1_getToggle_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_setToggle_boolean 40
typedef void (*func_arc_scene_ui_TreeElement$1_setToggle_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$1_getMultiple_R_boolean 41
typedef jbool (*func_arc_scene_ui_TreeElement$1_getMultiple_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_setMultiple_boolean 42
typedef void (*func_arc_scene_ui_TreeElement$1_setMultiple_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$1_getRequired_R_boolean 43
typedef jbool (*func_arc_scene_ui_TreeElement$1_getRequired_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$1_setRequired_boolean 44
typedef void (*func_arc_scene_ui_TreeElement$1_setRequired_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_ui_TreeElement$1_setProgrammaticChangeEvents_boolean 45
typedef void (*func_arc_scene_ui_TreeElement$1_setProgrammaticChangeEvents_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_ui_TreeElement$1(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TreeElement$1(jcontext ctx);
void init_arc_scene_ui_TreeElement$1_arc_scene_ui_TreeElement(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TreeElement$1_changed(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
