#ifndef HEADER_arc_struct_Seq$SeqIterable
#define HEADER_arc_struct_Seq$SeqIterable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Seq$SeqIterable {
	java_lang_Object parent;
	jref F_array;
	jbool F_allowRemove;
	jref F_iterator1;
	jref F_iterator2;
} arc_struct_Seq$SeqIterable;

extern Class class_arc_struct_Seq$SeqIterable;


#define VTABLE_arc_struct_Seq$SeqIterable_hashCode_R_int 0
typedef jint (*func_arc_struct_Seq$SeqIterable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Seq$SeqIterable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq$SeqIterable_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Seq$SeqIterable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Seq$SeqIterable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Seq$SeqIterable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_finalize 5
typedef void (*func_arc_struct_Seq$SeqIterable_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_notify 6
typedef void (*func_arc_struct_Seq$SeqIterable_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_notifyAll 7
typedef void (*func_arc_struct_Seq$SeqIterable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_wait 8
typedef void (*func_arc_struct_Seq$SeqIterable_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_wait_long 9
typedef void (*func_arc_struct_Seq$SeqIterable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Seq$SeqIterable_wait_long_int 10
typedef void (*func_arc_struct_Seq$SeqIterable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_Seq$SeqIterable_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq$SeqIterable_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_Seq$SeqIterable_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);

void mark_arc_struct_Seq$SeqIterable(jobject object, jint mark, jint depth);
void clinit_arc_struct_Seq$SeqIterable(jcontext ctx);
void init_arc_struct_Seq$SeqIterable_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_Seq$SeqIterable_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_Seq$SeqIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
