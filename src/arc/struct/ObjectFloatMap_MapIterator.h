#ifndef HEADER_arc_struct_ObjectFloatMap$MapIterator
#define HEADER_arc_struct_ObjectFloatMap$MapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectFloatMap$MapIterator {
	java_lang_Object parent;
	jbool F_hasNext;
	jref F_map;
	jint F_nextIndex;
	jint F_currentIndex;
	jbool F_valid;
} arc_struct_ObjectFloatMap$MapIterator;

extern Class class_arc_struct_ObjectFloatMap$MapIterator;


#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectFloatMap$MapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectFloatMap$MapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectFloatMap$MapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectFloatMap$MapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectFloatMap$MapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_finalize 5
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_notify 6
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_notifyAll 7
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_wait 8
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_wait_long 9
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_wait_long_int 10
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_reset 11
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_findNextIndex 12
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$MapIterator_remove 13
typedef void (*func_arc_struct_ObjectFloatMap$MapIterator_remove)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectFloatMap$MapIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectFloatMap$MapIterator(jcontext ctx);
void init_arc_struct_ObjectFloatMap$MapIterator_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectFloatMap$MapIterator_reset(jcontext ctx, jobject self);
void M_arc_struct_ObjectFloatMap$MapIterator_findNextIndex(jcontext ctx, jobject self);
void M_arc_struct_ObjectFloatMap$MapIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
