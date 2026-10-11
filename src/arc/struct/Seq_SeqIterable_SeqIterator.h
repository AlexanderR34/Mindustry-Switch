#ifndef HEADER_arc_struct_Seq$SeqIterable$SeqIterator
#define HEADER_arc_struct_Seq$SeqIterable$SeqIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Seq$SeqIterable$SeqIterator {
	java_lang_Object parent;
	jint F_index;
	jbool F_done;
	jref F_this$0;
} arc_struct_Seq$SeqIterable$SeqIterator;

extern Class class_arc_struct_Seq$SeqIterable$SeqIterator;


#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_Seq$SeqIterable$SeqIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Seq$SeqIterable$SeqIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Seq$SeqIterable$SeqIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Seq$SeqIterable$SeqIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Seq$SeqIterable$SeqIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_finalize 5
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_notify 6
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_notifyAll 7
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_wait 8
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_wait_long 9
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_wait_long_int 10
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean 11
typedef jbool (*func_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object 12
typedef jobject (*func_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_remove 13
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq$SeqIterable$SeqIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_arc_struct_Seq$SeqIterable$SeqIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_Seq$SeqIterable$SeqIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_Seq$SeqIterable$SeqIterator(jcontext ctx);
void init_arc_struct_Seq$SeqIterable$SeqIterator_arc_struct_Seq$SeqIterable(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq$SeqIterable$SeqIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_Seq$SeqIterable$SeqIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_Seq$SeqIterable$SeqIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
