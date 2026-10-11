#ifndef HEADER_arc_struct_ObjectMap$Values
#define HEADER_arc_struct_ObjectMap$Values

#include "Clearwing.h"
#include "arc/struct/ObjectMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectMap$Values {
	arc_struct_ObjectMap$MapIterator parent;
} arc_struct_ObjectMap$Values;

extern Class class_arc_struct_ObjectMap$Values;


#define VTABLE_arc_struct_ObjectMap$Values_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectMap$Values_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectMap$Values_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap$Values_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectMap$Values_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectMap$Values_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectMap$Values_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_finalize 5
typedef void (*func_arc_struct_ObjectMap$Values_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_notify 6
typedef void (*func_arc_struct_ObjectMap$Values_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_notifyAll 7
typedef void (*func_arc_struct_ObjectMap$Values_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_wait 8
typedef void (*func_arc_struct_ObjectMap$Values_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_wait_long 9
typedef void (*func_arc_struct_ObjectMap$Values_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectMap$Values_wait_long_int 10
typedef void (*func_arc_struct_ObjectMap$Values_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectMap$Values_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectMap$Values_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectMap$Values_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap$Values_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectMap$Values_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_hasNext_R_boolean 14
typedef jbool (*func_arc_struct_ObjectMap$Values_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_next_R_java_lang_Object 15
typedef jobject (*func_arc_struct_ObjectMap$Values_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_remove 16
typedef void (*func_arc_struct_ObjectMap$Values_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_arc_struct_ObjectMap$Values_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap$Values_reset 18
typedef void (*func_arc_struct_ObjectMap$Values_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_findNextIndex 19
typedef void (*func_arc_struct_ObjectMap$Values_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values 20
typedef jobject (*func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq 21
typedef jobject (*func_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap$Values_toSeq_arc_struct_Seq_R_arc_struct_Seq 22
typedef jobject (*func_arc_struct_ObjectMap$Values_toSeq_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_ObjectMap$Values(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectMap$Values(jcontext ctx);
void init_arc_struct_ObjectMap$Values_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectMap$Values_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap$Values_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap$Values_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectMap$Values_remove(jcontext ctx, jobject self);
void M_arc_struct_ObjectMap$Values_reset(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap$Values_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
