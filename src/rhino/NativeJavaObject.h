#ifndef HEADER_rhino_NativeJavaObject
#define HEADER_rhino_NativeJavaObject

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/Scriptable.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/Wrapper.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeJavaObject {
	java_lang_Object parent;
	jref F_prototype;
	jref F_parent;
	jref F_javaObject;
	jref F_staticType;
	jref F_members;
	jref F_fieldAndMethods;
	jbool F_isAdapter;
} rhino_NativeJavaObject;

extern Class class_rhino_NativeJavaObject;

extern jint SF_rhino_NativeJavaObject_JSTYPE_UNDEFINED;
extern jint SF_rhino_NativeJavaObject_JSTYPE_NULL;
extern jint SF_rhino_NativeJavaObject_JSTYPE_BOOLEAN;
extern jint SF_rhino_NativeJavaObject_JSTYPE_NUMBER;
extern jint SF_rhino_NativeJavaObject_JSTYPE_STRING;
extern jint SF_rhino_NativeJavaObject_JSTYPE_JAVA_CLASS;
extern jint SF_rhino_NativeJavaObject_JSTYPE_JAVA_OBJECT;
extern jint SF_rhino_NativeJavaObject_JSTYPE_JAVA_ARRAY;
extern jint SF_rhino_NativeJavaObject_JSTYPE_OBJECT;
extern jbyte SF_rhino_NativeJavaObject_CONVERSION_TRIVIAL;
extern jbyte SF_rhino_NativeJavaObject_CONVERSION_NONTRIVIAL;
extern jbyte SF_rhino_NativeJavaObject_CONVERSION_NONE;
extern jobject SF_rhino_NativeJavaObject_COERCED_INTERFACE_KEY;

#define VTABLE_rhino_NativeJavaObject_hashCode_R_int 0
typedef jint (*func_rhino_NativeJavaObject_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeJavaObject_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeJavaObject_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeJavaObject_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeJavaObject_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_finalize 5
typedef void (*func_rhino_NativeJavaObject_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_notify 6
typedef void (*func_rhino_NativeJavaObject_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_notifyAll 7
typedef void (*func_rhino_NativeJavaObject_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_wait 8
typedef void (*func_rhino_NativeJavaObject_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_wait_long 9
typedef void (*func_rhino_NativeJavaObject_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeJavaObject_wait_long_int 10
typedef void (*func_rhino_NativeJavaObject_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeJavaObject_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeJavaObject_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaObject_delete_java_lang_String 18
typedef void (*func_rhino_NativeJavaObject_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_delete_int 19
typedef void (*func_rhino_NativeJavaObject_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeJavaObject_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeJavaObject_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaObject_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeJavaObject_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaObject_unwrap_R_java_lang_Object 31
typedef jobject (*func_rhino_NativeJavaObject_unwrap_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaObject_initMembers 32
typedef void (*func_rhino_NativeJavaObject_initMembers)(jcontext ctx, jobject self);

void mark_rhino_NativeJavaObject(jobject object, jint mark, jint depth);
void clinit_rhino_NativeJavaObject(jcontext ctx);
void init_rhino_NativeJavaObject(jcontext ctx, jobject self);
void init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void M_rhino_NativeJavaObject_initMembers(jcontext ctx, jobject self);
jbool M_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_NativeJavaObject_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_rhino_NativeJavaObject_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeJavaObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeJavaObject_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_NativeJavaObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_NativeJavaObject_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jbool M_rhino_NativeJavaObject_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeJavaObject_delete_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeJavaObject_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0);
void M_rhino_NativeJavaObject_delete_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_NativeJavaObject_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_NativeJavaObject_setPrototype_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable(jcontext ctx, jobject self);
void M_rhino_NativeJavaObject_setParentScope_rhino_Scriptable(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeJavaObject_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeJavaObject_unwrap_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeJavaObject_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_NativeJavaObject_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool SM_rhino_NativeJavaObject_canConvert_java_lang_Object_java_lang_Class_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint SM_rhino_NativeJavaObject_getConversionWeight_java_lang_Object_java_lang_Class_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_rhino_NativeJavaObject_getSizeRank_java_lang_Class_R_int(jcontext ctx, jobject param0);
jint SM_rhino_NativeJavaObject_getJSTypeCode_java_lang_Object_R_int(jcontext ctx, jobject param0);
jobject SM_rhino_NativeJavaObject_coerceTypeImpl_java_lang_Class_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_NativeJavaObject_createInterfaceAdapter_java_lang_Class_rhino_ScriptableObject_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_NativeJavaObject_coerceToNumber_java_lang_Class_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jdouble SM_rhino_NativeJavaObject_toDouble_java_lang_Object_R_double(jcontext ctx, jobject param0);
jlong SM_rhino_NativeJavaObject_toInteger_java_lang_Object_java_lang_Class_double_double_R_long(jcontext ctx, jobject param0, jobject param1, jdouble param2, jdouble param3);
void SM_rhino_NativeJavaObject_reportConversionError_java_lang_Object_java_lang_Class(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
