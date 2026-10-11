#ifndef HEADER_java_util_Collections$AsLIFOQueue
#define HEADER_java_util_Collections$AsLIFOQueue

#include "Clearwing.h"
#include "java/util/AbstractQueue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$AsLIFOQueue {
	java_util_AbstractQueue parent;
	jref F_q;
} java_util_Collections$AsLIFOQueue;

extern Class class_java_util_Collections$AsLIFOQueue;


#define VTABLE_java_util_Collections$AsLIFOQueue_hashCode_R_int 0
typedef jint (*func_java_util_Collections$AsLIFOQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$AsLIFOQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$AsLIFOQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$AsLIFOQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_finalize 5
typedef void (*func_java_util_Collections$AsLIFOQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_notify 6
typedef void (*func_java_util_Collections$AsLIFOQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_notifyAll 7
typedef void (*func_java_util_Collections$AsLIFOQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_wait 8
typedef void (*func_java_util_Collections$AsLIFOQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_wait_long 9
typedef void (*func_java_util_Collections$AsLIFOQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_wait_long_int 10
typedef void (*func_java_util_Collections$AsLIFOQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_Collections$AsLIFOQueue_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Collections$AsLIFOQueue_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_Collections$AsLIFOQueue_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_clear 16
typedef void (*func_java_util_Collections$AsLIFOQueue_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean 19
typedef jbool (*func_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_size_R_int 23
typedef jint (*func_java_util_Collections$AsLIFOQueue_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean 26
typedef jbool (*func_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object 27
typedef jobject (*func_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object 28
typedef jobject (*func_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object 29
typedef jobject (*func_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object 30
typedef jobject (*func_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_Collections$AsLIFOQueue(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$AsLIFOQueue(jcontext ctx);
void init_java_util_Collections$AsLIFOQueue_java_util_Deque(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$AsLIFOQueue_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jint M_java_util_Collections$AsLIFOQueue_size_R_int(jcontext ctx, jobject self);
jbool M_java_util_Collections$AsLIFOQueue_offer_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$AsLIFOQueue_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Collections$AsLIFOQueue_poll_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_java_util_Collections$AsLIFOQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Collections$AsLIFOQueue_clear(jcontext ctx, jobject self);
jobject M_java_util_Collections$AsLIFOQueue_element_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Collections$AsLIFOQueue_remove_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_java_util_Collections$AsLIFOQueue_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$AsLIFOQueue_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$AsLIFOQueue_isEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Collections$AsLIFOQueue_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$AsLIFOQueue_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$AsLIFOQueue_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$AsLIFOQueue_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Collections$AsLIFOQueue_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$AsLIFOQueue_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
