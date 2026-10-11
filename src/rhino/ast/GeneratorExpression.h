#ifndef HEADER_rhino_ast_GeneratorExpression
#define HEADER_rhino_ast_GeneratorExpression

#include "Clearwing.h"
#include "rhino/ast/Scope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_GeneratorExpression {
	rhino_ast_Scope parent;
	jref F_result;
	jref F_loops;
	jref F_filter;
	jint F_ifPosition;
	jint F_lp;
	jint F_rp;
} rhino_ast_GeneratorExpression;

extern Class class_rhino_ast_GeneratorExpression;


#define VTABLE_rhino_ast_GeneratorExpression_hashCode_R_int 0
typedef jint (*func_rhino_ast_GeneratorExpression_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_GeneratorExpression_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_GeneratorExpression_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_GeneratorExpression_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_GeneratorExpression_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_finalize 5
typedef void (*func_rhino_ast_GeneratorExpression_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_notify 6
typedef void (*func_rhino_ast_GeneratorExpression_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_notifyAll 7
typedef void (*func_rhino_ast_GeneratorExpression_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_wait 8
typedef void (*func_rhino_ast_GeneratorExpression_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_wait_long 9
typedef void (*func_rhino_ast_GeneratorExpression_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_GeneratorExpression_wait_long_int 10
typedef void (*func_rhino_ast_GeneratorExpression_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_GeneratorExpression_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_GeneratorExpression_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_GeneratorExpression_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_GeneratorExpression_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getType_R_int 14
typedef jint (*func_rhino_ast_GeneratorExpression_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_GeneratorExpression_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_GeneratorExpression_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_GeneratorExpression_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_GeneratorExpression_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_GeneratorExpression_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_GeneratorExpression_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_GeneratorExpression_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_GeneratorExpression_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_GeneratorExpression_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_GeneratorExpression_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_GeneratorExpression_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_GeneratorExpression_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_GeneratorExpression_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_GeneratorExpression_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_GeneratorExpression_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_GeneratorExpression_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_GeneratorExpression_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_GeneratorExpression_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_GeneratorExpression_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_removeChildren 34
typedef void (*func_rhino_ast_GeneratorExpression_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_GeneratorExpression_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_GeneratorExpression_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_removeProp_int 37
typedef void (*func_rhino_ast_GeneratorExpression_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_GeneratorExpression_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_GeneratorExpression_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_GeneratorExpression_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_GeneratorExpression_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_GeneratorExpression_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_putIntProp_int_int 42
typedef void (*func_rhino_ast_GeneratorExpression_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_GeneratorExpression_getLineno_R_int 43
typedef jint (*func_rhino_ast_GeneratorExpression_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setLineno_int 44
typedef void (*func_rhino_ast_GeneratorExpression_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_GeneratorExpression_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setDouble_double 46
typedef void (*func_rhino_ast_GeneratorExpression_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_GeneratorExpression_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_GeneratorExpression_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setString_java_lang_String 48
typedef void (*func_rhino_ast_GeneratorExpression_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_GeneratorExpression_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_GeneratorExpression_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_labelId_R_int 51
typedef jint (*func_rhino_ast_GeneratorExpression_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_labelId_int 52
typedef void (*func_rhino_ast_GeneratorExpression_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_GeneratorExpression_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_GeneratorExpression_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_endCheck_R_int 61
typedef jint (*func_rhino_ast_GeneratorExpression_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_GeneratorExpression_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_resetTargets 63
typedef void (*func_rhino_ast_GeneratorExpression_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_resetTargets_r 64
typedef void (*func_rhino_ast_GeneratorExpression_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_GeneratorExpression_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_GeneratorExpression_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_GeneratorExpression_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getPosition_R_int 68
typedef jint (*func_rhino_ast_GeneratorExpression_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setPosition_int 69
typedef void (*func_rhino_ast_GeneratorExpression_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_GeneratorExpression_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getLength_R_int 71
typedef jint (*func_rhino_ast_GeneratorExpression_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setLength_int 72
typedef void (*func_rhino_ast_GeneratorExpression_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_setBounds_int_int 73
typedef void (*func_rhino_ast_GeneratorExpression_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_GeneratorExpression_setRelative_int 74
typedef void (*func_rhino_ast_GeneratorExpression_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_GeneratorExpression_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_GeneratorExpression_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_GeneratorExpression_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_GeneratorExpression_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_GeneratorExpression_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_GeneratorExpression_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_GeneratorExpression_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_GeneratorExpression_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_GeneratorExpression_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_GeneratorExpression_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_GeneratorExpression_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_GeneratorExpression_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_GeneratorExpression_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_GeneratorExpression_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_GeneratorExpression_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_depth_R_int 89
typedef jint (*func_rhino_ast_GeneratorExpression_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_GeneratorExpression_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_GeneratorExpression_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_GeneratorExpression_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getJumpStatement_R_rhino_ast_Jump 93
typedef jobject (*func_rhino_ast_GeneratorExpression_getJumpStatement_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setJumpStatement_rhino_ast_Jump 94
typedef void (*func_rhino_ast_GeneratorExpression_setJumpStatement_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getDefault_R_rhino_Node 95
typedef jobject (*func_rhino_ast_GeneratorExpression_getDefault_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setDefault_rhino_Node 96
typedef void (*func_rhino_ast_GeneratorExpression_setDefault_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getFinally_R_rhino_Node 97
typedef jobject (*func_rhino_ast_GeneratorExpression_getFinally_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setFinally_rhino_Node 98
typedef void (*func_rhino_ast_GeneratorExpression_setFinally_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getLoop_R_rhino_ast_Jump 99
typedef jobject (*func_rhino_ast_GeneratorExpression_getLoop_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setLoop_rhino_ast_Jump 100
typedef void (*func_rhino_ast_GeneratorExpression_setLoop_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getContinue_R_rhino_Node 101
typedef jobject (*func_rhino_ast_GeneratorExpression_getContinue_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setContinue_rhino_Node 102
typedef void (*func_rhino_ast_GeneratorExpression_setContinue_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getParentScope_R_rhino_ast_Scope 103
typedef jobject (*func_rhino_ast_GeneratorExpression_getParentScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setParentScope_rhino_ast_Scope 104
typedef void (*func_rhino_ast_GeneratorExpression_setParentScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_clearParentScope 105
typedef void (*func_rhino_ast_GeneratorExpression_clearParentScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getChildScopes_R_java_util_List 106
typedef jobject (*func_rhino_ast_GeneratorExpression_getChildScopes_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_addChildScope_rhino_ast_Scope 107
typedef void (*func_rhino_ast_GeneratorExpression_addChildScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_replaceWith_rhino_ast_Scope 108
typedef void (*func_rhino_ast_GeneratorExpression_replaceWith_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getTop_R_rhino_ast_ScriptNode 109
typedef jobject (*func_rhino_ast_GeneratorExpression_getTop_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setTop_rhino_ast_ScriptNode 110
typedef void (*func_rhino_ast_GeneratorExpression_setTop_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getDefiningScope_java_lang_String_R_rhino_ast_Scope 111
typedef jobject (*func_rhino_ast_GeneratorExpression_getDefiningScope_java_lang_String_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getSymbol_java_lang_String_R_rhino_ast_Symbol 112
typedef jobject (*func_rhino_ast_GeneratorExpression_getSymbol_java_lang_String_R_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_putSymbol_rhino_ast_Symbol 113
typedef void (*func_rhino_ast_GeneratorExpression_putSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getSymbolTable_R_java_util_Map 114
typedef jobject (*func_rhino_ast_GeneratorExpression_getSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setSymbolTable_java_util_Map 115
typedef void (*func_rhino_ast_GeneratorExpression_setSymbolTable_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_ensureSymbolTable_R_java_util_Map 116
typedef jobject (*func_rhino_ast_GeneratorExpression_ensureSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getStatements_R_java_util_List 117
typedef jobject (*func_rhino_ast_GeneratorExpression_getStatements_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_getResult_R_rhino_ast_AstNode 118
typedef jobject (*func_rhino_ast_GeneratorExpression_getResult_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setResult_rhino_ast_AstNode 119
typedef void (*func_rhino_ast_GeneratorExpression_setResult_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getLoops_R_java_util_List 120
typedef jobject (*func_rhino_ast_GeneratorExpression_getLoops_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setLoops_java_util_List 121
typedef void (*func_rhino_ast_GeneratorExpression_setLoops_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_addLoop_rhino_ast_GeneratorExpressionLoop 122
typedef void (*func_rhino_ast_GeneratorExpression_addLoop_rhino_ast_GeneratorExpressionLoop)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode 123
typedef jobject (*func_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setFilter_rhino_ast_AstNode 124
typedef void (*func_rhino_ast_GeneratorExpression_setFilter_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_GeneratorExpression_getIfPosition_R_int 125
typedef jint (*func_rhino_ast_GeneratorExpression_getIfPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setIfPosition_int 126
typedef void (*func_rhino_ast_GeneratorExpression_setIfPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getFilterLp_R_int 127
typedef jint (*func_rhino_ast_GeneratorExpression_getFilterLp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setFilterLp_int 128
typedef void (*func_rhino_ast_GeneratorExpression_setFilterLp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_GeneratorExpression_getFilterRp_R_int 129
typedef jint (*func_rhino_ast_GeneratorExpression_getFilterRp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_GeneratorExpression_setFilterRp_int 130
typedef void (*func_rhino_ast_GeneratorExpression_setFilterRp_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_ast_GeneratorExpression(jobject object, jint mark, jint depth);
void clinit_rhino_ast_GeneratorExpression(jcontext ctx);
void init_rhino_ast_GeneratorExpression(jcontext ctx, jobject self);
void init_rhino_ast_GeneratorExpression_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_GeneratorExpression_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_ast_GeneratorExpression_getResult_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_GeneratorExpression_setResult_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_GeneratorExpression_getLoops_R_java_util_List(jcontext ctx, jobject self);
void M_rhino_ast_GeneratorExpression_setLoops_java_util_List(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_GeneratorExpression_addLoop_rhino_ast_GeneratorExpressionLoop(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_GeneratorExpression_getFilter_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_GeneratorExpression_setFilter_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_GeneratorExpression_getIfPosition_R_int(jcontext ctx, jobject self);
void M_rhino_ast_GeneratorExpression_setIfPosition_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_GeneratorExpression_getFilterLp_R_int(jcontext ctx, jobject self);
void M_rhino_ast_GeneratorExpression_setFilterLp_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_GeneratorExpression_getFilterRp_R_int(jcontext ctx, jobject self);
void M_rhino_ast_GeneratorExpression_setFilterRp_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_GeneratorExpression_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_GeneratorExpression_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
