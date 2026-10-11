#ifndef HEADER_java_util_Stack
#define HEADER_java_util_Stack

#include "Clearwing.h"
#include "java/util/Vector.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Stack {
	java_util_Vector parent;
} java_util_Stack;

extern Class class_java_util_Stack;

extern jlong SF_java_util_Stack_serialVersionUID;

#define VTABLE_java_util_Stack_hashCode_R_int 0
typedef jint (*func_java_util_Stack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Stack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Stack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Stack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Stack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_finalize 5
typedef void (*func_java_util_Stack_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_notify 6
typedef void (*func_java_util_Stack_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_notifyAll 7
typedef void (*func_java_util_Stack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_wait 8
typedef void (*func_java_util_Stack_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_wait_long 9
typedef void (*func_java_util_Stack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Stack_wait_long_int 10
typedef void (*func_java_util_Stack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Stack_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_Stack_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_Stack_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Stack_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_Stack_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_Stack_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_clear 16
typedef void (*func_java_util_Stack_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_Stack_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_Stack_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_isEmpty_R_boolean 19
typedef jbool (*func_java_util_Stack_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Stack_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_Stack_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_Stack_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_size_R_int 23
typedef jint (*func_java_util_Stack_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_Stack_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_Stack_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_add_int_java_lang_Object 26
typedef void (*func_java_util_Stack_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Stack_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_java_util_Stack_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Stack_get_int_R_java_lang_Object 28
typedef jobject (*func_java_util_Stack_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_indexOf_java_lang_Object_R_int 29
typedef jint (*func_java_util_Stack_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_java_util_Stack_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_java_util_Stack_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_java_util_Stack_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_sort_java_util_Comparator 33
typedef void (*func_java_util_Stack_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_remove_int_R_java_lang_Object 34
typedef jobject (*func_java_util_Stack_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_Stack_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Stack_subList_int_int_R_java_util_List 36
typedef jobject (*func_java_util_Stack_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Stack_removeRange_int_int 37
typedef void (*func_java_util_Stack_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Stack_newElementArray_int_R_Array1_java_lang_Object 38
typedef jobject (*func_java_util_Stack_newElementArray_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_addElement_java_lang_Object 39
typedef void (*func_java_util_Stack_addElement_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_capacity_R_int 40
typedef jint (*func_java_util_Stack_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_copyInto_Array1_java_lang_Object 41
typedef void (*func_java_util_Stack_copyInto_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_elementAt_int_R_java_lang_Object 42
typedef jobject (*func_java_util_Stack_elementAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_elements_R_java_util_Enumeration 43
typedef jobject (*func_java_util_Stack_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_ensureCapacity_int 44
typedef void (*func_java_util_Stack_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_firstElement_R_java_lang_Object 45
typedef jobject (*func_java_util_Stack_firstElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_grow_int 46
typedef void (*func_java_util_Stack_grow_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_growByOne 47
typedef void (*func_java_util_Stack_growByOne)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_growBy_int 48
typedef void (*func_java_util_Stack_growBy_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_indexOf_java_lang_Object_int_R_int 49
typedef jint (*func_java_util_Stack_indexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Stack_insertElementAt_java_lang_Object_int 50
typedef void (*func_java_util_Stack_insertElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Stack_lastElement_R_java_lang_Object 51
typedef jobject (*func_java_util_Stack_lastElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_lastIndexOf_java_lang_Object_int_R_int 52
typedef jint (*func_java_util_Stack_lastIndexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Stack_removeAllElements 53
typedef void (*func_java_util_Stack_removeAllElements)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_removeElement_java_lang_Object_R_boolean 54
typedef jbool (*func_java_util_Stack_removeElement_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_removeElementAt_int 55
typedef void (*func_java_util_Stack_removeElementAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_setElementAt_java_lang_Object_int 56
typedef void (*func_java_util_Stack_setElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Stack_setSize_int 57
typedef void (*func_java_util_Stack_setSize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Stack_trimToSize 58
typedef void (*func_java_util_Stack_trimToSize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_empty_R_boolean 59
typedef jbool (*func_java_util_Stack_empty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_peek_R_java_lang_Object 60
typedef jobject (*func_java_util_Stack_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_pop_R_java_lang_Object 61
typedef jobject (*func_java_util_Stack_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Stack_push_java_lang_Object_R_java_lang_Object 62
typedef jobject (*func_java_util_Stack_push_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Stack_search_java_lang_Object_R_int 63
typedef jint (*func_java_util_Stack_search_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Stack(jobject object, jint mark, jint depth);
void clinit_java_util_Stack(jcontext ctx);
void init_java_util_Stack(jcontext ctx, jobject self);
jbool M_java_util_Stack_empty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Stack_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Stack_pop_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Stack_push_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Stack_search_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
