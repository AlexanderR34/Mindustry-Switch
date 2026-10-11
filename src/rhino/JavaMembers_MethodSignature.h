#ifndef HEADER_rhino_JavaMembers$MethodSignature
#define HEADER_rhino_JavaMembers$MethodSignature

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_JavaMembers$MethodSignature {
	java_lang_Object parent;
	jref F_name;
	jref F_args;
} rhino_JavaMembers$MethodSignature;

extern Class class_rhino_JavaMembers$MethodSignature;


#define VTABLE_rhino_JavaMembers$MethodSignature_hashCode_R_int 0
typedef jint (*func_rhino_JavaMembers$MethodSignature_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaMembers$MethodSignature_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_JavaMembers$MethodSignature_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_JavaMembers$MethodSignature_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_toString_R_java_lang_String 4
typedef jobject (*func_rhino_JavaMembers$MethodSignature_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_finalize 5
typedef void (*func_rhino_JavaMembers$MethodSignature_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_notify 6
typedef void (*func_rhino_JavaMembers$MethodSignature_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_notifyAll 7
typedef void (*func_rhino_JavaMembers$MethodSignature_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_wait 8
typedef void (*func_rhino_JavaMembers$MethodSignature_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaMembers$MethodSignature_wait_long 9
typedef void (*func_rhino_JavaMembers$MethodSignature_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_JavaMembers$MethodSignature_wait_long_int 10
typedef void (*func_rhino_JavaMembers$MethodSignature_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_JavaMembers$MethodSignature(jobject object, jint mark, jint depth);
void clinit_rhino_JavaMembers$MethodSignature(jcontext ctx);
void init_rhino_JavaMembers$MethodSignature_java_lang_String_Array1_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_rhino_JavaMembers$MethodSignature_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_JavaMembers$MethodSignature_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
