#ifndef HEADER_rhino_regexp_REProgState
#define HEADER_rhino_regexp_REProgState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_REProgState {
	java_lang_Object parent;
	jref F_previous;
	jint F_min;
	jint F_max;
	jint F_index;
	jint F_continuationOp;
	jint F_continuationPc;
	jref F_backTrack;
} rhino_regexp_REProgState;

extern Class class_rhino_regexp_REProgState;


#define VTABLE_rhino_regexp_REProgState_hashCode_R_int 0
typedef jint (*func_rhino_regexp_REProgState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_REProgState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_REProgState_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_REProgState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_REProgState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_REProgState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_finalize 5
typedef void (*func_rhino_regexp_REProgState_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_notify 6
typedef void (*func_rhino_regexp_REProgState_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_notifyAll 7
typedef void (*func_rhino_regexp_REProgState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_wait 8
typedef void (*func_rhino_regexp_REProgState_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REProgState_wait_long 9
typedef void (*func_rhino_regexp_REProgState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_REProgState_wait_long_int 10
typedef void (*func_rhino_regexp_REProgState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_regexp_REProgState(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_REProgState(jcontext ctx);
void init_rhino_regexp_REProgState_rhino_regexp_REProgState_int_int_int_rhino_regexp_REBackTrackData_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jobject param4, jint param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
