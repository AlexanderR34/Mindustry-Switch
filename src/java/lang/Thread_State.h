#ifndef HEADER_java_lang_Thread$State
#define HEADER_java_lang_Thread$State

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Thread$State {
	java_lang_Enum parent;
} java_lang_Thread$State;

extern Class class_java_lang_Thread$State;

extern jobject SF_java_lang_Thread$State_NEW;
extern jobject SF_java_lang_Thread$State_RUNNABLE;
extern jobject SF_java_lang_Thread$State_BLOCKED;
extern jobject SF_java_lang_Thread$State_WAITING;
extern jobject SF_java_lang_Thread$State_TIMED_WAITING;
extern jobject SF_java_lang_Thread$State_TERMINATED;
extern jobject SF_java_lang_Thread$State_$VALUES;

#define VTABLE_java_lang_Thread$State_hashCode_R_int 0
typedef jint (*func_java_lang_Thread$State_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Thread$State_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread$State_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Thread$State_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Thread$State_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Thread$State_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_finalize 5
typedef void (*func_java_lang_Thread$State_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_notify 6
typedef void (*func_java_lang_Thread$State_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_notifyAll 7
typedef void (*func_java_lang_Thread$State_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_wait 8
typedef void (*func_java_lang_Thread$State_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_wait_long 9
typedef void (*func_java_lang_Thread$State_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Thread$State_wait_long_int 10
typedef void (*func_java_lang_Thread$State_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Thread$State_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_lang_Thread$State_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread$State_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_lang_Thread$State_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Thread$State_name_R_java_lang_String 13
typedef jobject (*func_java_lang_Thread$State_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_ordinal_R_int 14
typedef jint (*func_java_lang_Thread$State_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Thread$State_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_lang_Thread$State_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_lang_Thread$State(jobject object, jint mark, jint depth);
void clinit_java_lang_Thread$State(jcontext ctx);
jobject SM_java_lang_Thread$State_values_R_Array1_java_lang_Thread$State(jcontext ctx);
jobject SM_java_lang_Thread$State_valueOf_java_lang_String_R_java_lang_Thread$State(jcontext ctx, jobject param0);
void init_java_lang_Thread$State_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_java_lang_Thread$State_$values_R_Array1_java_lang_Thread$State(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
