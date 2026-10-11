#ifndef HEADER_java_lang_ref_Reference
#define HEADER_java_lang_ref_Reference

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ref_Reference {
	java_lang_Object parent;
} java_lang_ref_Reference;

extern Class class_java_lang_ref_Reference;


#define VTABLE_java_lang_ref_Reference_hashCode_R_int 0
typedef jint (*func_java_lang_ref_Reference_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ref_Reference_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ref_Reference_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ref_Reference_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ref_Reference_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ref_Reference_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_finalize 5
typedef void (*func_java_lang_ref_Reference_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_notify 6
typedef void (*func_java_lang_ref_Reference_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_notifyAll 7
typedef void (*func_java_lang_ref_Reference_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_wait 8
typedef void (*func_java_lang_ref_Reference_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_wait_long 9
typedef void (*func_java_lang_ref_Reference_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ref_Reference_wait_long_int 10
typedef void (*func_java_lang_ref_Reference_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ref_Reference_clear 11
typedef void (*func_java_lang_ref_Reference_clear)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_get_R_java_lang_Object 12
typedef jobject (*func_java_lang_ref_Reference_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_Reference_refersTo_java_lang_Object_R_boolean 13
typedef jbool (*func_java_lang_ref_Reference_refersTo_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_ref_Reference(jobject object, jint mark, jint depth);
void clinit_java_lang_ref_Reference(jcontext ctx);
void init_java_lang_ref_Reference(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
