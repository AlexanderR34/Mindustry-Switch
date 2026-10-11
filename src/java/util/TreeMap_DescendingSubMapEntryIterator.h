#ifndef HEADER_java_util_TreeMap$DescendingSubMapEntryIterator
#define HEADER_java_util_TreeMap$DescendingSubMapEntryIterator

#include "Clearwing.h"
#include "java/util/TreeMap_DescendingSubMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$DescendingSubMapEntryIterator {
	java_util_TreeMap$DescendingSubMapIterator parent;
} java_util_TreeMap$DescendingSubMapEntryIterator;

extern Class class_java_util_TreeMap$DescendingSubMapEntryIterator;


#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$DescendingSubMapEntryIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$DescendingSubMapEntryIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_finalize 5
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_notify 6
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_wait 8
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_wait_long 9
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_remove 11
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_makeNext 12
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry 13
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_getStartNode_R_java_util_TreeMap$Entry 14
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_getStartNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_hasNext_R_boolean 15
typedef jbool (*func_java_util_TreeMap$DescendingSubMapEntryIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_getBoundaryNode_R_java_util_TreeMap$Entry 16
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_getBoundaryNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_getNext_R_java_util_TreeMap$Entry 17
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_getNext_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_next_R_java_lang_Object 18
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_forEachRemaining_java_util_function_Consumer 19
typedef void (*func_java_util_TreeMap$DescendingSubMapEntryIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$DescendingSubMapEntryIterator_next_R_java_util_Map$Entry 20
typedef jobject (*func_java_util_TreeMap$DescendingSubMapEntryIterator_next_R_java_util_Map$Entry)(jcontext ctx, jobject self);

void mark_java_util_TreeMap$DescendingSubMapEntryIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$DescendingSubMapEntryIterator(jcontext ctx);
void init_java_util_TreeMap$DescendingSubMapEntryIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$DescendingSubMapEntryIterator_next_R_java_util_Map$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$DescendingSubMapEntryIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
