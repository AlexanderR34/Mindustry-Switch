#ifndef HEADER_regexodus_Block
#define HEADER_regexodus_Block

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "regexodus/UnicodeConstants.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Block {
	java_lang_Object parent;
	jbool F_isFull;
	jref F_bits;
	jbool F_shared;
} regexodus_Block;

extern Class class_regexodus_Block;

extern jobject SF_regexodus_Block_EMPTY_BITS;
extern jobject SF_regexodus_Block_FULL_BITS;

#define VTABLE_regexodus_Block_hashCode_R_int 0
typedef jint (*func_regexodus_Block_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Block_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Block_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Block_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Block_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Block_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_finalize 5
typedef void (*func_regexodus_Block_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_notify 6
typedef void (*func_regexodus_Block_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_notifyAll 7
typedef void (*func_regexodus_Block_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_wait 8
typedef void (*func_regexodus_Block_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Block_wait_long 9
typedef void (*func_regexodus_Block_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Block_wait_long_int 10
typedef void (*func_regexodus_Block_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Block_set_int_R_boolean 11
typedef jbool (*func_regexodus_Block_set_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_Block_get_int_R_boolean 12
typedef jbool (*func_regexodus_Block_get_int_R_boolean)(jcontext ctx, jobject self, jint param0);

void mark_regexodus_Block(jobject object, jint mark, jint depth);
void clinit_regexodus_Block(jcontext ctx);
void init_regexodus_Block(jcontext ctx, jobject self);
void init_regexodus_Block_regexodus_ds_IntBitSet(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Block_set_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_regexodus_Block_get_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint SM_regexodus_Block_add_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jbool param4);
jint SM_regexodus_Block_add_regexodus_Block_regexodus_Block_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2);
jint SM_regexodus_Block_subtract_Array1_regexodus_Block_Array1_regexodus_Block_int_int_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jbool param4);
jint SM_regexodus_Block_subtract_regexodus_Block_regexodus_Block_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2);
jobject SM_regexodus_Block_copyBits_regexodus_Block_R_regexodus_ds_IntBitSet(jcontext ctx, jobject param0);
jobject SM_regexodus_Block_fullBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject param0);
jobject SM_regexodus_Block_emptyBits_regexodus_ds_IntBitSet_R_regexodus_ds_IntBitSet(jcontext ctx, jobject param0);
jint SM_regexodus_Block_count_regexodus_ds_IntBitSet_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_regexodus_Block_toBitset2_Array1_regexodus_Block_R_Array1_regexodus_ds_IntBitSet(jcontext ctx, jobject param0);
jbool M_regexodus_Block_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Block_hashCode_R_int(jcontext ctx, jobject self);
jobject M_regexodus_Block_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
