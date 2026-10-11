#ifndef HEADER_java_nio_Bits
#define HEADER_java_nio_Bits

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_Bits {
	java_lang_Object parent;
} java_nio_Bits;

extern Class class_java_nio_Bits;

extern jbool SF_java_nio_Bits_unaligned;
extern jbool SF_java_nio_Bits_unalignedKnown;

#define VTABLE_java_nio_Bits_hashCode_R_int 0
typedef jint (*func_java_nio_Bits_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_Bits_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_Bits_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_Bits_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_Bits_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_Bits_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_finalize 5
typedef void (*func_java_nio_Bits_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_notify 6
typedef void (*func_java_nio_Bits_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_notifyAll 7
typedef void (*func_java_nio_Bits_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_wait 8
typedef void (*func_java_nio_Bits_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_Bits_wait_long 9
typedef void (*func_java_nio_Bits_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_Bits_wait_long_int 10
typedef void (*func_java_nio_Bits_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_nio_Bits(jobject object, jint mark, jint depth);
void clinit_java_nio_Bits(jcontext ctx);
void init_java_nio_Bits(jcontext ctx, jobject self);
jshort SM_java_nio_Bits_swap_short_R_short(jcontext ctx, jshort param0);
jchar SM_java_nio_Bits_swap_char_R_char(jcontext ctx, jchar param0);
jint SM_java_nio_Bits_swap_int_R_int(jcontext ctx, jint param0);
jlong SM_java_nio_Bits_swap_long_R_long(jcontext ctx, jlong param0);
jchar SM_java_nio_Bits_makeChar_byte_byte_R_char(jcontext ctx, jbyte param0, jbyte param1);
jchar SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char(jcontext ctx, jobject param0, jint param1);
jchar SM_java_nio_Bits_getCharB_java_nio_ByteBuffer_int_R_char(jcontext ctx, jobject param0, jint param1);
jchar SM_java_nio_Bits_getChar_java_nio_ByteBuffer_int_boolean_R_char(jcontext ctx, jobject param0, jint param1, jbool param2);
jbyte SM_java_nio_Bits_char1_char_R_byte(jcontext ctx, jchar param0);
jbyte SM_java_nio_Bits_char0_char_R_byte(jcontext ctx, jchar param0);
void SM_java_nio_Bits_putCharL_java_nio_ByteBuffer_int_char(jcontext ctx, jobject param0, jint param1, jchar param2);
void SM_java_nio_Bits_putCharB_java_nio_ByteBuffer_int_char(jcontext ctx, jobject param0, jint param1, jchar param2);
void SM_java_nio_Bits_putChar_java_nio_ByteBuffer_int_char_boolean(jcontext ctx, jobject param0, jint param1, jchar param2, jbool param3);
jshort SM_java_nio_Bits_makeShort_byte_byte_R_short(jcontext ctx, jbyte param0, jbyte param1);
jshort SM_java_nio_Bits_getShortL_java_nio_ByteBuffer_int_R_short(jcontext ctx, jobject param0, jint param1);
jshort SM_java_nio_Bits_getShortB_java_nio_ByteBuffer_int_R_short(jcontext ctx, jobject param0, jint param1);
jshort SM_java_nio_Bits_getShort_java_nio_ByteBuffer_int_boolean_R_short(jcontext ctx, jobject param0, jint param1, jbool param2);
jbyte SM_java_nio_Bits_short1_short_R_byte(jcontext ctx, jshort param0);
jbyte SM_java_nio_Bits_short0_short_R_byte(jcontext ctx, jshort param0);
void SM_java_nio_Bits_putShortL_java_nio_ByteBuffer_int_short(jcontext ctx, jobject param0, jint param1, jshort param2);
void SM_java_nio_Bits_putShortB_java_nio_ByteBuffer_int_short(jcontext ctx, jobject param0, jint param1, jshort param2);
void SM_java_nio_Bits_putShort_java_nio_ByteBuffer_int_short_boolean(jcontext ctx, jobject param0, jint param1, jshort param2, jbool param3);
jint SM_java_nio_Bits_makeInt_byte_byte_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1, jbyte param2, jbyte param3);
jint SM_java_nio_Bits_getIntL_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_nio_Bits_getIntB_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_nio_Bits_getInt_java_nio_ByteBuffer_int_boolean_R_int(jcontext ctx, jobject param0, jint param1, jbool param2);
jbyte SM_java_nio_Bits_int3_int_R_byte(jcontext ctx, jint param0);
jbyte SM_java_nio_Bits_int2_int_R_byte(jcontext ctx, jint param0);
jbyte SM_java_nio_Bits_int1_int_R_byte(jcontext ctx, jint param0);
jbyte SM_java_nio_Bits_int0_int_R_byte(jcontext ctx, jint param0);
void SM_java_nio_Bits_putIntL_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_nio_Bits_putIntB_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_nio_Bits_putInt_java_nio_ByteBuffer_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jlong SM_java_nio_Bits_makeLong_byte_byte_byte_byte_byte_byte_byte_byte_R_long(jcontext ctx, jbyte param0, jbyte param1, jbyte param2, jbyte param3, jbyte param4, jbyte param5, jbyte param6, jbyte param7);
jlong SM_java_nio_Bits_getLongL_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_nio_Bits_getLong_java_nio_ByteBuffer_int_boolean_R_long(jcontext ctx, jobject param0, jint param1, jbool param2);
jbyte SM_java_nio_Bits_long7_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long6_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long5_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long4_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long3_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long2_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long1_long_R_byte(jcontext ctx, jlong param0);
jbyte SM_java_nio_Bits_long0_long_R_byte(jcontext ctx, jlong param0);
void SM_java_nio_Bits_putLongL_java_nio_ByteBuffer_int_long(jcontext ctx, jobject param0, jint param1, jlong param2);
void SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long(jcontext ctx, jobject param0, jint param1, jlong param2);
void SM_java_nio_Bits_putLong_java_nio_ByteBuffer_int_long_boolean(jcontext ctx, jobject param0, jint param1, jlong param2, jbool param3);
jfloat SM_java_nio_Bits_getFloatL_java_nio_ByteBuffer_int_R_float(jcontext ctx, jobject param0, jint param1);
jfloat SM_java_nio_Bits_getFloatB_java_nio_ByteBuffer_int_R_float(jcontext ctx, jobject param0, jint param1);
jfloat SM_java_nio_Bits_getFloat_java_nio_ByteBuffer_int_boolean_R_float(jcontext ctx, jobject param0, jint param1, jbool param2);
void SM_java_nio_Bits_putFloatL_java_nio_ByteBuffer_int_float(jcontext ctx, jobject param0, jint param1, jfloat param2);
void SM_java_nio_Bits_putFloatB_java_nio_ByteBuffer_int_float(jcontext ctx, jobject param0, jint param1, jfloat param2);
void SM_java_nio_Bits_putFloat_java_nio_ByteBuffer_int_float_boolean(jcontext ctx, jobject param0, jint param1, jfloat param2, jbool param3);
jdouble SM_java_nio_Bits_getDoubleL_java_nio_ByteBuffer_int_R_double(jcontext ctx, jobject param0, jint param1);
jdouble SM_java_nio_Bits_getDoubleB_java_nio_ByteBuffer_int_R_double(jcontext ctx, jobject param0, jint param1);
jdouble SM_java_nio_Bits_getDouble_java_nio_ByteBuffer_int_boolean_R_double(jcontext ctx, jobject param0, jint param1, jbool param2);
void SM_java_nio_Bits_putDoubleL_java_nio_ByteBuffer_int_double(jcontext ctx, jobject param0, jint param1, jdouble param2);
void SM_java_nio_Bits_putDoubleB_java_nio_ByteBuffer_int_double(jcontext ctx, jobject param0, jint param1, jdouble param2);
void SM_java_nio_Bits_putDouble_java_nio_ByteBuffer_int_double_boolean(jcontext ctx, jobject param0, jint param1, jdouble param2, jbool param3);
jbool SM_java_nio_Bits_unaligned_R_boolean(jcontext ctx);
jbool SM_java_nio_Bits_isPrimitiveArray_java_lang_Class_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
