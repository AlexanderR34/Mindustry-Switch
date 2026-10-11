#ifndef HEADER_java_util_LinkedList
#define HEADER_java_util_LinkedList

#include "Clearwing.h"
#include "java/util/AbstractSequentialList.h"
#include "java/util/List.h"
#include "java/util/Deque.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_LinkedList {
	java_util_AbstractSequentialList parent;
	jint F_size;
	jref F_voidLink;
} java_util_LinkedList;

extern Class class_java_util_LinkedList;


#define VTABLE_java_util_LinkedList_hashCode_R_int 0
typedef jint (*func_java_util_LinkedList_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_LinkedList_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_LinkedList_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_LinkedList_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_toString_R_java_lang_String 4
typedef jobject (*func_java_util_LinkedList_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_finalize 5
typedef void (*func_java_util_LinkedList_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_notify 6
typedef void (*func_java_util_LinkedList_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_notifyAll 7
typedef void (*func_java_util_LinkedList_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_wait 8
typedef void (*func_java_util_LinkedList_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_wait_long 9
typedef void (*func_java_util_LinkedList_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_LinkedList_wait_long_int 10
typedef void (*func_java_util_LinkedList_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_LinkedList_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_LinkedList_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_LinkedList_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_LinkedList_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_LinkedList_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_LinkedList_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_clear 16
typedef void (*func_java_util_LinkedList_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_LinkedList_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_LinkedList_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_isEmpty_R_boolean 19
typedef jbool (*func_java_util_LinkedList_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_LinkedList_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_LinkedList_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_LinkedList_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_size_R_int 23
typedef jint (*func_java_util_LinkedList_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_LinkedList_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_add_int_java_lang_Object 26
typedef void (*func_java_util_LinkedList_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_LinkedList_get_int_R_java_lang_Object 28
typedef jobject (*func_java_util_LinkedList_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_LinkedList_indexOf_java_lang_Object_R_int 29
typedef jint (*func_java_util_LinkedList_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_java_util_LinkedList_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_java_util_LinkedList_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_LinkedList_sort_java_util_Comparator 33
typedef void (*func_java_util_LinkedList_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_remove_int_R_java_lang_Object 34
typedef jobject (*func_java_util_LinkedList_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_LinkedList_subList_int_int_R_java_util_List 36
typedef jobject (*func_java_util_LinkedList_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_LinkedList_removeRange_int_int 37
typedef void (*func_java_util_LinkedList_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_LinkedList_offer_java_lang_Object_R_boolean 38
typedef jbool (*func_java_util_LinkedList_offer_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_poll_R_java_lang_Object 39
typedef jobject (*func_java_util_LinkedList_poll_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_remove_R_java_lang_Object 40
typedef jobject (*func_java_util_LinkedList_remove_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_peek_R_java_lang_Object 41
typedef jobject (*func_java_util_LinkedList_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_element_R_java_lang_Object 42
typedef jobject (*func_java_util_LinkedList_element_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_addFirst_java_lang_Object 43
typedef void (*func_java_util_LinkedList_addFirst_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_addLast_java_lang_Object 44
typedef void (*func_java_util_LinkedList_addLast_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean 45
typedef jbool (*func_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_offerLast_java_lang_Object_R_boolean 46
typedef jbool (*func_java_util_LinkedList_offerLast_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_removeFirst_R_java_lang_Object 47
typedef jobject (*func_java_util_LinkedList_removeFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_removeLast_R_java_lang_Object 48
typedef jobject (*func_java_util_LinkedList_removeLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_pollFirst_R_java_lang_Object 49
typedef jobject (*func_java_util_LinkedList_pollFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_pollLast_R_java_lang_Object 50
typedef jobject (*func_java_util_LinkedList_pollLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_getFirst_R_java_lang_Object 51
typedef jobject (*func_java_util_LinkedList_getFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_getLast_R_java_lang_Object 52
typedef jobject (*func_java_util_LinkedList_getLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_peekFirst_R_java_lang_Object 53
typedef jobject (*func_java_util_LinkedList_peekFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_peekLast_R_java_lang_Object 54
typedef jobject (*func_java_util_LinkedList_peekLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean 55
typedef jbool (*func_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean 56
typedef jbool (*func_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_push_java_lang_Object 57
typedef void (*func_java_util_LinkedList_push_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_pop_R_java_lang_Object 58
typedef jobject (*func_java_util_LinkedList_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_descendingIterator_R_java_util_Iterator 59
typedef jobject (*func_java_util_LinkedList_descendingIterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean 60
typedef jbool (*func_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean 61
typedef jbool (*func_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_getFirstImpl_R_java_lang_Object 62
typedef jobject (*func_java_util_LinkedList_getFirstImpl_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_removeFirstImpl_R_java_lang_Object 63
typedef jobject (*func_java_util_LinkedList_removeFirstImpl_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_removeLastImpl_R_java_lang_Object 64
typedef jobject (*func_java_util_LinkedList_removeLastImpl_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean 65
typedef jbool (*func_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean 66
typedef jbool (*func_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedList_peekFirstImpl_R_java_lang_Object 67
typedef jobject (*func_java_util_LinkedList_peekFirstImpl_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_LinkedList(jobject object, jint mark, jint depth);
void clinit_java_util_LinkedList(jcontext ctx);
void init_java_util_LinkedList(jcontext ctx, jobject self);
void init_java_util_LinkedList_java_util_Collection(jcontext ctx, jobject self, jobject param0);
void M_java_util_LinkedList_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_LinkedList_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_addLastImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_LinkedList_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_LinkedList_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_addFirstImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_LinkedList_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_LinkedList_clear(jcontext ctx, jobject self);
jbool M_java_util_LinkedList_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedList_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_java_util_LinkedList_getFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_getFirstImpl_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_getLast_R_java_lang_Object(jcontext ctx, jobject self);
jint M_java_util_LinkedList_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_LinkedList_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedList_listIterator_int_R_java_util_ListIterator(jcontext ctx, jobject self, jint param0);
jobject M_java_util_LinkedList_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_java_util_LinkedList_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedList_removeFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_removeFirstImpl_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_removeLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_removeLastImpl_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self);
jbool M_java_util_LinkedList_offerFirst_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_offerLast_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedList_peekFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_peekLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_pollFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_pollLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_pop_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_LinkedList_push_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_removeFirstOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_removeLastOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedList_removeOneOccurrence_java_lang_Object_java_util_Iterator_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_LinkedList_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_java_util_LinkedList_size_R_int(jcontext ctx, jobject self);
jbool M_java_util_LinkedList_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedList_poll_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_remove_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_peekFirstImpl_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_element_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_LinkedList_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
