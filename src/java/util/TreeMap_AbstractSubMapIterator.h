#ifndef HEADER_java_util_TreeMap$AbstractSubMapIterator
#define HEADER_java_util_TreeMap$AbstractSubMapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$AbstractSubMapIterator {
	java_lang_Object parent;
	jref F_subMap;
	jint F_expectedModCount;
	jref F_node;
	jref F_lastNode;
	jref F_boundaryPair;
	jint F_offset;
	jint F_lastOffset;
	jbool F_getToEnd;
} java_util_TreeMap$AbstractSubMapIterator;

extern Class class_java_util_TreeMap$AbstractSubMapIterator;


#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$AbstractSubMapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$AbstractSubMapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$AbstractSubMapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$AbstractSubMapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$AbstractSubMapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_finalize 5
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_notify 6
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_wait 8
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_wait_long 9
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_remove 11
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_makeNext 12
typedef void (*func_java_util_TreeMap$AbstractSubMapIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry 13
typedef jobject (*func_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_getStartNode_R_java_util_TreeMap$Entry 14
typedef jobject (*func_java_util_TreeMap$AbstractSubMapIterator_getStartNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_hasNext_R_boolean 15
typedef jbool (*func_java_util_TreeMap$AbstractSubMapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry 16
typedef jobject (*func_java_util_TreeMap$AbstractSubMapIterator_getBoundaryNode_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);

void mark_java_util_TreeMap$AbstractSubMapIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$AbstractSubMapIterator(jcontext ctx);
void init_java_util_TreeMap$AbstractSubMapIterator_java_util_TreeMap$NavigableSubMap(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap$AbstractSubMapIterator_remove(jcontext ctx, jobject self);
void M_java_util_TreeMap$AbstractSubMapIterator_makeNext(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$AbstractSubMapIterator_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
