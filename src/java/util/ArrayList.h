#ifndef HEADER_java_util_ArrayList
#define HEADER_java_util_ArrayList

#include "Clearwing.h"
#include "java/util/AbstractList.h"
#include "java/util/List.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ArrayList {
	java_util_AbstractList parent;
	jint F_firstIndex;
	jint F_size;
	jref F_array;
} java_util_ArrayList;

extern Class class_java_util_ArrayList;

extern jlong SF_java_util_ArrayList_serialVersionUID;

#define VTABLE_java_util_ArrayList_hashCode_R_int 0
typedef jint (*func_java_util_ArrayList_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_ArrayList_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_ArrayList_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_ArrayList_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_toString_R_java_lang_String 4
typedef jobject (*func_java_util_ArrayList_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_finalize 5
typedef void (*func_java_util_ArrayList_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_notify 6
typedef void (*func_java_util_ArrayList_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_notifyAll 7
typedef void (*func_java_util_ArrayList_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_wait 8
typedef void (*func_java_util_ArrayList_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_wait_long 9
typedef void (*func_java_util_ArrayList_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_ArrayList_wait_long_int 10
typedef void (*func_java_util_ArrayList_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_ArrayList_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_ArrayList_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_ArrayList_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_ArrayList_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_ArrayList_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_ArrayList_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_clear 16
typedef void (*func_java_util_ArrayList_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_ArrayList_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_ArrayList_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_isEmpty_R_boolean 19
typedef jbool (*func_java_util_ArrayList_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_ArrayList_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_ArrayList_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_ArrayList_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_size_R_int 23
typedef jint (*func_java_util_ArrayList_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_ArrayList_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_add_int_java_lang_Object 26
typedef void (*func_java_util_ArrayList_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_ArrayList_get_int_R_java_lang_Object 28
typedef jobject (*func_java_util_ArrayList_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_indexOf_java_lang_Object_R_int 29
typedef jint (*func_java_util_ArrayList_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_java_util_ArrayList_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayList_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_java_util_ArrayList_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_sort_java_util_Comparator 33
typedef void (*func_java_util_ArrayList_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayList_remove_int_R_java_lang_Object 34
typedef jobject (*func_java_util_ArrayList_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_ArrayList_subList_int_int_R_java_util_List 36
typedef jobject (*func_java_util_ArrayList_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_ArrayList_removeRange_int_int 37
typedef void (*func_java_util_ArrayList_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object 38
typedef jobject (*func_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_ensureCapacity_int 39
typedef void (*func_java_util_ArrayList_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_growAtEnd_int 40
typedef void (*func_java_util_ArrayList_growAtEnd_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_growAtFront_int 41
typedef void (*func_java_util_ArrayList_growAtFront_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayList_growForInsert_int_int 42
typedef void (*func_java_util_ArrayList_growForInsert_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_ArrayList_trimToSize 43
typedef void (*func_java_util_ArrayList_trimToSize)(jcontext ctx, jobject self);

void mark_java_util_ArrayList(jobject object, jint mark, jint depth);
void clinit_java_util_ArrayList(jcontext ctx);
void init_java_util_ArrayList(jcontext ctx, jobject self);
void init_java_util_ArrayList_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_java_util_ArrayList_int(jcontext ctx, jobject self, jint param0);
void init_java_util_ArrayList_java_util_Collection(jcontext ctx, jobject self, jobject param0);
void SM_java_util_ArrayList_toObjectArray_Array1_java_lang_Object_java_util_Collection(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_util_ArrayList_toObjectArray_java_util_Collection_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jobject M_java_util_ArrayList_newElementArray_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_java_util_ArrayList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_ArrayList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_ArrayList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayList_clear(jcontext ctx, jobject self);
jbool M_java_util_ArrayList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayList_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
jobject M_java_util_ArrayList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_java_util_ArrayList_growAtEnd_int(jcontext ctx, jobject self, jint param0);
void M_java_util_ArrayList_growAtFront_int(jcontext ctx, jobject self, jint param0);
void M_java_util_ArrayList_growForInsert_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_util_ArrayList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayList_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_java_util_ArrayList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_ArrayList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_java_util_ArrayList_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayList_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_util_ArrayList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_java_util_ArrayList_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_ArrayList_clone_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayList_trimToSize(jcontext ctx, jobject self);
void M_java_util_ArrayList_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
