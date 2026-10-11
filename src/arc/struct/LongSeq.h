#ifndef HEADER_arc_struct_LongSeq
#define HEADER_arc_struct_LongSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_LongSeq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} arc_struct_LongSeq;

extern Class class_arc_struct_LongSeq;


#define VTABLE_arc_struct_LongSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_LongSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_LongSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_LongSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_LongSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_LongSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_finalize 5
typedef void (*func_arc_struct_LongSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_notify 6
typedef void (*func_arc_struct_LongSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_notifyAll 7
typedef void (*func_arc_struct_LongSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_wait 8
typedef void (*func_arc_struct_LongSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_wait_long 9
typedef void (*func_arc_struct_LongSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongSeq_wait_long_int 10
typedef void (*func_arc_struct_LongSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_LongSeq_add_long 11
typedef void (*func_arc_struct_LongSeq_add_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongSeq_add_long_long 12
typedef void (*func_arc_struct_LongSeq_add_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_arc_struct_LongSeq_add_long_long_long 13
typedef void (*func_arc_struct_LongSeq_add_long_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2);
#define VTABLE_arc_struct_LongSeq_add_long_long_long_long 14
typedef void (*func_arc_struct_LongSeq_add_long_long_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jlong param3);
#define VTABLE_arc_struct_LongSeq_addAll_arc_struct_LongSeq 15
typedef void (*func_arc_struct_LongSeq_addAll_arc_struct_LongSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongSeq_addAll_arc_struct_LongSeq_int_int 16
typedef void (*func_arc_struct_LongSeq_addAll_arc_struct_LongSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_LongSeq_addAll_Array1_long 17
typedef void (*func_arc_struct_LongSeq_addAll_Array1_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongSeq_addAll_Array1_long_int_int 18
typedef void (*func_arc_struct_LongSeq_addAll_Array1_long_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_LongSeq_get_int_R_long 19
typedef jlong (*func_arc_struct_LongSeq_get_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongSeq_set_int_long 20
typedef void (*func_arc_struct_LongSeq_set_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_arc_struct_LongSeq_incr_int_long 21
typedef void (*func_arc_struct_LongSeq_incr_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_arc_struct_LongSeq_mul_int_long 22
typedef void (*func_arc_struct_LongSeq_mul_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_arc_struct_LongSeq_insert_int_long 23
typedef void (*func_arc_struct_LongSeq_insert_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_arc_struct_LongSeq_swap_int_int 24
typedef void (*func_arc_struct_LongSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_LongSeq_contains_long_R_boolean 25
typedef jbool (*func_arc_struct_LongSeq_contains_long_R_boolean)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongSeq_indexOf_long_R_int 26
typedef jint (*func_arc_struct_LongSeq_indexOf_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongSeq_lastIndexOf_char_R_int 27
typedef jint (*func_arc_struct_LongSeq_lastIndexOf_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_struct_LongSeq_removeValue_long_R_boolean 28
typedef jbool (*func_arc_struct_LongSeq_removeValue_long_R_boolean)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongSeq_removeIndex_int_R_long 29
typedef jlong (*func_arc_struct_LongSeq_removeIndex_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongSeq_removeRange_int_int 30
typedef void (*func_arc_struct_LongSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_LongSeq_removeAll_arc_struct_LongSeq_R_boolean 31
typedef jbool (*func_arc_struct_LongSeq_removeAll_arc_struct_LongSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongSeq_pop_R_long 32
typedef jlong (*func_arc_struct_LongSeq_pop_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_peek_R_long 33
typedef jlong (*func_arc_struct_LongSeq_peek_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_first_R_long 34
typedef jlong (*func_arc_struct_LongSeq_first_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_isEmpty_R_boolean 35
typedef jbool (*func_arc_struct_LongSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_clear 36
typedef void (*func_arc_struct_LongSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_shrink_R_Array1_long 37
typedef jobject (*func_arc_struct_LongSeq_shrink_R_Array1_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_ensureCapacity_int_R_Array1_long 38
typedef jobject (*func_arc_struct_LongSeq_ensureCapacity_int_R_Array1_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongSeq_setSize_int_R_Array1_long 39
typedef jobject (*func_arc_struct_LongSeq_setSize_int_R_Array1_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongSeq_resize_int_R_Array1_long 40
typedef jobject (*func_arc_struct_LongSeq_resize_int_R_Array1_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongSeq_sort 41
typedef void (*func_arc_struct_LongSeq_sort)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_reverse 42
typedef void (*func_arc_struct_LongSeq_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_shuffle 43
typedef void (*func_arc_struct_LongSeq_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_truncate_int 44
typedef void (*func_arc_struct_LongSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongSeq_random_R_long 45
typedef jlong (*func_arc_struct_LongSeq_random_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_toArray_R_Array1_long 46
typedef jobject (*func_arc_struct_LongSeq_toArray_R_Array1_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongSeq_toString_java_lang_String_R_java_lang_String 47
typedef jobject (*func_arc_struct_LongSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_LongSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_LongSeq(jcontext ctx);
void init_arc_struct_LongSeq(jcontext ctx, jobject self);
void init_arc_struct_LongSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_LongSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_LongSeq_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_LongSeq_Array1_long(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_LongSeq_boolean_Array1_long_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_LongSeq_with_Array1_long_R_arc_struct_LongSeq(jcontext ctx, jobject param0);
void M_arc_struct_LongSeq_add_long(jcontext ctx, jobject self, jlong param0);
void M_arc_struct_LongSeq_add_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
void M_arc_struct_LongSeq_add_long_long_long(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2);
void M_arc_struct_LongSeq_add_long_long_long_long(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jlong param3);
void M_arc_struct_LongSeq_addAll_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_LongSeq_addAll_arc_struct_LongSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_LongSeq_addAll_Array1_long(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_LongSeq_addAll_Array1_long_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jlong M_arc_struct_LongSeq_get_int_R_long(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongSeq_set_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_arc_struct_LongSeq_incr_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_arc_struct_LongSeq_mul_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_arc_struct_LongSeq_insert_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_arc_struct_LongSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_LongSeq_contains_long_R_boolean(jcontext ctx, jobject self, jlong param0);
jint M_arc_struct_LongSeq_indexOf_long_R_int(jcontext ctx, jobject self, jlong param0);
jint M_arc_struct_LongSeq_lastIndexOf_char_R_int(jcontext ctx, jobject self, jchar param0);
jbool M_arc_struct_LongSeq_removeValue_long_R_boolean(jcontext ctx, jobject self, jlong param0);
jlong M_arc_struct_LongSeq_removeIndex_int_R_long(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_LongSeq_removeAll_arc_struct_LongSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jlong M_arc_struct_LongSeq_pop_R_long(jcontext ctx, jobject self);
jlong M_arc_struct_LongSeq_peek_R_long(jcontext ctx, jobject self);
jlong M_arc_struct_LongSeq_first_R_long(jcontext ctx, jobject self);
jbool M_arc_struct_LongSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_LongSeq_clear(jcontext ctx, jobject self);
jobject M_arc_struct_LongSeq_shrink_R_Array1_long(jcontext ctx, jobject self);
jobject M_arc_struct_LongSeq_ensureCapacity_int_R_Array1_long(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_LongSeq_setSize_int_R_Array1_long(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_LongSeq_resize_int_R_Array1_long(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongSeq_sort(jcontext ctx, jobject self);
void M_arc_struct_LongSeq_reverse(jcontext ctx, jobject self);
void M_arc_struct_LongSeq_shuffle(jcontext ctx, jobject self);
void M_arc_struct_LongSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jlong M_arc_struct_LongSeq_random_R_long(jcontext ctx, jobject self);
jobject M_arc_struct_LongSeq_toArray_R_Array1_long(jcontext ctx, jobject self);
jint M_arc_struct_LongSeq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_LongSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_LongSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_LongSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
