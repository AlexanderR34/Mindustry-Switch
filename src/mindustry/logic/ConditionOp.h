#ifndef HEADER_mindustry_logic_ConditionOp
#define HEADER_mindustry_logic_ConditionOp

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_ConditionOp {
	java_lang_Enum parent;
	jref F_objFunction;
	jref F_function;
	jref F_symbol;
} mindustry_logic_ConditionOp;

extern Class class_mindustry_logic_ConditionOp;

extern jobject SF_mindustry_logic_ConditionOp_equal;
extern jobject SF_mindustry_logic_ConditionOp_notEqual;
extern jobject SF_mindustry_logic_ConditionOp_lessThan;
extern jobject SF_mindustry_logic_ConditionOp_lessThanEq;
extern jobject SF_mindustry_logic_ConditionOp_greaterThan;
extern jobject SF_mindustry_logic_ConditionOp_greaterThanEq;
extern jobject SF_mindustry_logic_ConditionOp_strictEqual;
extern jobject SF_mindustry_logic_ConditionOp_always;
extern jobject SF_mindustry_logic_ConditionOp_all;
extern jobject SF_mindustry_logic_ConditionOp_$VALUES;

#define VTABLE_mindustry_logic_ConditionOp_hashCode_R_int 0
typedef jint (*func_mindustry_logic_ConditionOp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_ConditionOp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_ConditionOp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_ConditionOp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_ConditionOp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_ConditionOp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_finalize 5
typedef void (*func_mindustry_logic_ConditionOp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_notify 6
typedef void (*func_mindustry_logic_ConditionOp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_notifyAll 7
typedef void (*func_mindustry_logic_ConditionOp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_wait 8
typedef void (*func_mindustry_logic_ConditionOp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_wait_long 9
typedef void (*func_mindustry_logic_ConditionOp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_ConditionOp_wait_long_int 10
typedef void (*func_mindustry_logic_ConditionOp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_ConditionOp_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_ConditionOp_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_ConditionOp_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_ConditionOp_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_ConditionOp_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_ConditionOp_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_ordinal_R_int 14
typedef jint (*func_mindustry_logic_ConditionOp_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_ConditionOp_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean 16
typedef jbool (*func_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_logic_ConditionOp(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_ConditionOp(jcontext ctx);
jobject SM_mindustry_logic_ConditionOp_values_R_Array1_mindustry_logic_ConditionOp(jcontext ctx);
jobject SM_mindustry_logic_ConditionOp_valueOf_java_lang_String_R_mindustry_logic_ConditionOp(jcontext ctx, jobject param0);
void init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void init_mindustry_logic_ConditionOp_java_lang_String_int_java_lang_String_mindustry_logic_ConditionOp$CondOpLambda_mindustry_logic_ConditionOp$CondObjOpLambda(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
jbool M_mindustry_logic_ConditionOp_test_mindustry_logic_LVar_mindustry_logic_LVar_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_logic_ConditionOp_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_logic_ConditionOp_$values_R_Array1_mindustry_logic_ConditionOp(jcontext ctx);
jbool SM_mindustry_logic_ConditionOp_lambda$static$8_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$7_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$6_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$5_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$4_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$3_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$2_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$1_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jbool SM_mindustry_logic_ConditionOp_lambda$static$0_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);

#ifdef __cplusplus
}
#endif

#endif
