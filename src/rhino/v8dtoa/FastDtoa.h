#ifndef HEADER_rhino_v8dtoa_FastDtoa
#define HEADER_rhino_v8dtoa_FastDtoa

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_FastDtoa {
	java_lang_Object parent;
} rhino_v8dtoa_FastDtoa;

extern Class class_rhino_v8dtoa_FastDtoa;

extern jint SF_rhino_v8dtoa_FastDtoa_kFastDtoaMaximalLength;
extern jint SF_rhino_v8dtoa_FastDtoa_minimal_target_exponent;
extern jint SF_rhino_v8dtoa_FastDtoa_maximal_target_exponent;
extern jint SF_rhino_v8dtoa_FastDtoa_kTen4;
extern jint SF_rhino_v8dtoa_FastDtoa_kTen5;
extern jint SF_rhino_v8dtoa_FastDtoa_kTen6;
extern jint SF_rhino_v8dtoa_FastDtoa_kTen7;
extern jint SF_rhino_v8dtoa_FastDtoa_kTen8;
extern jint SF_rhino_v8dtoa_FastDtoa_kTen9;
extern jbool SF_rhino_v8dtoa_FastDtoa_$assertionsDisabled;

#define VTABLE_rhino_v8dtoa_FastDtoa_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_FastDtoa_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_FastDtoa_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_FastDtoa_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_FastDtoa_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_FastDtoa_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_FastDtoa_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_finalize 5
typedef void (*func_rhino_v8dtoa_FastDtoa_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_notify 6
typedef void (*func_rhino_v8dtoa_FastDtoa_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_notifyAll 7
typedef void (*func_rhino_v8dtoa_FastDtoa_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_wait 8
typedef void (*func_rhino_v8dtoa_FastDtoa_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_FastDtoa_wait_long 9
typedef void (*func_rhino_v8dtoa_FastDtoa_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_FastDtoa_wait_long_int 10
typedef void (*func_rhino_v8dtoa_FastDtoa_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_v8dtoa_FastDtoa(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_FastDtoa(jcontext ctx);
void init_rhino_v8dtoa_FastDtoa(jcontext ctx, jobject self);
jbool SM_rhino_v8dtoa_FastDtoa_roundWeed_rhino_v8dtoa_FastDtoaBuilder_long_long_long_long_long_R_boolean(jcontext ctx, jobject param0, jlong param1, jlong param2, jlong param3, jlong param4, jlong param5);
jlong SM_rhino_v8dtoa_FastDtoa_biggestPowerTen_int_int_R_long(jcontext ctx, jint param0, jint param1);
jbool SM_rhino_v8dtoa_FastDtoa_uint64_lte_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1);
jbool SM_rhino_v8dtoa_FastDtoa_digitGen_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp_rhino_v8dtoa_FastDtoaBuilder_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
jbool SM_rhino_v8dtoa_FastDtoa_grisu3_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(jcontext ctx, jdouble param0, jobject param1);
jbool SM_rhino_v8dtoa_FastDtoa_dtoa_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(jcontext ctx, jdouble param0, jobject param1);
jobject SM_rhino_v8dtoa_FastDtoa_numberToString_double_R_java_lang_String(jcontext ctx, jdouble param0);
jbool SM_rhino_v8dtoa_FastDtoa_numberToString_double_rhino_v8dtoa_FastDtoaBuilder_R_boolean(jcontext ctx, jdouble param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
