#ifndef HEADER_arc_struct_IntIntMap$Values
#define HEADER_arc_struct_IntIntMap$Values

#include "Clearwing.h"
#include "arc/struct/IntIntMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntIntMap$Values {
	arc_struct_IntIntMap$MapIterator parent;
} arc_struct_IntIntMap$Values;

extern Class class_arc_struct_IntIntMap$Values;


#define VTABLE_arc_struct_IntIntMap$Values_hashCode_R_int 0
typedef jint (*func_arc_struct_IntIntMap$Values_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntIntMap$Values_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntIntMap$Values_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntIntMap$Values_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntIntMap$Values_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntIntMap$Values_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_finalize 5
typedef void (*func_arc_struct_IntIntMap$Values_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_notify 6
typedef void (*func_arc_struct_IntIntMap$Values_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_notifyAll 7
typedef void (*func_arc_struct_IntIntMap$Values_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_wait 8
typedef void (*func_arc_struct_IntIntMap$Values_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_wait_long 9
typedef void (*func_arc_struct_IntIntMap$Values_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntIntMap$Values_wait_long_int 10
typedef void (*func_arc_struct_IntIntMap$Values_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntIntMap$Values_reset 11
typedef void (*func_arc_struct_IntIntMap$Values_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_findNextIndex 12
typedef void (*func_arc_struct_IntIntMap$Values_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_remove 13
typedef void (*func_arc_struct_IntIntMap$Values_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_hasNext_R_boolean 14
typedef jbool (*func_arc_struct_IntIntMap$Values_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_next_R_int 15
typedef jint (*func_arc_struct_IntIntMap$Values_next_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_iterator_R_arc_struct_IntIntMap$Values 16
typedef jobject (*func_arc_struct_IntIntMap$Values_iterator_R_arc_struct_IntIntMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_toArray_R_arc_struct_IntSeq 17
typedef jobject (*func_arc_struct_IntIntMap$Values_toArray_R_arc_struct_IntSeq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap$Values_toArray_arc_struct_IntSeq_R_arc_struct_IntSeq 18
typedef jobject (*func_arc_struct_IntIntMap$Values_toArray_arc_struct_IntSeq_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_IntIntMap$Values(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntIntMap$Values(jcontext ctx);
void init_arc_struct_IntIntMap$Values_arc_struct_IntIntMap(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_IntIntMap$Values_hasNext_R_boolean(jcontext ctx, jobject self);
jint M_arc_struct_IntIntMap$Values_next_R_int(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap$Values_iterator_R_arc_struct_IntIntMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap$Values_toArray_R_arc_struct_IntSeq(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap$Values_toArray_arc_struct_IntSeq_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntIntMap$Values_remove(jcontext ctx, jobject self);
void M_arc_struct_IntIntMap$Values_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
