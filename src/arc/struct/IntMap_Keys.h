#ifndef HEADER_arc_struct_IntMap$Keys
#define HEADER_arc_struct_IntMap$Keys

#include "Clearwing.h"
#include "arc/struct/IntMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntMap$Keys {
	arc_struct_IntMap$MapIterator parent;
} arc_struct_IntMap$Keys;

extern Class class_arc_struct_IntMap$Keys;


#define VTABLE_arc_struct_IntMap$Keys_hashCode_R_int 0
typedef jint (*func_arc_struct_IntMap$Keys_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntMap$Keys_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntMap$Keys_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntMap$Keys_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntMap$Keys_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntMap$Keys_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_finalize 5
typedef void (*func_arc_struct_IntMap$Keys_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_notify 6
typedef void (*func_arc_struct_IntMap$Keys_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_notifyAll 7
typedef void (*func_arc_struct_IntMap$Keys_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_wait 8
typedef void (*func_arc_struct_IntMap$Keys_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_wait_long 9
typedef void (*func_arc_struct_IntMap$Keys_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntMap$Keys_wait_long_int 10
typedef void (*func_arc_struct_IntMap$Keys_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntMap$Keys_reset 11
typedef void (*func_arc_struct_IntMap$Keys_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_findNextIndex 12
typedef void (*func_arc_struct_IntMap$Keys_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_remove 13
typedef void (*func_arc_struct_IntMap$Keys_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_next_R_int 14
typedef jint (*func_arc_struct_IntMap$Keys_next_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_toSeq_R_arc_struct_IntSeq 15
typedef jobject (*func_arc_struct_IntMap$Keys_toSeq_R_arc_struct_IntSeq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap$Keys_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq 16
typedef jobject (*func_arc_struct_IntMap$Keys_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_IntMap$Keys(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntMap$Keys(jcontext ctx);
void init_arc_struct_IntMap$Keys_arc_struct_IntMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntMap$Keys_next_R_int(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap$Keys_toSeq_R_arc_struct_IntSeq(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap$Keys_toSeq_arc_struct_IntSeq_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntMap$Keys_remove(jcontext ctx, jobject self);
void M_arc_struct_IntMap$Keys_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
