#ifndef HEADER_rhino_NativeWith
#define HEADER_rhino_NativeWith

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/Scriptable.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/IdFunctionCall.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeWith {
	java_lang_Object parent;
	jref F_prototype;
	jref F_parent;
} rhino_NativeWith;

extern Class class_rhino_NativeWith;

extern jobject SF_rhino_NativeWith_FTAG;
extern jint SF_rhino_NativeWith_Id_constructor;

#define VTABLE_rhino_NativeWith_hashCode_R_int 0
typedef jint (*func_rhino_NativeWith_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeWith_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeWith_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeWith_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeWith_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_finalize 5
typedef void (*func_rhino_NativeWith_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_notify 6
typedef void (*func_rhino_NativeWith_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_notifyAll 7
typedef void (*func_rhino_NativeWith_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_wait 8
typedef void (*func_rhino_NativeWith_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_wait_long 9
typedef void (*func_rhino_NativeWith_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeWith_wait_long_int 10
typedef void (*func_rhino_NativeWith_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeWith_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeWith_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeWith_delete_java_lang_String 18
typedef void (*func_rhino_NativeWith_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_delete_int 19
typedef void (*func_rhino_NativeWith_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeWith_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeWith_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeWith_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeWith_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeWith_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeWith_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeWith_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeWith_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 31
typedef jobject (*func_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object 32
typedef jobject (*func_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jbool param0);

void mark_rhino_NativeWith(jobject object, jint mark, jint depth);
void clinit_rhino_NativeWith(jcontext ctx);
void SM_rhino_NativeWith_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1);
void init_rhino_NativeWith(jcontext ctx, jobject self);
void init_rhino_NativeWith_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeWith_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_NativeWith_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_NativeWith_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_NativeWith_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_NativeWith_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeWith_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeWith_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_NativeWith_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_NativeWith_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_NativeWith_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_rhino_NativeWith_delete_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeWith_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeWith_delete_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeWith_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_NativeWith_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeWith_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_NativeWith_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeWith_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeWith_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_NativeWith_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeWith_updateDotQuery_boolean_R_java_lang_Object(jcontext ctx, jobject self, jbool param0);
jobject M_rhino_NativeWith_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_rhino_NativeWith_isWithFunction_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jobject SM_rhino_NativeWith_newWithSpecial_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
