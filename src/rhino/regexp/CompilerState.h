#ifndef HEADER_rhino_regexp_CompilerState
#define HEADER_rhino_regexp_CompilerState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_CompilerState {
	java_lang_Object parent;
	jref F_cx;
	jref F_cpbegin;
	jint F_cpend;
	jint F_cp;
	jint F_flags;
	jint F_backReferenceLimit;
	jint F_maxBackReference;
	jint F_parenCount;
	jint F_parenNesting;
	jint F_classCount;
	jint F_progLength;
	jref F_result;
} rhino_regexp_CompilerState;

extern Class class_rhino_regexp_CompilerState;


#define VTABLE_rhino_regexp_CompilerState_hashCode_R_int 0
typedef jint (*func_rhino_regexp_CompilerState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_CompilerState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_CompilerState_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_CompilerState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_CompilerState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_CompilerState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_finalize 5
typedef void (*func_rhino_regexp_CompilerState_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_notify 6
typedef void (*func_rhino_regexp_CompilerState_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_notifyAll 7
typedef void (*func_rhino_regexp_CompilerState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_wait 8
typedef void (*func_rhino_regexp_CompilerState_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_CompilerState_wait_long 9
typedef void (*func_rhino_regexp_CompilerState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_CompilerState_wait_long_int 10
typedef void (*func_rhino_regexp_CompilerState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_regexp_CompilerState(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_CompilerState(jcontext ctx);
void init_rhino_regexp_CompilerState_rhino_Context_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
