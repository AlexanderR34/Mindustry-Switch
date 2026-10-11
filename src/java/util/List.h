#ifndef HEADER_java_util_List
#define HEADER_java_util_List

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Collection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_List {
	java_lang_Object parent;
} java_util_List;

extern Class class_java_util_List;


#define INDEX_java_util_List_add_int_java_lang_Object 0
typedef void (*func_java_util_List_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_java_util_List_add_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_List_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_addAll_int_java_util_Collection_R_boolean 2
typedef jbool (*func_java_util_List_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_java_util_List_addAll_java_util_Collection_R_boolean 3
typedef jbool (*func_java_util_List_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_clear 4
typedef void (*func_java_util_List_clear)(jcontext ctx, jobject self);
#define INDEX_java_util_List_contains_java_lang_Object_R_boolean 5
typedef jbool (*func_java_util_List_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_containsAll_java_util_Collection_R_boolean 6
typedef jbool (*func_java_util_List_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_equals_java_lang_Object_R_boolean 7
typedef jbool (*func_java_util_List_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_get_int_R_java_lang_Object 8
typedef jobject (*func_java_util_List_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_util_List_hashCode_R_int 9
typedef jint (*func_java_util_List_hashCode_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_List_indexOf_java_lang_Object_R_int 10
typedef jint (*func_java_util_List_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_isEmpty_R_boolean 11
typedef jbool (*func_java_util_List_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_List_iterator_R_java_util_Iterator 12
typedef jobject (*func_java_util_List_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define INDEX_java_util_List_lastIndexOf_java_lang_Object_R_int 13
typedef jint (*func_java_util_List_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_listIterator_R_java_util_ListIterator 14
typedef jobject (*func_java_util_List_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define INDEX_java_util_List_listIterator_int_R_java_util_ListIterator 15
typedef jobject (*func_java_util_List_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_util_List_sort_java_util_Comparator 16
typedef void (*func_java_util_List_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_remove_int_R_java_lang_Object 17
typedef jobject (*func_java_util_List_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_util_List_remove_java_lang_Object_R_boolean 18
typedef jbool (*func_java_util_List_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_removeAll_java_util_Collection_R_boolean 19
typedef jbool (*func_java_util_List_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_retainAll_java_util_Collection_R_boolean 20
typedef jbool (*func_java_util_List_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_set_int_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_List_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_java_util_List_size_R_int 22
typedef jint (*func_java_util_List_size_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_List_subList_int_int_R_java_util_List 23
typedef jobject (*func_java_util_List_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_java_util_List_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_List_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_List_spliterator_R_java_util_Spliterator 26
typedef jobject (*func_java_util_List_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);

void mark_java_util_List(jobject object, jint mark, jint depth);
void clinit_java_util_List(jcontext ctx);
void M_java_util_List_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_List_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
