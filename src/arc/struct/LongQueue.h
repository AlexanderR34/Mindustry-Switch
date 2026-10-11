#ifndef HEADER_arc_struct_LongQueue
#define HEADER_arc_struct_LongQueue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_LongQueue {
	java_lang_Object parent;
	jint F_size;
	jref F_values;
	jint F_head;
	jint F_tail;
} arc_struct_LongQueue;

extern Class class_arc_struct_LongQueue;


#define VTABLE_arc_struct_LongQueue_hashCode_R_int 0
typedef jint (*func_arc_struct_LongQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_LongQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongQueue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_LongQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_LongQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_LongQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_finalize 5
typedef void (*func_arc_struct_LongQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_notify 6
typedef void (*func_arc_struct_LongQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_notifyAll 7
typedef void (*func_arc_struct_LongQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_wait 8
typedef void (*func_arc_struct_LongQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_wait_long 9
typedef void (*func_arc_struct_LongQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongQueue_wait_long_int 10
typedef void (*func_arc_struct_LongQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_LongQueue_addLast_long 11
typedef void (*func_arc_struct_LongQueue_addLast_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongQueue_addFirst_long 12
typedef void (*func_arc_struct_LongQueue_addFirst_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongQueue_shrink_R_Array1_long 13
typedef jobject (*func_arc_struct_LongQueue_shrink_R_Array1_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_ensureCapacity_int 14
typedef void (*func_arc_struct_LongQueue_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongQueue_resize_int 15
typedef void (*func_arc_struct_LongQueue_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongQueue_removeFirst_R_long 16
typedef jlong (*func_arc_struct_LongQueue_removeFirst_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_removeLast_R_long 17
typedef jlong (*func_arc_struct_LongQueue_removeLast_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_indexOf_long_boolean_R_int 18
typedef jint (*func_arc_struct_LongQueue_indexOf_long_boolean_R_int)(jcontext ctx, jobject self, jlong param0, jbool param1);
#define VTABLE_arc_struct_LongQueue_removeValue_long_boolean_R_boolean 19
typedef jbool (*func_arc_struct_LongQueue_removeValue_long_boolean_R_boolean)(jcontext ctx, jobject self, jlong param0, jbool param1);
#define VTABLE_arc_struct_LongQueue_removeIndex_int_R_long 20
typedef jlong (*func_arc_struct_LongQueue_removeIndex_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongQueue_isEmpty_R_boolean 21
typedef jbool (*func_arc_struct_LongQueue_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_first_R_long 22
typedef jlong (*func_arc_struct_LongQueue_first_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_last_R_long 23
typedef jlong (*func_arc_struct_LongQueue_last_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_get_int_R_long 24
typedef jlong (*func_arc_struct_LongQueue_get_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongQueue_set_int_long 25
typedef void (*func_arc_struct_LongQueue_set_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_arc_struct_LongQueue_clear 26
typedef void (*func_arc_struct_LongQueue_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongQueue_toArray_R_Array1_long 27
typedef jobject (*func_arc_struct_LongQueue_toArray_R_Array1_long)(jcontext ctx, jobject self);

void mark_arc_struct_LongQueue(jobject object, jint mark, jint depth);
void clinit_arc_struct_LongQueue(jcontext ctx);
void init_arc_struct_LongQueue(jcontext ctx, jobject self);
void init_arc_struct_LongQueue_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_LongQueue_Array1_long(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_LongQueue_addLast_long(jcontext ctx, jobject self, jlong param0);
void M_arc_struct_LongQueue_addFirst_long(jcontext ctx, jobject self, jlong param0);
jobject M_arc_struct_LongQueue_shrink_R_Array1_long(jcontext ctx, jobject self);
void M_arc_struct_LongQueue_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongQueue_resize_int(jcontext ctx, jobject self, jint param0);
jlong M_arc_struct_LongQueue_removeFirst_R_long(jcontext ctx, jobject self);
jlong M_arc_struct_LongQueue_removeLast_R_long(jcontext ctx, jobject self);
jint M_arc_struct_LongQueue_indexOf_long_boolean_R_int(jcontext ctx, jobject self, jlong param0, jbool param1);
jbool M_arc_struct_LongQueue_removeValue_long_boolean_R_boolean(jcontext ctx, jobject self, jlong param0, jbool param1);
jlong M_arc_struct_LongQueue_removeIndex_int_R_long(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_LongQueue_isEmpty_R_boolean(jcontext ctx, jobject self);
jlong M_arc_struct_LongQueue_first_R_long(jcontext ctx, jobject self);
jlong M_arc_struct_LongQueue_last_R_long(jcontext ctx, jobject self);
jlong M_arc_struct_LongQueue_get_int_R_long(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongQueue_set_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_arc_struct_LongQueue_clear(jcontext ctx, jobject self);
jobject M_arc_struct_LongQueue_toArray_R_Array1_long(jcontext ctx, jobject self);
jobject M_arc_struct_LongQueue_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
