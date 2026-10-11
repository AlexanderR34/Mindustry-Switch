#ifndef HEADER_rhino_JavaAdapter_invoke_rhino_ContextAction_0
#define HEADER_rhino_JavaAdapter_invoke_rhino_ContextAction_0

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ContextAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_JavaAdapter_invoke_rhino_ContextAction_0 {
	java_lang_Object parent;
	jref F_field0;
	jref F_field1;
	jref F_field2;
	jref F_field3;
	jlong F_field4;
} rhino_JavaAdapter_invoke_rhino_ContextAction_0;

extern Class class_rhino_JavaAdapter_invoke_rhino_ContextAction_0;


#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_hashCode_R_int 0
typedef jint (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_toString_R_java_lang_String 4
typedef jobject (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_finalize 5
typedef void (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_notify 6
typedef void (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_notifyAll 7
typedef void (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_wait 8
typedef void (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_wait_long 9
typedef void (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_wait_long_int 10
typedef void (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_JavaAdapter_invoke_rhino_ContextAction_0_run_rhino_Context_R_java_lang_Object 11
typedef jobject (*func_rhino_JavaAdapter_invoke_rhino_ContextAction_0_run_rhino_Context_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_JavaAdapter_invoke_rhino_ContextAction_0(jobject object, jint mark, jint depth);
void clinit_rhino_JavaAdapter_invoke_rhino_ContextAction_0(jcontext ctx);
jobject M_rhino_JavaAdapter_invoke_rhino_ContextAction_0_run_rhino_Context_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
