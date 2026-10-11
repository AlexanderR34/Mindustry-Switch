#ifndef HEADER_arc_struct_ObjectSet
#define HEADER_arc_struct_ObjectSet

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "arc/util/Eachable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectSet {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jref F_iterator1;
	jref F_iterator2;
} arc_struct_ObjectSet;

extern Class class_arc_struct_ObjectSet;


#define VTABLE_arc_struct_ObjectSet_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_finalize 5
typedef void (*func_arc_struct_ObjectSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_notify 6
typedef void (*func_arc_struct_ObjectSet_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_notifyAll 7
typedef void (*func_arc_struct_ObjectSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_wait 8
typedef void (*func_arc_struct_ObjectSet_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_wait_long 9
typedef void (*func_arc_struct_ObjectSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectSet_wait_long_int 10
typedef void (*func_arc_struct_ObjectSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectSet_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectSet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectSet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectSet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_each_arc_func_Cons 14
typedef void (*func_arc_struct_ObjectSet_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet 15
typedef jobject (*func_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet 16
typedef jobject (*func_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq 17
typedef jobject (*func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object 18
typedef jobject (*func_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_place_java_lang_Object_R_int 19
typedef jint (*func_arc_struct_ObjectSet_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int 20
typedef jint (*func_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_any_R_boolean 21
typedef jbool (*func_arc_struct_ObjectSet_any_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean 22
typedef jbool (*func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_addAll_arc_struct_Seq 23
typedef void (*func_arc_struct_ObjectSet_addAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int 24
typedef void (*func_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean 25
typedef jbool (*func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean 26
typedef jbool (*func_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet 27
typedef void (*func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_addResize_java_lang_Object 28
typedef void (*func_arc_struct_ObjectSet_addResize_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int 29
typedef void (*func_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object 30
typedef void (*func_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_removeAll_arc_struct_Seq 31
typedef void (*func_arc_struct_ObjectSet_removeAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean 32
typedef jbool (*func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_notEmpty_R_boolean 33
typedef jbool (*func_arc_struct_ObjectSet_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_isEmpty_R_boolean 34
typedef jbool (*func_arc_struct_ObjectSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_shrink_int 35
typedef void (*func_arc_struct_ObjectSet_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectSet_clear_int 36
typedef void (*func_arc_struct_ObjectSet_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectSet_clear 37
typedef void (*func_arc_struct_ObjectSet_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean 38
typedef jbool (*func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object 39
typedef jobject (*func_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_first_R_java_lang_Object 40
typedef jobject (*func_arc_struct_ObjectSet_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet_ensureCapacity_int 41
typedef void (*func_arc_struct_ObjectSet_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectSet_resize_int 42
typedef void (*func_arc_struct_ObjectSet_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String 43
typedef jobject (*func_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator 44
typedef jobject (*func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectSet(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectSet(jcontext ctx);
void init_arc_struct_ObjectSet(jcontext ctx, jobject self);
void init_arc_struct_ObjectSet_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ObjectSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_ObjectSet_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(jcontext ctx, jobject param0);
jobject SM_arc_struct_ObjectSet_with_arc_struct_Seq_R_arc_struct_ObjectSet(jcontext ctx, jobject param0);
jobject M_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectSet_select_arc_func_Boolf_R_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_struct_ObjectSet_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet_find_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectSet_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectSet_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectSet_any_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectSet_addAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectSet_addAll_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectSet_addResize_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ObjectSet_removeAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectSet_removeAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectSet_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectSet_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_ObjectSet_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectSet_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectSet_clear(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet_first_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_ObjectSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectSet_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_ObjectSet_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectSet_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self);
jint SM_arc_struct_ObjectSet_tableSize_int_float_R_int(jcontext ctx, jint param0, jfloat param1);
jobject M_arc_struct_ObjectSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
