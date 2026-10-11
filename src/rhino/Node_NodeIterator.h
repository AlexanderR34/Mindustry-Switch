#ifndef HEADER_rhino_Node$NodeIterator
#define HEADER_rhino_Node$NodeIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Node$NodeIterator {
	java_lang_Object parent;
	jref F_cursor;
	jref F_prev;
	jref F_prev2;
	jbool F_removed;
	jref F_this$0;
} rhino_Node$NodeIterator;

extern Class class_rhino_Node$NodeIterator;


#define VTABLE_rhino_Node$NodeIterator_hashCode_R_int 0
typedef jint (*func_rhino_Node$NodeIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Node$NodeIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Node$NodeIterator_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Node$NodeIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Node$NodeIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Node$NodeIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_finalize 5
typedef void (*func_rhino_Node$NodeIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_notify 6
typedef void (*func_rhino_Node$NodeIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_notifyAll 7
typedef void (*func_rhino_Node$NodeIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_wait 8
typedef void (*func_rhino_Node$NodeIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_wait_long 9
typedef void (*func_rhino_Node$NodeIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Node$NodeIterator_wait_long_int 10
typedef void (*func_rhino_Node$NodeIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Node$NodeIterator_hasNext_R_boolean 11
typedef jbool (*func_rhino_Node$NodeIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_next_R_java_lang_Object 12
typedef jobject (*func_rhino_Node$NodeIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_remove 13
typedef void (*func_rhino_Node$NodeIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_rhino_Node$NodeIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_rhino_Node$NodeIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Node$NodeIterator_next_R_rhino_Node 15
typedef jobject (*func_rhino_Node$NodeIterator_next_R_rhino_Node)(jcontext ctx, jobject self);

void mark_rhino_Node$NodeIterator(jobject object, jint mark, jint depth);
void clinit_rhino_Node$NodeIterator(jcontext ctx);
void init_rhino_Node$NodeIterator_rhino_Node(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Node$NodeIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_Node$NodeIterator_next_R_rhino_Node(jcontext ctx, jobject self);
void M_rhino_Node$NodeIterator_remove(jcontext ctx, jobject self);
jobject M_rhino_Node$NodeIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
