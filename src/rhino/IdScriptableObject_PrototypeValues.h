#ifndef HEADER_rhino_IdScriptableObject$PrototypeValues
#define HEADER_rhino_IdScriptableObject$PrototypeValues

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_IdScriptableObject$PrototypeValues {
	java_lang_Object parent;
	jref F_obj;
	jint F_maxId;
	jref F_valueArray;
	jref F_attributeArray;
	jint F_constructorId;
	jref F_constructor;
	jshort F_constructorAttrs;
} rhino_IdScriptableObject$PrototypeValues;

extern Class class_rhino_IdScriptableObject$PrototypeValues;

extern jint SF_rhino_IdScriptableObject$PrototypeValues_NAME_SLOT;
extern jint SF_rhino_IdScriptableObject$PrototypeValues_SLOT_SPAN;

#define VTABLE_rhino_IdScriptableObject$PrototypeValues_hashCode_R_int 0
typedef jint (*func_rhino_IdScriptableObject$PrototypeValues_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_IdScriptableObject$PrototypeValues_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_toString_R_java_lang_String 4
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_finalize 5
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_notify 6
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_notifyAll 7
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_wait 8
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_wait_long 9
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_wait_long_int 10
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int 11
typedef jint (*func_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int 12
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int 13
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int 14
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject 15
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject)(jcontext ctx, jobject self);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int 16
typedef jint (*func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int 17
typedef jint (*func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean 18
typedef jbool (*func_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object 19
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object 20
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_delete_int 21
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_delete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int 22
typedef jint (*func_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int 23
typedef void (*func_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jbool param0, jbool param1, jobject param2);
#define VTABLE_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object 25
typedef jobject (*func_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_rhino_IdScriptableObject$PrototypeValues(jobject object, jint mark, jint depth);
void clinit_rhino_IdScriptableObject$PrototypeValues(jcontext ctx);
void init_rhino_IdScriptableObject$PrototypeValues_rhino_IdScriptableObject_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int(jcontext ctx, jobject self);
void M_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
void M_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
void M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject(jcontext ctx, jobject self);
jint M_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_rhino_IdScriptableObject$PrototypeValues_delete_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1, jobject param2);
jobject M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
