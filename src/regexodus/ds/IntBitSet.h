#ifndef HEADER_regexodus_ds_IntBitSet
#define HEADER_regexodus_ds_IntBitSet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_ds_IntBitSet {
	java_lang_Object parent;
	jref F_data;
} regexodus_ds_IntBitSet;

extern Class class_regexodus_ds_IntBitSet;


#define VTABLE_regexodus_ds_IntBitSet_hashCode_R_int 0
typedef jint (*func_regexodus_ds_IntBitSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_IntBitSet_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_ds_IntBitSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_ds_IntBitSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_ds_IntBitSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_finalize 5
typedef void (*func_regexodus_ds_IntBitSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_notify 6
typedef void (*func_regexodus_ds_IntBitSet_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_notifyAll 7
typedef void (*func_regexodus_ds_IntBitSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_wait 8
typedef void (*func_regexodus_ds_IntBitSet_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_wait_long 9
typedef void (*func_regexodus_ds_IntBitSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_ds_IntBitSet_wait_long_int 10
typedef void (*func_regexodus_ds_IntBitSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_ds_IntBitSet_flip_int 11
typedef void (*func_regexodus_ds_IntBitSet_flip_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_IntBitSet_flip_int_int 12
typedef void (*func_regexodus_ds_IntBitSet_flip_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_regexodus_ds_IntBitSet_set_int 13
typedef void (*func_regexodus_ds_IntBitSet_set_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_IntBitSet_set_int_boolean 14
typedef void (*func_regexodus_ds_IntBitSet_set_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_regexodus_ds_IntBitSet_set_int_int 15
typedef void (*func_regexodus_ds_IntBitSet_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_regexodus_ds_IntBitSet_set_int_int_boolean 16
typedef void (*func_regexodus_ds_IntBitSet_set_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_regexodus_ds_IntBitSet_clear_int 17
typedef void (*func_regexodus_ds_IntBitSet_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_IntBitSet_clear_int_int 18
typedef void (*func_regexodus_ds_IntBitSet_clear_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_regexodus_ds_IntBitSet_clear 19
typedef void (*func_regexodus_ds_IntBitSet_clear)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_get_int_R_boolean 20
typedef jbool (*func_regexodus_ds_IntBitSet_get_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet 21
typedef jobject (*func_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_regexodus_ds_IntBitSet_length_R_int 22
typedef jint (*func_regexodus_ds_IntBitSet_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_isEmpty_R_boolean 23
typedef jbool (*func_regexodus_ds_IntBitSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean 24
typedef jbool (*func_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_IntBitSet_cardinality_R_int 25
typedef jint (*func_regexodus_ds_IntBitSet_cardinality_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet 26
typedef jobject (*func_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet 27
typedef jobject (*func_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet 28
typedef jobject (*func_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet 29
typedef jobject (*func_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet 30
typedef jobject (*func_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_nextSetBit_int_R_int 31
typedef jint (*func_regexodus_ds_IntBitSet_nextSetBit_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_IntBitSet_nextClearBit_int_R_int 32
typedef jint (*func_regexodus_ds_IntBitSet_nextClearBit_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_IntBitSet_size_R_int 33
typedef jint (*func_regexodus_ds_IntBitSet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet 34
typedef jobject (*func_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet)(jcontext ctx, jobject self);

void mark_regexodus_ds_IntBitSet(jobject object, jint mark, jint depth);
void clinit_regexodus_ds_IntBitSet(jcontext ctx);
void init_regexodus_ds_IntBitSet(jcontext ctx, jobject self);
void init_regexodus_ds_IntBitSet_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_regexodus_ds_IntBitSet_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_regexodus_ds_IntBitSet_flip_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_ds_IntBitSet_flip_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_regexodus_ds_IntBitSet_set_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_ds_IntBitSet_set_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_regexodus_ds_IntBitSet_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_regexodus_ds_IntBitSet_set_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
void M_regexodus_ds_IntBitSet_clear_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_ds_IntBitSet_clear_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_regexodus_ds_IntBitSet_clear(jcontext ctx, jobject self);
jbool M_regexodus_ds_IntBitSet_get_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_regexodus_ds_IntBitSet_get_int_int_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jint param0, jint param1);
jint M_regexodus_ds_IntBitSet_length_R_int(jcontext ctx, jobject self);
jbool M_regexodus_ds_IntBitSet_isEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_regexodus_ds_IntBitSet_intersects_regexodus_ds_IntBitSet_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_ds_IntBitSet_cardinality_R_int(jcontext ctx, jobject self);
jobject M_regexodus_ds_IntBitSet_and_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_ds_IntBitSet_or_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_ds_IntBitSet_xor_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_ds_IntBitSet_andNot_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_ds_IntBitSet_negate_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self);
jint M_regexodus_ds_IntBitSet_nextSetBit_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_regexodus_ds_IntBitSet_nextClearBit_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_regexodus_ds_IntBitSet_size_R_int(jcontext ctx, jobject self);
jbool M_regexodus_ds_IntBitSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_ds_IntBitSet_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_ds_IntBitSet_copy_R_regexodus_ds_IntBitSet(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
