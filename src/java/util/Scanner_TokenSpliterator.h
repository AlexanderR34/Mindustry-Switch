#ifndef HEADER_java_util_Scanner$TokenSpliterator
#define HEADER_java_util_Scanner$TokenSpliterator

#include "Clearwing.h"
#include "java/util/Spliterators_AbstractSpliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Scanner$TokenSpliterator {
	java_util_Spliterators$AbstractSpliterator parent;
	jint F_expectedCount;
	jref F_this$0;
} java_util_Scanner$TokenSpliterator;

extern Class class_java_util_Scanner$TokenSpliterator;


#define VTABLE_java_util_Scanner$TokenSpliterator_hashCode_R_int 0
typedef jint (*func_java_util_Scanner$TokenSpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Scanner$TokenSpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner$TokenSpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Scanner$TokenSpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Scanner$TokenSpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Scanner$TokenSpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_finalize 5
typedef void (*func_java_util_Scanner$TokenSpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_notify 6
typedef void (*func_java_util_Scanner$TokenSpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_notifyAll 7
typedef void (*func_java_util_Scanner$TokenSpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_wait 8
typedef void (*func_java_util_Scanner$TokenSpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_wait_long 9
typedef void (*func_java_util_Scanner$TokenSpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Scanner$TokenSpliterator_wait_long_int 10
typedef void (*func_java_util_Scanner$TokenSpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean 11
typedef jbool (*func_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner$TokenSpliterator_forEachRemaining_java_util_function_Consumer 12
typedef void (*func_java_util_Scanner$TokenSpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner$TokenSpliterator_trySplit_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Scanner$TokenSpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_Scanner$TokenSpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_getExactSizeIfKnown_R_long 15
typedef jlong (*func_java_util_Scanner$TokenSpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_characteristics_R_int 16
typedef jint (*func_java_util_Scanner$TokenSpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$TokenSpliterator_hasCharacteristics_int_R_boolean 17
typedef jbool (*func_java_util_Scanner$TokenSpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner$TokenSpliterator_getComparator_R_java_util_Comparator 18
typedef jobject (*func_java_util_Scanner$TokenSpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);

void mark_java_util_Scanner$TokenSpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Scanner$TokenSpliterator(jcontext ctx);
void init_java_util_Scanner$TokenSpliterator_java_util_Scanner(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner$TokenSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
