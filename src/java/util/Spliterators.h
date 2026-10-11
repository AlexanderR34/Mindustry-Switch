#ifndef HEADER_java_util_Spliterators
#define HEADER_java_util_Spliterators

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators {
	java_lang_Object parent;
} java_util_Spliterators;

extern Class class_java_util_Spliterators;

extern jobject SF_java_util_Spliterators_EMPTY_SPLITERATOR;
extern jobject SF_java_util_Spliterators_EMPTY_INT_SPLITERATOR;
extern jobject SF_java_util_Spliterators_EMPTY_LONG_SPLITERATOR;
extern jobject SF_java_util_Spliterators_EMPTY_DOUBLE_SPLITERATOR;

#define VTABLE_java_util_Spliterators_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_finalize 5
typedef void (*func_java_util_Spliterators_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_notify 6
typedef void (*func_java_util_Spliterators_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_notifyAll 7
typedef void (*func_java_util_Spliterators_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_wait 8
typedef void (*func_java_util_Spliterators_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators_wait_long 9
typedef void (*func_java_util_Spliterators_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators_wait_long_int 10
typedef void (*func_java_util_Spliterators_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_Spliterators(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators(jcontext ctx);
void init_java_util_Spliterators(jcontext ctx, jobject self);
jobject SM_java_util_Spliterators_emptySpliterator_R_java_util_Spliterator(jcontext ctx);
jobject SM_java_util_Spliterators_emptyIntSpliterator_R_java_util_Spliterator$OfInt(jcontext ctx);
jobject SM_java_util_Spliterators_emptyLongSpliterator_R_java_util_Spliterator$OfLong(jcontext ctx);
jobject SM_java_util_Spliterators_emptyDoubleSpliterator_R_java_util_Spliterator$OfDouble(jcontext ctx);
jobject SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_int_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jobject SM_java_util_Spliterators_spliterator_Array1_int_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_Array1_int_int_int_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jobject SM_java_util_Spliterators_spliterator_Array1_long_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_Array1_long_int_int_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jobject SM_java_util_Spliterators_spliterator_Array1_double_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_Array1_double_int_int_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_java_util_Spliterators_checkFromToBounds_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
jobject SM_java_util_Spliterators_spliterator_java_util_Collection_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_java_util_Iterator_long_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jlong param1, jint param2);
jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_Iterator_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfInt_long_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jlong param1, jint param2);
jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfInt_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfLong_long_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jlong param1, jint param2);
jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfLong_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_spliterator_java_util_PrimitiveIterator$OfDouble_long_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jlong param1, jint param2);
jobject SM_java_util_Spliterators_spliteratorUnknownSize_java_util_PrimitiveIterator$OfDouble_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_Spliterators_iterator_java_util_Spliterator_R_java_util_Iterator(jcontext ctx, jobject param0);
jobject SM_java_util_Spliterators_iterator_java_util_Spliterator$OfInt_R_java_util_PrimitiveIterator$OfInt(jcontext ctx, jobject param0);
jobject SM_java_util_Spliterators_iterator_java_util_Spliterator$OfLong_R_java_util_PrimitiveIterator$OfLong(jcontext ctx, jobject param0);
jobject SM_java_util_Spliterators_iterator_java_util_Spliterator$OfDouble_R_java_util_PrimitiveIterator$OfDouble(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
