#ifndef HEADER_arc_struct_IntSet
#define HEADER_arc_struct_IntSet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntSet {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jbool F_hasZeroValue;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jref F_iterator1;
	jref F_iterator2;
} arc_struct_IntSet;

extern Class class_arc_struct_IntSet;


#define VTABLE_arc_struct_IntSet_hashCode_R_int 0
typedef jint (*func_arc_struct_IntSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSet_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_finalize 5
typedef void (*func_arc_struct_IntSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_notify 6
typedef void (*func_arc_struct_IntSet_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_notifyAll 7
typedef void (*func_arc_struct_IntSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_wait 8
typedef void (*func_arc_struct_IntSet_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_wait_long 9
typedef void (*func_arc_struct_IntSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntSet_wait_long_int 10
typedef void (*func_arc_struct_IntSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntSet_each_arc_func_Intc 11
typedef void (*func_arc_struct_IntSet_each_arc_func_Intc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSet_place_int_R_int 12
typedef jint (*func_arc_struct_IntSet_place_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_locateKey_int_R_int 13
typedef jint (*func_arc_struct_IntSet_locateKey_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_add_int_R_boolean 14
typedef jbool (*func_arc_struct_IntSet_add_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSeq 15
typedef void (*func_arc_struct_IntSet_addAll_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSeq_int_int 16
typedef void (*func_arc_struct_IntSet_addAll_arc_struct_IntSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntSet_addAll_Array1_int 17
typedef void (*func_arc_struct_IntSet_addAll_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSet_addAll_Array1_int_int_int 18
typedef void (*func_arc_struct_IntSet_addAll_Array1_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSet 19
typedef void (*func_arc_struct_IntSet_addAll_arc_struct_IntSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSet_addResize_int 20
typedef void (*func_arc_struct_IntSet_addResize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_remove_int_R_boolean 21
typedef jbool (*func_arc_struct_IntSet_remove_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_notEmpty_R_boolean 22
typedef jbool (*func_arc_struct_IntSet_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_isEmpty_R_boolean 23
typedef jbool (*func_arc_struct_IntSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_shrink_int 24
typedef void (*func_arc_struct_IntSet_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_clear_int 25
typedef void (*func_arc_struct_IntSet_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_clear 26
typedef void (*func_arc_struct_IntSet_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_contains_int_R_boolean 27
typedef jbool (*func_arc_struct_IntSet_contains_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_first_R_int 28
typedef jint (*func_arc_struct_IntSet_first_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet_ensureCapacity_int 29
typedef void (*func_arc_struct_IntSet_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_resize_int 30
typedef void (*func_arc_struct_IntSet_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator 31
typedef jobject (*func_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator)(jcontext ctx, jobject self);

void mark_arc_struct_IntSet(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntSet(jcontext ctx);
void init_arc_struct_IntSet(jcontext ctx, jobject self);
void init_arc_struct_IntSet_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_IntSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_IntSet_arc_struct_IntSet(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSet_each_arc_func_Intc(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntSet_place_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSet_locateKey_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntSet_add_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSet_addAll_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSet_addAll_arc_struct_IntSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_IntSet_addAll_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSet_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_IntSet_addAll_arc_struct_IntSet(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSet_addResize_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntSet_remove_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntSet_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_IntSet_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_IntSet_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSet_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSet_clear(jcontext ctx, jobject self);
jbool M_arc_struct_IntSet_contains_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSet_first_R_int(jcontext ctx, jobject self);
void M_arc_struct_IntSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSet_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSet_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_IntSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_IntSet_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_IntSet_iterator_R_arc_struct_IntSet$IntSetIterator(jcontext ctx, jobject self);
jobject SM_arc_struct_IntSet_with_Array1_int_R_arc_struct_IntSet(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
