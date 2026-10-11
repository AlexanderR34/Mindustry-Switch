#ifndef HEADER_rhino_TopLevel$NativeErrors
#define HEADER_rhino_TopLevel$NativeErrors

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_TopLevel$NativeErrors {
	java_lang_Enum parent;
} rhino_TopLevel$NativeErrors;

extern Class class_rhino_TopLevel$NativeErrors;

extern jobject SF_rhino_TopLevel$NativeErrors_Error;
extern jobject SF_rhino_TopLevel$NativeErrors_EvalError;
extern jobject SF_rhino_TopLevel$NativeErrors_RangeError;
extern jobject SF_rhino_TopLevel$NativeErrors_ReferenceError;
extern jobject SF_rhino_TopLevel$NativeErrors_SyntaxError;
extern jobject SF_rhino_TopLevel$NativeErrors_TypeError;
extern jobject SF_rhino_TopLevel$NativeErrors_URIError;
extern jobject SF_rhino_TopLevel$NativeErrors_InternalError;
extern jobject SF_rhino_TopLevel$NativeErrors_JavaException;
extern jobject SF_rhino_TopLevel$NativeErrors_$VALUES;

#define VTABLE_rhino_TopLevel$NativeErrors_hashCode_R_int 0
typedef jint (*func_rhino_TopLevel$NativeErrors_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_TopLevel$NativeErrors_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TopLevel$NativeErrors_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_TopLevel$NativeErrors_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_TopLevel$NativeErrors_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_toString_R_java_lang_String 4
typedef jobject (*func_rhino_TopLevel$NativeErrors_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_finalize 5
typedef void (*func_rhino_TopLevel$NativeErrors_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_notify 6
typedef void (*func_rhino_TopLevel$NativeErrors_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_notifyAll 7
typedef void (*func_rhino_TopLevel$NativeErrors_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_wait 8
typedef void (*func_rhino_TopLevel$NativeErrors_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_wait_long 9
typedef void (*func_rhino_TopLevel$NativeErrors_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_TopLevel$NativeErrors_wait_long_int 10
typedef void (*func_rhino_TopLevel$NativeErrors_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_TopLevel$NativeErrors_compareTo_java_lang_Object_R_int 11
typedef jint (*func_rhino_TopLevel$NativeErrors_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TopLevel$NativeErrors_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_rhino_TopLevel$NativeErrors_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_TopLevel$NativeErrors_name_R_java_lang_String 13
typedef jobject (*func_rhino_TopLevel$NativeErrors_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_ordinal_R_int 14
typedef jint (*func_rhino_TopLevel$NativeErrors_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_TopLevel$NativeErrors_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_rhino_TopLevel$NativeErrors_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_TopLevel$NativeErrors(jobject object, jint mark, jint depth);
void clinit_rhino_TopLevel$NativeErrors(jcontext ctx);
jobject SM_rhino_TopLevel$NativeErrors_values_R_Array1_rhino_TopLevel$NativeErrors(jcontext ctx);
jobject SM_rhino_TopLevel$NativeErrors_valueOf_java_lang_String_R_rhino_TopLevel$NativeErrors(jcontext ctx, jobject param0);
void init_rhino_TopLevel$NativeErrors_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
