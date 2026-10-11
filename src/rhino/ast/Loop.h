#ifndef HEADER_rhino_ast_Loop
#define HEADER_rhino_ast_Loop

#include "Clearwing.h"
#include "rhino/ast/Scope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_Loop {
	rhino_ast_Scope parent;
	jref F_body;
	jint F_lp;
	jint F_rp;
} rhino_ast_Loop;

extern Class class_rhino_ast_Loop;


#define VTABLE_rhino_ast_Loop_hashCode_R_int 0
typedef jint (*func_rhino_ast_Loop_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_Loop_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_Loop_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_Loop_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_Loop_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_finalize 5
typedef void (*func_rhino_ast_Loop_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_notify 6
typedef void (*func_rhino_ast_Loop_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_notifyAll 7
typedef void (*func_rhino_ast_Loop_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_wait 8
typedef void (*func_rhino_ast_Loop_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_wait_long 9
typedef void (*func_rhino_ast_Loop_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_Loop_wait_long_int 10
typedef void (*func_rhino_ast_Loop_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_Loop_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_Loop_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_Loop_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_Loop_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getType_R_int 14
typedef jint (*func_rhino_ast_Loop_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_Loop_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_Loop_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_Loop_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_Loop_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_Loop_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_Loop_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_Loop_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_Loop_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_Loop_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_Loop_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_Loop_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_Loop_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_Loop_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_Loop_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_Loop_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Loop_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_Loop_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Loop_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_Loop_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_Loop_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Loop_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_Loop_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Loop_removeChildren 34
typedef void (*func_rhino_ast_Loop_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_Loop_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_Loop_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_removeProp_int 37
typedef void (*func_rhino_ast_Loop_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_Loop_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_Loop_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_Loop_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_Loop_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_Loop_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_Loop_putIntProp_int_int 42
typedef void (*func_rhino_ast_Loop_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_Loop_getLineno_R_int 43
typedef jint (*func_rhino_ast_Loop_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setLineno_int 44
typedef void (*func_rhino_ast_Loop_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_Loop_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setDouble_double 46
typedef void (*func_rhino_ast_Loop_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_Loop_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_Loop_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setString_java_lang_String 48
typedef void (*func_rhino_ast_Loop_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_Loop_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_Loop_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_labelId_R_int 51
typedef jint (*func_rhino_ast_Loop_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_labelId_int 52
typedef void (*func_rhino_ast_Loop_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_Loop_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_Loop_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_Loop_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_Loop_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_Loop_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_Loop_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_Loop_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_Loop_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_endCheck_R_int 61
typedef jint (*func_rhino_ast_Loop_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_Loop_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_resetTargets 63
typedef void (*func_rhino_ast_Loop_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_resetTargets_r 64
typedef void (*func_rhino_ast_Loop_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_Loop_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Loop_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_Loop_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_Loop_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getPosition_R_int 68
typedef jint (*func_rhino_ast_Loop_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setPosition_int 69
typedef void (*func_rhino_ast_Loop_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_Loop_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getLength_R_int 71
typedef jint (*func_rhino_ast_Loop_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setLength_int 72
typedef void (*func_rhino_ast_Loop_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_setBounds_int_int 73
typedef void (*func_rhino_ast_Loop_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_Loop_setRelative_int 74
typedef void (*func_rhino_ast_Loop_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_Loop_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_Loop_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_Loop_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_Loop_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_Loop_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_Loop_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_Loop_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_Loop_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_Loop_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_Loop_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_Loop_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Loop_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_Loop_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_Loop_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_Loop_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_depth_R_int 89
typedef jint (*func_rhino_ast_Loop_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_Loop_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_Loop_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_Loop_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getJumpStatement_R_rhino_ast_Jump 93
typedef jobject (*func_rhino_ast_Loop_getJumpStatement_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setJumpStatement_rhino_ast_Jump 94
typedef void (*func_rhino_ast_Loop_setJumpStatement_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getDefault_R_rhino_Node 95
typedef jobject (*func_rhino_ast_Loop_getDefault_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setDefault_rhino_Node 96
typedef void (*func_rhino_ast_Loop_setDefault_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getFinally_R_rhino_Node 97
typedef jobject (*func_rhino_ast_Loop_getFinally_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setFinally_rhino_Node 98
typedef void (*func_rhino_ast_Loop_setFinally_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getLoop_R_rhino_ast_Jump 99
typedef jobject (*func_rhino_ast_Loop_getLoop_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setLoop_rhino_ast_Jump 100
typedef void (*func_rhino_ast_Loop_setLoop_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getContinue_R_rhino_Node 101
typedef jobject (*func_rhino_ast_Loop_getContinue_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setContinue_rhino_Node 102
typedef void (*func_rhino_ast_Loop_setContinue_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getParentScope_R_rhino_ast_Scope 103
typedef jobject (*func_rhino_ast_Loop_getParentScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setParentScope_rhino_ast_Scope 104
typedef void (*func_rhino_ast_Loop_setParentScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_clearParentScope 105
typedef void (*func_rhino_ast_Loop_clearParentScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getChildScopes_R_java_util_List 106
typedef jobject (*func_rhino_ast_Loop_getChildScopes_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_addChildScope_rhino_ast_Scope 107
typedef void (*func_rhino_ast_Loop_addChildScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_replaceWith_rhino_ast_Scope 108
typedef void (*func_rhino_ast_Loop_replaceWith_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getTop_R_rhino_ast_ScriptNode 109
typedef jobject (*func_rhino_ast_Loop_getTop_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setTop_rhino_ast_ScriptNode 110
typedef void (*func_rhino_ast_Loop_setTop_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getDefiningScope_java_lang_String_R_rhino_ast_Scope 111
typedef jobject (*func_rhino_ast_Loop_getDefiningScope_java_lang_String_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getSymbol_java_lang_String_R_rhino_ast_Symbol 112
typedef jobject (*func_rhino_ast_Loop_getSymbol_java_lang_String_R_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_putSymbol_rhino_ast_Symbol 113
typedef void (*func_rhino_ast_Loop_putSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getSymbolTable_R_java_util_Map 114
typedef jobject (*func_rhino_ast_Loop_getSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setSymbolTable_java_util_Map 115
typedef void (*func_rhino_ast_Loop_setSymbolTable_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_ensureSymbolTable_R_java_util_Map 116
typedef jobject (*func_rhino_ast_Loop_ensureSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getStatements_R_java_util_List 117
typedef jobject (*func_rhino_ast_Loop_getStatements_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_getBody_R_rhino_ast_AstNode 118
typedef jobject (*func_rhino_ast_Loop_getBody_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setBody_rhino_ast_AstNode 119
typedef void (*func_rhino_ast_Loop_setBody_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Loop_getLp_R_int 120
typedef jint (*func_rhino_ast_Loop_getLp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setLp_int 121
typedef void (*func_rhino_ast_Loop_setLp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_getRp_R_int 122
typedef jint (*func_rhino_ast_Loop_getRp_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Loop_setRp_int 123
typedef void (*func_rhino_ast_Loop_setRp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Loop_setParens_int_int 124
typedef void (*func_rhino_ast_Loop_setParens_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_rhino_ast_Loop(jobject object, jint mark, jint depth);
void clinit_rhino_ast_Loop(jcontext ctx);
void init_rhino_ast_Loop(jcontext ctx, jobject self);
void init_rhino_ast_Loop_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_Loop_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_ast_Loop_getBody_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_Loop_setBody_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ast_Loop_getLp_R_int(jcontext ctx, jobject self);
void M_rhino_ast_Loop_setLp_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_ast_Loop_getRp_R_int(jcontext ctx, jobject self);
void M_rhino_ast_Loop_setRp_int(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_Loop_setParens_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
