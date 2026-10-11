#ifndef HEADER_java_nio_charset_CoderResult
#define HEADER_java_nio_charset_CoderResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_charset_CoderResult {
	java_lang_Object parent;
} java_nio_charset_CoderResult;

extern Class class_java_nio_charset_CoderResult;

extern jobject SF_java_nio_charset_CoderResult_OVERFLOW;
extern jobject SF_java_nio_charset_CoderResult_UNDERFLOW;

#define VTABLE_java_nio_charset_CoderResult_hashCode_R_int 0
typedef jint (*func_java_nio_charset_CoderResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_charset_CoderResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_charset_CoderResult_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_charset_CoderResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_charset_CoderResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_charset_CoderResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_finalize 5
typedef void (*func_java_nio_charset_CoderResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_notify 6
typedef void (*func_java_nio_charset_CoderResult_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_notifyAll 7
typedef void (*func_java_nio_charset_CoderResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_wait 8
typedef void (*func_java_nio_charset_CoderResult_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_wait_long 9
typedef void (*func_java_nio_charset_CoderResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_charset_CoderResult_wait_long_int 10
typedef void (*func_java_nio_charset_CoderResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_charset_CoderResult_isUnderflow_R_boolean 11
typedef jbool (*func_java_nio_charset_CoderResult_isUnderflow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_isOverflow_R_boolean 12
typedef jbool (*func_java_nio_charset_CoderResult_isOverflow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_isError_R_boolean 13
typedef jbool (*func_java_nio_charset_CoderResult_isError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_isMalformed_R_boolean 14
typedef jbool (*func_java_nio_charset_CoderResult_isMalformed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_isUnmappable_R_boolean 15
typedef jbool (*func_java_nio_charset_CoderResult_isUnmappable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_length_R_int 16
typedef jint (*func_java_nio_charset_CoderResult_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_charset_CoderResult_throwException 17
typedef void (*func_java_nio_charset_CoderResult_throwException)(jcontext ctx, jobject self);

void mark_java_nio_charset_CoderResult(jobject object, jint mark, jint depth);
void clinit_java_nio_charset_CoderResult(jcontext ctx);
void init_java_nio_charset_CoderResult(jcontext ctx, jobject self);
jobject M_java_nio_charset_CoderResult_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_nio_charset_CoderResult_isUnderflow_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_charset_CoderResult_isOverflow_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_charset_CoderResult_isError_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_charset_CoderResult_isMalformed_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_charset_CoderResult_isUnmappable_R_boolean(jcontext ctx, jobject self);
jint M_java_nio_charset_CoderResult_length_R_int(jcontext ctx, jobject self);
jobject SM_java_nio_charset_CoderResult_malformedForLength_int_R_java_nio_charset_CoderResult(jcontext ctx, jint param0);
jobject SM_java_nio_charset_CoderResult_unmappableForLength_int_R_java_nio_charset_CoderResult(jcontext ctx, jint param0);
void M_java_nio_charset_CoderResult_throwException(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
