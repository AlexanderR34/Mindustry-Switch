#ifndef HEADER_rhino_Interpreter$ContinuationJump
#define HEADER_rhino_Interpreter$ContinuationJump

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Interpreter$ContinuationJump {
	java_lang_Object parent;
	jref F_capturedFrame;
	jref F_branchFrame;
	jref F_result;
	jdouble F_resultDbl;
} rhino_Interpreter$ContinuationJump;

extern Class class_rhino_Interpreter$ContinuationJump;


#define VTABLE_rhino_Interpreter$ContinuationJump_hashCode_R_int 0
typedef jint (*func_rhino_Interpreter$ContinuationJump_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Interpreter$ContinuationJump_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Interpreter$ContinuationJump_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Interpreter$ContinuationJump_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Interpreter$ContinuationJump_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Interpreter$ContinuationJump_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_finalize 5
typedef void (*func_rhino_Interpreter$ContinuationJump_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_notify 6
typedef void (*func_rhino_Interpreter$ContinuationJump_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_notifyAll 7
typedef void (*func_rhino_Interpreter$ContinuationJump_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_wait 8
typedef void (*func_rhino_Interpreter$ContinuationJump_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Interpreter$ContinuationJump_wait_long 9
typedef void (*func_rhino_Interpreter$ContinuationJump_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Interpreter$ContinuationJump_wait_long_int 10
typedef void (*func_rhino_Interpreter$ContinuationJump_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Interpreter$ContinuationJump(jobject object, jint mark, jint depth);
void clinit_rhino_Interpreter$ContinuationJump(jcontext ctx);
void init_rhino_Interpreter$ContinuationJump_rhino_NativeContinuation_rhino_Interpreter$CallFrame(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
