#ifndef HEADER_rhino_InterpreterData
#define HEADER_rhino_InterpreterData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/debug/DebuggableScript.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_InterpreterData {
	java_lang_Object parent;
	jref F_itsName;
	jref F_itsSourceFile;
	jbool F_itsNeedsActivation;
	jint F_itsFunctionType;
	jref F_itsStringTable;
	jref F_itsDoubleTable;
	jref F_itsNestedFunctions;
	jref F_itsRegExpLiterals;
	jref F_itsICode;
	jref F_itsExceptionTable;
	jint F_itsMaxVars;
	jint F_itsMaxLocals;
	jint F_itsMaxStack;
	jint F_itsMaxFrameArray;
	jref F_argNames;
	jref F_argIsConst;
	jint F_argCount;
	jint F_itsMaxCalleeArgs;
	jref F_encodedSource;
	jint F_encodedSourceStart;
	jint F_encodedSourceEnd;
	jint F_languageVersion;
	jbool F_isStrict;
	jbool F_topLevel;
	jbool F_isES6Generator;
	jref F_literalIds;
	jref F_longJumps;
	jint F_firstLinePC;
	jref F_parentData;
	jbool F_evalScriptFlag;
	jint F_icodeHashCode;
	jbool F_declaredAsVar;
	jbool F_declaredAsFunctionExpression;
} rhino_InterpreterData;

extern Class class_rhino_InterpreterData;

extern jint SF_rhino_InterpreterData_INITIAL_MAX_ICODE_LENGTH;
extern jint SF_rhino_InterpreterData_INITIAL_STRINGTABLE_SIZE;
extern jint SF_rhino_InterpreterData_INITIAL_NUMBERTABLE_SIZE;

#define VTABLE_rhino_InterpreterData_hashCode_R_int 0
typedef jint (*func_rhino_InterpreterData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_InterpreterData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_InterpreterData_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_InterpreterData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_InterpreterData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_toString_R_java_lang_String 4
typedef jobject (*func_rhino_InterpreterData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_finalize 5
typedef void (*func_rhino_InterpreterData_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_notify 6
typedef void (*func_rhino_InterpreterData_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_notifyAll 7
typedef void (*func_rhino_InterpreterData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_wait 8
typedef void (*func_rhino_InterpreterData_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_wait_long 9
typedef void (*func_rhino_InterpreterData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_InterpreterData_wait_long_int 10
typedef void (*func_rhino_InterpreterData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_InterpreterData_isTopLevel_R_boolean 11
typedef jbool (*func_rhino_InterpreterData_isTopLevel_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_isFunction_R_boolean 12
typedef jbool (*func_rhino_InterpreterData_isFunction_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getFunctionName_R_java_lang_String 13
typedef jobject (*func_rhino_InterpreterData_getFunctionName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getParamCount_R_int 14
typedef jint (*func_rhino_InterpreterData_getParamCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getParamAndVarCount_R_int 15
typedef jint (*func_rhino_InterpreterData_getParamAndVarCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String 16
typedef jobject (*func_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_InterpreterData_getSourceName_R_java_lang_String 17
typedef jobject (*func_rhino_InterpreterData_getSourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_isGeneratedScript_R_boolean 18
typedef jbool (*func_rhino_InterpreterData_isGeneratedScript_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getLineNumbers_R_Array1_int 19
typedef jobject (*func_rhino_InterpreterData_getLineNumbers_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getFunctionCount_R_int 20
typedef jint (*func_rhino_InterpreterData_getFunctionCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript 21
typedef jobject (*func_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript 22
typedef jobject (*func_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_init 23
typedef void (*func_rhino_InterpreterData_init)(jcontext ctx, jobject self);
#define VTABLE_rhino_InterpreterData_getParamOrVarConst_int_R_boolean 24
typedef jbool (*func_rhino_InterpreterData_getParamOrVarConst_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_InterpreterData_icodeHashCode_R_int 25
typedef jint (*func_rhino_InterpreterData_icodeHashCode_R_int)(jcontext ctx, jobject self);

void mark_rhino_InterpreterData(jobject object, jint mark, jint depth);
void clinit_rhino_InterpreterData(jcontext ctx);
void init_rhino_InterpreterData_int_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jbool param3);
void init_rhino_InterpreterData_rhino_InterpreterData(jcontext ctx, jobject self, jobject param0);
void M_rhino_InterpreterData_init(jcontext ctx, jobject self);
jbool M_rhino_InterpreterData_isTopLevel_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_InterpreterData_isFunction_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_InterpreterData_getFunctionName_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_InterpreterData_getParamCount_R_int(jcontext ctx, jobject self);
jint M_rhino_InterpreterData_getParamAndVarCount_R_int(jcontext ctx, jobject self);
jobject M_rhino_InterpreterData_getParamOrVarName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jbool M_rhino_InterpreterData_getParamOrVarConst_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_rhino_InterpreterData_getSourceName_R_java_lang_String(jcontext ctx, jobject self);
jbool M_rhino_InterpreterData_isGeneratedScript_R_boolean(jcontext ctx, jobject self);
jobject M_rhino_InterpreterData_getLineNumbers_R_Array1_int(jcontext ctx, jobject self);
jint M_rhino_InterpreterData_getFunctionCount_R_int(jcontext ctx, jobject self);
jobject M_rhino_InterpreterData_getFunction_int_R_rhino_debug_DebuggableScript(jcontext ctx, jobject self, jint param0);
jobject M_rhino_InterpreterData_getParent_R_rhino_debug_DebuggableScript(jcontext ctx, jobject self);
jint M_rhino_InterpreterData_icodeHashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
