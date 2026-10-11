#ifndef HEADER_arc_struct_IntSet$IntSetIterator
#define HEADER_arc_struct_IntSet$IntSetIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntSet$IntSetIterator {
	java_lang_Object parent;
	jbool F_hasNext;
	jref F_set;
	jint F_nextIndex;
	jint F_currentIndex;
	jbool F_valid;
} arc_struct_IntSet$IntSetIterator;

extern Class class_arc_struct_IntSet$IntSetIterator;

extern jint SF_arc_struct_IntSet$IntSetIterator_INDEX_ILLEGAL;
extern jint SF_arc_struct_IntSet$IntSetIterator_INDEX_ZERO;

#define VTABLE_arc_struct_IntSet$IntSetIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_IntSet$IntSetIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntSet$IntSetIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSet$IntSetIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntSet$IntSetIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntSet$IntSetIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntSet$IntSetIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_finalize 5
typedef void (*func_arc_struct_IntSet$IntSetIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_notify 6
typedef void (*func_arc_struct_IntSet$IntSetIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_notifyAll 7
typedef void (*func_arc_struct_IntSet$IntSetIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_wait 8
typedef void (*func_arc_struct_IntSet$IntSetIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_wait_long 9
typedef void (*func_arc_struct_IntSet$IntSetIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntSet$IntSetIterator_wait_long_int 10
typedef void (*func_arc_struct_IntSet$IntSetIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntSet$IntSetIterator_reset 11
typedef void (*func_arc_struct_IntSet$IntSetIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_findNextIndex 12
typedef void (*func_arc_struct_IntSet$IntSetIterator_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_remove 13
typedef void (*func_arc_struct_IntSet$IntSetIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_next_R_int 14
typedef jint (*func_arc_struct_IntSet$IntSetIterator_next_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq 15
typedef jobject (*func_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq)(jcontext ctx, jobject self);

void mark_arc_struct_IntSet$IntSetIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntSet$IntSetIterator(jcontext ctx);
void init_arc_struct_IntSet$IntSetIterator_arc_struct_IntSet(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSet$IntSetIterator_reset(jcontext ctx, jobject self);
void M_arc_struct_IntSet$IntSetIterator_findNextIndex(jcontext ctx, jobject self);
void M_arc_struct_IntSet$IntSetIterator_remove(jcontext ctx, jobject self);
jint M_arc_struct_IntSet$IntSetIterator_next_R_int(jcontext ctx, jobject self);
jobject M_arc_struct_IntSet$IntSetIterator_toArray_R_arc_struct_IntSeq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
