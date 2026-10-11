#ifndef HEADER_arc_struct_IntFloatMap$MapIterator
#define HEADER_arc_struct_IntFloatMap$MapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntFloatMap$MapIterator {
	java_lang_Object parent;
	jbool F_hasNext;
	jref F_map;
	jint F_nextIndex;
	jint F_currentIndex;
	jbool F_valid;
} arc_struct_IntFloatMap$MapIterator;

extern Class class_arc_struct_IntFloatMap$MapIterator;

extern jint SF_arc_struct_IntFloatMap$MapIterator_INDEX_ILLEGAL;
extern jint SF_arc_struct_IntFloatMap$MapIterator_INDEX_ZERO;

#define VTABLE_arc_struct_IntFloatMap$MapIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_IntFloatMap$MapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntFloatMap$MapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntFloatMap$MapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntFloatMap$MapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntFloatMap$MapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_finalize 5
typedef void (*func_arc_struct_IntFloatMap$MapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_notify 6
typedef void (*func_arc_struct_IntFloatMap$MapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_notifyAll 7
typedef void (*func_arc_struct_IntFloatMap$MapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_wait 8
typedef void (*func_arc_struct_IntFloatMap$MapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_wait_long 9
typedef void (*func_arc_struct_IntFloatMap$MapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_wait_long_int 10
typedef void (*func_arc_struct_IntFloatMap$MapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_reset 11
typedef void (*func_arc_struct_IntFloatMap$MapIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_findNextIndex 12
typedef void (*func_arc_struct_IntFloatMap$MapIterator_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap$MapIterator_remove 13
typedef void (*func_arc_struct_IntFloatMap$MapIterator_remove)(jcontext ctx, jobject self);

void mark_arc_struct_IntFloatMap$MapIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntFloatMap$MapIterator(jcontext ctx);
void init_arc_struct_IntFloatMap$MapIterator_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntFloatMap$MapIterator_reset(jcontext ctx, jobject self);
void M_arc_struct_IntFloatMap$MapIterator_findNextIndex(jcontext ctx, jobject self);
void M_arc_struct_IntFloatMap$MapIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
