#ifndef HEADER_rhino_Parser
#define HEADER_rhino_Parser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Parser {
	java_lang_Object parent;
	jref F_compilerEnv;
	jref F_errorReporter;
	jref F_errorCollector;
	jref F_sourceURI;
	jref F_sourceChars;
	jbool F_calledByCompileFunction;
	jbool F_parseFinished;
	jref F_ts;
	jint F_currentFlaggedToken;
	jint F_currentToken;
	jint F_syntaxErrorCount;
	jref F_scannedComments;
	jref F_currentJsDocComment;
	jint F_nestingOfFunction;
	jref F_currentLabel;
	jbool F_inDestructuringAssignment;
	jbool F_inUseStrictDirective;
	jref F_currentScriptOrFn;
	jref F_currentScope;
	jint F_endFlags;
	jbool F_inForInit;
	jref F_labelSet;
	jref F_loopSet;
	jref F_loopAndSwitchSet;
	jint F_prevNameTokenStart;
	jref F_prevNameTokenString;
	jint F_prevNameTokenLineno;
	jbool F_defaultUseStrictDirective;
} rhino_Parser;

extern Class class_rhino_Parser;

extern jint SF_rhino_Parser_ARGC_LIMIT;
extern jint SF_rhino_Parser_CLEAR_TI_MASK;
extern jint SF_rhino_Parser_TI_AFTER_EOL;
extern jint SF_rhino_Parser_TI_CHECK_LABEL;
extern jint SF_rhino_Parser_PROP_ENTRY;
extern jint SF_rhino_Parser_GET_ENTRY;
extern jint SF_rhino_Parser_SET_ENTRY;
extern jint SF_rhino_Parser_METHOD_ENTRY;

