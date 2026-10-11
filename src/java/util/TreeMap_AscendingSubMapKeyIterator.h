#ifndef HEADER_java_util_TreeMap$AscendingSubMapKeyIterator
#define HEADER_java_util_TreeMap$AscendingSubMapKeyIterator

#include "Clearwing.h"
#include "java/util/TreeMap_AscendingSubMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$AscendingSubMapKeyIterator {
	java_util_TreeMap$AscendingSubMapIterator parent;
} java_util_TreeMap$AscendingSubMapKeyIterator;

extern Class class_java_util_TreeMap$AscendingSubMapKeyIterator;


#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$AscendingSubMapKeyIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$AscendingSubMapKeyIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_finalize 5
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_notify 6
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_wait 8
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_wait_long 9
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_remove 11
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_makeNext 12
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry 13
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_getStartNode_R_java_util_TreeMap$Entry 14
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_getStartNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_hasNext_R_boolean 15
typedef jbool (*func_java_util_TreeMap$AscendingSubMapKeyIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_getBoundaryNode_R_java_util_TreeMap$Entry 16
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_getBoundaryNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_getNext_R_java_util_TreeMap$Entry 17
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_getNext_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_next_R_java_lang_Object 18
typedef jobject (*func_java_util_TreeMap$AscendingSubMapKeyIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapKeyIterator_forEachRemaining_java_util_function_Consumer 19
typedef void (*func_java_util_TreeMap$AscendingSubMapKeyIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_TreeMap$AscendingSubMapKeyIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$AscendingSubMapKeyIterator(jcontext ctx);
void init_java_util_TreeMap$AscendingSubMapKeyIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$AscendingSubMapKeyIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
