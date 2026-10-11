#ifndef HEADER_arc_flabel_FParser_invoke_arc_func_Intc2_0
#define HEADER_arc_flabel_FParser_invoke_arc_func_Intc2_0

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/func/Intc2.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FParser_invoke_arc_func_Intc2_0 {
	java_lang_Object parent;
	jref F_field0;
	jref F_field1;
	jref F_field2;
	jref F_field3;
	jref F_field4;
} arc_flabel_FParser_invoke_arc_func_Intc2_0;

extern Class class_arc_flabel_FParser_invoke_arc_func_Intc2_0;


#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_hashCode_R_int 0
typedef jint (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_finalize 5
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_notify 6
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_notifyAll 7
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_wait 8
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_wait_long 9
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_wait_long_int 10
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_FParser_invoke_arc_func_Intc2_0_get_int_int 11
typedef void (*func_arc_flabel_FParser_invoke_arc_func_Intc2_0_get_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_arc_flabel_FParser_invoke_arc_func_Intc2_0(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FParser_invoke_arc_func_Intc2_0(jcontext ctx);
void M_arc_flabel_FParser_invoke_arc_func_Intc2_0_get_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
