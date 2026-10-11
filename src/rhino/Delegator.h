#ifndef HEADER_rhino_Delegator
#define HEADER_rhino_Delegator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/Function.h"
#include "rhino/SymbolScriptable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Delegator {
	java_lang_Object parent;
	jref F_obj;
} rhino_Delegator;

extern Class class_rhino_Delegator;


#define VTABLE_rhino_Delegator_hashCode_R_int 0
typedef jint (*func_rhino_Delegator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Delegator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Delegator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Delegator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Delegator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_finalize 5
typedef void (*func_rhino_Delegator_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_notify 6
typedef void (*func_rhino_Delegator_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_notifyAll 7
typedef void (*func_rhino_Delegator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_wait 8
typedef void (*func_rhino_Delegator_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_wait_long 9
typedef void (*func_rhino_Delegator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Delegator_wait_long_int 10
typedef void (*func_rhino_Delegator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Delegator_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_Delegator_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Delegator_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_Delegator_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_Delegator_delete_java_lang_String 18
typedef void (*func_rhino_Delegator_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_delete_int 19
typedef void (*func_rhino_Delegator_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Delegator_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_Delegator_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_Delegator_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_Delegator_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_Delegator_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_Delegator_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 27
typedef jobject (*func_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable 28
typedef jobject (*func_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 29
typedef jobject (*func_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean 30
typedef jbool (*func_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 31
typedef void (*func_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_Delegator_delete_rhino_Symbol 32
typedef void (*func_rhino_Delegator_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Delegator_newInstance_R_rhino_Delegator 33
typedef jobject (*func_rhino_Delegator_newInstance_R_rhino_Delegator)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_getDelegee_R_rhino_Scriptable 34
typedef jobject (*func_rhino_Delegator_getDelegee_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_Delegator_setDelegee_rhino_Scriptable 35
typedef void (*func_rhino_Delegator_setDelegee_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_Delegator(jobject object, jint mark, jint depth);
void clinit_rhino_Delegator(jcontext ctx);
void init_rhino_Delegator(jcontext ctx, jobject self);
void init_rhino_Delegator_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Delegator_newInstance_R_rhino_Delegator(jcontext ctx, jobject self);
jobject M_rhino_Delegator_getDelegee_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_Delegator_setDelegee_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Delegator_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_Delegator_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Delegator_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Delegator_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_rhino_Delegator_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_Delegator_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_Delegator_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_Delegator_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_Delegator_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_Delegator_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_rhino_Delegator_delete_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Delegator_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0);
void M_rhino_Delegator_delete_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_Delegator_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_Delegator_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Delegator_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_Delegator_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Delegator_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_Delegator_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Delegator_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Delegator_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_Delegator_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