#define VTABLE_rhino_Parser_hashCode_R_int 0
typedef jint (*func_rhino_Parser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Parser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Parser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Parser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Parser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_finalize 5
typedef void (*func_rhino_Parser_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_notify 6
typedef void (*func_rhino_Parser_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_notifyAll 7
typedef void (*func_rhino_Parser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_wait 8
typedef void (*func_rhino_Parser_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_wait_long 9
typedef void (*func_rhino_Parser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Parser_wait_long_int 10
typedef void (*func_rhino_Parser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String 11
typedef void (*func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int 12
typedef void (*func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String 13
typedef void (*func_rhino_Parser_addWarning_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_addWarning_java_lang_String_int_int 14
typedef void (*func_rhino_Parser_addWarning_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int 15
typedef void (*func_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_Parser_addError_java_lang_String 16
typedef void (*func_rhino_Parser_addError_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_addError_java_lang_String_int_int 17
typedef void (*func_rhino_Parser_addError_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String 18
typedef void (*func_rhino_Parser_addError_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_addError_java_lang_String_int 19
typedef void (*func_rhino_Parser_addError_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int 20
typedef void (*func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int 21
typedef void (*func_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
#define VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int 22
typedef void (*func_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
#define VTABLE_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int 23
typedef void (*func_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
#define VTABLE_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String 24
typedef jobject (*func_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String 25
typedef jobject (*func_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_reportError_java_lang_String 26
typedef void (*func_rhino_Parser_reportError_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String 27
typedef void (*func_rhino_Parser_reportError_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_reportError_java_lang_String_int_int 28
typedef void (*func_rhino_Parser_reportError_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int 29
typedef void (*func_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int 30
typedef jint (*func_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_recordComment_int_java_lang_String 31
typedef void (*func_rhino_Parser_recordComment_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment 32
typedef jobject (*func_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_getNumberOfEols_java_lang_String_R_int 33
typedef jint (*func_rhino_Parser_getNumberOfEols_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_peekToken_R_int 34
typedef jint (*func_rhino_Parser_peekToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_peekFlaggedToken_R_int 35
typedef jint (*func_rhino_Parser_peekFlaggedToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_consumeToken 36
typedef void (*func_rhino_Parser_consumeToken)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_nextToken_R_int 37
typedef jint (*func_rhino_Parser_nextToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_matchToken_int_boolean_R_boolean 38
typedef jbool (*func_rhino_Parser_matchToken_int_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_rhino_Parser_peekTokenOrEOL_R_int 39
typedef jint (*func_rhino_Parser_peekTokenOrEOL_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean 40
typedef jbool (*func_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean 41
typedef jbool (*func_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jbool param4);
#define VTABLE_rhino_Parser_eof_R_boolean 42
typedef jbool (*func_rhino_Parser_eof_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_insideFunction_R_boolean 43
typedef jbool (*func_rhino_Parser_insideFunction_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_pushScope_rhino_ast_Scope 44
typedef void (*func_rhino_Parser_pushScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_popScope 45
typedef void (*func_rhino_Parser_popScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_enterLoop_rhino_ast_Loop 46
typedef void (*func_rhino_Parser_enterLoop_rhino_ast_Loop)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_exitLoop 47
typedef void (*func_rhino_Parser_exitLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement 48
typedef void (*func_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_exitSwitch 49
typedef void (*func_rhino_Parser_exitSwitch)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot 50
typedef jobject (*func_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_Parser_parse_R_rhino_ast_AstRoot 51
typedef jobject (*func_rhino_Parser_parse_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode 52
typedef jobject (*func_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String 53
typedef jobject (*func_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode 54
typedef void (*func_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_function_int_R_rhino_ast_FunctionNode 55
typedef jobject (*func_rhino_Parser_function_int_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode 56
typedef jobject (*func_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode 57
typedef jobject (*func_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set 58
typedef void (*func_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode 59
typedef jobject (*func_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_statements_R_rhino_ast_AstNode 60
typedef jobject (*func_rhino_Parser_statements_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_condition_R_rhino_Parser$ConditionData 61
typedef jobject (*func_rhino_Parser_condition_R_rhino_Parser$ConditionData)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_statement_R_rhino_ast_AstNode 62
typedef jobject (*func_rhino_Parser_statement_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_statementHelper_R_rhino_ast_AstNode 63
typedef jobject (*func_rhino_Parser_statementHelper_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode 64
typedef void (*func_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_ifStatement_R_rhino_ast_IfStatement 65
typedef jobject (*func_rhino_Parser_ifStatement_R_rhino_ast_IfStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement 66
typedef jobject (*func_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop 67
typedef jobject (*func_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_doLoop_R_rhino_ast_DoLoop 68
typedef jobject (*func_rhino_Parser_doLoop_R_rhino_ast_DoLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_peekUntilNonComment_int_R_int 69
typedef jint (*func_rhino_Parser_peekUntilNonComment_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode 70
typedef jobject (*func_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_forLoop_R_rhino_ast_Loop 71
typedef jobject (*func_rhino_Parser_forLoop_R_rhino_ast_Loop)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode 72
typedef jobject (*func_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Parser_tryStatement_R_rhino_ast_TryStatement 73
typedef jobject (*func_rhino_Parser_tryStatement_R_rhino_ast_TryStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement 74
typedef jobject (*func_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement 75
typedef jobject (*func_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement 76
typedef jobject (*func_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement 77
typedef jobject (*func_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_withStatement_R_rhino_ast_WithStatement 78
typedef jobject (*func_rhino_Parser_withStatement_R_rhino_ast_WithStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_letStatement_R_rhino_ast_AstNode 79
typedef jobject (*func_rhino_Parser_letStatement_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode 80
typedef jobject (*func_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_rhino_Parser_block_R_rhino_ast_AstNode 81
typedef jobject (*func_rhino_Parser_block_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement 82
typedef void (*func_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode 83
typedef jobject (*func_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration 84
typedef jobject (*func_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode 85
typedef jobject (*func_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_rhino_Parser_defineSymbol_int_java_lang_String 86
typedef void (*func_rhino_Parser_defineSymbol_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Parser_defineSymbol_int_java_lang_String_boolean 87
typedef void (*func_rhino_Parser_defineSymbol_int_java_lang_String_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_Parser_expr_R_rhino_ast_AstNode 88
typedef jobject (*func_rhino_Parser_expr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_assignExpr_R_rhino_ast_AstNode 89
typedef jobject (*func_rhino_Parser_assignExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_condExpr_R_rhino_ast_AstNode 90
typedef jobject (*func_rhino_Parser_condExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_orExpr_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_Parser_orExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_andExpr_R_rhino_ast_AstNode 92
typedef jobject (*func_rhino_Parser_andExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode 93
typedef jobject (*func_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode 94
typedef jobject (*func_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode 95
typedef jobject (*func_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_eqExpr_R_rhino_ast_AstNode 96
typedef jobject (*func_rhino_Parser_eqExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_relExpr_R_rhino_ast_AstNode 97
typedef jobject (*func_rhino_Parser_relExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_shiftExpr_R_rhino_ast_AstNode 98
typedef jobject (*func_rhino_Parser_shiftExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_addExpr_R_rhino_ast_AstNode 99
typedef jobject (*func_rhino_Parser_addExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_mulExpr_R_rhino_ast_AstNode 100
typedef jobject (*func_rhino_Parser_mulExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_unaryExpr_R_rhino_ast_AstNode 101
typedef jobject (*func_rhino_Parser_unaryExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_argumentList_R_java_util_List 102
typedef jobject (*func_rhino_Parser_argumentList_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode 103
typedef jobject (*func_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode 104
typedef jobject (*func_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode 105
typedef jobject (*func_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode 106
typedef jobject (*func_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode 107
typedef jobject (*func_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_primaryExpr_R_rhino_ast_AstNode 108
typedef jobject (*func_rhino_Parser_primaryExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_parenExpr_R_rhino_ast_AstNode 109
typedef jobject (*func_rhino_Parser_parenExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_name_int_int_R_rhino_ast_AstNode 110
typedef jobject (*func_rhino_Parser_name_int_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode 111
typedef jobject (*func_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode 112
typedef jobject (*func_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop 113
typedef jobject (*func_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode 114
typedef jobject (*func_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode 115
typedef jobject (*func_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop 116
typedef jobject (*func_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral 117
typedef jobject (*func_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode 118
typedef jobject (*func_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty 119
typedef jobject (*func_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty 120
typedef jobject (*func_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_rhino_Parser_createNameNode_R_rhino_ast_Name 121
typedef jobject (*func_rhino_Parser_createNameNode_R_rhino_ast_Name)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name 122
typedef jobject (*func_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral 123
typedef jobject (*func_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_checkActivationName_java_lang_String_int 124
typedef void (*func_rhino_Parser_checkActivationName_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_Parser_setRequiresActivation 125
typedef void (*func_rhino_Parser_setRequiresActivation)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode 126
typedef void (*func_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_setIsGenerator 127
typedef void (*func_rhino_Parser_setIsGenerator)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression 128
typedef void (*func_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode 129
typedef jobject (*func_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int 130
typedef jint (*func_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_saveNameTokenData_int_java_lang_String_int 131
typedef void (*func_rhino_Parser_saveNameTokenData_int_java_lang_String_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_rhino_Parser_lineBeginningFor_int_R_int 132
typedef jint (*func_rhino_Parser_lineBeginningFor_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Parser_warnMissingSemi_int_int 133
typedef void (*func_rhino_Parser_warnMissingSemi_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Parser_warnTrailingComma_int_java_util_List_int 134
typedef void (*func_rhino_Parser_warnTrailingComma_int_java_util_List_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node 135
typedef jobject (*func_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node 136
typedef jobject (*func_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean 137
typedef jbool (*func_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean 138
typedef jbool (*func_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_Parser_createName_java_lang_String_R_rhino_Node 139
typedef jobject (*func_rhino_Parser_createName_java_lang_String_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node 140
typedef jobject (*func_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_Parser_createNumber_double_R_rhino_Node 141
typedef jobject (*func_rhino_Parser_createNumber_double_R_rhino_Node)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope 142
typedef jobject (*func_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node 143
typedef jobject (*func_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Parser_checkMutableReference_rhino_Node 144
typedef void (*func_rhino_Parser_checkMutableReference_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode 145
typedef jobject (*func_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_markDestructuring_rhino_ast_AstNode 146
typedef void (*func_rhino_Parser_markDestructuring_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser_codeBug_R_java_lang_RuntimeException 147
typedef jobject (*func_rhino_Parser_codeBug_R_java_lang_RuntimeException)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser_setDefaultUseStrictDirective_boolean 148
typedef void (*func_rhino_Parser_setDefaultUseStrictDirective_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_Parser_inUseStrictDirective_R_boolean 149
typedef jbool (*func_rhino_Parser_inUseStrictDirective_R_boolean)(jcontext ctx, jobject self);

void mark_rhino_Parser(jobject object, jint mark, jint depth);
void clinit_rhino_Parser(jcontext ctx);
void init_rhino_Parser(jcontext ctx, jobject self);
void init_rhino_Parser_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0);
void init_rhino_Parser_rhino_CompilerEnvirons_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_rhino_Parser_addWarning_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_addWarning_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_rhino_Parser_addError_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_addError_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_rhino_Parser_addError_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_addError_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_rhino_Parser_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
void M_rhino_Parser_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
void M_rhino_Parser_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
jobject M_rhino_Parser_lookupMessage_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_reportError_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_reportError_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_reportError_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_rhino_Parser_reportError_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jint M_rhino_Parser_getNodeEnd_rhino_ast_AstNode_R_int(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_recordComment_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_Parser_getAndResetJsDoc_R_rhino_ast_Comment(jcontext ctx, jobject self);
jint M_rhino_Parser_getNumberOfEols_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_Parser_peekToken_R_int(jcontext ctx, jobject self);
jint M_rhino_Parser_peekFlaggedToken_R_int(jcontext ctx, jobject self);
void M_rhino_Parser_consumeToken(jcontext ctx, jobject self);
jint M_rhino_Parser_nextToken_R_int(jcontext ctx, jobject self);
jbool M_rhino_Parser_matchToken_int_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jint M_rhino_Parser_peekTokenOrEOL_R_int(jcontext ctx, jobject self);
jbool M_rhino_Parser_mustMatchToken_int_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
jbool M_rhino_Parser_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jbool param4);
jbool M_rhino_Parser_eof_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_Parser_insideFunction_R_boolean(jcontext ctx, jobject self);
void M_rhino_Parser_pushScope_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_popScope(jcontext ctx, jobject self);
void M_rhino_Parser_enterLoop_rhino_ast_Loop(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_exitLoop(jcontext ctx, jobject self);
void M_rhino_Parser_enterSwitch_rhino_ast_SwitchStatement(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_exitSwitch(jcontext ctx, jobject self);
jobject M_rhino_Parser_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_Parser_parse_R_rhino_ast_AstRoot(jcontext ctx, jobject self);
jobject M_rhino_Parser_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_Parser_getDirective_rhino_ast_AstNode_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_parseFunctionParams_rhino_ast_FunctionNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_function_int_R_rhino_ast_FunctionNode(jcontext ctx, jobject self, jint param0);
jobject M_rhino_Parser_function_int_boolean_R_rhino_ast_FunctionNode(jcontext ctx, jobject self, jint param0, jbool param1);
jobject M_rhino_Parser_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_Parser_statements_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_statements_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_condition_R_rhino_Parser$ConditionData(jcontext ctx, jobject self);
jobject M_rhino_Parser_statement_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_statementHelper_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_Parser_autoInsertSemicolon_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_ifStatement_R_rhino_ast_IfStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_switchStatement_R_rhino_ast_SwitchStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_whileLoop_R_rhino_ast_WhileLoop(jcontext ctx, jobject self);
jobject M_rhino_Parser_doLoop_R_rhino_ast_DoLoop(jcontext ctx, jobject self);
jint M_rhino_Parser_peekUntilNonComment_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_Parser_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_forLoop_R_rhino_ast_Loop(jcontext ctx, jobject self);
jobject M_rhino_Parser_forLoopInit_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0);
jobject M_rhino_Parser_tryStatement_R_rhino_ast_TryStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_throwStatement_R_rhino_ast_ThrowStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_matchJumpLabelName_R_rhino_ast_LabeledStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_breakStatement_R_rhino_ast_BreakStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_continueStatement_R_rhino_ast_ContinueStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_withStatement_R_rhino_ast_WithStatement(jcontext ctx, jobject self);
jobject M_rhino_Parser_letStatement_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jbool SM_rhino_Parser_nowAllSet_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2);
jobject M_rhino_Parser_returnOrYield_int_boolean_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jbool param1);
jobject M_rhino_Parser_block_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_Parser_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Parser_nameOrLabel_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_variables_int_int_boolean_R_rhino_ast_VariableDeclaration(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
jobject M_rhino_Parser_let_boolean_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jbool param0, jint param1);
void M_rhino_Parser_defineSymbol_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_Parser_defineSymbol_int_java_lang_String_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
jobject M_rhino_Parser_expr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_assignExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_condExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_orExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_andExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_bitOrExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_bitXorExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_bitAndExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_eqExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_relExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_shiftExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_addExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_mulExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_unaryExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_argumentList_R_java_util_List(jcontext ctx, jobject self);
jobject M_rhino_Parser_memberExpr_boolean_R_rhino_ast_AstNode(jcontext ctx, jobject self, jbool param0);
jobject M_rhino_Parser_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jbool param0, jobject param1);
jobject M_rhino_Parser_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_Parser_propertyName_int_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_Parser_destructuringPrimaryExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_primaryExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_parenExpr_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_name_int_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_Parser_arrayLiteral_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Parser_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop(jcontext ctx, jobject self);
jobject M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Parser_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
jobject M_rhino_Parser_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop(jcontext ctx, jobject self);
jobject M_rhino_Parser_objectLiteral_R_rhino_ast_ObjectLiteral(jcontext ctx, jobject self);
jobject M_rhino_Parser_objliteralProperty_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_Parser_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_Parser_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
jobject M_rhino_Parser_createNameNode_R_rhino_ast_Name(jcontext ctx, jobject self);
jobject M_rhino_Parser_createNameNode_boolean_int_R_rhino_ast_Name(jcontext ctx, jobject self, jbool param0, jint param1);
jobject M_rhino_Parser_createStringLiteral_R_rhino_ast_StringLiteral(jcontext ctx, jobject self);
void M_rhino_Parser_checkActivationName_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_Parser_setRequiresActivation(jcontext ctx, jobject self);
void M_rhino_Parser_checkCallRequiresActivation_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_setIsGenerator(jcontext ctx, jobject self);
void M_rhino_Parser_checkBadIncDec_rhino_ast_UnaryExpression(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_makeErrorNode_R_rhino_ast_ErrorNode(jcontext ctx, jobject self);
jint M_rhino_Parser_nodeEnd_rhino_ast_AstNode_R_int(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_saveNameTokenData_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
jint M_rhino_Parser_lineBeginningFor_int_R_int(jcontext ctx, jobject self, jint param0);
void M_rhino_Parser_warnMissingSemi_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_Parser_warnTrailingComma_int_java_util_List_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
jobject M_rhino_Parser_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jobject M_rhino_Parser_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
jbool M_rhino_Parser_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
jbool M_rhino_Parser_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
jobject M_rhino_Parser_createName_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_createName_int_java_lang_String_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jobject M_rhino_Parser_createNumber_double_R_rhino_Node(jcontext ctx, jobject self, jdouble param0);
jobject M_rhino_Parser_createScopeNode_int_int_R_rhino_ast_Scope(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_Parser_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser_checkMutableReference_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
void M_rhino_Parser_markDestructuring_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Parser_codeBug_R_java_lang_RuntimeException(jcontext ctx, jobject self);
void M_rhino_Parser_setDefaultUseStrictDirective_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_Parser_inUseStrictDirective_R_boolean(jcontext ctx, jobject self);
jobject SM_rhino_Parser_access$200_rhino_Parser_R_java_util_Map(jcontext ctx, jobject param0);
jobject SM_rhino_Parser_access$202_rhino_Parser_java_util_Map_R_java_util_Map(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Parser_access$300_rhino_Parser_R_java_util_List(jcontext ctx, jobject param0);
jobject SM_rhino_Parser_access$302_rhino_Parser_java_util_List_R_java_util_List(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_Parser_access$400_rhino_Parser_R_java_util_List(jcontext ctx, jobject param0);
jobject SM_rhino_Parser_access$402_rhino_Parser_java_util_List_R_java_util_List(jcontext ctx, jobject param0, jobject param1);
jint SM_rhino_Parser_access$500_rhino_Parser_R_int(jcontext ctx, jobject param0);
jint SM_rhino_Parser_access$502_rhino_Parser_int_R_int(jcontext ctx, jobject param0, jint param1);
jbool SM_rhino_Parser_access$600_rhino_Parser_R_boolean(jcontext ctx, jobject param0);
jbool SM_rhino_Parser_access$602_rhino_Parser_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
