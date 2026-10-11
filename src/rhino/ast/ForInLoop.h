#ifndef HEADER_rhino_ast_ForInLoop
#define HEADER_rhino_ast_ForInLoop

#include "Clearwing.h"
#include "rhino/ast/Loop.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_ForInLoop {
	rhino_ast_Loop parent;
	jref F_iterator;
	jref F_iteratedObject;
	jint F_inPosition;
	jint F_eachPosition;
	jbool F_isForEach;
	jbool F_isForOf;
} rhino_ast_ForInLoop;

extern Class class_rhino_ast_ForInLoop;


#define VTABLE_rhino_ast_ForInLoop_hashCode_R_int 0
typedef jint (*func_rhino_ast_ForInLoop_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_ForInLoop_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_ForInLoop_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_ForInLoop_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_ForInLoop_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_finalize 5
typedef void (*func_rhino_ast_ForInLoop_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_notify 6
typedef void (*func_rhino_ast_ForInLoop_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_notifyAll 7
typedef void (*func_rhino_ast_ForInLoop_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_wait 8
typedef void (*func_rhino_ast_ForInLoop_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_wait_long 9
typedef void (*func_rhino_ast_ForInLoop_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_ForInLoop_wait_long_int 10
typedef void (*func_rhino_ast_ForInLoop_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_ForInLoop_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_ForInLoop_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_ForInLoop_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_ForInLoop_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getType_R_int 14
typedef jint (*func_rhino_ast_ForInLoop_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_ForInLoop_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_ForInLoop_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_ForInLoop_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_ForInLoop_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_ForInLoop_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_ForInLoop_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_ForInLoop_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_ForInLoop_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_ForInLoop_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_ForInLoop_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_ForInLoop_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_ForInLoop_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_ForInLoop_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_ForInLoop_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_ForInLoop_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_ForInLoop_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_ForInLoop_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_ForInLoop_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_ForInLoop_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_removeChildren 34
typedef void (*func_rhino_ast_ForInLoop_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_ForInLoop_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_ForInLoop_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_removeProp_int 37
typedef void (*func_rhino_ast_ForInLoop_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_ForInLoop_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_ForInLoop_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ForInLoop_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_ForInLoop_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_ForInLoop_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_putIntProp_int_int 42
typedef void (*func_rhino_ast_ForInLoop_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ForInLoop_getLineno_R_int 43
typedef jint (*func_rhino_ast_ForInLoop_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setLineno_int 44
typedef void (*func_rhino_ast_ForInLoop_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_ForInLoop_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setDouble_double 46
typedef void (*func_rhino_ast_ForInLoop_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_ForInLoop_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_ForInLoop_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setString_java_lang_String 48
typedef void (*func_rhino_ast_ForInLoop_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_ForInLoop_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_ForInLoop_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_labelId_R_int 51
typedef jint (*func_rhino_ast_ForInLoop_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_labelId_int 52
typedef void (*func_rhino_ast_ForInLoop_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_ForInLoop_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_ForInLoop_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_ForInLoop_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_ForInLoop_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_ForInLoop_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_ForInLoop_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_ForInLoop_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_ForInLoop_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_endCheck_R_int 61
typedef jint (*func_rhino_ast_ForInLoop_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_ForInLoop_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_resetTargets 63
typedef void (*func_rhino_ast_ForInLoop_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_resetTargets_r 64
typedef void (*func_rhino_ast_ForInLoop_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_ForInLoop_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_ForInLoop_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_ForInLoop_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getPosition_R_int 68
typedef jint (*func_rhino_ast_ForInLoop_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setPosition_int 69
typedef void (*func_rhino_ast_ForInLoop_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_ForInLoop_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getLength_R_int 71
typedef jint (*func_rhino_ast_ForInLoop_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setLength_int 72
typedef void (*func_rhino_ast_ForInLoop_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_setBounds_int_int 73
typedef void (*func_rhino_ast_ForInLoop_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ForInLoop_setRelative_int 74
typedef void (*func_rhino_ast_ForInLoop_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_ForInLoop_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_ForInLoop_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_ForInLoop_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_ForInLoop_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_ForInLoop_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_ForInLoop_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_ForInLoop_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_ForInLoop_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_ForInLoop_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_ForInLoop_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_ForInLoop_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_ForInLoop_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_ForInLoop_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_ForInLoop_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_ForInLoop_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_depth_R_int 89
typedef jint (*func_rhino_ast_ForInLoop_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_ForInLoop_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_ForInLoop_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_ForInLoop_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getJumpStatement_R_rhino_ast_Jump 93
typedef jobject (*func_rhino_ast_ForInLoop_getJumpStatement_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setJumpStatement_rhino_ast_Jump 94
typedef void (*func_rhino_ast_ForInLoop_setJumpStatement_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getDefault_R_rhino_Node 95
typedef jobject (*func_rhino_ast_ForInLoop_getDefault_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setDefault_rhino_Node 96
typedef void (*func_rhino_ast_ForInLoop_setDefault_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getFinally_R_rhino_Node 97
typedef jobject (*func_rhino_ast_ForInLoop_getFinally_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setFinally_rhino_Node 98
typedef void (*func_rhino_ast_ForInLoop_setFinally_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getLoop_R_rhino_ast_Jump 99
typedef jobject (*func_rhino_ast_ForInLoop_getLoop_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setLoop_rhino_ast_Jump 100
typedef void (*func_rhino_ast_ForInLoop_setLoop_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getContinue_R_rhino_Node 101
typedef jobject (*func_rhino_ast_ForInLoop_getContinue_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setContinue_rhino_Node 102
typedef void (*func_rhino_ast_ForInLoop_setContinue_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getParentScope_R_rhino_ast_Scope 103
typedef jobject (*func_rhino_ast_ForInLoop_getParentScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setParentScope_rhino_ast_Scope 104
typedef void (*func_rhino_ast_ForInLoop_setParentScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_clearParentScope 105
typedef void (*func_rhino_ast_ForInLoop_clearParentScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getChildScopes_R_java_util_List 106
typedef jobject (*func_rhino_ast_ForInLoop_getChildScopes_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_addChildScope_rhino_ast_Scope 107
typedef void (*func_rhino_ast_ForInLoop_addChildScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_replaceWith_rhino_ast_Scope 108
typedef void (*func_rhino_ast_ForInLoop_replaceWith_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getTop_R_rhino_ast_ScriptNode 109
typedef jobject (*func_rhino_ast_ForInLoop_getTop_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setTop_rhino_ast_ScriptNode 110
typedef void (*func_rhino_ast_ForInLoop_setTop_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getDefiningScope_java_lang_String_R_rhino_ast_Scope 111
typedef jobject (*func_rhino_ast_ForInLoop_getDefiningScope_java_lang_String_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getSymbol_java_lang_String_R_rhino_ast_Symbol 112
typedef jobject (*func_rhino_ast_ForInLoop_getSymbol_java_lang_String_R_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_putSymbol_rhino_ast_Symbol 113
typedef void (*func_rhino_ast_ForInLoop_putSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getSymbolTable_R_java_util_Map 114
typedef jobject (*func_rhino_ast_ForInLoop_getSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setSymbolTable_java_util_Map 115
typedef void (*func_rhino_ast_ForInLoop_setSymbolTable_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_ensureSymbolTable_R_java_util_Map 116
typedef jobject (*func_rhino_ast_ForInLoop_ensureSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getStatements_R_java_util_List 117
typedef jobject (*func_rhino_ast_ForInLoop_getStatements_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_getBody_R_rhino_ast_AstNode 118
typedef jobject (*func_rhino_ast_ForInLoop_getBody_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setBody_rhino_ast_AstNode 119
typedef void (*func_rhino_ast_ForInLoop_setBody_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getLp_R_int 120
typedef jint (*func_rhino_ast_ForInLoop_getLp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setLp_int 121
typedef void (*func_rhino_ast_ForInLoop_setLp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getRp_R_int 122
typedef jint (*func_rhino_ast_ForInLoop_getRp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setRp_int 123
typedef void (*func_rhino_ast_ForInLoop_setRp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_setParens_int_int 124
typedef void (*func_rhino_ast_ForInLoop_setParens_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_ForInLoop_getIterator_R_rhino_ast_AstNode 125
typedef jobject (*func_rhino_ast_ForInLoop_getIterator_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setIterator_rhino_ast_AstNode 126
typedef void (*func_rhino_ast_ForInLoop_setIterator_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_getIteratedObject_R_rhino_ast_AstNode 127
typedef jobject (*func_rhino_ast_ForInLoop_getIteratedObject_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setIteratedObject_rhino_ast_AstNode 128
typedef void (*func_rhino_ast_ForInLoop_setIteratedObject_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_ForInLoop_isForEach_R_boolean 129
typedef jbool (*func_rhino_ast_ForInLoop_isForEach_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setIsForEach_boolean 130
typedef void (*func_rhino_ast_ForInLoop_setIsForEach_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_ForInLoop_isForOf_R_boolean 131
typedef jbool (*func_rhino_ast_ForInLoop_isForOf_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setIsForOf_boolean 132
typedef void (*func_rhino_ast_ForInLoop_setIsForOf_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_ForInLoop_getInPosition_R_int 133
typedef jint (*func_rhino_ast_ForInLoop_getInPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setInPosition_int 134
typedef void (*func_rhino_ast_ForInLoop_setInPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_ForInLoop_getEachPosition_R_int 135
typedef jint (*func_rhino_ast_ForInLoop_getEachPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_ForInLoop_setEachPosition_int 136
typedef void (*func_rhino_ast_ForInLoop_setEachPosition_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_ast_ForInLoop(jobject object, jint mark, jint depth);
void clinit_rhino_ast_ForInLoop(jcontext ctx);
void init_rhino_ast_ForInLoop(jcontext ctx, jobject self);
void init_rhino_ast_ForInLoop_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_ForInLoop_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_ast_ForInLoop_getIterator_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_ForInLoop_setIterator_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_ForInLoop_getIteratedObject_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_ForInLoop_setIteratedObject_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_ast_ForInLoop_isForEach_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_ForInLoop_setIsForEach_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_rhino_ast_ForInLoop_isForOf_R_boolean(jcontext ctx, jobject self);
void M_rhino_ast_ForInLoop_setIsForOf_boolean(jcontext ctx, jobject self, jbool param0);
jint M_rhino_ast_ForInLoop_getInPosition_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ForInLoop_setInPosition_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_ForInLoop_getEachPosition_R_int(jcontext ctx, jobject self);
void M_rhino_ast_ForInLoop_setEachPosition_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_ForInLoop_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_ForInLoop_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
