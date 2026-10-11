#ifndef HEADER_rhino_Parser$ConditionData
#define HEADER_rhino_Parser$ConditionData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Parser$ConditionData {
	java_lang_Object parent;
	jref F_condition;
	jint F_lp;
	jint F_rp;
} rhino_Parser$ConditionData;

extern Class class_rhino_Parser$ConditionData;


#define VTABLE_rhino_Parser$ConditionData_hashCode_R_int 0
typedef jint (*func_rhino_Parser$ConditionData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Parser$ConditionData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$ConditionData_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Parser$ConditionData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Parser$ConditionData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Parser$ConditionData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_finalize 5
typedef void (*func_rhino_Parser$ConditionData_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_notify 6
typedef void (*func_rhino_Parser$ConditionData_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_notifyAll 7
typedef void (*func_rhino_Parser$ConditionData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_wait 8
typedef void (*func_rhino_Parser$ConditionData_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$ConditionData_wait_long 9
typedef void (*func_rhino_Parser$ConditionData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Parser$ConditionData_wait_long_int 10
typedef void (*func_rhino_Parser$ConditionData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Parser$ConditionData(jobject object, jint mark, jint depth);
void clinit_rhino_Parser$ConditionData(jcontext ctx);
void init_rhino_Parser$ConditionData(jcontext ctx, jobject self);
void init_rhino_Parser$ConditionData_rhino_Parser$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
