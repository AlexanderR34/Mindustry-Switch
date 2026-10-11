#ifndef HEADER_rhino_v8dtoa_DoubleHelper
#define HEADER_rhino_v8dtoa_DoubleHelper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_v8dtoa_DoubleHelper {
	java_lang_Object parent;
} rhino_v8dtoa_DoubleHelper;

extern Class class_rhino_v8dtoa_DoubleHelper;

extern jlong SF_rhino_v8dtoa_DoubleHelper_kSignMask;
extern jlong SF_rhino_v8dtoa_DoubleHelper_kExponentMask;
extern jlong SF_rhino_v8dtoa_DoubleHelper_kSignificandMask;
extern jlong SF_rhino_v8dtoa_DoubleHelper_kHiddenBit;
extern jint SF_rhino_v8dtoa_DoubleHelper_kSignificandSize;
extern jint SF_rhino_v8dtoa_DoubleHelper_kExponentBias;
extern jint SF_rhino_v8dtoa_DoubleHelper_kDenormalExponent;
extern jbool SF_rhino_v8dtoa_DoubleHelper_$assertionsDisabled;

#define VTABLE_rhino_v8dtoa_DoubleHelper_hashCode_R_int 0
typedef jint (*func_rhino_v8dtoa_DoubleHelper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_v8dtoa_DoubleHelper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_v8dtoa_DoubleHelper_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_v8dtoa_DoubleHelper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_v8dtoa_DoubleHelper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_toString_R_java_lang_String 4
typedef jobject (*func_rhino_v8dtoa_DoubleHelper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_finalize 5
typedef void (*func_rhino_v8dtoa_DoubleHelper_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_notify 6
typedef void (*func_rhino_v8dtoa_DoubleHelper_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_notifyAll 7
typedef void (*func_rhino_v8dtoa_DoubleHelper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_wait 8
typedef void (*func_rhino_v8dtoa_DoubleHelper_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_v8dtoa_DoubleHelper_wait_long 9
typedef void (*func_rhino_v8dtoa_DoubleHelper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_v8dtoa_DoubleHelper_wait_long_int 10
typedef void (*func_rhino_v8dtoa_DoubleHelper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_v8dtoa_DoubleHelper(jobject object, jint mark, jint depth);
void clinit_rhino_v8dtoa_DoubleHelper(jcontext ctx);
void init_rhino_v8dtoa_DoubleHelper(jcontext ctx, jobject self);
jobject SM_rhino_v8dtoa_DoubleHelper_asDiyFp_long_R_rhino_v8dtoa_DiyFp(jcontext ctx, jlong param0);
jobject SM_rhino_v8dtoa_DoubleHelper_asNormalizedDiyFp_long_R_rhino_v8dtoa_DiyFp(jcontext ctx, jlong param0);
jint SM_rhino_v8dtoa_DoubleHelper_exponent_long_R_int(jcontext ctx, jlong param0);
jlong SM_rhino_v8dtoa_DoubleHelper_significand_long_R_long(jcontext ctx, jlong param0);
jbool SM_rhino_v8dtoa_DoubleHelper_isDenormal_long_R_boolean(jcontext ctx, jlong param0);
jbool SM_rhino_v8dtoa_DoubleHelper_isSpecial_long_R_boolean(jcontext ctx, jlong param0);
jbool SM_rhino_v8dtoa_DoubleHelper_isNan_long_R_boolean(jcontext ctx, jlong param0);
jbool SM_rhino_v8dtoa_DoubleHelper_isInfinite_long_R_boolean(jcontext ctx, jlong param0);
jint SM_rhino_v8dtoa_DoubleHelper_sign_long_R_int(jcontext ctx, jlong param0);
void SM_rhino_v8dtoa_DoubleHelper_normalizedBoundaries_long_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp(jcontext ctx, jlong param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
