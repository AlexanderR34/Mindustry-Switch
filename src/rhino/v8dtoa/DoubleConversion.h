#ifndef HEADER_rhino_v8dtoa_DoubleConversion
#define HEADER_rhino_v8dtoa_DoubleConversion

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_DoubleConversion {
	java_lang_Object parent;
} rhino_v8dtoa_DoubleConversion;

extern Class class_rhino_v8dtoa_DoubleConversion;

extern jlong SF_rhino_v8dtoa_DoubleConversion_kSignMask;
extern jlong SF_rhino_v8dtoa_DoubleConversion_kExponentMask;
extern jlong SF_rhino_v8dtoa_DoubleConversion_kSignificandMask;
extern jlong SF_rhino_v8dtoa_DoubleConversion_kHiddenBit;
extern jint SF_rhino_v8dtoa_DoubleConversion_kPhysicalSignificandSize;
extern jint SF_rhino_v8dtoa_DoubleConversion_kSignificandSize;
extern jint SF_rhino_v8dtoa_DoubleConversion_kExponentBias;
extern jint SF_rhino_v8dtoa_DoubleConversion_kDenormalExponent;

#define VTABLE_rhino_v8dtoa_DoubleConversion_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_DoubleConversion_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_DoubleConversion_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_DoubleConversion_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_DoubleConversion_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_DoubleConversion_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_DoubleConversion_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_finalize 5
typedef void (*func_rhino_v8dtoa_DoubleConversion_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_notify 6
typedef void (*func_rhino_v8dtoa_DoubleConversion_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_notifyAll 7
typedef void (*func_rhino_v8dtoa_DoubleConversion_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_wait 8
typedef void (*func_rhino_v8dtoa_DoubleConversion_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleConversion_wait_long 9
typedef void (*func_rhino_v8dtoa_DoubleConversion_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_DoubleConversion_wait_long_int 10
typedef void (*func_rhino_v8dtoa_DoubleConversion_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_v8dtoa_DoubleConversion(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_DoubleConversion(jcontext ctx);
void init_rhino_v8dtoa_DoubleConversion(jcontext ctx, jobject self);
jint SM_rhino_v8dtoa_DoubleConversion_exponent_long_R_int(jcontext ctx, jlong param0);
jlong SM_rhino_v8dtoa_DoubleConversion_significand_long_R_long(jcontext ctx, jlong param0);
jbool SM_rhino_v8dtoa_DoubleConversion_isDenormal_long_R_boolean(jcontext ctx, jlong param0);
jint SM_rhino_v8dtoa_DoubleConversion_sign_long_R_int(jcontext ctx, jlong param0);
jint SM_rhino_v8dtoa_DoubleConversion_doubleToInt32_double_R_int(jcontext ctx, jdouble param0);

#ifdef __cplusplus
}
#endif

#endif
