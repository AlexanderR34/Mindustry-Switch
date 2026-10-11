#ifndef HEADER_java_math_MathContext
#define HEADER_java_math_MathContext

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_MathContext {
	java_lang_Object parent;
	jint F_precision;
	jref F_roundingMode;
} java_math_MathContext;

extern Class class_java_math_MathContext;

extern jint SF_java_math_MathContext_DEFAULT_DIGITS;
extern jobject SF_java_math_MathContext_DEFAULT_ROUNDINGMODE;
extern jint SF_java_math_MathContext_MIN_DIGITS;
extern jlong SF_java_math_MathContext_serialVersionUID;
extern jobject SF_java_math_MathContext_UNLIMITED;
extern jobject SF_java_math_MathContext_DECIMAL32;
extern jobject SF_java_math_MathContext_DECIMAL64;
extern jobject SF_java_math_MathContext_DECIMAL128;

#define VTABLE_java_math_MathContext_hashCode_R_int 0
typedef jint (*func_java_math_MathContext_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_MathContext_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_MathContext_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_MathContext_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_MathContext_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_toString_R_java_lang_String 4
typedef jobject (*func_java_math_MathContext_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_finalize 5
typedef void (*func_java_math_MathContext_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_notify 6
typedef void (*func_java_math_MathContext_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_notifyAll 7
typedef void (*func_java_math_MathContext_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_wait 8
typedef void (*func_java_math_MathContext_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_wait_long 9
typedef void (*func_java_math_MathContext_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_MathContext_wait_long_int 10
typedef void (*func_java_math_MathContext_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_math_MathContext_getPrecision_R_int 11
typedef jint (*func_java_math_MathContext_getPrecision_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode 12
typedef jobject (*func_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode)(jcontext ctx, jobject self);

void mark_java_math_MathContext(jobject object, jint mark, jint depth);
void clinit_java_math_MathContext(jcontext ctx);
void init_java_math_MathContext_int(jcontext ctx, jobject self, jint param0);
void init_java_math_MathContext_int_java_math_RoundingMode(jcontext ctx, jobject self, jint param0, jobject param1);
void init_java_math_MathContext_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_math_MathContext_getPrecision_R_int(jcontext ctx, jobject self);
jobject M_java_math_MathContext_getRoundingMode_R_java_math_RoundingMode(jcontext ctx, jobject self);
jbool M_java_math_MathContext_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_math_MathContext_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_math_MathContext_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
