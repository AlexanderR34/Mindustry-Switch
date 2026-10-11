#ifndef HEADER_mindustry_type_LiquidStack
#define HEADER_mindustry_type_LiquidStack

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_LiquidStack {
	java_lang_Object parent;
	jref F_liquid;
	jfloat F_amount;
} mindustry_type_LiquidStack;

extern Class class_mindustry_type_LiquidStack;

extern jobject SF_mindustry_type_LiquidStack_empty;

#define VTABLE_mindustry_type_LiquidStack_hashCode_R_int 0
typedef jint (*func_mindustry_type_LiquidStack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_LiquidStack_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_LiquidStack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_LiquidStack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_LiquidStack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_finalize 5
typedef void (*func_mindustry_type_LiquidStack_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_notify 6
typedef void (*func_mindustry_type_LiquidStack_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_notifyAll 7
typedef void (*func_mindustry_type_LiquidStack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_wait 8
typedef void (*func_mindustry_type_LiquidStack_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_wait_long 9
typedef void (*func_mindustry_type_LiquidStack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_LiquidStack_wait_long_int 10
typedef void (*func_mindustry_type_LiquidStack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack 12
typedef jobject (*func_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack 13
typedef jobject (*func_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean 14
typedef jbool (*func_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int 15
typedef jint (*func_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_type_LiquidStack(jobject object, jint mark, jint depth);
void clinit_mindustry_type_LiquidStack(jcontext ctx);
void init_mindustry_type_LiquidStack_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_mindustry_type_LiquidStack(jcontext ctx, jobject self);
jobject M_mindustry_type_LiquidStack_set_mindustry_type_Liquid_float_R_mindustry_type_LiquidStack(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_mindustry_type_LiquidStack_copy_R_mindustry_type_LiquidStack(jcontext ctx, jobject self);
jbool M_mindustry_type_LiquidStack_equals_mindustry_type_LiquidStack_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_type_LiquidStack_mult_Array1_mindustry_type_LiquidStack_float_R_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jfloat param1);
jobject SM_mindustry_type_LiquidStack_with_Array1_java_lang_Object_R_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0);
jobject SM_mindustry_type_LiquidStack_list_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0);
jint M_mindustry_type_LiquidStack_compareTo_mindustry_type_LiquidStack_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_LiquidStack_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_LiquidStack_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_type_LiquidStack_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
