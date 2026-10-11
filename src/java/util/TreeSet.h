#ifndef HEADER_java_util_TreeSet
#define HEADER_java_util_TreeSet

#include "Clearwing.h"
#include "java/util/AbstractSet.h"
#include "java/util/NavigableSet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeSet {
	java_util_AbstractSet parent;
	jref F_backingMap;
	jref F_descendingSet;
} java_util_TreeSet;

extern Class class_java_util_TreeSet;


#define VTABLE_java_util_TreeSet_hashCode_R_int 0
typedef jint (*func_java_util_TreeSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_finalize 5
typedef void (*func_java_util_TreeSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_notify 6
typedef void (*func_java_util_TreeSet_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_notifyAll 7
typedef void (*func_java_util_TreeSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_wait 8
typedef void (*func_java_util_TreeSet_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_wait_long 9
typedef void (*func_java_util_TreeSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeSet_wait_long_int 10
typedef void (*func_java_util_TreeSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeSet_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_TreeSet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_TreeSet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_TreeSet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_TreeSet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_TreeSet_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_clear 16
typedef void (*func_java_util_TreeSet_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_TreeSet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_TreeSet_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_isEmpty_R_boolean 19
typedef jbool (*func_java_util_TreeSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_TreeSet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_TreeSet_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_TreeSet_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_size_R_int 23
typedef jint (*func_java_util_TreeSet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_TreeSet_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_TreeSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_comparator_R_java_util_Comparator 26
typedef jobject (*func_java_util_TreeSet_comparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_first_R_java_lang_Object 27
typedef jobject (*func_java_util_TreeSet_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet 28
typedef jobject (*func_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_last_R_java_lang_Object 29
typedef jobject (*func_java_util_TreeSet_last_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet 30
typedef jobject (*func_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet 31
typedef jobject (*func_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_pollFirst_R_java_lang_Object 32
typedef jobject (*func_java_util_TreeSet_pollFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_pollLast_R_java_lang_Object 33
typedef jobject (*func_java_util_TreeSet_pollLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object 34
typedef jobject (*func_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object 36
typedef jobject (*func_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object 37
typedef jobject (*func_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeSet_descendingIterator_R_java_util_Iterator 38
typedef jobject (*func_java_util_TreeSet_descendingIterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_descendingSet_R_java_util_NavigableSet 39
typedef jobject (*func_java_util_TreeSet_descendingSet_R_java_util_NavigableSet)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet 40
typedef jobject (*func_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3);
#define VTABLE_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet 41
typedef jobject (*func_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet 42
typedef jobject (*func_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet)(jcontext ctx, jobject self, jobject param0, jbool param1);

void mark_java_util_TreeSet(jobject object, jint mark, jint depth);
void clinit_java_util_TreeSet(jcontext ctx);
void init_java_util_TreeSet_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0);
void init_java_util_TreeSet(jcontext ctx, jobject self);
void init_java_util_TreeSet_java_util_Collection(jcontext ctx, jobject self, jobject param0);
void init_java_util_TreeSet_java_util_Comparator(jcontext ctx, jobject self, jobject param0);
void init_java_util_TreeSet_java_util_SortedSet(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeSet_addAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeSet_clear(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_comparator_R_java_util_Comparator(jcontext ctx, jobject self);
jbool M_java_util_TreeSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeSet_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_descendingIterator_R_java_util_Iterator(jcontext ctx, jobject self);
jbool M_java_util_TreeSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_TreeSet_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_first_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_last_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_pollFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_pollLast_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_higher_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeSet_lower_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeSet_ceiling_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeSet_floor_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeSet_descendingSet_R_java_util_NavigableSet(jcontext ctx, jobject self);
jobject M_java_util_TreeSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3);
jobject M_java_util_TreeSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_util_TreeSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_util_TreeSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeSet_headSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeSet_tailSet_java_lang_Object_R_java_util_SortedSet(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
