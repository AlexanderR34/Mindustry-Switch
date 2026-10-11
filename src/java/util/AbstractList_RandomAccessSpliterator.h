#ifndef HEADER_java_util_AbstractList$RandomAccessSpliterator
#define HEADER_java_util_AbstractList$RandomAccessSpliterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_AbstractList$RandomAccessSpliterator {
	java_lang_Object parent;
	jref F_list;
	jint F_index;
	jint F_fence;
	jref F_alist;
	jint F_expectedModCount;
} java_util_AbstractList$RandomAccessSpliterator;

extern Class class_java_util_AbstractList$RandomAccessSpliterator;

extern jbool SF_java_util_AbstractList$RandomAccessSpliterator_$assertionsDisabled;

#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_hashCode_R_int 0
typedef jint (*func_java_util_AbstractList$RandomAccessSpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_AbstractList$RandomAccessSpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_AbstractList$RandomAccessSpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_AbstractList$RandomAccessSpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_AbstractList$RandomAccessSpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_finalize 5
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_notify 6
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_notifyAll 7
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_wait 8
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_wait_long 9
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_wait_long_int 10
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean 11
typedef jbool (*func_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer 12
typedef void (*func_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator 13
typedef jobject (*func_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_getExactSizeIfKnown_R_long 15
typedef jlong (*func_java_util_AbstractList$RandomAccessSpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int 16
typedef jint (*func_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_hasCharacteristics_int_R_boolean 17
typedef jbool (*func_java_util_AbstractList$RandomAccessSpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_getComparator_R_java_util_Comparator 18
typedef jobject (*func_java_util_AbstractList$RandomAccessSpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int 19
typedef jint (*func_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int)(jcontext ctx, jobject self);

void mark_java_util_AbstractList$RandomAccessSpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_AbstractList$RandomAccessSpliterator(jcontext ctx);
void init_java_util_AbstractList$RandomAccessSpliterator_java_util_List(jcontext ctx, jobject self, jobject param0);
void init_java_util_AbstractList$RandomAccessSpliterator_java_util_AbstractList$RandomAccessSpliterator_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_util_AbstractList$RandomAccessSpliterator_getFence_R_int(jcontext ctx, jobject self);
jobject M_java_util_AbstractList$RandomAccessSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);
jbool M_java_util_AbstractList$RandomAccessSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_AbstractList$RandomAccessSpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_AbstractList$RandomAccessSpliterator_estimateSize_R_long(jcontext ctx, jobject self);
jint M_java_util_AbstractList$RandomAccessSpliterator_characteristics_R_int(jcontext ctx, jobject self);
jobject SM_java_util_AbstractList$RandomAccessSpliterator_get_java_util_List_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1);
void SM_java_util_AbstractList$RandomAccessSpliterator_checkAbstractListModCount_java_util_AbstractList_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
