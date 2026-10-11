#ifndef HEADER_arc_scene_utils_Selection
#define HEADER_arc_scene_utils_Selection

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/scene/utils/Disableable.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_utils_Selection {
	java_lang_Object parent;
	jref F_selected;
	jref F_old;
	jbool F_isDisabled;
	jbool F_multiple;
	jbool F_required;
	jref F_lastSelected;
	jref F_element;
	jbool F_toggle;
	jbool F_programmaticChangeEvents;
} arc_scene_utils_Selection;

extern Class class_arc_scene_utils_Selection;


#define VTABLE_arc_scene_utils_Selection_hashCode_R_int 0
typedef jint (*func_arc_scene_utils_Selection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_utils_Selection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_utils_Selection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_utils_Selection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_utils_Selection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_finalize 5
typedef void (*func_arc_scene_utils_Selection_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_notify 6
typedef void (*func_arc_scene_utils_Selection_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_notifyAll 7
typedef void (*func_arc_scene_utils_Selection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_wait 8
typedef void (*func_arc_scene_utils_Selection_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_wait_long 9
typedef void (*func_arc_scene_utils_Selection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_utils_Selection_wait_long_int 10
typedef void (*func_arc_scene_utils_Selection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_utils_Selection_isDisabled_R_boolean 11
typedef jbool (*func_arc_scene_utils_Selection_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_setDisabled_boolean 12
typedef void (*func_arc_scene_utils_Selection_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_utils_Selection_iterator_R_java_util_Iterator 13
typedef jobject (*func_arc_scene_utils_Selection_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_forEach_java_util_function_Consumer 14
typedef void (*func_arc_scene_utils_Selection_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_spliterator_R_java_util_Spliterator 15
typedef jobject (*func_arc_scene_utils_Selection_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_setActor_arc_scene_Element 16
typedef void (*func_arc_scene_utils_Selection_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_choose_java_lang_Object 17
typedef void (*func_arc_scene_utils_Selection_choose_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_hasItems_R_boolean 18
typedef jbool (*func_arc_scene_utils_Selection_hasItems_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_isEmpty_R_boolean 19
typedef jbool (*func_arc_scene_utils_Selection_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_size_R_int 20
typedef jint (*func_arc_scene_utils_Selection_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet 21
typedef jobject (*func_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_first_R_java_lang_Object 22
typedef jobject (*func_arc_scene_utils_Selection_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_snapshot 23
typedef void (*func_arc_scene_utils_Selection_snapshot)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_revert 24
typedef void (*func_arc_scene_utils_Selection_revert)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_cleanup 25
typedef void (*func_arc_scene_utils_Selection_cleanup)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_set_java_lang_Object 26
typedef void (*func_arc_scene_utils_Selection_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_setAll_arc_struct_Seq 27
typedef void (*func_arc_scene_utils_Selection_setAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_add_java_lang_Object 28
typedef void (*func_arc_scene_utils_Selection_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_addAll_arc_struct_Seq 29
typedef void (*func_arc_scene_utils_Selection_addAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_remove_java_lang_Object 30
typedef void (*func_arc_scene_utils_Selection_remove_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_removeAll_arc_struct_Seq 31
typedef void (*func_arc_scene_utils_Selection_removeAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_clear 32
typedef void (*func_arc_scene_utils_Selection_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_changed 33
typedef void (*func_arc_scene_utils_Selection_changed)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_fireChangeEvent_R_boolean 34
typedef jbool (*func_arc_scene_utils_Selection_fireChangeEvent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean 35
typedef jbool (*func_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object 36
typedef jobject (*func_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_toArray_R_arc_struct_Seq 37
typedef jobject (*func_arc_scene_utils_Selection_toArray_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq 38
typedef jobject (*func_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Selection_getToggle_R_boolean 39
typedef jbool (*func_arc_scene_utils_Selection_getToggle_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_setToggle_boolean 40
typedef void (*func_arc_scene_utils_Selection_setToggle_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_utils_Selection_getMultiple_R_boolean 41
typedef jbool (*func_arc_scene_utils_Selection_getMultiple_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_setMultiple_boolean 42
typedef void (*func_arc_scene_utils_Selection_setMultiple_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_utils_Selection_getRequired_R_boolean 43
typedef jbool (*func_arc_scene_utils_Selection_getRequired_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Selection_setRequired_boolean 44
typedef void (*func_arc_scene_utils_Selection_setRequired_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean 45
typedef void (*func_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_utils_Selection(jobject object, jint mark, jint depth);
void clinit_arc_scene_utils_Selection(jcontext ctx);
void init_arc_scene_utils_Selection(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_setActor_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_choose_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_utils_Selection_hasItems_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_utils_Selection_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_arc_scene_utils_Selection_size_R_int(jcontext ctx, jobject self);
jobject M_arc_scene_utils_Selection_items_R_arc_struct_OrderedSet(jcontext ctx, jobject self);
jobject M_arc_scene_utils_Selection_first_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_snapshot(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_revert(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_cleanup(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_set_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_setAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_addAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_remove_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_removeAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_utils_Selection_clear(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_changed(jcontext ctx, jobject self);
jbool M_arc_scene_utils_Selection_fireChangeEvent_R_boolean(jcontext ctx, jobject self);
jbool M_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_utils_Selection_getLastSelected_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_scene_utils_Selection_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_scene_utils_Selection_toArray_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_scene_utils_Selection_toArray_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_utils_Selection_isDisabled_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_setDisabled_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_utils_Selection_getToggle_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_setToggle_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_utils_Selection_getMultiple_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_setMultiple_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_utils_Selection_getRequired_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_utils_Selection_setRequired_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_utils_Selection_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_scene_utils_Selection_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
