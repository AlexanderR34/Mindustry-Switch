#ifndef HEADER_rhino_NativeJavaArray
#define HEADER_rhino_NativeJavaArray

#include "Clearwing.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/SymbolScriptable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeJavaArray {
	rhino_NativeJavaObject parent;
	jref F_array;
	jint F_length;
	jref F_cls;
} rhino_NativeJavaArray;

extern Class class_rhino_NativeJavaArray;


#define VTABLE_rhino_NativeJavaArray_hashCode_R_int 0
typedef jint (*func_rhino_NativeJavaArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeJavaArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeJavaArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeJavaArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeJavaArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_finalize 5
typedef void (*func_rhino_NativeJavaArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_notify 6
typedef void (*func_rhino_NativeJavaArray_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_notifyAll 7
typedef void (*func_rhino_NativeJavaArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_wait 8
typedef void (*func_rhino_NativeJavaArray_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_wait_long 9
typedef void (*func_rhino_NativeJavaArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeJavaArray_wait_long_int 10
typedef void (*func_rhino_NativeJavaArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeJavaArray_getClassName_R_java_lang_String 11
typedef jobject (*func_rhino_NativeJavaArray_getClassName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object 13
typedef jobject (*func_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean 14
typedef jbool (*func_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean 15
typedef jbool (*func_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object 16
typedef void (*func_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object 17
typedef void (*func_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaArray_delete_java_lang_String 18
typedef void (*func_rhino_NativeJavaArray_delete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_delete_int 19
typedef void (*func_rhino_NativeJavaArray_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable 20
typedef jobject (*func_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_setPrototype_rhino_Scriptable 21
typedef void (*func_rhino_NativeJavaArray_setPrototype_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_getParentScope_R_rhino_Scriptable 22
typedef jobject (*func_rhino_NativeJavaArray_getParentScope_R_rhino_Scriptable)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_setParentScope_rhino_Scriptable 23
typedef void (*func_rhino_NativeJavaArray_setParentScope_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object 25
typedef jobject (*func_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean 26
typedef jbool (*func_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 27
typedef jobject (*func_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean 28
typedef jbool (*func_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NativeJavaArray_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 29
typedef void (*func_rhino_NativeJavaArray_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_NativeJavaArray_delete_rhino_Symbol 30
typedef void (*func_rhino_NativeJavaArray_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJavaArray_unwrap_R_java_lang_Object 31
typedef jobject (*func_rhino_NativeJavaArray_unwrap_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJavaArray_initMembers 32
typedef void (*func_rhino_NativeJavaArray_initMembers)(jcontext ctx, jobject self);

void mark_rhino_NativeJavaArray(jobject object, jint mark, jint depth);
void clinit_rhino_NativeJavaArray(jcontext ctx);
jobject M_rhino_NativeJavaArray_getClassName_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_rhino_NativeJavaArray_wrap_rhino_Scriptable_java_lang_Object_R_rhino_NativeJavaArray(jcontext ctx, jobject param0, jobject param1);
jobject M_rhino_NativeJavaArray_unwrap_R_java_lang_Object(jcontext ctx, jobject self);
void init_rhino_NativeJavaArray_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_rhino_NativeJavaArray_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jbool M_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
