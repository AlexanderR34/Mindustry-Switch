#ifndef HEADER_rhino_JavaAdapter
#define HEADER_rhino_JavaAdapter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/IdFunctionCall.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_JavaAdapter {
	java_lang_Object parent;
} rhino_JavaAdapter;

extern Class class_rhino_JavaAdapter;

extern jobject SF_rhino_JavaAdapter_FTAG;
extern jint SF_rhino_JavaAdapter_Id_JavaAdapter;

#define VTABLE_rhino_JavaAdapter_hashCode_R_int 0
typedef jint (*func_rhino_JavaAdapter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_JavaAdapter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_JavaAdapter_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_JavaAdapter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_JavaAdapter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_toString_R_java_lang_String 4
typedef jobject (*func_rhino_JavaAdapter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_finalize 5
typedef void (*func_rhino_JavaAdapter_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_notify 6
typedef void (*func_rhino_JavaAdapter_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_notifyAll 7
typedef void (*func_rhino_JavaAdapter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_wait 8
typedef void (*func_rhino_JavaAdapter_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_JavaAdapter_wait_long 9
typedef void (*func_rhino_JavaAdapter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_JavaAdapter_wait_long_int 10
typedef void (*func_rhino_JavaAdapter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 11
typedef jobject (*func_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

void mark_rhino_JavaAdapter(jobject object, jint mark, jint depth);
void clinit_rhino_JavaAdapter(jcontext ctx);
void init_rhino_JavaAdapter(jcontext ctx, jobject self);
void SM_rhino_JavaAdapter_init_rhino_Context_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
jobject M_rhino_JavaAdapter_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_JavaAdapter_convertResult_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_createAdapterWrapper_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_getAdapterSelf_java_lang_Class_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_js_createAdapter_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_JavaAdapter_getObjectFunctionNames_rhino_Scriptable_R_rhino_ObjToIntMap(jcontext ctx, jobject param0);
jobject SM_rhino_JavaAdapter_getAdapterClass_rhino_Scriptable_java_lang_Class_Array1_java_lang_Class_rhino_Scriptable_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_JavaAdapter_createAdapterCode_rhino_ObjToIntMap_java_lang_String_java_lang_Class_Array1_java_lang_Class_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_rhino_JavaAdapter_methodIsDefault_java_lang_reflect_Method_R_boolean(jcontext ctx, jobject param0);
jobject SM_rhino_JavaAdapter_getOverridableMethods_java_lang_Class_R_Array1_java_lang_reflect_Method(jcontext ctx, jobject param0);
void SM_rhino_JavaAdapter_appendOverridableMethods_java_lang_Class_java_util_ArrayList_java_util_HashSet(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_JavaAdapter_loadAdapterClass_java_lang_String_Array1_byte_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_getFunction_rhino_Scriptable_java_lang_String_R_rhino_Function(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_callMethod_rhino_ContextFactory_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jlong param4);
jobject SM_rhino_JavaAdapter_doCall_rhino_Context_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jlong param5);
jobject SM_rhino_JavaAdapter_runScript_rhino_Script_R_rhino_Scriptable(jcontext ctx, jobject param0);
void SM_rhino_JavaAdapter_generateCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_reflect_Constructor(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_rhino_JavaAdapter_generateSerialCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_rhino_JavaAdapter_generateEmptyCtor_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_rhino_JavaAdapter_generatePushWrappedArgs_rhino_classfile_ClassFileWriter_Array1_java_lang_Class_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jint SM_rhino_JavaAdapter_generateWrapArg_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_rhino_JavaAdapter_generateReturnResult_rhino_classfile_ClassFileWriter_java_lang_Class_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_rhino_JavaAdapter_generateMethod_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5);
jint SM_rhino_JavaAdapter_generatePushParam_rhino_classfile_ClassFileWriter_int_java_lang_Class_R_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_rhino_JavaAdapter_generatePopResult_rhino_classfile_ClassFileWriter_java_lang_Class(jcontext ctx, jobject param0, jobject param1);
void SM_rhino_JavaAdapter_generateSuper_rhino_classfile_ClassFileWriter_java_lang_String_java_lang_String_java_lang_String_java_lang_String_Array1_java_lang_Class_java_lang_Class(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jobject SM_rhino_JavaAdapter_getMethodSignature_java_lang_reflect_Method_Array1_java_lang_Class_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jint SM_rhino_JavaAdapter_appendMethodSignature_Array1_java_lang_Class_java_lang_Class_java_lang_StringBuilder_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_rhino_JavaAdapter_appendTypeString_java_lang_StringBuilder_java_lang_Class_R_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_getArgsToConvert_Array1_java_lang_Class_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_rhino_JavaAdapter_lambda$runScript$1_rhino_Script_rhino_Context_R_rhino_ScriptableObject(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_JavaAdapter_lambda$callMethod$0_rhino_Scriptable_rhino_Scriptable_rhino_Function_Array1_java_lang_Object_long_rhino_Context_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jlong param4, jobject param5);

#ifdef __cplusplus
}
#endif

#endif
