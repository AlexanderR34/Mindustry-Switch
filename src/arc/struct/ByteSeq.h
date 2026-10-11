#ifndef HEADER_arc_struct_ByteSeq
#define HEADER_arc_struct_ByteSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ByteSeq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} arc_struct_ByteSeq;

extern Class class_arc_struct_ByteSeq;


#define VTABLE_arc_struct_ByteSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_ByteSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ByteSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ByteSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ByteSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ByteSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_finalize 5
typedef void (*func_arc_struct_ByteSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_notify 6
typedef void (*func_arc_struct_ByteSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_notifyAll 7
typedef void (*func_arc_struct_ByteSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_wait 8
typedef void (*func_arc_struct_ByteSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_wait_long 9
typedef void (*func_arc_struct_ByteSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ByteSeq_wait_long_int 10
typedef void (*func_arc_struct_ByteSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ByteSeq_add_byte 11
typedef void (*func_arc_struct_ByteSeq_add_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_arc_struct_ByteSeq_add_byte_byte 12
typedef void (*func_arc_struct_ByteSeq_add_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_arc_struct_ByteSeq_add_byte_byte_byte 13
typedef void (*func_arc_struct_ByteSeq_add_byte_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2);
#define VTABLE_arc_struct_ByteSeq_add_byte_byte_byte_byte 14
typedef void (*func_arc_struct_ByteSeq_add_byte_byte_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jbyte param3);
#define VTABLE_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq 15
typedef void (*func_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int 16
typedef void (*func_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ByteSeq_addAll_Array1_byte 17
typedef void (*func_arc_struct_ByteSeq_addAll_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ByteSeq_addAll_Array1_byte_int_int 18
typedef void (*func_arc_struct_ByteSeq_addAll_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ByteSeq_get_int_R_byte 19
typedef jbyte (*func_arc_struct_ByteSeq_get_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ByteSeq_set_int_byte 20
typedef void (*func_arc_struct_ByteSeq_set_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_arc_struct_ByteSeq_incr_int_byte 21
typedef void (*func_arc_struct_ByteSeq_incr_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_arc_struct_ByteSeq_mul_int_byte 22
typedef void (*func_arc_struct_ByteSeq_mul_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_arc_struct_ByteSeq_insert_int_byte 23
typedef void (*func_arc_struct_ByteSeq_insert_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_arc_struct_ByteSeq_swap_int_int 24
typedef void (*func_arc_struct_ByteSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_ByteSeq_contains_byte_R_boolean 25
typedef jbool (*func_arc_struct_ByteSeq_contains_byte_R_boolean)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_arc_struct_ByteSeq_indexOf_byte_R_int 26
typedef jint (*func_arc_struct_ByteSeq_indexOf_byte_R_int)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_arc_struct_ByteSeq_lastIndexOf_byte_R_int 27
typedef jint (*func_arc_struct_ByteSeq_lastIndexOf_byte_R_int)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_arc_struct_ByteSeq_removeValue_byte_R_boolean 28
typedef jbool (*func_arc_struct_ByteSeq_removeValue_byte_R_boolean)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_arc_struct_ByteSeq_removeIndex_int_R_int 29
typedef jint (*func_arc_struct_ByteSeq_removeIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ByteSeq_removeRange_int_int 30
typedef void (*func_arc_struct_ByteSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean 31
typedef jbool (*func_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ByteSeq_pop_R_byte 32
typedef jbyte (*func_arc_struct_ByteSeq_pop_R_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_peek_R_byte 33
typedef jbyte (*func_arc_struct_ByteSeq_peek_R_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_first_R_byte 34
typedef jbyte (*func_arc_struct_ByteSeq_first_R_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_isEmpty_R_boolean 35
typedef jbool (*func_arc_struct_ByteSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_clear 36
typedef void (*func_arc_struct_ByteSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_shrink_R_Array1_byte 37
typedef jobject (*func_arc_struct_ByteSeq_shrink_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte 38
typedef jobject (*func_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ByteSeq_setSize_int_R_Array1_byte 39
typedef jobject (*func_arc_struct_ByteSeq_setSize_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ByteSeq_resize_int_R_Array1_byte 40
typedef jobject (*func_arc_struct_ByteSeq_resize_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ByteSeq_sort 41
typedef void (*func_arc_struct_ByteSeq_sort)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_reverse 42
typedef void (*func_arc_struct_ByteSeq_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_shuffle 43
typedef void (*func_arc_struct_ByteSeq_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_truncate_int 44
typedef void (*func_arc_struct_ByteSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ByteSeq_random_R_byte 45
typedef jbyte (*func_arc_struct_ByteSeq_random_R_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_toArray_R_Array1_byte 46
typedef jobject (*func_arc_struct_ByteSeq_toArray_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String 47
typedef jobject (*func_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_ByteSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_ByteSeq(jcontext ctx);
void init_arc_struct_ByteSeq(jcontext ctx, jobject self);
void init_arc_struct_ByteSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ByteSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_ByteSeq_arc_struct_ByteSeq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_ByteSeq_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_ByteSeq_boolean_Array1_byte_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_ByteSeq_with_Array1_byte_R_arc_struct_ByteSeq(jcontext ctx, jobject param0);
void M_arc_struct_ByteSeq_add_byte(jcontext ctx, jobject self, jbyte param0);
void M_arc_struct_ByteSeq_add_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
void M_arc_struct_ByteSeq_add_byte_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2);
void M_arc_struct_ByteSeq_add_byte_byte_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jbyte param3);
void M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ByteSeq_addAll_arc_struct_ByteSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ByteSeq_addAll_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ByteSeq_addAll_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbyte M_arc_struct_ByteSeq_get_int_R_byte(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ByteSeq_set_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_arc_struct_ByteSeq_incr_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_arc_struct_ByteSeq_mul_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_arc_struct_ByteSeq_insert_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_arc_struct_ByteSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_ByteSeq_contains_byte_R_boolean(jcontext ctx, jobject self, jbyte param0);
jint M_arc_struct_ByteSeq_indexOf_byte_R_int(jcontext ctx, jobject self, jbyte param0);
jint M_arc_struct_ByteSeq_lastIndexOf_byte_R_int(jcontext ctx, jobject self, jbyte param0);
jbool M_arc_struct_ByteSeq_removeValue_byte_R_boolean(jcontext ctx, jobject self, jbyte param0);
jint M_arc_struct_ByteSeq_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ByteSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_ByteSeq_removeAll_arc_struct_ByteSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jbyte M_arc_struct_ByteSeq_pop_R_byte(jcontext ctx, jobject self);
jbyte M_arc_struct_ByteSeq_peek_R_byte(jcontext ctx, jobject self);
jbyte M_arc_struct_ByteSeq_first_R_byte(jcontext ctx, jobject self);
jbool M_arc_struct_ByteSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_ByteSeq_clear(jcontext ctx, jobject self);
jobject M_arc_struct_ByteSeq_shrink_R_Array1_byte(jcontext ctx, jobject self);
jobject M_arc_struct_ByteSeq_ensureCapacity_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_ByteSeq_setSize_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_ByteSeq_resize_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ByteSeq_sort(jcontext ctx, jobject self);
void M_arc_struct_ByteSeq_reverse(jcontext ctx, jobject self);
void M_arc_struct_ByteSeq_shuffle(jcontext ctx, jobject self);
void M_arc_struct_ByteSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jbyte M_arc_struct_ByteSeq_random_R_byte(jcontext ctx, jobject self);
jobject M_arc_struct_ByteSeq_toArray_R_Array1_byte(jcontext ctx, jobject self);
jint M_arc_struct_ByteSeq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ByteSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ByteSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ByteSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
