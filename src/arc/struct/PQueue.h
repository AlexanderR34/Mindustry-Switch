#ifndef HEADER_arc_struct_PQueue
#define HEADER_arc_struct_PQueue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_PQueue {
	java_lang_Object parent;
	jref F_queue;
	jint F_size;
	jref F_comparator;
} arc_struct_PQueue;

extern Class class_arc_struct_PQueue;

extern jfloat SF_arc_struct_PQueue_CAPACITY_RATIO_LOW;
extern jfloat SF_arc_struct_PQueue_CAPACITY_RATIO_HI;

#define VTABLE_arc_struct_PQueue_hashCode_R_int 0
typedef jint (*func_arc_struct_PQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_PQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_PQueue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_PQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_PQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_PQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_finalize 5
typedef void (*func_arc_struct_PQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_notify 6
typedef void (*func_arc_struct_PQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_notifyAll 7
typedef void (*func_arc_struct_PQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_wait 8
typedef void (*func_arc_struct_PQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_wait_long 9
typedef void (*func_arc_struct_PQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_PQueue_wait_long_int 10
typedef void (*func_arc_struct_PQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_PQueue_empty_R_boolean 11
typedef jbool (*func_arc_struct_PQueue_empty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_add_java_lang_Object_R_boolean 12
typedef jbool (*func_arc_struct_PQueue_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_PQueue_peek_R_java_lang_Object 13
typedef jobject (*func_arc_struct_PQueue_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_get_int_R_java_lang_Object 14
typedef jobject (*func_arc_struct_PQueue_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_PQueue_size_R_int 15
typedef jint (*func_arc_struct_PQueue_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_clear 16
typedef void (*func_arc_struct_PQueue_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_poll_R_java_lang_Object 17
typedef jobject (*func_arc_struct_PQueue_poll_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_PQueue_siftUp_int_java_lang_Object 18
typedef void (*func_arc_struct_PQueue_siftUp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_PQueue_siftDown_int_java_lang_Object 19
typedef void (*func_arc_struct_PQueue_siftDown_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int 20
typedef jint (*func_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_PQueue_growToSize_int 21
typedef void (*func_arc_struct_PQueue_growToSize_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_struct_PQueue(jobject object, jint mark, jint depth);
void clinit_arc_struct_PQueue(jcontext ctx);
void init_arc_struct_PQueue(jcontext ctx, jobject self);
void init_arc_struct_PQueue_int_java_util_Comparator(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_arc_struct_PQueue_empty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_PQueue_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_PQueue_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_PQueue_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_PQueue_size_R_int(jcontext ctx, jobject self);
void M_arc_struct_PQueue_clear(jcontext ctx, jobject self);
jobject M_arc_struct_PQueue_poll_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_PQueue_siftUp_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_PQueue_siftDown_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_arc_struct_PQueue_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_struct_PQueue_growToSize_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
