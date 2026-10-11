#ifndef HEADER_java_util_LinkedList$Link
#define HEADER_java_util_LinkedList$Link

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_LinkedList$Link {
	java_lang_Object parent;
	jref F_data;
	jref F_previous;
	jref F_next;
} java_util_LinkedList$Link;

extern Class class_java_util_LinkedList$Link;


#define VTABLE_java_util_LinkedList$Link_hashCode_R_int 0
typedef jint (*func_java_util_LinkedList$Link_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_LinkedList$Link_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList$Link_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_LinkedList$Link_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_LinkedList$Link_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_toString_R_java_lang_String 4
typedef jobject (*func_java_util_LinkedList$Link_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_finalize 5
typedef void (*func_java_util_LinkedList$Link_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_notify 6
typedef void (*func_java_util_LinkedList$Link_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_notifyAll 7
typedef void (*func_java_util_LinkedList$Link_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_wait 8
typedef void (*func_java_util_LinkedList$Link_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$Link_wait_long 9
typedef void (*func_java_util_LinkedList$Link_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_LinkedList$Link_wait_long_int 10
typedef void (*func_java_util_LinkedList$Link_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_LinkedList$Link(jobject object, jint mark, jint depth);
void clinit_java_util_LinkedList$Link(jcontext ctx);
void init_java_util_LinkedList$Link_java_lang_Object_java_util_LinkedList$Link_java_util_LinkedList$Link(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
