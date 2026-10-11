#ifndef HEADER_java_util_Vector
#define HEADER_java_util_Vector

#include "Clearwing.h"
#include "java/util/AbstractList.h"
#include "java/util/List.h"
#include "java/util/RandomAccess.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Vector {
	java_util_AbstractList parent;
	jint F_elementCount;
	jref F_elementData;
	jint F_capacityIncrement;
} java_util_Vector;

extern Class class_java_util_Vector;

extern jint SF_java_util_Vector_DEFAULT_SIZE;

#define VTABLE_java_util_Vector_hashCode_R_int 0
typedef jint (*func_java_util_Vector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Vector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Vector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Vector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Vector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_finalize 5
typedef void (*func_java_util_Vector_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_notify 6
typedef void (*func_java_util_Vector_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_notifyAll 7
typedef void (*func_java_util_Vector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_wait 8
typedef void (*func_java_util_Vector_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_wait_long 9
typedef void (*func_java_util_Vector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Vector_wait_long_int 10
typedef void (*func_java_util_Vector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Vector_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_Vector_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_Vector_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Vector_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_Vector_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_Vector_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_clear 16
typedef void (*func_java_util_Vector_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_Vector_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_Vector_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_isEmpty_R_boolean 19
typedef jbool (*func_java_util_Vector_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Vector_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_Vector_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_Vector_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_size_R_int 23
typedef jint (*func_java_util_Vector_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_Vector_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_add_int_java_lang_Object 26
typedef void (*func_java_util_Vector_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Vector_addAll_int_java_util_Collection_R_boolean 27
typedef jbool (*func_java_util_Vector_addAll_int_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Vector_get_int_R_java_lang_Object 28
typedef jobject (*func_java_util_Vector_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_indexOf_java_lang_Object_R_int 29
typedef jint (*func_java_util_Vector_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_lastIndexOf_java_lang_Object_R_int 30
typedef jint (*func_java_util_Vector_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_listIterator_R_java_util_ListIterator 31
typedef jobject (*func_java_util_Vector_listIterator_R_java_util_ListIterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_listIterator_int_R_java_util_ListIterator 32
typedef jobject (*func_java_util_Vector_listIterator_int_R_java_util_ListIterator)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_sort_java_util_Comparator 33
typedef void (*func_java_util_Vector_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_remove_int_R_java_lang_Object 34
typedef jobject (*func_java_util_Vector_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_util_Vector_subList_int_int_R_java_util_List 36
typedef jobject (*func_java_util_Vector_subList_int_int_R_java_util_List)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Vector_removeRange_int_int 37
typedef void (*func_java_util_Vector_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object 38
typedef jobject (*func_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_addElement_java_lang_Object 39
typedef void (*func_java_util_Vector_addElement_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_capacity_R_int 40
typedef jint (*func_java_util_Vector_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_copyInto_Array1_java_lang_Object 41
typedef void (*func_java_util_Vector_copyInto_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object 42
typedef jobject (*func_java_util_Vector_elementAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_elements_R_java_util_Enumeration 43
typedef jobject (*func_java_util_Vector_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_ensureCapacity_int 44
typedef void (*func_java_util_Vector_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_firstElement_R_java_lang_Object 45
typedef jobject (*func_java_util_Vector_firstElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_grow_int 46
typedef void (*func_java_util_Vector_grow_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_growByOne 47
typedef void (*func_java_util_Vector_growByOne)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_growBy_int 48
typedef void (*func_java_util_Vector_growBy_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_indexOf_java_lang_Object_int_R_int 49
typedef jint (*func_java_util_Vector_indexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Vector_insertElementAt_java_lang_Object_int 50
typedef void (*func_java_util_Vector_insertElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Vector_lastElement_R_java_lang_Object 51
typedef jobject (*func_java_util_Vector_lastElement_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int 52
typedef jint (*func_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Vector_removeAllElements 53
typedef void (*func_java_util_Vector_removeAllElements)(jcontext ctx, jobject self);
#define VTABLE_java_util_Vector_removeElement_java_lang_Object_R_boolean 54
typedef jbool (*func_java_util_Vector_removeElement_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Vector_removeElementAt_int 55
typedef void (*func_java_util_Vector_removeElementAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_setElementAt_java_lang_Object_int 56
typedef void (*func_java_util_Vector_setElementAt_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_Vector_setSize_int 57
typedef void (*func_java_util_Vector_setSize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Vector_trimToSize 58
typedef void (*func_java_util_Vector_trimToSize)(jcontext ctx, jobject self);

void mark_java_util_Vector(jobject object, jint mark, jint depth);
void clinit_java_util_Vector(jcontext ctx);
void init_java_util_Vector(jcontext ctx, jobject self);
void init_java_util_Vector_int(jcontext ctx, jobject self, jint param0);
void init_java_util_Vector_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_java_util_Vector_java_util_Collection(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Vector_newElementArray_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_java_util_Vector_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_Vector_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Vector_addAll_int_java_util_Collection_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_util_Vector_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Vector_addElement_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Vector_capacity_R_int(jcontext ctx, jobject self);
void M_java_util_Vector_clear(jcontext ctx, jobject self);
jbool M_java_util_Vector_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Vector_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Vector_copyInto_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Vector_elementAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Vector_elements_R_java_util_Enumeration(jcontext ctx, jobject self);
void M_java_util_Vector_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
jbool M_java_util_Vector_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Vector_firstElement_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Vector_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_java_util_Vector_grow_int(jcontext ctx, jobject self, jint param0);
void M_java_util_Vector_growByOne(jcontext ctx, jobject self);
void M_java_util_Vector_growBy_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_Vector_hashCode_R_int(jcontext ctx, jobject self);
jint M_java_util_Vector_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Vector_indexOf_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_util_Vector_insertElementAt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_java_util_Vector_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Vector_lastElement_R_java_lang_Object(jcontext ctx, jobject self);
jint M_java_util_Vector_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Vector_lastIndexOf_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_Vector_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_java_util_Vector_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Vector_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Vector_removeAllElements(jcontext ctx, jobject self);
jbool M_java_util_Vector_removeElement_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Vector_removeElementAt_int(jcontext ctx, jobject self, jint param0);
void M_java_util_Vector_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_java_util_Vector_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Vector_set_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_java_util_Vector_setElementAt_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_util_Vector_setSize_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_Vector_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_Vector_subList_int_int_R_java_util_List(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_util_Vector_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Vector_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Vector_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_java_util_Vector_trimToSize(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
