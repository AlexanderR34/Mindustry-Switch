#ifndef HEADER_rhino_ast_FunctionNode
#define HEADER_rhino_ast_FunctionNode

#include "Clearwing.h"
#include "rhino/ast/ScriptNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_FunctionNode {
	rhino_ast_ScriptNode parent;
	jref F_functionName;
	jref F_params;
	jref F_body;
	jbool F_isExpressionClosure;
	jref F_functionForm;
	jint F_lp;
	jint F_rp;
	jint F_functionType;
	jbool F_needsActivation;
	jbool F_isGenerator;
	jbool F_isES6Generator;
	jref F_generatorResumePoints;
	jref F_liveLocals;
	jref F_memberExprNode;
} rhino_ast_FunctionNode;

extern Class class_rhino_ast_FunctionNode;

extern jint SF_rhino_ast_FunctionNode_FUNCTION_STATEMENT;
extern jint SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION;
extern jint SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION_STATEMENT;
extern jint SF_rhino_ast_FunctionNode_ARROW_FUNCTION;
extern jobject SF_rhino_ast_FunctionNode_NO_PARAMS;

#define VTABLE_rhino_ast_FunctionNode_hashCode_R_int 0
typedef jint (*func_rhino_ast_FunctionNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_FunctionNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_FunctionNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_FunctionNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_FunctionNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_finalize 5
typedef void (*func_rhino_ast_FunctionNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_notify 6
typedef void (*func_rhino_ast_FunctionNode_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_notifyAll 7
typedef void (*func_rhino_ast_FunctionNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_wait 8
typedef void (*func_rhino_ast_FunctionNode_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_wait_long 9
typedef void (*func_rhino_ast_FunctionNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_FunctionNode_wait_long_int 10
typedef void (*func_rhino_ast_FunctionNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_FunctionNode_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_FunctionNode_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_FunctionNode_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_FunctionNode_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getType_R_int 14
typedef jint (*func_rhino_ast_FunctionNode_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_FunctionNode_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_FunctionNode_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_FunctionNode_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_FunctionNode_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_FunctionNode_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_FunctionNode_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_FunctionNode_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_FunctionNode_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_FunctionNode_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_FunctionNode_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_FunctionNode_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_FunctionNode_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_FunctionNode_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_FunctionNode_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_FunctionNode_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_FunctionNode_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_FunctionNode_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_FunctionNode_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_FunctionNode_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_removeChildren 34
typedef void (*func_rhino_ast_FunctionNode_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_FunctionNode_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_FunctionNode_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_removeProp_int 37
typedef void (*func_rhino_ast_FunctionNode_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_FunctionNode_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_FunctionNode_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_FunctionNode_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_FunctionNode_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_FunctionNode_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_putIntProp_int_int 42
typedef void (*func_rhino_ast_FunctionNode_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_FunctionNode_getLineno_R_int 43
typedef jint (*func_rhino_ast_FunctionNode_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setLineno_int 44
typedef void (*func_rhino_ast_FunctionNode_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_FunctionNode_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setDouble_double 46
typedef void (*func_rhino_ast_FunctionNode_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_FunctionNode_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_FunctionNode_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setString_java_lang_String 48
typedef void (*func_rhino_ast_FunctionNode_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_FunctionNode_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_FunctionNode_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_labelId_R_int 51
typedef jint (*func_rhino_ast_FunctionNode_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_labelId_int 52
typedef void (*func_rhino_ast_FunctionNode_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_FunctionNode_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_FunctionNode_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_FunctionNode_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_FunctionNode_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_FunctionNode_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_FunctionNode_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_FunctionNode_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_FunctionNode_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_endCheck_R_int 61
typedef jint (*func_rhino_ast_FunctionNode_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_FunctionNode_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_resetTargets 63
typedef void (*func_rhino_ast_FunctionNode_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_resetTargets_r 64
typedef void (*func_rhino_ast_FunctionNode_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_FunctionNode_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_FunctionNode_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_FunctionNode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getPosition_R_int 68
typedef jint (*func_rhino_ast_FunctionNode_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setPosition_int 69
typedef void (*func_rhino_ast_FunctionNode_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_FunctionNode_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getLength_R_int 71
typedef jint (*func_rhino_ast_FunctionNode_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setLength_int 72
typedef void (*func_rhino_ast_FunctionNode_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_setBounds_int_int 73
typedef void (*func_rhino_ast_FunctionNode_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_FunctionNode_setRelative_int 74
typedef void (*func_rhino_ast_FunctionNode_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_FunctionNode_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_FunctionNode_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_FunctionNode_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_FunctionNode_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_FunctionNode_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_FunctionNode_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_FunctionNode_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_FunctionNode_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_FunctionNode_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_FunctionNode_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_FunctionNode_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_FunctionNode_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_FunctionNode_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_depth_R_int 89
typedef jint (*func_rhino_ast_FunctionNode_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_FunctionNode_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_FunctionNode_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_FunctionNode_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getJumpStatement_R_rhino_ast_Jump 93
typedef jobject (*func_rhino_ast_FunctionNode_getJumpStatement_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setJumpStatement_rhino_ast_Jump 94
typedef void (*func_rhino_ast_FunctionNode_setJumpStatement_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getDefault_R_rhino_Node 95
typedef jobject (*func_rhino_ast_FunctionNode_getDefault_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setDefault_rhino_Node 96
typedef void (*func_rhino_ast_FunctionNode_setDefault_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getFinally_R_rhino_Node 97
typedef jobject (*func_rhino_ast_FunctionNode_getFinally_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setFinally_rhino_Node 98
typedef void (*func_rhino_ast_FunctionNode_setFinally_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getLoop_R_rhino_ast_Jump 99
typedef jobject (*func_rhino_ast_FunctionNode_getLoop_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setLoop_rhino_ast_Jump 100
typedef void (*func_rhino_ast_FunctionNode_setLoop_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getContinue_R_rhino_Node 101
typedef jobject (*func_rhino_ast_FunctionNode_getContinue_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setContinue_rhino_Node 102
typedef void (*func_rhino_ast_FunctionNode_setContinue_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getParentScope_R_rhino_ast_Scope 103
typedef jobject (*func_rhino_ast_FunctionNode_getParentScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setParentScope_rhino_ast_Scope 104
typedef void (*func_rhino_ast_FunctionNode_setParentScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_clearParentScope 105
typedef void (*func_rhino_ast_FunctionNode_clearParentScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getChildScopes_R_java_util_List 106
typedef jobject (*func_rhino_ast_FunctionNode_getChildScopes_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_addChildScope_rhino_ast_Scope 107
typedef void (*func_rhino_ast_FunctionNode_addChildScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_replaceWith_rhino_ast_Scope 108
typedef void (*func_rhino_ast_FunctionNode_replaceWith_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getTop_R_rhino_ast_ScriptNode 109
typedef jobject (*func_rhino_ast_FunctionNode_getTop_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setTop_rhino_ast_ScriptNode 110
typedef void (*func_rhino_ast_FunctionNode_setTop_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getDefiningScope_java_lang_String_R_rhino_ast_Scope 111
typedef jobject (*func_rhino_ast_FunctionNode_getDefiningScope_java_lang_String_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getSymbol_java_lang_String_R_rhino_ast_Symbol 112
typedef jobject (*func_rhino_ast_FunctionNode_getSymbol_java_lang_String_R_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_putSymbol_rhino_ast_Symbol 113
typedef void (*func_rhino_ast_FunctionNode_putSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getSymbolTable_R_java_util_Map 114
typedef jobject (*func_rhino_ast_FunctionNode_getSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setSymbolTable_java_util_Map 115
typedef void (*func_rhino_ast_FunctionNode_setSymbolTable_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_ensureSymbolTable_R_java_util_Map 116
typedef jobject (*func_rhino_ast_FunctionNode_ensureSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getStatements_R_java_util_List 117
typedef jobject (*func_rhino_ast_FunctionNode_getStatements_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getSourceName_R_java_lang_String 118
typedef jobject (*func_rhino_ast_FunctionNode_getSourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setSourceName_java_lang_String 119
typedef void (*func_rhino_ast_FunctionNode_setSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getEncodedSourceStart_R_int 120
typedef jint (*func_rhino_ast_FunctionNode_getEncodedSourceStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setEncodedSourceStart_int 121
typedef void (*func_rhino_ast_FunctionNode_setEncodedSourceStart_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getEncodedSourceEnd_R_int 122
typedef jint (*func_rhino_ast_FunctionNode_getEncodedSourceEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setEncodedSourceEnd_int 123
typedef void (*func_rhino_ast_FunctionNode_setEncodedSourceEnd_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int 124
typedef void (*func_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_FunctionNode_setEncodedSource_java_lang_String 125
typedef void (*func_rhino_ast_FunctionNode_setEncodedSource_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getEncodedSource_R_java_lang_String 126
typedef jobject (*func_rhino_ast_FunctionNode_getEncodedSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getBaseLineno_R_int 127
typedef jint (*func_rhino_ast_FunctionNode_getBaseLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setBaseLineno_int 128
typedef void (*func_rhino_ast_FunctionNode_setBaseLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getEndLineno_R_int 129
typedef jint (*func_rhino_ast_FunctionNode_getEndLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setEndLineno_int 130
typedef void (*func_rhino_ast_FunctionNode_setEndLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getFunctionCount_R_int 131
typedef jint (*func_rhino_ast_FunctionNode_getFunctionCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getFunctionNode_int_R_rhino_ast_FunctionNode 132
typedef jobject (*func_rhino_ast_FunctionNode_getFunctionNode_int_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getFunctions_R_java_util_List 133
typedef jobject (*func_rhino_ast_FunctionNode_getFunctions_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int 134
typedef jint (*func_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getRegexpCount_R_int 135
typedef jint (*func_rhino_ast_FunctionNode_getRegexpCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getRegexpString_int_R_java_lang_String 136
typedef jobject (*func_rhino_ast_FunctionNode_getRegexpString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getRegexpFlags_int_R_java_lang_String 137
typedef jobject (*func_rhino_ast_FunctionNode_getRegexpFlags_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_addRegExp_rhino_ast_RegExpLiteral 138
typedef void (*func_rhino_ast_FunctionNode_addRegExp_rhino_ast_RegExpLiteral)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getIndexForNameNode_rhino_Node_R_int 139
typedef jint (*func_rhino_ast_FunctionNode_getIndexForNameNode_rhino_Node_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getParamOrVarName_int_R_java_lang_String 140
typedef jobject (*func_rhino_ast_FunctionNode_getParamOrVarName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getParamCount_R_int 141
typedef jint (*func_rhino_ast_FunctionNode_getParamCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getParamAndVarCount_R_int 142
typedef jint (*func_rhino_ast_FunctionNode_getParamAndVarCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getParamAndVarNames_R_Array1_java_lang_String 143
typedef jobject (*func_rhino_ast_FunctionNode_getParamAndVarNames_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getParamAndVarConst_R_Array1_boolean 144
typedef jobject (*func_rhino_ast_FunctionNode_getParamAndVarConst_R_Array1_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_addSymbol_rhino_ast_Symbol 145
typedef void (*func_rhino_ast_FunctionNode_addSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getSymbols_R_java_util_List 146
typedef jobject (*func_rhino_ast_FunctionNode_getSymbols_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setSymbols_java_util_List 147
typedef void (*func_rhino_ast_FunctionNode_setSymbols_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_flattenSymbolTable_boolean 148
typedef void (*func_rhino_ast_FunctionNode_flattenSymbolTable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_FunctionNode_getCompilerData_R_java_lang_Object 149
typedef jobject (*func_rhino_ast_FunctionNode_getCompilerData_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setCompilerData_java_lang_Object 150
typedef void (*func_rhino_ast_FunctionNode_setCompilerData_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getNextTempName_R_java_lang_String 151
typedef jobject (*func_rhino_ast_FunctionNode_getNextTempName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setInStrictMode_boolean 152
typedef void (*func_rhino_ast_FunctionNode_setInStrictMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_FunctionNode_isInStrictMode_R_boolean 153
typedef jbool (*func_rhino_ast_FunctionNode_isInStrictMode_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name 154
typedef jobject (*func_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name 155
typedef void (*func_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getName_R_java_lang_String 156
typedef jobject (*func_rhino_ast_FunctionNode_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getParams_R_java_util_List 157
typedef jobject (*func_rhino_ast_FunctionNode_getParams_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setParams_java_util_List 158
typedef void (*func_rhino_ast_FunctionNode_setParams_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode 159
typedef void (*func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean 160
typedef jbool (*func_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode 161
typedef jobject (*func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode 162
typedef void (*func_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getLp_R_int 163
typedef jint (*func_rhino_ast_FunctionNode_getLp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setLp_int 164
typedef void (*func_rhino_ast_FunctionNode_setLp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_getRp_R_int 165
typedef jint (*func_rhino_ast_FunctionNode_getRp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setRp_int 166
typedef void (*func_rhino_ast_FunctionNode_setRp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_setParens_int_int 167
typedef void (*func_rhino_ast_FunctionNode_setParens_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean 168
typedef jbool (*func_rhino_ast_FunctionNode_isExpressionClosure_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setIsExpressionClosure_boolean 169
typedef void (*func_rhino_ast_FunctionNode_setIsExpressionClosure_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_FunctionNode_requiresActivation_R_boolean 170
typedef jbool (*func_rhino_ast_FunctionNode_requiresActivation_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setRequiresActivation 171
typedef void (*func_rhino_ast_FunctionNode_setRequiresActivation)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_isGenerator_R_boolean 172
typedef jbool (*func_rhino_ast_FunctionNode_isGenerator_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setIsGenerator 173
typedef void (*func_rhino_ast_FunctionNode_setIsGenerator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_isES6Generator_R_boolean 174
typedef jbool (*func_rhino_ast_FunctionNode_isES6Generator_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setIsES6Generator 175
typedef void (*func_rhino_ast_FunctionNode_setIsES6Generator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node 176
typedef void (*func_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List 177
typedef jobject (*func_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map 178
typedef jobject (*func_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int 179
typedef void (*func_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int 180
typedef jint (*func_rhino_ast_FunctionNode_getFunctionType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setFunctionType_int 181
typedef void (*func_rhino_ast_FunctionNode_setFunctionType_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_FunctionNode_isMethod_R_boolean 182
typedef jbool (*func_rhino_ast_FunctionNode_isMethod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_isGetterMethod_R_boolean 183
typedef jbool (*func_rhino_ast_FunctionNode_isGetterMethod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_isSetterMethod_R_boolean 184
typedef jbool (*func_rhino_ast_FunctionNode_isSetterMethod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_isNormalMethod_R_boolean 185
typedef jbool (*func_rhino_ast_FunctionNode_isNormalMethod_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setFunctionIsGetterMethod 186
typedef void (*func_rhino_ast_FunctionNode_setFunctionIsGetterMethod)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setFunctionIsSetterMethod 187
typedef void (*func_rhino_ast_FunctionNode_setFunctionIsSetterMethod)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setFunctionIsNormalMethod 188
typedef void (*func_rhino_ast_FunctionNode_setFunctionIsNormalMethod)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode 189
typedef void (*func_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode 190
typedef jobject (*func_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode)(jcontext ctx, jobject self);

void mark_rhino_ast_FunctionNode(jobject object, jint mark, jint depth);
void clinit_rhino_ast_FunctionNode(jcontext ctx);
void init_rhino_ast_FunctionNode(jcontext ctx, jobject self);
void init_rhino_ast_FunctionNode_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_FunctionNode_int_rhino_ast_Name(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_FunctionNode_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_ast_FunctionNode_getParams_R_java_util_List(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setParams_java_util_List(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_FunctionNode_getLp_R_int(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setLp_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_FunctionNode_getRp_R_int(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setRp_int(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_FunctionNode_setParens_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_rhino_ast_FunctionNode_isExpressionClosure_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setIsExpressionClosure_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_ast_FunctionNode_requiresActivation_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setRequiresActivation(jcontext ctx, jobject self);
jbool M_rhino_ast_FunctionNode_isGenerator_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setIsGenerator(jcontext ctx, jobject self);
jbool M_rhino_ast_FunctionNode_isES6Generator_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setIsES6Generator(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List(jcontext ctx, jobject self);
jobject M_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_FunctionNode_getFunctionType_R_int(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setFunctionType_int(jcontext ctx, jobject self, jint param0);
jbool M_rhino_ast_FunctionNode_isMethod_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_ast_FunctionNode_isGetterMethod_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_ast_FunctionNode_isSetterMethod_R_boolean(jcontext ctx, jobject self);
jbool M_rhino_ast_FunctionNode_isNormalMethod_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setFunctionIsGetterMethod(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setFunctionIsSetterMethod(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setFunctionIsNormalMethod(jcontext ctx, jobject self);
void M_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode(jcontext ctx, jobject self);
jobject M_rhino_ast_FunctionNode_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
