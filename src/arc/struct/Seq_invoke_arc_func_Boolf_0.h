#ifndef HEADER_arc_struct_Seq_invoke_arc_func_Boolf_0
#define HEADER_arc_struct_Seq_invoke_arc_func_Boolf_0

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/func/Boolf.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Seq_invoke_arc_func_Boolf_0 {
	java_lang_Object parent;
	jref F_field0;
} arc_struct_Seq_invoke_arc_func_Boolf_0;

extern Class class_arc_struct_Seq_invoke_arc_func_Boolf_0;


#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_hashCode_R_int 0
typedef jint (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_finalize 5
typedef void (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_notify 6
typedef void (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_notifyAll 7
typedef void (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_wait 8
typedef void (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_wait_long 9
typedef void (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_wait_long_int 10
typedef void (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Seq_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean 11
typedef jbool (*func_arc_struct_Seq_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_Seq_invoke_arc_func_Boolf_0(jobject object, jint mark, jint depth);
void clinit_arc_struct_Seq_invoke_arc_func_Boolf_0(jcontext ctx);
jbool M_arc_struct_Seq_invoke_arc_func_Boolf_0_get_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
