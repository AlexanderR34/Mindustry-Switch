#ifndef HEADER_arc_struct_ShortSeq
#define HEADER_arc_struct_ShortSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ShortSeq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} arc_struct_ShortSeq;

extern Class class_arc_struct_ShortSeq;


#define VTABLE_arc_struct_ShortSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_ShortSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ShortSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ShortSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ShortSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ShortSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_finalize 5
typedef void (*func_arc_struct_ShortSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_notify 6
typedef void (*func_arc_struct_ShortSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_notifyAll 7
typedef void (*func_arc_struct_ShortSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_wait 8
typedef void (*func_arc_struct_ShortSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_wait_long 9
typedef void (*func_arc_struct_ShortSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ShortSeq_wait_long_int 10
typedef void (*func_arc_struct_ShortSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ShortSeq_add_int 11
typedef void (*func_arc_struct_ShortSeq_add_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_add_short 12
typedef void (*func_arc_struct_ShortSeq_add_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_arc_struct_ShortSeq_add_short_short 13
typedef void (*func_arc_struct_ShortSeq_add_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_arc_struct_ShortSeq_add_short_short_short 14
typedef void (*func_arc_struct_ShortSeq_add_short_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2);
#define VTABLE_arc_struct_ShortSeq_add_short_short_short_short 15
typedef void (*func_arc_struct_ShortSeq_add_short_short_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3);
#define VTABLE_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq 16
typedef void (*func_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int 17
typedef void (*func_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ShortSeq_addAll_Array1_short 18
typedef void (*func_arc_struct_ShortSeq_addAll_Array1_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ShortSeq_addAll_Array1_short_int_int 19
typedef void (*func_arc_struct_ShortSeq_addAll_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ShortSeq_get_int_R_short 20
typedef jshort (*func_arc_struct_ShortSeq_get_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_set_int_short 21
typedef void (*func_arc_struct_ShortSeq_set_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_arc_struct_ShortSeq_incr_int_short 22
typedef void (*func_arc_struct_ShortSeq_incr_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_arc_struct_ShortSeq_mul_int_short 23
typedef void (*func_arc_struct_ShortSeq_mul_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_arc_struct_ShortSeq_insert_int_short 24
typedef void (*func_arc_struct_ShortSeq_insert_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_arc_struct_ShortSeq_swap_int_int 25
typedef void (*func_arc_struct_ShortSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_ShortSeq_contains_short_R_boolean 26
typedef jbool (*func_arc_struct_ShortSeq_contains_short_R_boolean)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_arc_struct_ShortSeq_indexOf_short_R_int 27
typedef jint (*func_arc_struct_ShortSeq_indexOf_short_R_int)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_arc_struct_ShortSeq_lastIndexOf_char_R_int 28
typedef jint (*func_arc_struct_ShortSeq_lastIndexOf_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_struct_ShortSeq_removeValue_short_R_boolean 29
typedef jbool (*func_arc_struct_ShortSeq_removeValue_short_R_boolean)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_arc_struct_ShortSeq_removeIndex_int_R_short 30
typedef jshort (*func_arc_struct_ShortSeq_removeIndex_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_removeRange_int_int 31
typedef void (*func_arc_struct_ShortSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean 32
typedef jbool (*func_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ShortSeq_pop_R_short 33
typedef jshort (*func_arc_struct_ShortSeq_pop_R_short)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_peek_R_short 34
typedef jshort (*func_arc_struct_ShortSeq_peek_R_short)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_first_R_short 35
typedef jshort (*func_arc_struct_ShortSeq_first_R_short)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_isEmpty_R_boolean 36
typedef jbool (*func_arc_struct_ShortSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_clear 37
typedef void (*func_arc_struct_ShortSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_shrink_R_Array1_short 38
typedef jobject (*func_arc_struct_ShortSeq_shrink_R_Array1_short)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short 39
typedef jobject (*func_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_setSize_int_R_Array1_short 40
typedef jobject (*func_arc_struct_ShortSeq_setSize_int_R_Array1_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_resize_int_R_Array1_short 41
typedef jobject (*func_arc_struct_ShortSeq_resize_int_R_Array1_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_sort 42
typedef void (*func_arc_struct_ShortSeq_sort)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_reverse 43
typedef void (*func_arc_struct_ShortSeq_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_shuffle 44
typedef void (*func_arc_struct_ShortSeq_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_truncate_int 45
typedef void (*func_arc_struct_ShortSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ShortSeq_random_R_short 46
typedef jshort (*func_arc_struct_ShortSeq_random_R_short)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_toArray_R_Array1_short 47
typedef jobject (*func_arc_struct_ShortSeq_toArray_R_Array1_short)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String 48
typedef jobject (*func_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_ShortSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_ShortSeq(jcontext ctx);
void init_arc_struct_ShortSeq(jcontext ctx, jobject self);
void init_arc_struct_ShortSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ShortSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_ShortSeq_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_ShortSeq_Array1_short(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_ShortSeq_boolean_Array1_short_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_ShortSeq_with_Array1_short_R_arc_struct_ShortSeq(jcontext ctx, jobject param0);
void M_arc_struct_ShortSeq_add_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ShortSeq_add_short(jcontext ctx, jobject self, jshort param0);
void M_arc_struct_ShortSeq_add_short_short(jcontext ctx, jobject self, jshort param0, jshort param1);
void M_arc_struct_ShortSeq_add_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2);
void M_arc_struct_ShortSeq_add_short_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3);
void M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ShortSeq_addAll_arc_struct_ShortSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ShortSeq_addAll_Array1_short(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ShortSeq_addAll_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jshort M_arc_struct_ShortSeq_get_int_R_short(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ShortSeq_set_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_arc_struct_ShortSeq_incr_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_arc_struct_ShortSeq_mul_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_arc_struct_ShortSeq_insert_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_arc_struct_ShortSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_ShortSeq_contains_short_R_boolean(jcontext ctx, jobject self, jshort param0);
jint M_arc_struct_ShortSeq_indexOf_short_R_int(jcontext ctx, jobject self, jshort param0);
jint M_arc_struct_ShortSeq_lastIndexOf_char_R_int(jcontext ctx, jobject self, jchar param0);
jbool M_arc_struct_ShortSeq_removeValue_short_R_boolean(jcontext ctx, jobject self, jshort param0);
jshort M_arc_struct_ShortSeq_removeIndex_int_R_short(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ShortSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_ShortSeq_removeAll_arc_struct_ShortSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jshort M_arc_struct_ShortSeq_pop_R_short(jcontext ctx, jobject self);
jshort M_arc_struct_ShortSeq_peek_R_short(jcontext ctx, jobject self);
jshort M_arc_struct_ShortSeq_first_R_short(jcontext ctx, jobject self);
jbool M_arc_struct_ShortSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_ShortSeq_clear(jcontext ctx, jobject self);
jobject M_arc_struct_ShortSeq_shrink_R_Array1_short(jcontext ctx, jobject self);
jobject M_arc_struct_ShortSeq_ensureCapacity_int_R_Array1_short(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_ShortSeq_setSize_int_R_Array1_short(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_ShortSeq_resize_int_R_Array1_short(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ShortSeq_sort(jcontext ctx, jobject self);
void M_arc_struct_ShortSeq_reverse(jcontext ctx, jobject self);
void M_arc_struct_ShortSeq_shuffle(jcontext ctx, jobject self);
void M_arc_struct_ShortSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jshort M_arc_struct_ShortSeq_random_R_short(jcontext ctx, jobject self);
jobject M_arc_struct_ShortSeq_toArray_R_Array1_short(jcontext ctx, jobject self);
jint M_arc_struct_ShortSeq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ShortSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ShortSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ShortSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
