#ifndef HEADER_java_util_TreeMap$Node
#define HEADER_java_util_TreeMap$Node

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$Node {
	java_lang_Object parent;
	jref F_prev;
	jref F_next;
	jref F_parent;
	jref F_left;
	jref F_right;
	jref F_values;
	jref F_keys;
	jint F_left_idx;
	jint F_right_idx;
	jint F_size;
	jbool F_color;
} java_util_TreeMap$Node;

extern Class class_java_util_TreeMap$Node;

extern jint SF_java_util_TreeMap$Node_NODE_SIZE;

#define VTABLE_java_util_TreeMap$Node_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$Node_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$Node_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$Node_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$Node_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$Node_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$Node_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_finalize 5
typedef void (*func_java_util_TreeMap$Node_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_notify 6
typedef void (*func_java_util_TreeMap$Node_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_notifyAll 7
typedef void (*func_java_util_TreeMap$Node_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_wait 8
typedef void (*func_java_util_TreeMap$Node_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$Node_wait_long 9
typedef void (*func_java_util_TreeMap$Node_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$Node_wait_long_int 10
typedef void (*func_java_util_TreeMap$Node_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_TreeMap$Node(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$Node(jcontext ctx);
void init_java_util_TreeMap$Node(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
