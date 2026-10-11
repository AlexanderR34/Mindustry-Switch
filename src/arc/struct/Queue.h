#ifndef HEADER_arc_struct_Queue
#define HEADER_arc_struct_Queue

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "arc/util/Eachable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Queue {
	java_lang_Object parent;
	jint F_size;
	jref F_values;
	jint F_head;
	jint F_tail;
	jref F_iterable;
} arc_struct_Queue;

extern Class class_arc_struct_Queue;


#define VTABLE_arc_struct_Queue_hashCode_R_int 0
typedef jint (*func_arc_struct_Queue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Queue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Queue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Queue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Queue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_finalize 5
typedef void (*func_arc_struct_Queue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_notify 6
typedef void (*func_arc_struct_Queue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_notifyAll 7
typedef void (*func_arc_struct_Queue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_wait 8
typedef void (*func_arc_struct_Queue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_wait_long 9
typedef void (*func_arc_struct_Queue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Queue_wait_long_int 10
typedef void (*func_arc_struct_Queue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_Queue_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_Queue_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_Queue_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_each_arc_func_Cons 14
typedef void (*func_arc_struct_Queue_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object 15
typedef jobject (*func_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_addLast_java_lang_Object 16
typedef void (*func_arc_struct_Queue_addLast_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_add_java_lang_Object 17
typedef void (*func_arc_struct_Queue_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_addFirst_java_lang_Object 18
typedef void (*func_arc_struct_Queue_addFirst_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_shrink_R_Array1_java_lang_Object 19
typedef jobject (*func_arc_struct_Queue_shrink_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_ensureCapacity_int 20
typedef void (*func_arc_struct_Queue_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Queue_resize_int 21
typedef void (*func_arc_struct_Queue_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object 22
typedef jobject (*func_arc_struct_Queue_removeFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_removeLast_R_java_lang_Object 23
typedef jobject (*func_arc_struct_Queue_removeLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_contains_java_lang_Object_R_boolean 24
typedef jbool (*func_arc_struct_Queue_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean 25
typedef jbool (*func_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int 26
typedef jint (*func_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Queue_indexOf_arc_func_Boolf_R_int 27
typedef jint (*func_arc_struct_Queue_indexOf_arc_func_Boolf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_remove_arc_func_Boolf_R_boolean 28
typedef jbool (*func_arc_struct_Queue_remove_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_remove_java_lang_Object_R_boolean 29
typedef jbool (*func_arc_struct_Queue_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean 30
typedef jbool (*func_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Queue_removeIndex_int_R_java_lang_Object 31
typedef jobject (*func_arc_struct_Queue_removeIndex_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Queue_isEmpty_R_boolean 32
typedef jbool (*func_arc_struct_Queue_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_first_R_java_lang_Object 33
typedef jobject (*func_arc_struct_Queue_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_last_R_java_lang_Object 34
typedef jobject (*func_arc_struct_Queue_last_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_get_int_R_java_lang_Object 35
typedef jobject (*func_arc_struct_Queue_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Queue_clear 36
typedef void (*func_arc_struct_Queue_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object 37
typedef jobject (*func_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_Queue(jobject object, jint mark, jint depth);
void clinit_arc_struct_Queue(jcontext ctx);
void init_arc_struct_Queue(jcontext ctx, jobject self);
void init_arc_struct_Queue_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_Queue_int_java_lang_Class(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_struct_Queue_toArray_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Queue_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Queue_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Queue_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Queue_shrink_R_Array1_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_Queue_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Queue_resize_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_Queue_removeFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Queue_removeLast_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_arc_struct_Queue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Queue_contains_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_arc_struct_Queue_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_arc_struct_Queue_indexOf_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Queue_remove_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Queue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Queue_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_Queue_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_Queue_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_Queue_first_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Queue_last_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Queue_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Queue_clear(jcontext ctx, jobject self);
jobject M_arc_struct_Queue_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
void M_arc_struct_Queue_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Queue_find_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Queue_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_arc_struct_Queue_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_Queue_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
