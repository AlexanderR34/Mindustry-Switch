#ifndef HEADER_arc_struct_BoolSeq
#define HEADER_arc_struct_BoolSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_BoolSeq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} arc_struct_BoolSeq;

extern Class class_arc_struct_BoolSeq;


#define VTABLE_arc_struct_BoolSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_BoolSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BoolSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_BoolSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_BoolSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_BoolSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_finalize 5
typedef void (*func_arc_struct_BoolSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_notify 6
typedef void (*func_arc_struct_BoolSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_notifyAll 7
typedef void (*func_arc_struct_BoolSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_wait 8
typedef void (*func_arc_struct_BoolSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_wait_long 9
typedef void (*func_arc_struct_BoolSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_BoolSeq_wait_long_int 10
typedef void (*func_arc_struct_BoolSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_BoolSeq_add_boolean 11
typedef void (*func_arc_struct_BoolSeq_add_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_struct_BoolSeq_add_boolean_boolean 12
typedef void (*func_arc_struct_BoolSeq_add_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_arc_struct_BoolSeq_add_boolean_boolean_boolean 13
typedef void (*func_arc_struct_BoolSeq_add_boolean_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2);
#define VTABLE_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean 14
typedef void (*func_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3);
#define VTABLE_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq 15
typedef void (*func_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int 16
typedef void (*func_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean 17
typedef void (*func_arc_struct_BoolSeq_addAll_Array1_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BoolSeq_addAll_Array1_boolean_int_int 18
typedef void (*func_arc_struct_BoolSeq_addAll_Array1_boolean_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_BoolSeq_get_int_R_boolean 19
typedef jbool (*func_arc_struct_BoolSeq_get_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BoolSeq_set_int_boolean 20
typedef void (*func_arc_struct_BoolSeq_set_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_arc_struct_BoolSeq_insert_int_boolean 21
typedef void (*func_arc_struct_BoolSeq_insert_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_arc_struct_BoolSeq_swap_int_int 22
typedef void (*func_arc_struct_BoolSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_BoolSeq_removeIndex_int_R_boolean 23
typedef jbool (*func_arc_struct_BoolSeq_removeIndex_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BoolSeq_removeRange_int_int 24
typedef void (*func_arc_struct_BoolSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean 25
typedef jbool (*func_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BoolSeq_pop_R_boolean 26
typedef jbool (*func_arc_struct_BoolSeq_pop_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_peek_R_boolean 27
typedef jbool (*func_arc_struct_BoolSeq_peek_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_first_R_boolean 28
typedef jbool (*func_arc_struct_BoolSeq_first_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_isEmpty_R_boolean 29
typedef jbool (*func_arc_struct_BoolSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_clear 30
typedef void (*func_arc_struct_BoolSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_shrink_R_Array1_boolean 31
typedef jobject (*func_arc_struct_BoolSeq_shrink_R_Array1_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean 32
typedef jobject (*func_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BoolSeq_setSize_int_R_Array1_boolean 33
typedef jobject (*func_arc_struct_BoolSeq_setSize_int_R_Array1_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BoolSeq_resize_int_R_Array1_boolean 34
typedef jobject (*func_arc_struct_BoolSeq_resize_int_R_Array1_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BoolSeq_reverse 35
typedef void (*func_arc_struct_BoolSeq_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_shuffle 36
typedef void (*func_arc_struct_BoolSeq_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_truncate_int 37
typedef void (*func_arc_struct_BoolSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BoolSeq_random_R_boolean 38
typedef jbool (*func_arc_struct_BoolSeq_random_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_toArray_R_Array1_boolean 39
typedef jobject (*func_arc_struct_BoolSeq_toArray_R_Array1_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String 40
typedef jobject (*func_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_BoolSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_BoolSeq(jcontext ctx);
void init_arc_struct_BoolSeq(jcontext ctx, jobject self);
void init_arc_struct_BoolSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_BoolSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_BoolSeq_arc_struct_BoolSeq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_BoolSeq_Array1_boolean(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_BoolSeq_boolean_Array1_boolean_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_BoolSeq_with_Array1_boolean_R_arc_struct_BoolSeq(jcontext ctx, jobject param0);
void M_arc_struct_BoolSeq_add_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_struct_BoolSeq_add_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_arc_struct_BoolSeq_add_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2);
void M_arc_struct_BoolSeq_add_boolean_boolean_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1, jbool param2, jbool param3);
void M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_BoolSeq_addAll_arc_struct_BoolSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_BoolSeq_addAll_Array1_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_BoolSeq_addAll_Array1_boolean_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_arc_struct_BoolSeq_get_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_struct_BoolSeq_set_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_arc_struct_BoolSeq_insert_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_arc_struct_BoolSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_BoolSeq_removeIndex_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_struct_BoolSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_BoolSeq_removeAll_arc_struct_BoolSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_BoolSeq_pop_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_BoolSeq_peek_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_BoolSeq_first_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_BoolSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_BoolSeq_clear(jcontext ctx, jobject self);
jobject M_arc_struct_BoolSeq_shrink_R_Array1_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_BoolSeq_ensureCapacity_int_R_Array1_boolean(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_BoolSeq_setSize_int_R_Array1_boolean(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_BoolSeq_resize_int_R_Array1_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_struct_BoolSeq_reverse(jcontext ctx, jobject self);
void M_arc_struct_BoolSeq_shuffle(jcontext ctx, jobject self);
void M_arc_struct_BoolSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_BoolSeq_random_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_BoolSeq_toArray_R_Array1_boolean(jcontext ctx, jobject self);
jint M_arc_struct_BoolSeq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_BoolSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_BoolSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_BoolSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
