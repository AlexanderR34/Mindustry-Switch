#ifndef HEADER_java_util_TreeMap$BoundedMapIterator
#define HEADER_java_util_TreeMap$BoundedMapIterator

#include "Clearwing.h"
#include "java/util/TreeMap_AbstractMapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$BoundedMapIterator {
	java_util_TreeMap$AbstractMapIterator parent;
	jref F_finalNode;
	jint F_finalOffset;
} java_util_TreeMap$BoundedMapIterator;

extern Class class_java_util_TreeMap$BoundedMapIterator;


#define VTABLE_java_util_TreeMap$BoundedMapIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$BoundedMapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$BoundedMapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$BoundedMapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$BoundedMapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$BoundedMapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_finalize 5
typedef void (*func_java_util_TreeMap$BoundedMapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_notify 6
typedef void (*func_java_util_TreeMap$BoundedMapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$BoundedMapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_wait 8
typedef void (*func_java_util_TreeMap$BoundedMapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_wait_long 9
typedef void (*func_java_util_TreeMap$BoundedMapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$BoundedMapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_makeNext 12
typedef void (*func_java_util_TreeMap$BoundedMapIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_remove 13
typedef void (*func_java_util_TreeMap$BoundedMapIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedMapIterator_makeBoundedNext 14
typedef void (*func_java_util_TreeMap$BoundedMapIterator_makeBoundedNext)(jcontext ctx, jobject self);

void mark_java_util_TreeMap$BoundedMapIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$BoundedMapIterator(jcontext ctx);
void init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
void init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
void init_java_util_TreeMap$BoundedMapIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_java_util_TreeMap$BoundedMapIterator_makeBoundedNext(jcontext ctx, jobject self);
jbool M_java_util_TreeMap$BoundedMapIterator_hasNext_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
