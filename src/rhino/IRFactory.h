#ifndef HEADER_rhino_IRFactory
#define HEADER_rhino_IRFactory

#include "Clearwing.h"
#include "rhino/Parser.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_IRFactory {
	rhino_Parser parent;
	jref F_decompiler;
} rhino_IRFactory;

extern Class class_rhino_IRFactory;

extern jint SF_rhino_IRFactory_LOOP_DO_WHILE;
extern jint SF_rhino_IRFactory_LOOP_WHILE;
extern jint SF_rhino_IRFactory_LOOP_FOR;
extern jint SF_rhino_IRFactory_ALWAYS_TRUE_BOOLEAN;
extern jint SF_rhino_IRFactory_ALWAYS_FALSE_BOOLEAN;

#define VTABLE_rhino_IRFactory_hashCode_R_int 0
typedef jint (*func_rhino_IRFactory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_IRFactory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_IRFactory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_IRFactory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_toString_R_java_lang_String 4
typedef jobject (*func_rhino_IRFactory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_finalize 5
typedef void (*func_rhino_IRFactory_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_notify 6
typedef void (*func_rhino_IRFactory_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_notifyAll 7
typedef void (*func_rhino_IRFactory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_wait 8
typedef void (*func_rhino_IRFactory_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_wait_long 9
typedef void (*func_rhino_IRFactory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_IRFactory_wait_long_int 10
typedef void (*func_rhino_IRFactory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_IRFactory_addStrictWarning_java_lang_String_java_lang_String 11
typedef void (*func_rhino_IRFactory_addStrictWarning_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_addStrictWarning_java_lang_String_java_lang_String_int_int 12
typedef void (*func_rhino_IRFactory_addStrictWarning_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_IRFactory_addWarning_java_lang_String_java_lang_String 13
typedef void (*func_rhino_IRFactory_addWarning_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_addWarning_java_lang_String_int_int 14
typedef void (*func_rhino_IRFactory_addWarning_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_IRFactory_addWarning_java_lang_String_java_lang_String_int_int 15
typedef void (*func_rhino_IRFactory_addWarning_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_IRFactory_addError_java_lang_String 16
typedef void (*func_rhino_IRFactory_addError_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_addError_java_lang_String_int_int 17
typedef void (*func_rhino_IRFactory_addError_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_IRFactory_addError_java_lang_String_java_lang_String 18
typedef void (*func_rhino_IRFactory_addError_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_addError_java_lang_String_int 19
typedef void (*func_rhino_IRFactory_addError_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_addError_java_lang_String_java_lang_String_int_int 20
typedef void (*func_rhino_IRFactory_addError_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_IRFactory_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int 21
typedef void (*func_rhino_IRFactory_addStrictWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
#define VTABLE_rhino_IRFactory_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int 22
typedef void (*func_rhino_IRFactory_addWarning_java_lang_String_java_lang_String_int_int_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
#define VTABLE_rhino_IRFactory_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int 23
typedef void (*func_rhino_IRFactory_addError_java_lang_String_java_lang_String_int_int_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5, jint param6);
#define VTABLE_rhino_IRFactory_lookupMessage_java_lang_String_R_java_lang_String 24
typedef jobject (*func_rhino_IRFactory_lookupMessage_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String 25
typedef jobject (*func_rhino_IRFactory_lookupMessage_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_reportError_java_lang_String 26
typedef void (*func_rhino_IRFactory_reportError_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_reportError_java_lang_String_java_lang_String 27
typedef void (*func_rhino_IRFactory_reportError_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_reportError_java_lang_String_int_int 28
typedef void (*func_rhino_IRFactory_reportError_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_IRFactory_reportError_java_lang_String_java_lang_String_int_int 29
typedef void (*func_rhino_IRFactory_reportError_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_IRFactory_getNodeEnd_rhino_ast_AstNode_R_int 30
typedef jint (*func_rhino_IRFactory_getNodeEnd_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_recordComment_int_java_lang_String 31
typedef void (*func_rhino_IRFactory_recordComment_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_getAndResetJsDoc_R_rhino_ast_Comment 32
typedef jobject (*func_rhino_IRFactory_getAndResetJsDoc_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_getNumberOfEols_java_lang_String_R_int 33
typedef jint (*func_rhino_IRFactory_getNumberOfEols_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_peekToken_R_int 34
typedef jint (*func_rhino_IRFactory_peekToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_peekFlaggedToken_R_int 35
typedef jint (*func_rhino_IRFactory_peekFlaggedToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_consumeToken 36
typedef void (*func_rhino_IRFactory_consumeToken)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_nextToken_R_int 37
typedef jint (*func_rhino_IRFactory_nextToken_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_matchToken_int_boolean_R_boolean 38
typedef jbool (*func_rhino_IRFactory_matchToken_int_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_rhino_IRFactory_peekTokenOrEOL_R_int 39
typedef jint (*func_rhino_IRFactory_peekTokenOrEOL_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_mustMatchToken_int_java_lang_String_boolean_R_boolean 40
typedef jbool (*func_rhino_IRFactory_mustMatchToken_int_java_lang_String_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_IRFactory_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean 41
typedef jbool (*func_rhino_IRFactory_mustMatchToken_int_java_lang_String_int_int_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jbool param4);
#define VTABLE_rhino_IRFactory_eof_R_boolean 42
typedef jbool (*func_rhino_IRFactory_eof_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_insideFunction_R_boolean 43
typedef jbool (*func_rhino_IRFactory_insideFunction_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_pushScope_rhino_ast_Scope 44
typedef void (*func_rhino_IRFactory_pushScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_popScope 45
typedef void (*func_rhino_IRFactory_popScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_enterLoop_rhino_ast_Loop 46
typedef void (*func_rhino_IRFactory_enterLoop_rhino_ast_Loop)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_exitLoop 47
typedef void (*func_rhino_IRFactory_exitLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_enterSwitch_rhino_ast_SwitchStatement 48
typedef void (*func_rhino_IRFactory_enterSwitch_rhino_ast_SwitchStatement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_exitSwitch 49
typedef void (*func_rhino_IRFactory_exitSwitch)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot 50
typedef jobject (*func_rhino_IRFactory_parse_java_lang_String_java_lang_String_int_R_rhino_ast_AstRoot)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_IRFactory_parse_R_rhino_ast_AstRoot 51
typedef jobject (*func_rhino_IRFactory_parse_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode 52
typedef jobject (*func_rhino_IRFactory_parseFunctionBody_int_rhino_ast_FunctionNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_getDirective_rhino_ast_AstNode_R_java_lang_String 53
typedef jobject (*func_rhino_IRFactory_getDirective_rhino_ast_AstNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_parseFunctionParams_rhino_ast_FunctionNode 54
typedef void (*func_rhino_IRFactory_parseFunctionParams_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_function_int_R_rhino_ast_FunctionNode 55
typedef jobject (*func_rhino_IRFactory_function_int_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IRFactory_function_int_boolean_R_rhino_ast_FunctionNode 56
typedef jobject (*func_rhino_IRFactory_function_int_boolean_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_rhino_IRFactory_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode 57
typedef jobject (*func_rhino_IRFactory_arrowFunction_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set 58
typedef void (*func_rhino_IRFactory_arrowFunctionParams_rhino_ast_FunctionNode_rhino_ast_AstNode_java_util_Map_java_util_Set)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_IRFactory_statements_rhino_ast_AstNode_R_rhino_ast_AstNode 59
typedef jobject (*func_rhino_IRFactory_statements_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_statements_R_rhino_ast_AstNode 60
typedef jobject (*func_rhino_IRFactory_statements_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_condition_R_rhino_Parser$ConditionData 61
typedef jobject (*func_rhino_IRFactory_condition_R_rhino_Parser$ConditionData)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_statement_R_rhino_ast_AstNode 62
typedef jobject (*func_rhino_IRFactory_statement_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_statementHelper_R_rhino_ast_AstNode 63
typedef jobject (*func_rhino_IRFactory_statementHelper_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_autoInsertSemicolon_rhino_ast_AstNode 64
typedef void (*func_rhino_IRFactory_autoInsertSemicolon_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_ifStatement_R_rhino_ast_IfStatement 65
typedef jobject (*func_rhino_IRFactory_ifStatement_R_rhino_ast_IfStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_switchStatement_R_rhino_ast_SwitchStatement 66
typedef jobject (*func_rhino_IRFactory_switchStatement_R_rhino_ast_SwitchStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_whileLoop_R_rhino_ast_WhileLoop 67
typedef jobject (*func_rhino_IRFactory_whileLoop_R_rhino_ast_WhileLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_doLoop_R_rhino_ast_DoLoop 68
typedef jobject (*func_rhino_IRFactory_doLoop_R_rhino_ast_DoLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_peekUntilNonComment_int_R_int 69
typedef jint (*func_rhino_IRFactory_peekUntilNonComment_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IRFactory_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode 70
typedef jobject (*func_rhino_IRFactory_getNextStatementAfterInlineComments_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_forLoop_R_rhino_ast_Loop 71
typedef jobject (*func_rhino_IRFactory_forLoop_R_rhino_ast_Loop)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_forLoopInit_int_R_rhino_ast_AstNode 72
typedef jobject (*func_rhino_IRFactory_forLoopInit_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IRFactory_tryStatement_R_rhino_ast_TryStatement 73
typedef jobject (*func_rhino_IRFactory_tryStatement_R_rhino_ast_TryStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_throwStatement_R_rhino_ast_ThrowStatement 74
typedef jobject (*func_rhino_IRFactory_throwStatement_R_rhino_ast_ThrowStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_matchJumpLabelName_R_rhino_ast_LabeledStatement 75
typedef jobject (*func_rhino_IRFactory_matchJumpLabelName_R_rhino_ast_LabeledStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_breakStatement_R_rhino_ast_BreakStatement 76
typedef jobject (*func_rhino_IRFactory_breakStatement_R_rhino_ast_BreakStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_continueStatement_R_rhino_ast_ContinueStatement 77
typedef jobject (*func_rhino_IRFactory_continueStatement_R_rhino_ast_ContinueStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_withStatement_R_rhino_ast_WithStatement 78
typedef jobject (*func_rhino_IRFactory_withStatement_R_rhino_ast_WithStatement)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_letStatement_R_rhino_ast_AstNode 79
typedef jobject (*func_rhino_IRFactory_letStatement_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_returnOrYield_int_boolean_R_rhino_ast_AstNode 80
typedef jobject (*func_rhino_IRFactory_returnOrYield_int_boolean_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_rhino_IRFactory_block_R_rhino_ast_AstNode 81
typedef jobject (*func_rhino_IRFactory_block_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement 82
typedef void (*func_rhino_IRFactory_recordLabel_rhino_ast_Label_rhino_ast_LabeledStatement)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_nameOrLabel_R_rhino_ast_AstNode 83
typedef jobject (*func_rhino_IRFactory_nameOrLabel_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_variables_int_int_boolean_R_rhino_ast_VariableDeclaration 84
typedef jobject (*func_rhino_IRFactory_variables_int_int_boolean_R_rhino_ast_VariableDeclaration)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_rhino_IRFactory_let_boolean_int_R_rhino_ast_AstNode 85
typedef jobject (*func_rhino_IRFactory_let_boolean_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String 86
typedef void (*func_rhino_IRFactory_defineSymbol_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean 87
typedef void (*func_rhino_IRFactory_defineSymbol_int_java_lang_String_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2);
#define VTABLE_rhino_IRFactory_expr_R_rhino_ast_AstNode 88
typedef jobject (*func_rhino_IRFactory_expr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_assignExpr_R_rhino_ast_AstNode 89
typedef jobject (*func_rhino_IRFactory_assignExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_condExpr_R_rhino_ast_AstNode 90
typedef jobject (*func_rhino_IRFactory_condExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_orExpr_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_IRFactory_orExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_andExpr_R_rhino_ast_AstNode 92
typedef jobject (*func_rhino_IRFactory_andExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_bitOrExpr_R_rhino_ast_AstNode 93
typedef jobject (*func_rhino_IRFactory_bitOrExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_bitXorExpr_R_rhino_ast_AstNode 94
typedef jobject (*func_rhino_IRFactory_bitXorExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_bitAndExpr_R_rhino_ast_AstNode 95
typedef jobject (*func_rhino_IRFactory_bitAndExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_eqExpr_R_rhino_ast_AstNode 96
typedef jobject (*func_rhino_IRFactory_eqExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_relExpr_R_rhino_ast_AstNode 97
typedef jobject (*func_rhino_IRFactory_relExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_shiftExpr_R_rhino_ast_AstNode 98
typedef jobject (*func_rhino_IRFactory_shiftExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_addExpr_R_rhino_ast_AstNode 99
typedef jobject (*func_rhino_IRFactory_addExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_mulExpr_R_rhino_ast_AstNode 100
typedef jobject (*func_rhino_IRFactory_mulExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_unaryExpr_R_rhino_ast_AstNode 101
typedef jobject (*func_rhino_IRFactory_unaryExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_argumentList_R_java_util_List 102
typedef jobject (*func_rhino_IRFactory_argumentList_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_memberExpr_boolean_R_rhino_ast_AstNode 103
typedef jobject (*func_rhino_IRFactory_memberExpr_boolean_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_IRFactory_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode 104
typedef jobject (*func_rhino_IRFactory_memberExprTail_boolean_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_rhino_IRFactory_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode 105
typedef jobject (*func_rhino_IRFactory_propertyAccess_int_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_propertyName_int_int_R_rhino_ast_AstNode 106
typedef jobject (*func_rhino_IRFactory_propertyName_int_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_IRFactory_destructuringPrimaryExpr_R_rhino_ast_AstNode 107
typedef jobject (*func_rhino_IRFactory_destructuringPrimaryExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_primaryExpr_R_rhino_ast_AstNode 108
typedef jobject (*func_rhino_IRFactory_primaryExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_parenExpr_R_rhino_ast_AstNode 109
typedef jobject (*func_rhino_IRFactory_parenExpr_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_name_int_int_R_rhino_ast_AstNode 110
typedef jobject (*func_rhino_IRFactory_name_int_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_IRFactory_arrayLiteral_R_rhino_ast_AstNode 111
typedef jobject (*func_rhino_IRFactory_arrayLiteral_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode 112
typedef jobject (*func_rhino_IRFactory_arrayComprehension_rhino_ast_AstNode_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop 113
typedef jobject (*func_rhino_IRFactory_arrayComprehensionLoop_R_rhino_ast_ArrayComprehensionLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode 114
typedef jobject (*func_rhino_IRFactory_generatorExpression_rhino_ast_AstNode_int_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode 115
typedef jobject (*func_rhino_IRFactory_generatorExpression_rhino_ast_AstNode_int_boolean_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_rhino_IRFactory_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop 116
typedef jobject (*func_rhino_IRFactory_generatorExpressionLoop_R_rhino_ast_GeneratorExpressionLoop)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_objectLiteral_R_rhino_ast_ObjectLiteral 117
typedef jobject (*func_rhino_IRFactory_objectLiteral_R_rhino_ast_ObjectLiteral)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_objliteralProperty_R_rhino_ast_AstNode 118
typedef jobject (*func_rhino_IRFactory_objliteralProperty_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty 119
typedef jobject (*func_rhino_IRFactory_plainProperty_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty 120
typedef jobject (*func_rhino_IRFactory_methodDefinition_int_rhino_ast_AstNode_int_R_rhino_ast_ObjectProperty)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_rhino_IRFactory_createNameNode_R_rhino_ast_Name 121
typedef jobject (*func_rhino_IRFactory_createNameNode_R_rhino_ast_Name)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_createNameNode_boolean_int_R_rhino_ast_Name 122
typedef jobject (*func_rhino_IRFactory_createNameNode_boolean_int_R_rhino_ast_Name)(jcontext ctx, jobject self, jbool param0, jint param1);
#define VTABLE_rhino_IRFactory_createStringLiteral_R_rhino_ast_StringLiteral 123
typedef jobject (*func_rhino_IRFactory_createStringLiteral_R_rhino_ast_StringLiteral)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_checkActivationName_java_lang_String_int 124
typedef void (*func_rhino_IRFactory_checkActivationName_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_setRequiresActivation 125
typedef void (*func_rhino_IRFactory_setRequiresActivation)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_checkCallRequiresActivation_rhino_ast_AstNode 126
typedef void (*func_rhino_IRFactory_checkCallRequiresActivation_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_setIsGenerator 127
typedef void (*func_rhino_IRFactory_setIsGenerator)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_checkBadIncDec_rhino_ast_UnaryExpression 128
typedef void (*func_rhino_IRFactory_checkBadIncDec_rhino_ast_UnaryExpression)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_makeErrorNode_R_rhino_ast_ErrorNode 129
typedef jobject (*func_rhino_IRFactory_makeErrorNode_R_rhino_ast_ErrorNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_nodeEnd_rhino_ast_AstNode_R_int 130
typedef jint (*func_rhino_IRFactory_nodeEnd_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_saveNameTokenData_int_java_lang_String_int 131
typedef void (*func_rhino_IRFactory_saveNameTokenData_int_java_lang_String_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_rhino_IRFactory_lineBeginningFor_int_R_int 132
typedef jint (*func_rhino_IRFactory_lineBeginningFor_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_IRFactory_warnMissingSemi_int_int 133
typedef void (*func_rhino_IRFactory_warnMissingSemi_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_IRFactory_warnTrailingComma_int_java_util_List_int 134
typedef void (*func_rhino_IRFactory_warnTrailingComma_int_java_util_List_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node 135
typedef jobject (*func_rhino_IRFactory_createDestructuringAssignment_int_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_IRFactory_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node 136
typedef jobject (*func_rhino_IRFactory_destructuringAssignmentHelper_int_rhino_Node_rhino_Node_java_lang_String_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_IRFactory_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean 137
typedef jbool (*func_rhino_IRFactory_destructuringArray_rhino_ast_ArrayLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_IRFactory_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean 138
typedef jbool (*func_rhino_IRFactory_destructuringObject_rhino_ast_ObjectLiteral_int_java_lang_String_rhino_Node_java_util_List_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_IRFactory_createName_java_lang_String_R_rhino_Node 139
typedef jobject (*func_rhino_IRFactory_createName_java_lang_String_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_createName_int_java_lang_String_rhino_Node_R_rhino_Node 140
typedef jobject (*func_rhino_IRFactory_createName_int_java_lang_String_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_IRFactory_createNumber_double_R_rhino_Node 141
typedef jobject (*func_rhino_IRFactory_createNumber_double_R_rhino_Node)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_IRFactory_createScopeNode_int_int_R_rhino_ast_Scope 142
typedef jobject (*func_rhino_IRFactory_createScopeNode_int_int_R_rhino_ast_Scope)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_IRFactory_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node 143
typedef jobject (*func_rhino_IRFactory_simpleAssignment_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_checkMutableReference_rhino_Node 144
typedef void (*func_rhino_IRFactory_checkMutableReference_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode 145
typedef jobject (*func_rhino_IRFactory_removeParens_rhino_ast_AstNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_markDestructuring_rhino_ast_AstNode 146
typedef void (*func_rhino_IRFactory_markDestructuring_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_codeBug_R_java_lang_RuntimeException 147
typedef jobject (*func_rhino_IRFactory_codeBug_R_java_lang_RuntimeException)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_setDefaultUseStrictDirective_boolean 148
typedef void (*func_rhino_IRFactory_setDefaultUseStrictDirective_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_IRFactory_inUseStrictDirective_R_boolean 149
typedef jbool (*func_rhino_IRFactory_inUseStrictDirective_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode 150
typedef jobject (*func_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node 151
typedef jobject (*func_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node 152
typedef jobject (*func_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node 153
typedef jobject (*func_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node 154
typedef jobject (*func_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node 155
typedef jobject (*func_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node 156
typedef jobject (*func_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node 157
typedef jobject (*func_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node 158
typedef jobject (*func_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node 159
typedef jobject (*func_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node 160
typedef jobject (*func_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node 161
typedef jobject (*func_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node 162
typedef jobject (*func_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node 163
typedef jobject (*func_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node 164
typedef jobject (*func_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node 165
typedef jobject (*func_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node 166
typedef jobject (*func_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node 167
typedef jobject (*func_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node 168
typedef jobject (*func_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node 169
typedef jobject (*func_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node 170
typedef jobject (*func_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node 171
typedef jobject (*func_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node 172
typedef jobject (*func_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node 173
typedef jobject (*func_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node 174
typedef jobject (*func_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node 175
typedef jobject (*func_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node 176
typedef jobject (*func_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node 177
typedef jobject (*func_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object 178
typedef jobject (*func_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node 179
typedef jobject (*func_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node 180
typedef jobject (*func_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node 181
typedef jobject (*func_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node 182
typedef jobject (*func_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node 183
typedef jobject (*func_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node 184
typedef jobject (*func_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node 185
typedef jobject (*func_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node 186
typedef jobject (*func_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node 187
typedef jobject (*func_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node 188
typedef jobject (*func_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node 189
typedef jobject (*func_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node 190
typedef jobject (*func_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node 191
typedef jobject (*func_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node 192
typedef jobject (*func_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node 193
typedef jobject (*func_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node 194
typedef void (*func_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_IRFactory_closeSwitch_rhino_Node 195
typedef void (*func_rhino_IRFactory_closeSwitch_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node 196
typedef jobject (*func_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_createString_java_lang_String_R_rhino_Node 197
typedef jobject (*func_rhino_IRFactory_createString_java_lang_String_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node 198
typedef jobject (*func_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node 199
typedef jobject (*func_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope 200
typedef jobject (*func_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node 201
typedef jobject (*func_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node 202
typedef jobject (*func_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5);
#define VTABLE_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node 203
typedef jobject (*func_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6);
#define VTABLE_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node 204
typedef jobject (*func_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node 205
typedef jobject (*func_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node 206
typedef jobject (*func_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node 207
typedef jobject (*func_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node 208
typedef jobject (*func_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node 209
typedef jobject (*func_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node 210
typedef jobject (*func_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jbool param1, jobject param2);
#define VTABLE_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node 211
typedef jobject (*func_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node 212
typedef jobject (*func_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node 213
typedef jobject (*func_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
#define VTABLE_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node 214
typedef jobject (*func_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node 215
typedef jobject (*func_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node 216
typedef jobject (*func_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump 217
typedef jobject (*func_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node 218
typedef jobject (*func_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean 219
typedef jbool (*func_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node 220
typedef jobject (*func_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_decompile_rhino_ast_AstNode 221
typedef void (*func_rhino_IRFactory_decompile_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral 222
typedef void (*func_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral 223
typedef void (*func_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet 224
typedef void (*func_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet 225
typedef void (*func_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_IRFactory(jobject object, jint mark, jint depth);
void clinit_rhino_IRFactory(jcontext ctx);
void init_rhino_IRFactory(jcontext ctx, jobject self);
void init_rhino_IRFactory_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0);
void init_rhino_IRFactory_rhino_CompilerEnvirons_rhino_ErrorReporter(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_IRFactory_transformTree_rhino_ast_AstRoot_R_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transform_rhino_ast_AstNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformArrayComp_rhino_ast_ArrayComprehension_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_arrayCompTransformHelper_rhino_ast_ArrayComprehension_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_IRFactory_transformArrayLiteral_rhino_ast_ArrayLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformAssignment_rhino_ast_Assignment_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformBlock_rhino_ast_AstNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformBreak_rhino_ast_BreakStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformCondExpr_rhino_ast_ConditionalExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformContinue_rhino_ast_ContinueStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformDoLoop_rhino_ast_DoLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformElementGet_rhino_ast_ElementGet_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformExprStmt_rhino_ast_ExpressionStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformForInLoop_rhino_ast_ForInLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformForLoop_rhino_ast_ForLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformFunction_rhino_ast_FunctionNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformFunctionCall_rhino_ast_FunctionCall_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformGenExpr_rhino_ast_GeneratorExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_genExprTransformHelper_rhino_ast_GeneratorExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformIf_rhino_ast_IfStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformInfix_rhino_ast_InfixExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformLabeledStatement_rhino_ast_LabeledStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformLetNode_rhino_ast_LetNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformLiteral_rhino_ast_AstNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformName_rhino_ast_Name_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformNewExpr_rhino_ast_NewExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformNumber_rhino_ast_NumberLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformObjectLiteral_rhino_ast_ObjectLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_getPropKey_rhino_Node_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformParenExpr_rhino_ast_ParenthesizedExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformPropertyGet_rhino_ast_PropertyGet_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformRegExp_rhino_ast_RegExpLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformReturn_rhino_ast_ReturnStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformScript_rhino_ast_ScriptNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformString_rhino_ast_StringLiteral_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformSwitch_rhino_ast_SwitchStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformThrow_rhino_ast_ThrowStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformTry_rhino_ast_TryStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformUnary_rhino_ast_UnaryExpression_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformVariables_rhino_ast_VariableDeclaration_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformVariableInitializers_rhino_ast_VariableDeclaration_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformWhileLoop_rhino_ast_WhileLoop_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformWith_rhino_ast_WithStatement_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_transformYield_rhino_ast_Yield_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
void M_rhino_IRFactory_addSwitchCase_rhino_Node_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_IRFactory_closeSwitch_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_createExprStatementNoReturn_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_IRFactory_createString_java_lang_String_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_createCatch_java_lang_String_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_initFunction_rhino_ast_FunctionNode_int_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_createLoopNode_rhino_Node_int_R_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_IRFactory_createFor_rhino_ast_Scope_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject M_rhino_IRFactory_createLoop_rhino_ast_Jump_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5);
jobject M_rhino_IRFactory_createForIn_int_rhino_Node_rhino_Node_rhino_Node_rhino_Node_boolean_boolean_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6);
jobject M_rhino_IRFactory_createTryCatchFinally_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_createWith_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_IRFactory_createIf_rhino_Node_rhino_Node_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_createCondExpr_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_IRFactory_createUnary_int_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_IRFactory_createCallOrNew_int_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_IRFactory_createIncDec_int_boolean_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jbool param1, jobject param2);
jobject M_rhino_IRFactory_createPropertyGet_rhino_Node_java_lang_String_java_lang_String_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_createElementGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_createMemberRefGet_rhino_Node_java_lang_String_rhino_Node_int_R_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3);
jobject M_rhino_IRFactory_createBinary_int_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jobject M_rhino_IRFactory_createAssignment_int_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jobject M_rhino_IRFactory_createUseLocal_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_makeJump_int_rhino_Node_R_rhino_ast_Jump(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_IRFactory_makeReference_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
jint SM_rhino_IRFactory_isAlwaysDefinedBoolean_rhino_Node_R_int(jcontext ctx, jobject param0);
jbool M_rhino_IRFactory_isDestructuring_rhino_Node_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_IRFactory_decompileFunctionHeader_rhino_ast_FunctionNode_R_rhino_Node(jcontext ctx, jobject self, jobject param0);
void M_rhino_IRFactory_decompile_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
void M_rhino_IRFactory_decompileArrayLiteral_rhino_ast_ArrayLiteral(jcontext ctx, jobject self, jobject param0);
void M_rhino_IRFactory_decompileObjectLiteral_rhino_ast_ObjectLiteral(jcontext ctx, jobject self, jobject param0);
void M_rhino_IRFactory_decompilePropertyGet_rhino_ast_PropertyGet(jcontext ctx, jobject self, jobject param0);
void M_rhino_IRFactory_decompileElementGet_rhino_ast_ElementGet(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
