#ifndef HEADER_rhino_regexp_RENode
#define HEADER_rhino_regexp_RENode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_RENode {
	java_lang_Object parent;
	jbyte F_op;
	jref F_next;
	jref F_kid;
	jref F_kid2;
	jint F_parenIndex;
	jint F_min;
	jint F_max;
	jint F_parenCount;
	jbool F_greedy;
	jint F_startIndex;
	jint F_kidlen;
	jint F_bmsize;
	jint F_index;
	jbool F_sense;
	jchar F_chr;
	jint F_length;
	jint F_flatIndex;
} rhino_regexp_RENode;

extern Class class_rhino_regexp_RENode;


#define VTABLE_rhino_regexp_RENode_hashCode_R_int 0
typedef jint (*func_rhino_regexp_RENode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_RENode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_RENode_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_RENode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_RENode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_RENode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_finalize 5
typedef void (*func_rhino_regexp_RENode_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_notify 6
typedef void (*func_rhino_regexp_RENode_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_notifyAll 7
typedef void (*func_rhino_regexp_RENode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_wait 8
typedef void (*func_rhino_regexp_RENode_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_RENode_wait_long 9
typedef void (*func_rhino_regexp_RENode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_RENode_wait_long_int 10
typedef void (*func_rhino_regexp_RENode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_regexp_RENode(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_RENode(jcontext ctx);
void init_rhino_regexp_RENode_byte(jcontext ctx, jobject self, jbyte param0);

#ifdef __cplusplus
}
#endif

#endif
