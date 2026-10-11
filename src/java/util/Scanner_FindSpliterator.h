#ifndef HEADER_java_util_Scanner$FindSpliterator
#define HEADER_java_util_Scanner$FindSpliterator

#include "Clearwing.h"
#include "java/util/Spliterators_AbstractSpliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Scanner$FindSpliterator {
	java_util_Spliterators$AbstractSpliterator parent;
	jref F_pattern;
	jint F_expectedCount;
	jbool F_advance;
	jref F_this$0;
} java_util_Scanner$FindSpliterator;

extern Class class_java_util_Scanner$FindSpliterator;


#define VTABLE_java_util_Scanner$FindSpliterator_hashCode_R_int 0
typedef jint (*func_java_util_Scanner$FindSpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Scanner$FindSpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner$FindSpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Scanner$FindSpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Scanner$FindSpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Scanner$FindSpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_finalize 5
typedef void (*func_java_util_Scanner$FindSpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_notify 6
typedef void (*func_java_util_Scanner$FindSpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_notifyAll 7
typedef void (*func_java_util_Scanner$FindSpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_wait 8
typedef void (*func_java_util_Scanner$FindSpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_wait_long 9
typedef void (*func_java_util_Scanner$FindSpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Scanner$FindSpliterator_wait_long_int 10
typedef void (*func_java_util_Scanner$FindSpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean 11
typedef jbool (*func_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner$FindSpliterator_forEachRemaining_java_util_function_Consumer 12
typedef void (*func_java_util_Scanner$FindSpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Scanner$FindSpliterator_trySplit_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Scanner$FindSpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_Scanner$FindSpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_getExactSizeIfKnown_R_long 15
typedef jlong (*func_java_util_Scanner$FindSpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_characteristics_R_int 16
typedef jint (*func_java_util_Scanner$FindSpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_hasCharacteristics_int_R_boolean 17
typedef jbool (*func_java_util_Scanner$FindSpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Scanner$FindSpliterator_getComparator_R_java_util_Comparator 18
typedef jobject (*func_java_util_Scanner$FindSpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean 19
typedef jbool (*func_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_Scanner$FindSpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Scanner$FindSpliterator(jcontext ctx);
void init_java_util_Scanner$FindSpliterator_java_util_Scanner_java_util_regex_Pattern(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_Scanner$FindSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Scanner$FindSpliterator_nextInBuffer_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
