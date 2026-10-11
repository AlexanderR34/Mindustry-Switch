#ifndef HEADER_rhino_ES6Generator$State
#define HEADER_rhino_ES6Generator$State

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ES6Generator$State {
	java_lang_Enum parent;
} rhino_ES6Generator$State;

extern Class class_rhino_ES6Generator$State;

extern jobject SF_rhino_ES6Generator$State_SUSPENDED_START;
extern jobject SF_rhino_ES6Generator$State_SUSPENDED_YIELD;
extern jobject SF_rhino_ES6Generator$State_EXECUTING;
extern jobject SF_rhino_ES6Generator$State_COMPLETED;
extern jobject SF_rhino_ES6Generator$State_$VALUES;

#define VTABLE_rhino_ES6Generator$State_hashCode_R_int 0
typedef jint (*func_rhino_ES6Generator$State_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ES6Generator$State_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ES6Generator$State_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ES6Generator$State_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ES6Generator$State_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ES6Generator$State_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_finalize 5
typedef void (*func_rhino_ES6Generator$State_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_notify 6
typedef void (*func_rhino_ES6Generator$State_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_notifyAll 7
typedef void (*func_rhino_ES6Generator$State_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_wait 8
typedef void (*func_rhino_ES6Generator$State_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_wait_long 9
typedef void (*func_rhino_ES6Generator$State_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ES6Generator$State_wait_long_int 10
typedef void (*func_rhino_ES6Generator$State_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ES6Generator$State_compareTo_java_lang_Object_R_int 11
typedef jint (*func_rhino_ES6Generator$State_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ES6Generator$State_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_rhino_ES6Generator$State_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ES6Generator$State_name_R_java_lang_String 13
typedef jobject (*func_rhino_ES6Generator$State_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_ordinal_R_int 14
typedef jint (*func_rhino_ES6Generator$State_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ES6Generator$State_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_rhino_ES6Generator$State_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_ES6Generator$State(jobject object, jint mark, jint depth);
void clinit_rhino_ES6Generator$State(jcontext ctx);
jobject SM_rhino_ES6Generator$State_values_R_Array1_rhino_ES6Generator$State(jcontext ctx);
jobject SM_rhino_ES6Generator$State_valueOf_java_lang_String_R_rhino_ES6Generator$State(jcontext ctx, jobject param0);
void init_rhino_ES6Generator$State_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
