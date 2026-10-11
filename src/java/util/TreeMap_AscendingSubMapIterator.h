#ifndef HEADER_java_util_TreeMap$AscendingSubMapIterator
#define HEADER_java_util_TreeMap$AscendingSubMapIterator

#include "Clearwing.h"
#include "java/util/TreeMap_AbstractSubMapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$AscendingSubMapIterator {
	java_util_TreeMap$AbstractSubMapIterator parent;
} java_util_TreeMap$AscendingSubMapIterator;

extern Class class_java_util_TreeMap$AscendingSubMapIterator;


#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$AscendingSubMapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$AscendingSubMapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_finalize 5
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_notify 6
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_wait 8
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_wait_long 9
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_remove 11
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_makeNext 12
typedef void (*func_java_util_TreeMap$AscendingSubMapIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry 13
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry 14
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean 15
typedef jbool (*func_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry 16
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry 17
typedef jobject (*func_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);

void mark_java_util_TreeMap$AscendingSubMapIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$AscendingSubMapIterator(jcontext ctx);
void init_java_util_TreeMap$AscendingSubMapIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$AscendingSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$AscendingSubMapIterator_getStartNode_R_java_util_TreeMap$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$AscendingSubMapIterator_getNext_R_java_util_TreeMap$Entry(jcontext ctx, jobject self);
jbool M_java_util_TreeMap$AscendingSubMapIterator_hasNext_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
