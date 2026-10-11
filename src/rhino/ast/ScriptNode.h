#ifndef HEADER_rhino_ast_ScriptNode
#define HEADER_rhino_ast_ScriptNode

#include "Clearwing.h"
#include "rhino/ast/Scope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_ScriptNode {
	rhino_ast_Scope parent;
	jint F_encodedSourceStart;
	jint F_encodedSourceEnd;
	jref F_sourceName;
	jref F_encodedSource;
	jint F_endLineno;
	jref F_functions;
	jref F_regexps;
	jref F_EMPTY_LIST;
	jref F_symbols;
	jint F_paramCount;
	jref F_variableNames;
	jref F_isConsts;
	jref F_compilerData;
	jint F_tempNumber;
	jbool F_inStrictMode;
} rhino_ast_ScriptNode;

extern Class class_rhino_ast_ScriptNode;


#define VTABLE_rhino_ast_ScriptNode_hashCode_R_int 0
typedef jint (*func_rhino_ast_ScriptNode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_ScriptNode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_ScriptNode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_ScriptNode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_ScriptNode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_finalize 5
typedef void (*func_rhino_ast_ScriptNode_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_notify 6
typedef void (*func_rhino_ast_ScriptNode_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_notifyAll 7
typedef void (*func_rhino_ast_ScriptNode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_wait 8
typedef void (*func_rhino_ast_ScriptNode_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_wait_long 9
typedef void (*func_rhino_ast_ScriptNode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_ScriptNode_wait_long_int 10
typedef void (*func_rhino_ast_ScriptNode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_ScriptNode_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_ScriptNode_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_ScriptNode_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_ScriptNode_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getType_R_int 14
typedef jint (*func_rhino_ast_ScriptNode_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_ScriptNode_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_ScriptNode_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_ScriptNode_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_ScriptNode_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_ScriptNode_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_ScriptNode_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_ScriptNode_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_ScriptNode_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_ScriptNode_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_ScriptNode_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_ScriptNode_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_ScriptNode_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_ScriptNode_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_ScriptNode_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_ScriptNode_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_ScriptNode_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_ScriptNode_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_ScriptNode_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_ScriptNode_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_removeChildren 34
typedef void (*func_rhino_ast_ScriptNode_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_ScriptNode_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_ScriptNode_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_removeProp_int 37
typedef void (*func_rhino_ast_ScriptNode_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_ScriptNode_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_ScriptNode_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ScriptNode_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_ScriptNode_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_ScriptNode_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_putIntProp_int_int 42
typedef void (*func_rhino_ast_ScriptNode_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ScriptNode_getLineno_R_int 43
typedef jint (*func_rhino_ast_ScriptNode_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setLineno_int 44
typedef void (*func_rhino_ast_ScriptNode_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_ScriptNode_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setDouble_double 46
typedef void (*func_rhino_ast_ScriptNode_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_ScriptNode_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_ScriptNode_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setString_java_lang_String 48
typedef void (*func_rhino_ast_ScriptNode_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_ScriptNode_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_ScriptNode_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_labelId_R_int 51
typedef jint (*func_rhino_ast_ScriptNode_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_labelId_int 52
typedef void (*func_rhino_ast_ScriptNode_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_ScriptNode_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_ScriptNode_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_ScriptNode_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_ScriptNode_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_ScriptNode_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_ScriptNode_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_ScriptNode_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_ScriptNode_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_endCheck_R_int 61
typedef jint (*func_rhino_ast_ScriptNode_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_ScriptNode_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_resetTargets 63
typedef void (*func_rhino_ast_ScriptNode_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_resetTargets_r 64
typedef void (*func_rhino_ast_ScriptNode_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_ScriptNode_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_ScriptNode_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_ScriptNode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getPosition_R_int 68
typedef jint (*func_rhino_ast_ScriptNode_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setPosition_int 69
typedef void (*func_rhino_ast_ScriptNode_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_ScriptNode_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getLength_R_int 71
typedef jint (*func_rhino_ast_ScriptNode_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setLength_int 72
typedef void (*func_rhino_ast_ScriptNode_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_setBounds_int_int 73
typedef void (*func_rhino_ast_ScriptNode_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ScriptNode_setRelative_int 74
typedef void (*func_rhino_ast_ScriptNode_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_ScriptNode_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_ScriptNode_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_ScriptNode_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_ScriptNode_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_ScriptNode_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_ScriptNode_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_ScriptNode_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_ScriptNode_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_ScriptNode_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_ScriptNode_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ScriptNode_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_ScriptNode_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_ScriptNode_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_ScriptNode_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_depth_R_int 89
typedef jint (*func_rhino_ast_ScriptNode_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_ScriptNode_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_ScriptNode_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_ScriptNode_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getJumpStatement_R_rhino_ast_Jump 93
typedef jobject (*func_rhino_ast_ScriptNode_getJumpStatement_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setJumpStatement_rhino_ast_Jump 94
typedef void (*func_rhino_ast_ScriptNode_setJumpStatement_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getDefault_R_rhino_Node 95
typedef jobject (*func_rhino_ast_ScriptNode_getDefault_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setDefault_rhino_Node 96
typedef void (*func_rhino_ast_ScriptNode_setDefault_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getFinally_R_rhino_Node 97
typedef jobject (*func_rhino_ast_ScriptNode_getFinally_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setFinally_rhino_Node 98
typedef void (*func_rhino_ast_ScriptNode_setFinally_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getLoop_R_rhino_ast_Jump 99
typedef jobject (*func_rhino_ast_ScriptNode_getLoop_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setLoop_rhino_ast_Jump 100
typedef void (*func_rhino_ast_ScriptNode_setLoop_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getContinue_R_rhino_Node 101
typedef jobject (*func_rhino_ast_ScriptNode_getContinue_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setContinue_rhino_Node 102
typedef void (*func_rhino_ast_ScriptNode_setContinue_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getParentScope_R_rhino_ast_Scope 103
typedef jobject (*func_rhino_ast_ScriptNode_getParentScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setParentScope_rhino_ast_Scope 104
typedef void (*func_rhino_ast_ScriptNode_setParentScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_clearParentScope 105
typedef void (*func_rhino_ast_ScriptNode_clearParentScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getChildScopes_R_java_util_List 106
typedef jobject (*func_rhino_ast_ScriptNode_getChildScopes_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_addChildScope_rhino_ast_Scope 107
typedef void (*func_rhino_ast_ScriptNode_addChildScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_replaceWith_rhino_ast_Scope 108
typedef void (*func_rhino_ast_ScriptNode_replaceWith_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getTop_R_rhino_ast_ScriptNode 109
typedef jobject (*func_rhino_ast_ScriptNode_getTop_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setTop_rhino_ast_ScriptNode 110
typedef void (*func_rhino_ast_ScriptNode_setTop_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getDefiningScope_java_lang_String_R_rhino_ast_Scope 111
typedef jobject (*func_rhino_ast_ScriptNode_getDefiningScope_java_lang_String_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getSymbol_java_lang_String_R_rhino_ast_Symbol 112
typedef jobject (*func_rhino_ast_ScriptNode_getSymbol_java_lang_String_R_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_putSymbol_rhino_ast_Symbol 113
typedef void (*func_rhino_ast_ScriptNode_putSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getSymbolTable_R_java_util_Map 114
typedef jobject (*func_rhino_ast_ScriptNode_getSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setSymbolTable_java_util_Map 115
typedef void (*func_rhino_ast_ScriptNode_setSymbolTable_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_ensureSymbolTable_R_java_util_Map 116
typedef jobject (*func_rhino_ast_ScriptNode_ensureSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getStatements_R_java_util_List 117
typedef jobject (*func_rhino_ast_ScriptNode_getStatements_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getSourceName_R_java_lang_String 118
typedef jobject (*func_rhino_ast_ScriptNode_getSourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setSourceName_java_lang_String 119
typedef void (*func_rhino_ast_ScriptNode_setSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getEncodedSourceStart_R_int 120
typedef jint (*func_rhino_ast_ScriptNode_getEncodedSourceStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setEncodedSourceStart_int 121
typedef void (*func_rhino_ast_ScriptNode_setEncodedSourceStart_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int 122
typedef jint (*func_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setEncodedSourceEnd_int 123
typedef void (*func_rhino_ast_ScriptNode_setEncodedSourceEnd_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int 124
typedef void (*func_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ScriptNode_setEncodedSource_java_lang_String 125
typedef void (*func_rhino_ast_ScriptNode_setEncodedSource_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String 126
typedef jobject (*func_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getBaseLineno_R_int 127
typedef jint (*func_rhino_ast_ScriptNode_getBaseLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setBaseLineno_int 128
typedef void (*func_rhino_ast_ScriptNode_setBaseLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getEndLineno_R_int 129
typedef jint (*func_rhino_ast_ScriptNode_getEndLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setEndLineno_int 130
typedef void (*func_rhino_ast_ScriptNode_setEndLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getFunctionCount_R_int 131
typedef jint (*func_rhino_ast_ScriptNode_getFunctionCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode 132
typedef jobject (*func_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getFunctions_R_java_util_List 133
typedef jobject (*func_rhino_ast_ScriptNode_getFunctions_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int 134
typedef jint (*func_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getRegexpCount_R_int 135
typedef jint (*func_rhino_ast_ScriptNode_getRegexpCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String 136
typedef jobject (*func_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String 137
typedef jobject (*func_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral 138
typedef void (*func_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int 139
typedef jint (*func_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String 140
typedef jobject (*func_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ScriptNode_getParamCount_R_int 141
typedef jint (*func_rhino_ast_ScriptNode_getParamCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getParamAndVarCount_R_int 142
typedef jint (*func_rhino_ast_ScriptNode_getParamAndVarCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String 143
typedef jobject (*func_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean 144
typedef jobject (*func_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol 145
typedef void (*func_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getSymbols_R_java_util_List 146
typedef jobject (*func_rhino_ast_ScriptNode_getSymbols_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setSymbols_java_util_List 147
typedef void (*func_rhino_ast_ScriptNode_setSymbols_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_flattenSymbolTable_boolean 148
typedef void (*func_rhino_ast_ScriptNode_flattenSymbolTable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object 149
typedef jobject (*func_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setCompilerData_java_lang_Object 150
typedef void (*func_rhino_ast_ScriptNode_setCompilerData_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String 151
typedef jobject (*func_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ScriptNode_setInStrictMode_boolean 152
typedef void (*func_rhino_ast_ScriptNode_setInStrictMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_ScriptNode_isInStrictMode_R_boolean 153
typedef jbool (*func_rhino_ast_ScriptNode_isInStrictMode_R_boolean)(jcontext ctx, jobject self);

void mark_rhino_ast_ScriptNode(jobject object, jint mark, jint depth);
void clinit_rhino_ast_ScriptNode(jcontext ctx);
void init_rhino_ast_ScriptNode(jcontext ctx, jobject self);
void init_rhino_ast_ScriptNode_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_ScriptNode_getSourceName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setSourceName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_ScriptNode_getEncodedSourceStart_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setEncodedSourceStart_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setEncodedSourceEnd_int(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_rhino_ast_ScriptNode_setEncodedSource_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String(jcontext ctx, jobject self);
jint M_rhino_ast_ScriptNode_getBaseLineno_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setBaseLineno_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_ScriptNode_getEndLineno_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setEndLineno_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_ScriptNode_getFunctionCount_R_int(jcontext ctx, jobject self);
jobject M_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_ScriptNode_getFunctions_R_java_util_List(jcontext ctx, jobject self);
jint M_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_ScriptNode_getRegexpCount_R_int(jcontext ctx, jobject self);
jobject M_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_ScriptNode_getParamCount_R_int(jcontext ctx, jobject self);
jint M_rhino_ast_ScriptNode_getParamAndVarCount_R_int(jcontext ctx, jobject self);
jobject M_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ScriptNode_getSymbols_R_java_util_List(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setSymbols_java_util_List(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_ScriptNode_flattenSymbolTable_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setCompilerData_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_setInStrictMode_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_ast_ScriptNode_isInStrictMode_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
