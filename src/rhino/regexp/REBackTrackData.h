#ifndef HEADER_rhino_regexp_REBackTrackData
#define HEADER_rhino_regexp_REBackTrackData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_REBackTrackData {
	java_lang_Object parent;
	jref F_previous;
	jint F_op;
	jint F_pc;
	jint F_cp;
	jint F_continuationOp;
	jint F_continuationPc;
	jref F_parens;
	jref F_stateStackTop;
} rhino_regexp_REBackTrackData;

extern Class class_rhino_regexp_REBackTrackData;


#define VTABLE_rhino_regexp_REBackTrackData_hashCode_R_int 0
typedef jint (*func_rhino_regexp_REBackTrackData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_REBackTrackData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_REBackTrackData_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_REBackTrackData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_REBackTrackData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_REBackTrackData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_finalize 5
typedef void (*func_rhino_regexp_REBackTrackData_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_notify 6
typedef void (*func_rhino_regexp_REBackTrackData_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_notifyAll 7
typedef void (*func_rhino_regexp_REBackTrackData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_wait 8
typedef void (*func_rhino_regexp_REBackTrackData_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REBackTrackData_wait_long 9
typedef void (*func_rhino_regexp_REBackTrackData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_REBackTrackData_wait_long_int 10
typedef void (*func_rhino_regexp_REBackTrackData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_regexp_REBackTrackData(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_REBackTrackData(jcontext ctx);
void init_rhino_regexp_REBackTrackData_rhino_regexp_REGlobalData_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);

#ifdef __cplusplus
}
#endif

#endif
