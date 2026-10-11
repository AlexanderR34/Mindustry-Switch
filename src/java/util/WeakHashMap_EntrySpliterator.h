#ifndef HEADER_java_util_WeakHashMap$EntrySpliterator
#define HEADER_java_util_WeakHashMap$EntrySpliterator

#include "Clearwing.h"
#include "java/util/WeakHashMap_WeakHashMapSpliterator.h"
#include "java/util/Spliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap$EntrySpliterator {
	java_util_WeakHashMap$WeakHashMapSpliterator parent;
} java_util_WeakHashMap$EntrySpliterator;

extern Class class_java_util_WeakHashMap$EntrySpliterator;


#define VTABLE_java_util_WeakHashMap$EntrySpliterator_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap$EntrySpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap$EntrySpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap$EntrySpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap$EntrySpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap$EntrySpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_finalize 5
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_notify 6
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_notifyAll 7
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_wait 8
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_wait_long 9
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_wait_long_int 10
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_getFence_R_int 11
typedef jint (*func_java_util_WeakHashMap$EntrySpliterator_getFence_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_estimateSize_R_long 12
typedef jlong (*func_java_util_WeakHashMap$EntrySpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean 13
typedef jbool (*func_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator 15
typedef jobject (*func_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_getExactSizeIfKnown_R_long 16
typedef jlong (*func_java_util_WeakHashMap$EntrySpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int 17
typedef jint (*func_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_hasCharacteristics_int_R_boolean 18
typedef jbool (*func_java_util_WeakHashMap$EntrySpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_getComparator_R_java_util_Comparator 19
typedef jobject (*func_java_util_WeakHashMap$EntrySpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator 20
typedef jobject (*func_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator)(jcontext ctx, jobject self);

void mark_java_util_WeakHashMap$EntrySpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap$EntrySpliterator(jcontext ctx);
void init_java_util_WeakHashMap$EntrySpliterator_java_util_WeakHashMap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
jobject M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_WeakHashMap$EntrySpliterator(jcontext ctx, jobject self);
void M_java_util_WeakHashMap$EntrySpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap$EntrySpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_WeakHashMap$EntrySpliterator_characteristics_R_int(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$EntrySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
