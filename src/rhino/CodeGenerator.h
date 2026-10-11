#ifndef HEADER_rhino_CodeGenerator
#define HEADER_rhino_CodeGenerator

#include "Clearwing.h"
#include "rhino/Icode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_CodeGenerator {
	rhino_Icode parent;
	jref F_compilerEnv;
	jbool F_itsInFunctionFlag;
	jbool F_itsInTryFlag;
	jref F_itsData;
	jref F_scriptOrFn;
	jint F_iCodeTop;
	jint F_stackDepth;
	jint F_lineNumber;
	jint F_doubleTableTop;
	jref F_strings;
	jint F_localTop;
	jref F_labelTable;
	jint F_labelTableTop;
	jref F_fixupTable;
	jint F_fixupTableTop;
	jref F_literalIds;
	jint F_exceptionTableTop;
} rhino_CodeGenerator;

extern Class class_rhino_CodeGenerator;

extern jint SF_rhino_CodeGenerator_MIN_LABEL_TABLE_SIZE;
extern jint SF_rhino_CodeGenerator_MIN_FIXUP_TABLE_SIZE;
extern jint SF_rhino_CodeGenerator_ECF_TAIL;

#define VTABLE_rhino_CodeGenerator_hashCode_R_int 0
typedef jint (*func_rhino_CodeGenerator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_CodeGenerator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_CodeGenerator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_CodeGenerator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_toString_R_java_lang_String 4
typedef jobject (*func_rhino_CodeGenerator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_finalize 5
typedef void (*func_rhino_CodeGenerator_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_notify 6
typedef void (*func_rhino_CodeGenerator_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_notifyAll 7
typedef void (*func_rhino_CodeGenerator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_wait 8
typedef void (*func_rhino_CodeGenerator_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_wait_long 9
typedef void (*func_rhino_CodeGenerator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_CodeGenerator_wait_long_int 10
typedef void (*func_rhino_CodeGenerator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData 11
typedef jobject (*func_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_rhino_CodeGenerator_generateFunctionICode 12
typedef void (*func_rhino_CodeGenerator_generateFunctionICode)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_generateICodeFromTree_rhino_Node 13
typedef void (*func_rhino_CodeGenerator_generateICodeFromTree_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_generateNestedFunctions 14
typedef void (*func_rhino_CodeGenerator_generateNestedFunctions)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_generateRegExpLiterals 15
typedef void (*func_rhino_CodeGenerator_generateRegExpLiterals)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_updateLineNumber_rhino_Node 16
typedef void (*func_rhino_CodeGenerator_updateLineNumber_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException 17
typedef jobject (*func_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_visitStatement_rhino_Node_int 18
typedef void (*func_rhino_CodeGenerator_visitStatement_rhino_Node_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_CodeGenerator_visitExpression_rhino_Node_int 19
typedef void (*func_rhino_CodeGenerator_visitExpression_rhino_Node_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node 20
typedef void (*func_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node 21
typedef void (*func_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node 22
typedef void (*func_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node 23
typedef void (*func_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int 24
typedef jint (*func_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int 25
typedef jint (*func_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_markTargetLabel_rhino_Node 26
typedef void (*func_rhino_CodeGenerator_markTargetLabel_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_addGoto_rhino_Node_int 27
typedef void (*func_rhino_CodeGenerator_addGoto_rhino_Node_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_CodeGenerator_fixLabelGotos 28
typedef void (*func_rhino_CodeGenerator_fixLabelGotos)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_addBackwardGoto_int_int 29
typedef void (*func_rhino_CodeGenerator_addBackwardGoto_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_CodeGenerator_resolveForwardGoto_int 30
typedef void (*func_rhino_CodeGenerator_resolveForwardGoto_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_resolveGoto_int_int 31
typedef void (*func_rhino_CodeGenerator_resolveGoto_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_CodeGenerator_addToken_int 32
typedef void (*func_rhino_CodeGenerator_addToken_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_addIcode_int 33
typedef void (*func_rhino_CodeGenerator_addIcode_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_addUint8_int 34
typedef void (*func_rhino_CodeGenerator_addUint8_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_addUint16_int 35
typedef void (*func_rhino_CodeGenerator_addUint16_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_addInt_int 36
typedef void (*func_rhino_CodeGenerator_addInt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_getDoubleIndex_double_R_int 37
typedef jint (*func_rhino_CodeGenerator_getDoubleIndex_double_R_int)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_CodeGenerator_addGotoOp_int 38
typedef void (*func_rhino_CodeGenerator_addGotoOp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_addVarOp_int_int 39
typedef void (*func_rhino_CodeGenerator_addVarOp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_CodeGenerator_addStringOp_int_java_lang_String 40
typedef void (*func_rhino_CodeGenerator_addStringOp_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_CodeGenerator_addIndexOp_int_int 41
typedef void (*func_rhino_CodeGenerator_addIndexOp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_CodeGenerator_addStringPrefix_java_lang_String 42
typedef void (*func_rhino_CodeGenerator_addStringPrefix_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_CodeGenerator_addIndexPrefix_int 43
typedef void (*func_rhino_CodeGenerator_addIndexPrefix_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int 44
typedef void (*func_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);
#define VTABLE_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte 45
typedef jobject (*func_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_stackChange_int 46
typedef void (*func_rhino_CodeGenerator_stackChange_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_CodeGenerator_allocLocal_R_int 47
typedef jint (*func_rhino_CodeGenerator_allocLocal_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_CodeGenerator_releaseLocal_int 48
typedef void (*func_rhino_CodeGenerator_releaseLocal_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_CodeGenerator(jobject object, jint mark, jint depth);
void clinit_rhino_CodeGenerator(jcontext ctx);
void init_rhino_CodeGenerator(jcontext ctx, jobject self);
jobject M_rhino_CodeGenerator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_rhino_InterpreterData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void M_rhino_CodeGenerator_generateFunctionICode(jcontext ctx, jobject self);
void M_rhino_CodeGenerator_generateICodeFromTree_rhino_Node(jcontext ctx, jobject self, jobject param0);
void M_rhino_CodeGenerator_generateNestedFunctions(jcontext ctx, jobject self);
void M_rhino_CodeGenerator_generateRegExpLiterals(jcontext ctx, jobject self);
void M_rhino_CodeGenerator_updateLineNumber_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_CodeGenerator_badTree_rhino_Node_R_java_lang_RuntimeException(jcontext ctx, jobject self, jobject param0);
void M_rhino_CodeGenerator_visitStatement_rhino_Node_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_CodeGenerator_visitExpression_rhino_Node_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_CodeGenerator_generateCallFunAndThis_rhino_Node(jcontext ctx, jobject self, jobject param0);
void M_rhino_CodeGenerator_visitIncDec_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_CodeGenerator_visitLiteral_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_CodeGenerator_visitArrayComprehension_rhino_Node_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint M_rhino_CodeGenerator_getLocalBlockRef_rhino_Node_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_CodeGenerator_getTargetLabel_rhino_Node_R_int(jcontext ctx, jobject self, jobject param0);
void M_rhino_CodeGenerator_markTargetLabel_rhino_Node(jcontext ctx, jobject self, jobject param0);
void M_rhino_CodeGenerator_addGoto_rhino_Node_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_CodeGenerator_fixLabelGotos(jcontext ctx, jobject self);
void M_rhino_CodeGenerator_addBackwardGoto_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_CodeGenerator_resolveForwardGoto_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_resolveGoto_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_CodeGenerator_addToken_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_addIcode_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_addUint8_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_addUint16_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_addInt_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_CodeGenerator_getDoubleIndex_double_R_int(jcontext ctx, jobject self, jdouble param0);
void M_rhino_CodeGenerator_addGotoOp_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_addVarOp_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_CodeGenerator_addStringOp_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_CodeGenerator_addIndexOp_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_CodeGenerator_addStringPrefix_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_CodeGenerator_addIndexPrefix_int(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_addExceptionHandler_int_int_int_boolean_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jint param4, jint param5);
jobject M_rhino_CodeGenerator_increaseICodeCapacity_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
void M_rhino_CodeGenerator_stackChange_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_CodeGenerator_allocLocal_R_int(jcontext ctx, jobject self);
void M_rhino_CodeGenerator_releaseLocal_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
