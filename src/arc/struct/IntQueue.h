#ifndef HEADER_arc_struct_IntQueue
#define HEADER_arc_struct_IntQueue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntQueue {
	java_lang_Object parent;
	jint F_size;
	jref F_values;
	jint F_head;
	jint F_tail;
} arc_struct_IntQueue;

extern Class class_arc_struct_IntQueue;


#define VTABLE_arc_struct_IntQueue_hashCode_R_int 0
typedef jint (*func_arc_struct_IntQueue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntQueue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntQueue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntQueue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntQueue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntQueue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_finalize 5
typedef void (*func_arc_struct_IntQueue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_notify 6
typedef void (*func_arc_struct_IntQueue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_notifyAll 7
typedef void (*func_arc_struct_IntQueue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_wait 8
typedef void (*func_arc_struct_IntQueue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_wait_long 9
typedef void (*func_arc_struct_IntQueue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntQueue_wait_long_int 10
typedef void (*func_arc_struct_IntQueue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntQueue_addLast_int 11
typedef void (*func_arc_struct_IntQueue_addLast_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_addFirst_int 12
typedef void (*func_arc_struct_IntQueue_addFirst_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_shrink_R_Array1_int 13
typedef jobject (*func_arc_struct_IntQueue_shrink_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_ensureCapacity_int 14
typedef void (*func_arc_struct_IntQueue_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_resize_int 15
typedef void (*func_arc_struct_IntQueue_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_removeFirst_R_int 16
typedef jint (*func_arc_struct_IntQueue_removeFirst_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_removeLast_R_int 17
typedef jint (*func_arc_struct_IntQueue_removeLast_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_indexOf_int_R_int 18
typedef jint (*func_arc_struct_IntQueue_indexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_removeValue_int_R_boolean 19
typedef jbool (*func_arc_struct_IntQueue_removeValue_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_removeIndex_int_R_int 20
typedef jint (*func_arc_struct_IntQueue_removeIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_isEmpty_R_boolean 21
typedef jbool (*func_arc_struct_IntQueue_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_first_R_int 22
typedef jint (*func_arc_struct_IntQueue_first_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_last_R_int 23
typedef jint (*func_arc_struct_IntQueue_last_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntQueue_get_int_R_int 24
typedef jint (*func_arc_struct_IntQueue_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntQueue_set_int_int 25
typedef void (*func_arc_struct_IntQueue_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntQueue_clear 26
typedef void (*func_arc_struct_IntQueue_clear)(jcontext ctx, jobject self);

void mark_arc_struct_IntQueue(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntQueue(jcontext ctx);
void init_arc_struct_IntQueue(jcontext ctx, jobject self);
void init_arc_struct_IntQueue_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntQueue_addLast_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntQueue_addFirst_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_IntQueue_shrink_R_Array1_int(jcontext ctx, jobject self);
void M_arc_struct_IntQueue_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntQueue_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntQueue_removeFirst_R_int(jcontext ctx, jobject self);
jint M_arc_struct_IntQueue_removeLast_R_int(jcontext ctx, jobject self);
jint M_arc_struct_IntQueue_indexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntQueue_removeValue_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntQueue_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntQueue_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_arc_struct_IntQueue_first_R_int(jcontext ctx, jobject self);
jint M_arc_struct_IntQueue_last_R_int(jcontext ctx, jobject self);
jint M_arc_struct_IntQueue_get_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntQueue_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntQueue_clear(jcontext ctx, jobject self);
jobject M_arc_struct_IntQueue_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
