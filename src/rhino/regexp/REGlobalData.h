#ifndef HEADER_rhino_regexp_REGlobalData
#define HEADER_rhino_regexp_REGlobalData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_regexp_REGlobalData {
	java_lang_Object parent;
	jbool F_multiline;
	jref F_regexp;
	jint F_skipped;
	jint F_cp;
	jref F_parens;
	jref F_stateStackTop;
	jref F_backTrackStackTop;
} rhino_regexp_REGlobalData;

extern Class class_rhino_regexp_REGlobalData;


#define VTABLE_rhino_regexp_REGlobalData_hashCode_R_int 0
typedef jint (*func_rhino_regexp_REGlobalData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_regexp_REGlobalData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_regexp_REGlobalData_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_regexp_REGlobalData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_regexp_REGlobalData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_toString_R_java_lang_String 4
typedef jobject (*func_rhino_regexp_REGlobalData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_finalize 5
typedef void (*func_rhino_regexp_REGlobalData_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_notify 6
typedef void (*func_rhino_regexp_REGlobalData_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_notifyAll 7
typedef void (*func_rhino_regexp_REGlobalData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_wait 8
typedef void (*func_rhino_regexp_REGlobalData_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_regexp_REGlobalData_wait_long 9
typedef void (*func_rhino_regexp_REGlobalData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_regexp_REGlobalData_wait_long_int 10
typedef void (*func_rhino_regexp_REGlobalData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_regexp_REGlobalData_parensIndex_int_R_int 11
typedef jint (*func_rhino_regexp_REGlobalData_parensIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_regexp_REGlobalData_parensLength_int_R_int 12
typedef jint (*func_rhino_regexp_REGlobalData_parensLength_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_regexp_REGlobalData_setParens_int_int_int 13
typedef void (*func_rhino_regexp_REGlobalData_setParens_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);

void mark_rhino_regexp_REGlobalData(jobject object, jint mark, jint depth);
void clinit_rhino_regexp_REGlobalData(jcontext ctx);
void init_rhino_regexp_REGlobalData(jcontext ctx, jobject self);
jint M_rhino_regexp_REGlobalData_parensIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_regexp_REGlobalData_parensLength_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_regexp_REGlobalData_setParens_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
