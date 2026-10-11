#ifndef HEADER_arc_struct_ObjectFloatMap$Keys
#define HEADER_arc_struct_ObjectFloatMap$Keys

#include "Clearwing.h"
#include "arc/struct/ObjectFloatMap_MapIterator.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectFloatMap$Keys {
	arc_struct_ObjectFloatMap$MapIterator parent;
} arc_struct_ObjectFloatMap$Keys;

extern Class class_arc_struct_ObjectFloatMap$Keys;


#define VTABLE_arc_struct_ObjectFloatMap$Keys_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectFloatMap$Keys_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectFloatMap$Keys_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_finalize 5
typedef void (*func_arc_struct_ObjectFloatMap$Keys_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_notify 6
typedef void (*func_arc_struct_ObjectFloatMap$Keys_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_notifyAll 7
typedef void (*func_arc_struct_ObjectFloatMap$Keys_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_wait 8
typedef void (*func_arc_struct_ObjectFloatMap$Keys_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_wait_long 9
typedef void (*func_arc_struct_ObjectFloatMap$Keys_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_wait_long_int 10
typedef void (*func_arc_struct_ObjectFloatMap$Keys_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_reset 11
typedef void (*func_arc_struct_ObjectFloatMap$Keys_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_findNextIndex 12
typedef void (*func_arc_struct_ObjectFloatMap$Keys_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_remove 13
typedef void (*func_arc_struct_ObjectFloatMap$Keys_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator 14
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_forEach_java_util_function_Consumer 15
typedef void (*func_arc_struct_ObjectFloatMap$Keys_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_spliterator_R_java_util_Spliterator 16
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean 17
typedef jbool (*func_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object 18
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_forEachRemaining_java_util_function_Consumer 19
typedef void (*func_arc_struct_ObjectFloatMap$Keys_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys 20
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq 21
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq 22
typedef jobject (*func_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_ObjectFloatMap$Keys(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectFloatMap$Keys(jcontext ctx);
void init_arc_struct_ObjectFloatMap$Keys_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectFloatMap$Keys_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Keys_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Keys_iterator_R_arc_struct_ObjectFloatMap$Keys(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Keys_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectFloatMap$Keys_remove(jcontext ctx, jobject self);
void M_arc_struct_ObjectFloatMap$Keys_reset(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap$Keys_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
