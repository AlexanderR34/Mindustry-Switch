#ifndef HEADER_java_nio_MappedByteBuffer
#define HEADER_java_nio_MappedByteBuffer

#include "Clearwing.h"
#include "java/nio/ByteBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_MappedByteBuffer {
	java_nio_ByteBuffer parent;
} java_nio_MappedByteBuffer;

extern Class class_java_nio_MappedByteBuffer;


#define VTABLE_java_nio_MappedByteBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_MappedByteBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_MappedByteBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_MappedByteBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_MappedByteBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_MappedByteBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_finalize 5
typedef void (*func_java_nio_MappedByteBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_notify 6
typedef void (*func_java_nio_MappedByteBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_notifyAll 7
typedef void (*func_java_nio_MappedByteBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_wait 8
typedef void (*func_java_nio_MappedByteBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_wait_long 9
typedef void (*func_java_nio_MappedByteBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_wait_long_int 10
typedef void (*func_java_nio_MappedByteBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_MappedByteBuffer_capacity_R_int 11
typedef jint (*func_java_nio_MappedByteBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_position_R_int 12
typedef jint (*func_java_nio_MappedByteBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_MappedByteBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_limit_R_int 14
typedef jint (*func_java_nio_MappedByteBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_MappedByteBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_MappedByteBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_MappedByteBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_MappedByteBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_MappedByteBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_MappedByteBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_remaining_R_int 21
typedef jint (*func_java_nio_MappedByteBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_MappedByteBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_MappedByteBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_MappedByteBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_MappedByteBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_MappedByteBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_MappedByteBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_MappedByteBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_MappedByteBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_MappedByteBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_MappedByteBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_MappedByteBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_MappedByteBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_MappedByteBuffer_markValue_R_int 34
typedef jint (*func_java_nio_MappedByteBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_truncate 35
typedef void (*func_java_nio_MappedByteBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_discardMark 36
typedef void (*func_java_nio_MappedByteBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_MappedByteBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_deallocate 38
typedef void (*func_java_nio_MappedByteBuffer_deallocate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_slice_R_java_nio_ByteBuffer 39
typedef jobject (*func_java_nio_MappedByteBuffer_slice_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_duplicate_R_java_nio_ByteBuffer 40
typedef jobject (*func_java_nio_MappedByteBuffer_duplicate_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer 41
typedef jobject (*func_java_nio_MappedByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_clear_R_java_nio_ByteBuffer 42
typedef jobject (*func_java_nio_MappedByteBuffer_clear_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_ix_int_R_long 43
typedef jlong (*func_java_nio_MappedByteBuffer_ix_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer__get_int_R_byte 44
typedef jbyte (*func_java_nio_MappedByteBuffer__get_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer__put_int_byte 45
typedef void (*func_java_nio_MappedByteBuffer__put_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_java_nio_MappedByteBuffer_get_R_byte 46
typedef jbyte (*func_java_nio_MappedByteBuffer_get_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_put_byte_R_java_nio_ByteBuffer 47
typedef jobject (*func_java_nio_MappedByteBuffer_put_byte_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_java_nio_MappedByteBuffer_get_int_R_byte 48
typedef jbyte (*func_java_nio_MappedByteBuffer_get_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_put_int_byte_R_java_nio_ByteBuffer 49
typedef jobject (*func_java_nio_MappedByteBuffer_put_int_byte_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_java_nio_MappedByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer 50
typedef jobject (*func_java_nio_MappedByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_MappedByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer 51
typedef jobject (*func_java_nio_MappedByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer 52
typedef jobject (*func_java_nio_MappedByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer 53
typedef jobject (*func_java_nio_MappedByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_MappedByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer 54
typedef jobject (*func_java_nio_MappedByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_array_R_Array1_byte 55
typedef jobject (*func_java_nio_MappedByteBuffer_array_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_position_int_R_java_nio_ByteBuffer 56
typedef jobject (*func_java_nio_MappedByteBuffer_position_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_limit_int_R_java_nio_ByteBuffer 57
typedef jobject (*func_java_nio_MappedByteBuffer_limit_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_mark_R_java_nio_ByteBuffer 58
typedef jobject (*func_java_nio_MappedByteBuffer_mark_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_reset_R_java_nio_ByteBuffer 59
typedef jobject (*func_java_nio_MappedByteBuffer_reset_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_flip_R_java_nio_ByteBuffer 60
typedef jobject (*func_java_nio_MappedByteBuffer_flip_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_rewind_R_java_nio_ByteBuffer 61
typedef jobject (*func_java_nio_MappedByteBuffer_rewind_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_compact_R_java_nio_ByteBuffer 62
typedef jobject (*func_java_nio_MappedByteBuffer_compact_R_java_nio_ByteBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_compareTo_java_nio_ByteBuffer_R_int 63
typedef jint (*func_java_nio_MappedByteBuffer_compareTo_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_order_R_java_nio_ByteOrder 64
typedef jobject (*func_java_nio_MappedByteBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer 65
typedef jobject (*func_java_nio_MappedByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_MappedByteBuffer_getChar_long_R_char 66
typedef jchar (*func_java_nio_MappedByteBuffer_getChar_long_R_char)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_getChar_R_char 67
typedef jchar (*func_java_nio_MappedByteBuffer_getChar_R_char)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getChar_int_R_char 68
typedef jchar (*func_java_nio_MappedByteBuffer_getChar_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putChar_long_char_R_java_nio_ByteBuffer 69
typedef jobject (*func_java_nio_MappedByteBuffer_putChar_long_char_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0, jchar param1);
#define VTABLE_java_nio_MappedByteBuffer_putChar_char_R_java_nio_ByteBuffer 70
typedef jobject (*func_java_nio_MappedByteBuffer_putChar_char_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_nio_MappedByteBuffer_putChar_int_char_R_java_nio_ByteBuffer 71
typedef jobject (*func_java_nio_MappedByteBuffer_putChar_int_char_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jchar param1);
#define VTABLE_java_nio_MappedByteBuffer_asCharBuffer_R_java_nio_CharBuffer 72
typedef jobject (*func_java_nio_MappedByteBuffer_asCharBuffer_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getShort_long_R_short 73
typedef jshort (*func_java_nio_MappedByteBuffer_getShort_long_R_short)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_getShort_R_short 74
typedef jshort (*func_java_nio_MappedByteBuffer_getShort_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getShort_int_R_short 75
typedef jshort (*func_java_nio_MappedByteBuffer_getShort_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putShort_long_short_R_java_nio_ByteBuffer 76
typedef jobject (*func_java_nio_MappedByteBuffer_putShort_long_short_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0, jshort param1);
#define VTABLE_java_nio_MappedByteBuffer_putShort_short_R_java_nio_ByteBuffer 77
typedef jobject (*func_java_nio_MappedByteBuffer_putShort_short_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_java_nio_MappedByteBuffer_putShort_int_short_R_java_nio_ByteBuffer 78
typedef jobject (*func_java_nio_MappedByteBuffer_putShort_int_short_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_java_nio_MappedByteBuffer_asShortBuffer_R_java_nio_ShortBuffer 79
typedef jobject (*func_java_nio_MappedByteBuffer_asShortBuffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getInt_long_R_int 80
typedef jint (*func_java_nio_MappedByteBuffer_getInt_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_getInt_R_int 81
typedef jint (*func_java_nio_MappedByteBuffer_getInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getInt_int_R_int 82
typedef jint (*func_java_nio_MappedByteBuffer_getInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putInt_long_int_R_java_nio_ByteBuffer 83
typedef jobject (*func_java_nio_MappedByteBuffer_putInt_long_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_MappedByteBuffer_putInt_int_R_java_nio_ByteBuffer 84
typedef jobject (*func_java_nio_MappedByteBuffer_putInt_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putInt_int_int_R_java_nio_ByteBuffer 85
typedef jobject (*func_java_nio_MappedByteBuffer_putInt_int_int_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_MappedByteBuffer_asIntBuffer_R_java_nio_IntBuffer 86
typedef jobject (*func_java_nio_MappedByteBuffer_asIntBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getLong_long_R_long 87
typedef jlong (*func_java_nio_MappedByteBuffer_getLong_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_getLong_R_long 88
typedef jlong (*func_java_nio_MappedByteBuffer_getLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getLong_int_R_long 89
typedef jlong (*func_java_nio_MappedByteBuffer_getLong_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putLong_long_long_R_java_nio_ByteBuffer 90
typedef jobject (*func_java_nio_MappedByteBuffer_putLong_long_long_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_nio_MappedByteBuffer_putLong_long_R_java_nio_ByteBuffer 91
typedef jobject (*func_java_nio_MappedByteBuffer_putLong_long_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_putLong_int_long_R_java_nio_ByteBuffer 92
typedef jobject (*func_java_nio_MappedByteBuffer_putLong_int_long_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_java_nio_MappedByteBuffer_asLongBuffer_R_java_nio_LongBuffer 93
typedef jobject (*func_java_nio_MappedByteBuffer_asLongBuffer_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getFloat_long_R_float 94
typedef jfloat (*func_java_nio_MappedByteBuffer_getFloat_long_R_float)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_getFloat_R_float 95
typedef jfloat (*func_java_nio_MappedByteBuffer_getFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getFloat_int_R_float 96
typedef jfloat (*func_java_nio_MappedByteBuffer_getFloat_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer 97
typedef jobject (*func_java_nio_MappedByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0, jfloat param1);
#define VTABLE_java_nio_MappedByteBuffer_putFloat_float_R_java_nio_ByteBuffer 98
typedef jobject (*func_java_nio_MappedByteBuffer_putFloat_float_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_nio_MappedByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer 99
typedef jobject (*func_java_nio_MappedByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_java_nio_MappedByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer 100
typedef jobject (*func_java_nio_MappedByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getDouble_long_R_double 101
typedef jdouble (*func_java_nio_MappedByteBuffer_getDouble_long_R_double)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_MappedByteBuffer_getDouble_R_double 102
typedef jdouble (*func_java_nio_MappedByteBuffer_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_nio_MappedByteBuffer_getDouble_int_R_double 103
typedef jdouble (*func_java_nio_MappedByteBuffer_getDouble_int_R_double)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_MappedByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer 104
typedef jobject (*func_java_nio_MappedByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jlong param0, jdouble param1);
#define VTABLE_java_nio_MappedByteBuffer_putDouble_double_R_java_nio_ByteBuffer 105
typedef jobject (*func_java_nio_MappedByteBuffer_putDouble_double_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_nio_MappedByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer 106
typedef jobject (*func_java_nio_MappedByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_java_nio_MappedByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer 107
typedef jobject (*func_java_nio_MappedByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);

void mark_java_nio_MappedByteBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_MappedByteBuffer(jcontext ctx);
void init_java_nio_MappedByteBuffer(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
