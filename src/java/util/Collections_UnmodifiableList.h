#ifndef HEADER_java_util_Collections$UnmodifiableList
#define HEADER_java_util_Collections$UnmodifiableList

#include "Clearwing.h"
#include "java/util/Collections_UnmodifiableCollection.h"
#include "java/util/List.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$UnmodifiableList {
	java_util_Collections$UnmodifiableCollection parent;
	jref F_list;
} java_util_Collections$UnmodifiableList;

extern Class class_java_util_Collections$UnmodifiableList;


#define VTABLE_java_util_Collections$UnmodifiableList_hashCode_R_int 0
typedef jint (*func_java_util_Collections$UnmodifiableList_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$UnmodifiableList_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$UnmodifiableList_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$UnmodifiableList_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$UnmodifiableList_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_finalize 5
typedef void (*func_java_util_Collections$UnmodifiableList_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_notify 6
typedef void (*func_java_util_Collections$UnmodifiableList_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_notifyAll 7
typedef void (*func_java_util_Collections$UnmodifiableList_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_wait 8
typedef void (*func_java_util_Collections$UnmodifiableList_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_wait_long 9
typedef void (*func_java_util_Collections$UnmodifiableList_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$UnmodifiableList_wait_long_int 10
typedef void (*func_java_util_Collections$UnmodifiableList_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$UnmodifiableList_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_Collections$UnmodifiableList_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_Collections$UnmodifiableList_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Collections$UnmodifiableList_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_Collections$UnmodifiableList_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_Collections$UnmodifiableList_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_clear 16
typedef void (*func_java_util_Collections$UnmodifiableList_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_Collections$UnmodifiableList_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_Collections$UnmodifiableList_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_isEmpty_R_boolean 19
typedef jbool (*func_java_util_Collections$UnmodifiableList_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Collections$UnmodifiableList_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_Collections$UnmodifiableList_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_Collections$UnmodifiableList_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_size_R_int 23
typedef jint (*func_java_util_Collections$UnmodifiableList_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_Collections$UnmodifiableList_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_Collections$UnmodifiableList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_add_int_java_lang_Object 26
typedef void (*func_java_util_Collections$UnmodifiableList_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Collections$UnmodifiableList_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_java_util_Collections$UnmodifiableList_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Collections$UnmodifiableList_get_int_R_java_lang_Object 28
typedef jobject (*func_java_util_Collections$UnmodifiableList_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Collections$UnmodifiableList_indexOf_java_lang_Object_R_int 29
typedef jint (*func_java_util_Collections$UnmodifiableList_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_java_util_Collections$UnmodifiableList_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_java_util_Collections$UnmodifiableList_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableList_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_java_util_Collections$UnmodifiableList_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Collections$UnmodifiableList_sort_java_util_Comparator 33
typedef void (*func_java_util_Collections$UnmodifiableList_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableList_remove_int_R_java_lang_Object 34
typedef jobject (*func_java_util_Collections$UnmodifiableList_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Collections$UnmodifiableList_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_Collections$UnmodifiableList_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Collections$UnmodifiableList_subList_int_int_R_java_util_List 36
typedef jobject (*func_java_util_Collections$UnmodifiableList_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Collections$UnmodifiableList_readResolve_R_java_lang_Object 37
typedef jobject (*func_java_util_Collections$UnmodifiableList_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_Collections$UnmodifiableList(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$UnmodifiableList(jcontext ctx);
void init_java_util_Collections$UnmodifiableList_java_util_List(jcontext ctx, jobject self, jobject param0);
void M_java_util_Collections$UnmodifiableList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_Collections$UnmodifiableList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_Collections$UnmodifiableList_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$UnmodifiableList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jint M_java_util_Collections$UnmodifiableList_hashCode_R_int(jcontext ctx, jobject self);
jint M_java_util_Collections$UnmodifiableList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Collections$UnmodifiableList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$UnmodifiableList_listIterator_R_java_util_ListIterator(jcontext ctx, jobject self);
jobject M_java_util_Collections$UnmodifiableList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Collections$UnmodifiableList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Collections$UnmodifiableList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_util_Collections$UnmodifiableList_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_util_Collections$UnmodifiableList_readResolve_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
