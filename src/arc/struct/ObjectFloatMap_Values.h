#ifndef HEADER_arc_struct_ObjectFloatMap$Values
#define HEADER_arc_struct_ObjectFloatMap$Values

#include "Clearwing.h"
#include "arc/struct/ObjectFloatMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectFloatMap$Values {
	arc_struct_ObjectFloatMap$MapIterator parent;
} arc_struct_ObjectFloatMap$Values;

extern Class class_arc_struct_ObjectFloatMap$Values;


#define VTABLE_arc_struct_ObjectFloatMap$Values_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectFloatMap$Values_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectFloatMap$Values_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap$Values_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectFloatMap$Values_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectFloatMap$Values_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectFloatMap$Values_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_finalize 5
typedef void (*func_arc_struct_ObjectFloatMap$Values_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_notify 6
typedef void (*func_arc_struct_ObjectFloatMap$Values_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_notifyAll 7
typedef void (*func_arc_struct_ObjectFloatMap$Values_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_wait 8
typedef void (*func_arc_struct_ObjectFloatMap$Values_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_wait_long 9
typedef void (*func_arc_struct_ObjectFloatMap$Values_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectFloatMap$Values_wait_long_int 10
typedef void (*func_arc_struct_ObjectFloatMap$Values_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectFloatMap$Values_reset 11
typedef void (*func_arc_struct_ObjectFloatMap$Values_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_findNextIndex 12
typedef void (*func_arc_struct_ObjectFloatMap$Values_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_remove 13
typedef void (*func_arc_struct_ObjectFloatMap$Values_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_hasNext_R_boolean 14
typedef jbool (*func_arc_struct_ObjectFloatMap$Values_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_next_R_float 15
typedef jfloat (*func_arc_struct_ObjectFloatMap$Values_next_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_iterator_R_arc_struct_ObjectFloatMap$Values 16
typedef jobject (*func_arc_struct_ObjectFloatMap$Values_iterator_R_arc_struct_ObjectFloatMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_toSeq_R_arc_struct_FloatSeq 17
typedef jobject (*func_arc_struct_ObjectFloatMap$Values_toSeq_R_arc_struct_FloatSeq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Values_toSeq_arc_struct_FloatSeq_R_arc_struct_FloatSeq 18
typedef jobject (*func_arc_struct_ObjectFloatMap$Values_toSeq_arc_struct_FloatSeq_R_arc_struct_FloatSeq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_ObjectFloatMap$Values(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectFloatMap$Values(jcontext ctx);
void init_arc_struct_ObjectFloatMap$Values_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectFloatMap$Values_hasNext_R_boolean(jcontext ctx, jobject self);
jfloat M_arc_struct_ObjectFloatMap$Values_next_R_float(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Values_iterator_R_arc_struct_ObjectFloatMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Values_toSeq_R_arc_struct_FloatSeq(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Values_toSeq_arc_struct_FloatSeq_R_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectFloatMap$Values_remove(jcontext ctx, jobject self);
void M_arc_struct_ObjectFloatMap$Values_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
