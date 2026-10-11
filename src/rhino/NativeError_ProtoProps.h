#ifndef HEADER_rhino_NativeError$ProtoProps
#define HEADER_rhino_NativeError$ProtoProps

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeError$ProtoProps {
	java_lang_Object parent;
	jint F_stackTraceLimit;
	jref F_prepareStackTrace;
} rhino_NativeError$ProtoProps;

extern Class class_rhino_NativeError$ProtoProps;

extern jobject SF_rhino_NativeError$ProtoProps_KEY;
extern jobject SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT;
extern jobject SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT;
extern jobject SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK;
extern jobject SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK;

#define VTABLE_rhino_NativeError$ProtoProps_hashCode_R_int 0
typedef jint (*func_rhino_NativeError$ProtoProps_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeError$ProtoProps_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeError$ProtoProps_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeError$ProtoProps_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeError$ProtoProps_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeError$ProtoProps_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_finalize 5
typedef void (*func_rhino_NativeError$ProtoProps_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_notify 6
typedef void (*func_rhino_NativeError$ProtoProps_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_notifyAll 7
typedef void (*func_rhino_NativeError$ProtoProps_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_wait 8
typedef void (*func_rhino_NativeError$ProtoProps_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_wait_long 9
typedef void (*func_rhino_NativeError$ProtoProps_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeError$ProtoProps_wait_long_int 10
typedef void (*func_rhino_NativeError$ProtoProps_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object 11
typedef jobject (*func_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int 12
typedef jint (*func_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object 13
typedef void (*func_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object 14
typedef jobject (*func_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function 15
typedef jobject (*func_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_NativeError$ProtoProps(jobject object, jint mark, jint depth);
void clinit_rhino_NativeError$ProtoProps(jcontext ctx);
void init_rhino_NativeError$ProtoProps(jcontext ctx, jobject self);
jobject M_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int(jcontext ctx, jobject self);
void M_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function(jcontext ctx, jobject self);
void M_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_rhino_NativeError$ProtoProps_rhino_NativeError$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
