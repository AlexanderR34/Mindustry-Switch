#ifndef HEADER_mindustry_logic_LogicOp
#define HEADER_mindustry_logic_LogicOp

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LogicOp {
	java_lang_Enum parent;
	jref F_objFunction2;
	jref F_function2;
	jref F_function1;
	jbool F_unary;
	jbool F_func;
	jref F_symbol;
} mindustry_logic_LogicOp;

extern Class class_mindustry_logic_LogicOp;

extern jobject SF_mindustry_logic_LogicOp_add;
extern jobject SF_mindustry_logic_LogicOp_sub;
extern jobject SF_mindustry_logic_LogicOp_mul;
extern jobject SF_mindustry_logic_LogicOp_div;
extern jobject SF_mindustry_logic_LogicOp_idiv;
extern jobject SF_mindustry_logic_LogicOp_mod;
extern jobject SF_mindustry_logic_LogicOp_emod;
extern jobject SF_mindustry_logic_LogicOp_pow;
extern jobject SF_mindustry_logic_LogicOp_equal;
extern jobject SF_mindustry_logic_LogicOp_notEqual;
extern jobject SF_mindustry_logic_LogicOp_land;
extern jobject SF_mindustry_logic_LogicOp_lessThan;
extern jobject SF_mindustry_logic_LogicOp_lessThanEq;
extern jobject SF_mindustry_logic_LogicOp_greaterThan;
extern jobject SF_mindustry_logic_LogicOp_greaterThanEq;
extern jobject SF_mindustry_logic_LogicOp_strictEqual;
extern jobject SF_mindustry_logic_LogicOp_shl;
extern jobject SF_mindustry_logic_LogicOp_shr;
extern jobject SF_mindustry_logic_LogicOp_ushr;
extern jobject SF_mindustry_logic_LogicOp_or;
extern jobject SF_mindustry_logic_LogicOp_and;
extern jobject SF_mindustry_logic_LogicOp_xor;
extern jobject SF_mindustry_logic_LogicOp_not;
extern jobject SF_mindustry_logic_LogicOp_max;
extern jobject SF_mindustry_logic_LogicOp_min;
extern jobject SF_mindustry_logic_LogicOp_angle;
extern jobject SF_mindustry_logic_LogicOp_angleDiff;
extern jobject SF_mindustry_logic_LogicOp_len;
extern jobject SF_mindustry_logic_LogicOp_noise;
extern jobject SF_mindustry_logic_LogicOp_abs;
extern jobject SF_mindustry_logic_LogicOp_sign;
extern jobject SF_mindustry_logic_LogicOp_log;
extern jobject SF_mindustry_logic_LogicOp_logn;
extern jobject SF_mindustry_logic_LogicOp_log10;
extern jobject SF_mindustry_logic_LogicOp_floor;
extern jobject SF_mindustry_logic_LogicOp_ceil;
extern jobject SF_mindustry_logic_LogicOp_round;
extern jobject SF_mindustry_logic_LogicOp_sqrt;
extern jobject SF_mindustry_logic_LogicOp_rand;
extern jobject SF_mindustry_logic_LogicOp_sin;
extern jobject SF_mindustry_logic_LogicOp_cos;
extern jobject SF_mindustry_logic_LogicOp_tan;
extern jobject SF_mindustry_logic_LogicOp_asin;
extern jobject SF_mindustry_logic_LogicOp_acos;
extern jobject SF_mindustry_logic_LogicOp_atan;
extern jobject SF_mindustry_logic_LogicOp_all;
extern jobject SF_mindustry_logic_LogicOp_$VALUES;

#define VTABLE_mindustry_logic_LogicOp_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LogicOp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LogicOp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicOp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LogicOp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LogicOp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LogicOp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_finalize 5
typedef void (*func_mindustry_logic_LogicOp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_notify 6
typedef void (*func_mindustry_logic_LogicOp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_notifyAll 7
typedef void (*func_mindustry_logic_LogicOp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_wait 8
typedef void (*func_mindustry_logic_LogicOp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_wait_long 9
typedef void (*func_mindustry_logic_LogicOp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LogicOp_wait_long_int 10
typedef void (*func_mindustry_logic_LogicOp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LogicOp_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_LogicOp_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicOp_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_LogicOp_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicOp_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_LogicOp_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_ordinal_R_int 14
typedef jint (*func_mindustry_logic_LogicOp_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicOp_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_LogicOp_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_LogicOp(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LogicOp(jcontext ctx);
jobject SM_mindustry_logic_LogicOp_values_R_Array1_mindustry_logic_LogicOp(jcontext ctx);
jobject SM_mindustry_logic_LogicOp_valueOf_java_lang_String_R_mindustry_logic_LogicOp(jcontext ctx, jobject param0);
void init_mindustry_logic_LogicOp_java_lang_String_int_java_lang_String_mindustry_logic_LogicOp$OpLambda2(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void init_mindustry_logic_LogicOp_java_lang_String_int_java_lang_String_boolean_mindustry_logic_LogicOp$OpLambda2(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3, jobject param4);
void init_mindustry_logic_LogicOp_java_lang_String_int_java_lang_String_mindustry_logic_LogicOp$OpLambda2_mindustry_logic_LogicOp$OpObjLambda2(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
void init_mindustry_logic_LogicOp_java_lang_String_int_java_lang_String_mindustry_logic_LogicOp$OpLambda1(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
jobject M_mindustry_logic_LogicOp_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_logic_LogicOp_$values_R_Array1_mindustry_logic_LogicOp(jcontext ctx);
jdouble SM_mindustry_logic_LogicOp_lambda$static$36_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$35_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$34_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$33_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$32_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$31_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$30_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$29_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$28_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$27_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$26_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$25_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$24_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$23_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_mindustry_logic_LogicOp_lambda$static$22_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$21_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$20_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$19_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$18_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$17_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$16_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$15_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$14_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$13_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$12_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$11_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$10_java_lang_Object_java_lang_Object_R_double(jcontext ctx, jobject param0, jobject param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$9_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$8_java_lang_Object_java_lang_Object_R_double(jcontext ctx, jobject param0, jobject param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$7_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$6_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$5_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$4_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$3_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$2_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$1_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_mindustry_logic_LogicOp_lambda$static$0_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);

#ifdef __cplusplus
}
#endif

#endif
