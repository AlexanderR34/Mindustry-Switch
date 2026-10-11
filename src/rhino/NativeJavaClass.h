#ifndef HEADER_rhino_NativeJavaClass
#define HEADER_rhino_NativeJavaClass

#include "Clearwing.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/Function.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeJavaClass {
	rhino_NativeJavaObject parent;
	jref F_staticFieldAndMethods;
} rhino_NativeJavaClass;

extern Class class_rhino_NativeJavaClass;

extern jobject SF_rhino_NativeJavaClass_javaClassPropertyName;

#define VTABLE_rhino_NativeJavaClass_hashCode_R_int 0
typedef jint (*func_rhino_NativeJavaClass_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeJavaClass_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeJavaClass_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeJavaClass_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeJavaClass_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_finalize 5
typedef void (*func_rhino_NativeJavaClass_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_notify 6
typedef void (*func_rhino_NativeJavaClass_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_notifyAll 7
typedef void (*func_rhino_NativeJavaClass_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_wait 8
typedef void (*func_rhino_NativeJavaClass_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_wait_long 9
typedef void (*func_rhino_NativeJavaClass_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeJavaClass_wait_long_int 10
typedef void (*func_rhino_NativeJavaClass_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeJavaClass_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeJavaClass_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaClass_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeJavaClass_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaClass_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeJavaClass_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaClass_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeJavaClass_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaClass_delete_java_lang_String 18
typedef void (*func_rhino_NativeJavaClass_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_delete_int 19
typedef void (*func_rhino_NativeJavaClass_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeJavaClass_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeJavaClass_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeJavaClass_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeJavaClass_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeJavaClass_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeJavaClass_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaClass_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeJavaClass_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaClass_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeJavaClass_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaClass_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeJavaClass_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaClass_unwrap_R_java_lang_Object 31
typedef jobject (*func_rhino_NativeJavaClass_unwrap_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_initMembers 32
typedef void (*func_rhino_NativeJavaClass_initMembers)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 33
typedef jobject (*func_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable 34
typedef jobject (*func_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaClass_getClassObject_R_java_lang_Class 35
typedef jobject (*func_rhino_NativeJavaClass_getClassObject_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_rhino_NativeJavaClass(jobject object, jint mark, jint depth);
void clinit_rhino_NativeJavaClass(jcontext ctx);
void init_rhino_NativeJavaClass(jcontext ctx, jobject self);
void init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_rhino_NativeJavaClass_rhino_Scriptable_java_lang_Class_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_rhino_NativeJavaClass_initMembers(jcontext ctx, jobject self);
jobject M_rhino_NativeJavaClass_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_NativeJavaClass_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeJavaClass_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_NativeJavaClass_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_NativeJavaClass_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeJavaClass_getClassObject_R_java_lang_Class(jcontext ctx, jobject self);
jobject M_rhino_NativeJavaClass_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeJavaClass_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_NativeJavaClass_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_NativeJavaClass_constructSpecific_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_rhino_MemberBox_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NativeJavaClass_constructInternal_Array1_java_lang_Object_rhino_MemberBox_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject M_rhino_NativeJavaClass_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_NativeJavaClass_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_NativeJavaClass_findNestedClass_java_lang_Class_java_lang_String_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
