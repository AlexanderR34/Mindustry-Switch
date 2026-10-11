#ifndef HEADER_arc_struct_ObjectMap$MapIterator
#define HEADER_arc_struct_ObjectMap$MapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectMap$MapIterator {
	java_lang_Object parent;
	jbool F_hasNext;
	jref F_map;
	jint F_nextIndex;
	jint F_currentIndex;
	jbool F_valid;
} arc_struct_ObjectMap$MapIterator;

extern Class class_arc_struct_ObjectMap$MapIterator;


#define VTABLE_arc_struct_ObjectMap$MapIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectMap$MapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectMap$MapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap$MapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectMap$MapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectMap$MapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectMap$MapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_finalize 5
typedef void (*func_arc_struct_ObjectMap$MapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_notify 6
typedef void (*func_arc_struct_ObjectMap$MapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_notifyAll 7
typedef void (*func_arc_struct_ObjectMap$MapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_wait 8
typedef void (*func_arc_struct_ObjectMap$MapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_wait_long 9
typedef void (*func_arc_struct_ObjectMap$MapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectMap$MapIterator_wait_long_int 10
typedef void (*func_arc_struct_ObjectMap$MapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectMap$MapIterator_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectMap$MapIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectMap$MapIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap$MapIterator_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectMap$MapIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_hasNext_R_boolean 14
typedef jbool (*func_arc_struct_ObjectMap$MapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_next_R_java_lang_Object 15
typedef jobject (*func_arc_struct_ObjectMap$MapIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_remove 16
typedef void (*func_arc_struct_ObjectMap$MapIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_arc_struct_ObjectMap$MapIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap$MapIterator_reset 18
typedef void (*func_arc_struct_ObjectMap$MapIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$MapIterator_findNextIndex 19
typedef void (*func_arc_struct_ObjectMap$MapIterator_findNextIndex)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectMap$MapIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectMap$MapIterator(jcontext ctx);
void init_arc_struct_ObjectMap$MapIterator_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectMap$MapIterator_reset(jcontext ctx, jobject self);
void M_arc_struct_ObjectMap$MapIterator_findNextIndex(jcontext ctx, jobject self);
void M_arc_struct_ObjectMap$MapIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
