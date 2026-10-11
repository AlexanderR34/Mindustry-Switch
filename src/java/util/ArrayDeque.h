#ifndef HEADER_java_util_ArrayDeque
#define HEADER_java_util_ArrayDeque

#include "Clearwing.h"
#include "java/util/AbstractCollection.h"
#include "java/util/Deque.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ArrayDeque {
	java_util_AbstractCollection parent;
	jref F_status;
	jint F_modCount;
	jint F_front;
	jint F_rear;
	jref F_elements;
} java_util_ArrayDeque;

extern Class class_java_util_ArrayDeque;

extern jint SF_java_util_ArrayDeque_DEFAULT_SIZE;

#define VTABLE_java_util_ArrayDeque_hashCode_R_int 0
typedef jint (*func_java_util_ArrayDeque_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_ArrayDeque_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_ArrayDeque_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_ArrayDeque_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_toString_R_java_lang_String 4
typedef jobject (*func_java_util_ArrayDeque_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_finalize 5
typedef void (*func_java_util_ArrayDeque_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_notify 6
typedef void (*func_java_util_ArrayDeque_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_notifyAll 7
typedef void (*func_java_util_ArrayDeque_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_wait 8
typedef void (*func_java_util_ArrayDeque_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_wait_long 9
typedef void (*func_java_util_ArrayDeque_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_ArrayDeque_wait_long_int 10
typedef void (*func_java_util_ArrayDeque_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_ArrayDeque_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_ArrayDeque_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_ArrayDeque_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_ArrayDeque_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_ArrayDeque_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_ArrayDeque_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_clear 16
typedef void (*func_java_util_ArrayDeque_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_ArrayDeque_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_ArrayDeque_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_isEmpty_R_boolean 19
typedef jbool (*func_java_util_ArrayDeque_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_ArrayDeque_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_ArrayDeque_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_ArrayDeque_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_size_R_int 23
typedef jint (*func_java_util_ArrayDeque_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_ArrayDeque_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_ArrayDeque_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_offer_java_lang_Object_R_boolean 26
typedef jbool (*func_java_util_ArrayDeque_offer_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_poll_R_java_lang_Object 27
typedef jobject (*func_java_util_ArrayDeque_poll_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_remove_R_java_lang_Object 28
typedef jobject (*func_java_util_ArrayDeque_remove_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_peek_R_java_lang_Object 29
typedef jobject (*func_java_util_ArrayDeque_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_element_R_java_lang_Object 30
typedef jobject (*func_java_util_ArrayDeque_element_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_addFirst_java_lang_Object 31
typedef void (*func_java_util_ArrayDeque_addFirst_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_addLast_java_lang_Object 32
typedef void (*func_java_util_ArrayDeque_addLast_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean 33
typedef jbool (*func_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean 34
typedef jbool (*func_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_removeFirst_R_java_lang_Object 35
typedef jobject (*func_java_util_ArrayDeque_removeFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_removeLast_R_java_lang_Object 36
typedef jobject (*func_java_util_ArrayDeque_removeLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_pollFirst_R_java_lang_Object 37
typedef jobject (*func_java_util_ArrayDeque_pollFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_pollLast_R_java_lang_Object 38
typedef jobject (*func_java_util_ArrayDeque_pollLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_getFirst_R_java_lang_Object 39
typedef jobject (*func_java_util_ArrayDeque_getFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_getLast_R_java_lang_Object 40
typedef jobject (*func_java_util_ArrayDeque_getLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_peekFirst_R_java_lang_Object 41
typedef jobject (*func_java_util_ArrayDeque_peekFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_peekLast_R_java_lang_Object 42
typedef jobject (*func_java_util_ArrayDeque_peekLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean 43
typedef jbool (*func_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean 44
typedef jbool (*func_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_push_java_lang_Object 45
typedef void (*func_java_util_ArrayDeque_push_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_pop_R_java_lang_Object 46
typedef jobject (*func_java_util_ArrayDeque_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator 47
typedef jobject (*func_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_countInitSize_int_R_int 48
typedef jint (*func_java_util_ArrayDeque_countInitSize_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayDeque_checkNull_java_lang_Object 49
typedef void (*func_java_util_ArrayDeque_checkNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_checkEmpty 50
typedef void (*func_java_util_ArrayDeque_checkEmpty)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_circularSmallerPos_int_R_int 51
typedef jint (*func_java_util_ArrayDeque_circularSmallerPos_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayDeque_circularBiggerPos_int_R_int 52
typedef jint (*func_java_util_ArrayDeque_circularBiggerPos_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_ArrayDeque_checkAndExpand 53
typedef void (*func_java_util_ArrayDeque_checkAndExpand)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_resetStatus_boolean 54
typedef void (*func_java_util_ArrayDeque_resetStatus_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean 55
typedef jbool (*func_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object 56
typedef jobject (*func_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object 57
typedef jobject (*func_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean 58
typedef jbool (*func_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque_removeInternal_int_boolean 59
typedef void (*func_java_util_ArrayDeque_removeInternal_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);

void mark_java_util_ArrayDeque(jobject object, jint mark, jint depth);
void clinit_java_util_ArrayDeque(jcontext ctx);
void init_java_util_ArrayDeque(jcontext ctx, jobject self);
void init_java_util_ArrayDeque_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_ArrayDeque_countInitSize_int_R_int(jcontext ctx, jobject self, jint param0);
void init_java_util_ArrayDeque_java_util_Collection(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayDeque_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayDeque_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_offerFirst_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_offerLast_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayDeque_push_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_ArrayDeque_removeFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_remove_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_pop_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_removeLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_pollFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_poll_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_pollLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_getFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_element_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_getLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_peekFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_peekLast_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_ArrayDeque_checkNull_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayDeque_checkEmpty(jcontext ctx, jobject self);
jint M_java_util_ArrayDeque_circularSmallerPos_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_ArrayDeque_circularBiggerPos_int_R_int(jcontext ctx, jobject self, jint param0);
void M_java_util_ArrayDeque_checkAndExpand(jcontext ctx, jobject self);
void M_java_util_ArrayDeque_resetStatus_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_util_ArrayDeque_addLastImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_ArrayDeque_removePollFirstImpl_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_removeLastImpl_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_java_util_ArrayDeque_removeFirstOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_removeLastOccurrence_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque_removeFirstOccurrenceImpl_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayDeque_removeInternal_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jint M_java_util_ArrayDeque_size_R_int(jcontext ctx, jobject self);
jbool M_java_util_ArrayDeque_isEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_ArrayDeque_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_ArrayDeque_clear(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self);
jint SM_java_util_ArrayDeque_access$000_java_util_ArrayDeque_R_int(jcontext ctx, jobject param0);
jint SM_java_util_ArrayDeque_access$100_java_util_ArrayDeque_R_int(jcontext ctx, jobject param0);
jint SM_java_util_ArrayDeque_access$200_java_util_ArrayDeque_R_int(jcontext ctx, jobject param0);
jobject SM_java_util_ArrayDeque_access$300_java_util_ArrayDeque_R_java_util_ArrayDeque$DequeStatus(jcontext ctx, jobject param0);
jobject SM_java_util_ArrayDeque_access$400_java_util_ArrayDeque_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jint SM_java_util_ArrayDeque_access$500_java_util_ArrayDeque_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_ArrayDeque_access$600_java_util_ArrayDeque_int_R_int(jcontext ctx, jobject param0, jint param1);
void SM_java_util_ArrayDeque_access$700_java_util_ArrayDeque_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2);

#ifdef __cplusplus
}
#endif

#endif
