#ifndef HEADER_arc_struct_Bits
#define HEADER_arc_struct_Bits

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Bits {
	java_lang_Object parent;
	jref F_bits;
} arc_struct_Bits;

extern Class class_arc_struct_Bits;


#define VTABLE_arc_struct_Bits_hashCode_R_int 0
typedef jint (*func_arc_struct_Bits_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Bits_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Bits_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Bits_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Bits_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_finalize 5
typedef void (*func_arc_struct_Bits_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_notify 6
typedef void (*func_arc_struct_Bits_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_notifyAll 7
typedef void (*func_arc_struct_Bits_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_wait 8
typedef void (*func_arc_struct_Bits_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_wait_long 9
typedef void (*func_arc_struct_Bits_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Bits_wait_long_int 10
typedef void (*func_arc_struct_Bits_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Bits_set_arc_struct_Bits 11
typedef void (*func_arc_struct_Bits_set_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_get_int_R_boolean 12
typedef jbool (*func_arc_struct_Bits_get_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_getAndClear_int_R_boolean 13
typedef jbool (*func_arc_struct_Bits_getAndClear_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_getAndSet_int_R_boolean 14
typedef jbool (*func_arc_struct_Bits_getAndSet_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_set_int_boolean 15
typedef void (*func_arc_struct_Bits_set_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_arc_struct_Bits_set_int 16
typedef void (*func_arc_struct_Bits_set_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_set_int_int 17
typedef void (*func_arc_struct_Bits_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_Bits_flip_int 18
typedef void (*func_arc_struct_Bits_flip_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_checkCapacity_int 19
typedef void (*func_arc_struct_Bits_checkCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_clear_int 20
typedef void (*func_arc_struct_Bits_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_clear 21
typedef void (*func_arc_struct_Bits_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_numBits_R_int 22
typedef jint (*func_arc_struct_Bits_numBits_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_length_R_int 23
typedef jint (*func_arc_struct_Bits_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_isEmpty_R_boolean 24
typedef jbool (*func_arc_struct_Bits_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Bits_nextSetBit_int_R_int 25
typedef jint (*func_arc_struct_Bits_nextSetBit_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_nextClearBit_int_R_int 26
typedef jint (*func_arc_struct_Bits_nextClearBit_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Bits_and_arc_struct_Bits 27
typedef void (*func_arc_struct_Bits_and_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_andNot_arc_struct_Bits 28
typedef void (*func_arc_struct_Bits_andNot_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_or_arc_struct_Bits 29
typedef void (*func_arc_struct_Bits_or_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_xor_arc_struct_Bits 30
typedef void (*func_arc_struct_Bits_xor_arc_struct_Bits)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean 31
typedef jbool (*func_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean 32
typedef jbool (*func_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_Bits(jobject object, jint mark, jint depth);
void clinit_arc_struct_Bits(jcontext ctx);
void init_arc_struct_Bits(jcontext ctx, jobject self);
void init_arc_struct_Bits_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_set_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Bits_get_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_Bits_getAndClear_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_Bits_getAndSet_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_set_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_arc_struct_Bits_set_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_Bits_flip_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_checkCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_clear(jcontext ctx, jobject self);
jint M_arc_struct_Bits_numBits_R_int(jcontext ctx, jobject self);
jint M_arc_struct_Bits_length_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_Bits_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_arc_struct_Bits_nextSetBit_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_Bits_nextClearBit_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Bits_and_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Bits_andNot_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Bits_or_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Bits_xor_arc_struct_Bits(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Bits_intersects_arc_struct_Bits_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Bits_containsAll_arc_struct_Bits_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_Bits_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_Bits_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
