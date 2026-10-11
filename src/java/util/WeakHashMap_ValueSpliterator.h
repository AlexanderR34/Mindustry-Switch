#ifndef HEADER_java_util_WeakHashMap$ValueSpliterator
#define HEADER_java_util_WeakHashMap$ValueSpliterator

#include "Clearwing.h"
#include "java/util/WeakHashMap_WeakHashMapSpliterator.h"
#include "java/util/Spliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap$ValueSpliterator {
	java_util_WeakHashMap$WeakHashMapSpliterator parent;
} java_util_WeakHashMap$ValueSpliterator;

extern Class class_java_util_WeakHashMap$ValueSpliterator;


#define VTABLE_java_util_WeakHashMap$ValueSpliterator_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap$ValueSpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap$ValueSpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap$ValueSpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap$ValueSpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap$ValueSpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_finalize 5
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_notify 6
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_notifyAll 7
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_wait 8
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_wait_long 9
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_wait_long_int 10
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_getFence_R_int 11
typedef jint (*func_java_util_WeakHashMap$ValueSpliterator_getFence_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_estimateSize_R_long 12
typedef jlong (*func_java_util_WeakHashMap$ValueSpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_tryAdvance_java_util_function_Consumer_R_boolean 13
typedef jbool (*func_java_util_WeakHashMap$ValueSpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_WeakHashMap$ValueSpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_trySplit_R_java_util_Spliterator 15
typedef jobject (*func_java_util_WeakHashMap$ValueSpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_getExactSizeIfKnown_R_long 16
typedef jlong (*func_java_util_WeakHashMap$ValueSpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_characteristics_R_int 17
typedef jint (*func_java_util_WeakHashMap$ValueSpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_hasCharacteristics_int_R_boolean 18
typedef jbool (*func_java_util_WeakHashMap$ValueSpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_getComparator_R_java_util_Comparator 19
typedef jobject (*func_java_util_WeakHashMap$ValueSpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueSpliterator_trySplit_R_java_util_WeakHashMap$ValueSpliterator 20
typedef jobject (*func_java_util_WeakHashMap$ValueSpliterator_trySplit_R_java_util_WeakHashMap$ValueSpliterator)(jcontext ctx, jobject self);

void mark_java_util_WeakHashMap$ValueSpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap$ValueSpliterator(jcontext ctx);
void init_java_util_WeakHashMap$ValueSpliterator_java_util_WeakHashMap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
jobject M_java_util_WeakHashMap$ValueSpliterator_trySplit_R_java_util_WeakHashMap$ValueSpliterator(jcontext ctx, jobject self);
void M_java_util_WeakHashMap$ValueSpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap$ValueSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_WeakHashMap$ValueSpliterator_characteristics_R_int(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$ValueSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
