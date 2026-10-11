#ifndef HEADER_java_util_Arrays
#define HEADER_java_util_Arrays

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Arrays {
	java_lang_Object parent;
} java_util_Arrays;

extern Class class_java_util_Arrays;

extern jint SF_java_util_Arrays_SIMPLE_LENGTH;

#define VTABLE_java_util_Arrays_hashCode_R_int 0
typedef jint (*func_java_util_Arrays_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Arrays_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Arrays_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Arrays_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Arrays_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Arrays_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_finalize 5
typedef void (*func_java_util_Arrays_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_notify 6
typedef void (*func_java_util_Arrays_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_notifyAll 7
typedef void (*func_java_util_Arrays_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_wait 8
typedef void (*func_java_util_Arrays_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Arrays_wait_long 9
typedef void (*func_java_util_Arrays_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Arrays_wait_long_int 10
typedef void (*func_java_util_Arrays_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_Arrays(jobject object, jint mark, jint depth);
void clinit_java_util_Arrays(jcontext ctx);
void SM_java_util_Arrays_checkOffsetAndCount_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void init_java_util_Arrays(jcontext ctx, jobject self);
jobject SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_binarySearch_Array1_byte_byte_R_int(jcontext ctx, jobject param0, jbyte param1);
jint SM_java_util_Arrays_binarySearch_Array1_char_char_R_int(jcontext ctx, jobject param0, jchar param1);
jint SM_java_util_Arrays_binarySearch_Array1_double_double_R_int(jcontext ctx, jobject param0, jdouble param1);
jint SM_java_util_Arrays_binarySearch_Array1_float_float_R_int(jcontext ctx, jobject param0, jfloat param1);
jint SM_java_util_Arrays_binarySearch_Array1_int_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_util_Arrays_binarySearch_Array1_long_long_R_int(jcontext ctx, jobject param0, jlong param1);
jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_java_util_Arrays_binarySearch_Array1_short_short_R_int(jcontext ctx, jobject param0, jshort param1);
jint SM_java_util_Arrays_binarySearch_Array1_byte_int_int_byte_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jbyte param3);
jint SM_java_util_Arrays_binarySearch_Array1_char_int_int_char_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jchar param3);
jint SM_java_util_Arrays_binarySearch_Array1_double_int_int_double_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jdouble param3);
jint SM_java_util_Arrays_binarySearch_Array1_float_int_int_float_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3);
jint SM_java_util_Arrays_binarySearch_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_binarySearch_Array1_long_int_int_long_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jlong param3);
jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4);
jint SM_java_util_Arrays_binarySearch_Array1_short_int_int_short_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jshort param3);
void SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_java_util_Arrays_fill_Array1_byte_byte(jcontext ctx, jobject param0, jbyte param1);
void SM_java_util_Arrays_fill_Array1_byte_int_int_byte(jcontext ctx, jobject param0, jint param1, jint param2, jbyte param3);
void SM_java_util_Arrays_fill_Array1_short_short(jcontext ctx, jobject param0, jshort param1);
void SM_java_util_Arrays_fill_Array1_short_int_int_short(jcontext ctx, jobject param0, jint param1, jint param2, jshort param3);
void SM_java_util_Arrays_fill_Array1_char_char(jcontext ctx, jobject param0, jchar param1);
void SM_java_util_Arrays_fill_Array1_char_int_int_char(jcontext ctx, jobject param0, jint param1, jint param2, jchar param3);
void SM_java_util_Arrays_fill_Array1_int_int(jcontext ctx, jobject param0, jint param1);
void SM_java_util_Arrays_fill_Array1_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_java_util_Arrays_fill_Array1_long_long(jcontext ctx, jobject param0, jlong param1);
void SM_java_util_Arrays_fill_Array1_long_int_int_long(jcontext ctx, jobject param0, jint param1, jint param2, jlong param3);
void SM_java_util_Arrays_fill_Array1_float_float(jcontext ctx, jobject param0, jfloat param1);
void SM_java_util_Arrays_fill_Array1_float_int_int_float(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3);
void SM_java_util_Arrays_fill_Array1_double_double(jcontext ctx, jobject param0, jdouble param1);
void SM_java_util_Arrays_fill_Array1_double_int_int_double(jcontext ctx, jobject param0, jint param1, jint param2, jdouble param3);
void SM_java_util_Arrays_fill_Array1_boolean_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_java_util_Arrays_fill_Array1_boolean_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
void SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jint SM_java_util_Arrays_hashCode_Array1_boolean_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_int_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_short_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_char_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_byte_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_long_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_float_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_double_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_deepHashCode_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0);
jint SM_java_util_Arrays_deepHashCodeElement_java_lang_Object_R_int(jcontext ctx, jobject param0);
jbool SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_short_Array1_short_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_char_Array1_char_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_long_Array1_long_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_double_Array1_double_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_boolean_Array1_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_deepEquals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_deepEqualsElements_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_java_util_Arrays_isSame_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_java_util_Arrays_lessThan_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_java_util_Arrays_isSame_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_java_util_Arrays_lessThan_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jint SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_java_util_Arrays_sort_Array1_byte(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_checkBounds_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_byte(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_sort_Array1_char(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_char_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_char(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_sort_Array1_double(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_double_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_double(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_sort_Array1_float(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_float(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_sort_Array1_int(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_int(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_sort_Array1_long(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_long_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_long(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_sort_Array1_java_lang_Object(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_swap_int_int_Array1_java_lang_Object(jcontext ctx, jint param0, jint param1, jobject param2);
void SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jobject param4);
jint SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Comparable_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jint SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
jint SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jobject param3, jint param4);
jint SM_java_util_Arrays_charAt_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
void SM_java_util_Arrays_copySwap_Array1_java_lang_Object_int_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5);
void SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
void SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject param0, jobject param1);
void SM_java_util_Arrays_sort_Array1_short(jcontext ctx, jobject param0);
void SM_java_util_Arrays_sort_Array1_short_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_util_Arrays_sort_int_int_Array1_short(jcontext ctx, jint param0, jint param1, jobject param2);
jobject SM_java_util_Arrays_toString_Array1_boolean_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_char_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_double_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_float_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_int_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_long_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_short_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_deepToString_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_deepToStringImpl_Array1_java_lang_Object_Array1_java_lang_Object_java_lang_StringBuffer_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_java_util_Arrays_isPrimitiveArray_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_toStringObj_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_java_util_Arrays_deepToStringImplContains_Array1_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_util_Arrays_copyOfRange_Array1_boolean_int_int_R_Array1_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
jobject SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOfRange_Array1_byte_int_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOfRange_Array1_char_int_int_R_Array1_char(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOfRange_Array1_double_int_int_R_Array1_double(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOfRange_Array1_float_int_int_R_Array1_float(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOf_Array1_boolean_R_Array1_boolean(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_boolean_int_R_Array1_boolean(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_char_R_Array1_char(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_double_R_Array1_double(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_double_int_R_Array1_double(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_float_R_Array1_float(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_long_R_Array1_long(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_long_int_R_Array1_long(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_int_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOf_Array1_byte_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_copyOf_Array1_short_R_Array1_short(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jobject SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOfRange_Array1_long_int_int_R_Array1_long(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOfRange_Array1_short_int_int_R_Array1_short(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_copyOf_Array1_short_int_R_Array1_short(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Arrays_spliterator_Array1_java_lang_Object_R_java_util_Spliterator(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_spliterator_Array1_java_lang_Object_int_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_spliterator_Array1_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_spliterator_Array1_int_int_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_spliterator_Array1_long_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_spliterator_Array1_long_int_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_util_Arrays_spliterator_Array1_double_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0);
jobject SM_java_util_Arrays_spliterator_Array1_double_int_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
