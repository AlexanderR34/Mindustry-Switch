#ifndef HEADER_arc_struct_BinaryHeap
#define HEADER_arc_struct_BinaryHeap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_BinaryHeap {
	java_lang_Object parent;
	jbool F_isMaxHeap;
	jint F_size;
	jref F_nodes;
} arc_struct_BinaryHeap;

extern Class class_arc_struct_BinaryHeap;


#define VTABLE_arc_struct_BinaryHeap_hashCode_R_int 0
typedef jint (*func_arc_struct_BinaryHeap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BinaryHeap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_BinaryHeap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_BinaryHeap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_BinaryHeap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_finalize 5
typedef void (*func_arc_struct_BinaryHeap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_notify 6
typedef void (*func_arc_struct_BinaryHeap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_notifyAll 7
typedef void (*func_arc_struct_BinaryHeap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_wait 8
typedef void (*func_arc_struct_BinaryHeap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_wait_long 9
typedef void (*func_arc_struct_BinaryHeap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_BinaryHeap_wait_long_int 10
typedef void (*func_arc_struct_BinaryHeap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node 11
typedef jobject (*func_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node 12
typedef jobject (*func_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean 13
typedef jbool (*func_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node 14
typedef jobject (*func_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node 15
typedef jobject (*func_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node 16
typedef jobject (*func_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node 17
typedef jobject (*func_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BinaryHeap_isEmpty_R_boolean 18
typedef jbool (*func_arc_struct_BinaryHeap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_clear 19
typedef void (*func_arc_struct_BinaryHeap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float 20
typedef void (*func_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_BinaryHeap_up_int 21
typedef void (*func_arc_struct_BinaryHeap_up_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_BinaryHeap_down_int 22
typedef void (*func_arc_struct_BinaryHeap_down_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_struct_BinaryHeap(jobject object, jint mark, jint depth);
void clinit_arc_struct_BinaryHeap(jcontext ctx);
void init_arc_struct_BinaryHeap(jcontext ctx, jobject self);
void init_arc_struct_BinaryHeap_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jobject M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_BinaryHeap_add_arc_struct_BinaryHeap$Node_float_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_struct_BinaryHeap_contains_arc_struct_BinaryHeap$Node_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_BinaryHeap_peek_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self);
jobject M_arc_struct_BinaryHeap_pop_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self);
jobject M_arc_struct_BinaryHeap_remove_arc_struct_BinaryHeap$Node_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_BinaryHeap_remove_int_R_arc_struct_BinaryHeap$Node(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_BinaryHeap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_BinaryHeap_clear(jcontext ctx, jobject self);
void M_arc_struct_BinaryHeap_setValue_arc_struct_BinaryHeap$Node_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_arc_struct_BinaryHeap_up_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_BinaryHeap_down_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_BinaryHeap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_BinaryHeap_hashCode_R_int(jcontext ctx, jobject self);
jobject M_arc_struct_BinaryHeap_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
