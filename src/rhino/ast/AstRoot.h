#ifndef HEADER_rhino_ast_AstRoot
#define HEADER_rhino_ast_AstRoot

#include "Clearwing.h"
#include "rhino/ast/ScriptNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_AstRoot {
	rhino_ast_ScriptNode parent;
	jref F_comments;
} rhino_ast_AstRoot;

extern Class class_rhino_ast_AstRoot;


#define VTABLE_rhino_ast_AstRoot_hashCode_R_int 0
typedef jint (*func_rhino_ast_AstRoot_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_AstRoot_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_AstRoot_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_AstRoot_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_AstRoot_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_finalize 5
typedef void (*func_rhino_ast_AstRoot_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_notify 6
typedef void (*func_rhino_ast_AstRoot_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_notifyAll 7
typedef void (*func_rhino_ast_AstRoot_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_wait 8
typedef void (*func_rhino_ast_AstRoot_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_wait_long 9
typedef void (*func_rhino_ast_AstRoot_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_AstRoot_wait_long_int 10
typedef void (*func_rhino_ast_AstRoot_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_AstRoot_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_AstRoot_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_AstRoot_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_AstRoot_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getType_R_int 14
typedef jint (*func_rhino_ast_AstRoot_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_AstRoot_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_AstRoot_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_AstRoot_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_AstRoot_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_AstRoot_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_AstRoot_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_AstRoot_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_AstRoot_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_AstRoot_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_AstRoot_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_AstRoot_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_AstRoot_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_AstRoot_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_AstRoot_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_AstRoot_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_AstRoot_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_AstRoot_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_AstRoot_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_AstRoot_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_removeChildren 34
typedef void (*func_rhino_ast_AstRoot_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_AstRoot_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_AstRoot_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_removeProp_int 37
typedef void (*func_rhino_ast_AstRoot_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_AstRoot_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_AstRoot_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_AstRoot_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_AstRoot_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_AstRoot_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_putIntProp_int_int 42
typedef void (*func_rhino_ast_AstRoot_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_AstRoot_getLineno_R_int 43
typedef jint (*func_rhino_ast_AstRoot_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setLineno_int 44
typedef void (*func_rhino_ast_AstRoot_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_AstRoot_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setDouble_double 46
typedef void (*func_rhino_ast_AstRoot_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_AstRoot_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_AstRoot_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setString_java_lang_String 48
typedef void (*func_rhino_ast_AstRoot_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_AstRoot_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_AstRoot_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_labelId_R_int 51
typedef jint (*func_rhino_ast_AstRoot_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_labelId_int 52
typedef void (*func_rhino_ast_AstRoot_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_AstRoot_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_AstRoot_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_AstRoot_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_AstRoot_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_AstRoot_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_AstRoot_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_AstRoot_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_AstRoot_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_endCheck_R_int 61
typedef jint (*func_rhino_ast_AstRoot_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_AstRoot_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_resetTargets 63
typedef void (*func_rhino_ast_AstRoot_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_resetTargets_r 64
typedef void (*func_rhino_ast_AstRoot_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_AstRoot_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_AstRoot_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_AstRoot_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getPosition_R_int 68
typedef jint (*func_rhino_ast_AstRoot_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setPosition_int 69
typedef void (*func_rhino_ast_AstRoot_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_AstRoot_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getLength_R_int 71
typedef jint (*func_rhino_ast_AstRoot_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setLength_int 72
typedef void (*func_rhino_ast_AstRoot_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_setBounds_int_int 73
typedef void (*func_rhino_ast_AstRoot_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_AstRoot_setRelative_int 74
typedef void (*func_rhino_ast_AstRoot_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_AstRoot_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_AstRoot_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_AstRoot_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_AstRoot_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_AstRoot_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_AstRoot_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_AstRoot_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_AstRoot_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_AstRoot_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_AstRoot_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_AstRoot_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_AstRoot_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_AstRoot_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_AstRoot_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_AstRoot_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_depth_R_int 89
typedef jint (*func_rhino_ast_AstRoot_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_AstRoot_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_AstRoot_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_AstRoot_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getJumpStatement_R_rhino_ast_Jump 93
typedef jobject (*func_rhino_ast_AstRoot_getJumpStatement_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setJumpStatement_rhino_ast_Jump 94
typedef void (*func_rhino_ast_AstRoot_setJumpStatement_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getDefault_R_rhino_Node 95
typedef jobject (*func_rhino_ast_AstRoot_getDefault_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setDefault_rhino_Node 96
typedef void (*func_rhino_ast_AstRoot_setDefault_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getFinally_R_rhino_Node 97
typedef jobject (*func_rhino_ast_AstRoot_getFinally_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setFinally_rhino_Node 98
typedef void (*func_rhino_ast_AstRoot_setFinally_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getLoop_R_rhino_ast_Jump 99
typedef jobject (*func_rhino_ast_AstRoot_getLoop_R_rhino_ast_Jump)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setLoop_rhino_ast_Jump 100
typedef void (*func_rhino_ast_AstRoot_setLoop_rhino_ast_Jump)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getContinue_R_rhino_Node 101
typedef jobject (*func_rhino_ast_AstRoot_getContinue_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setContinue_rhino_Node 102
typedef void (*func_rhino_ast_AstRoot_setContinue_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getParentScope_R_rhino_ast_Scope 103
typedef jobject (*func_rhino_ast_AstRoot_getParentScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setParentScope_rhino_ast_Scope 104
typedef void (*func_rhino_ast_AstRoot_setParentScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_clearParentScope 105
typedef void (*func_rhino_ast_AstRoot_clearParentScope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getChildScopes_R_java_util_List 106
typedef jobject (*func_rhino_ast_AstRoot_getChildScopes_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_addChildScope_rhino_ast_Scope 107
typedef void (*func_rhino_ast_AstRoot_addChildScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_replaceWith_rhino_ast_Scope 108
typedef void (*func_rhino_ast_AstRoot_replaceWith_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getTop_R_rhino_ast_ScriptNode 109
typedef jobject (*func_rhino_ast_AstRoot_getTop_R_rhino_ast_ScriptNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setTop_rhino_ast_ScriptNode 110
typedef void (*func_rhino_ast_AstRoot_setTop_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getDefiningScope_java_lang_String_R_rhino_ast_Scope 111
typedef jobject (*func_rhino_ast_AstRoot_getDefiningScope_java_lang_String_R_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getSymbol_java_lang_String_R_rhino_ast_Symbol 112
typedef jobject (*func_rhino_ast_AstRoot_getSymbol_java_lang_String_R_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_putSymbol_rhino_ast_Symbol 113
typedef void (*func_rhino_ast_AstRoot_putSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getSymbolTable_R_java_util_Map 114
typedef jobject (*func_rhino_ast_AstRoot_getSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setSymbolTable_java_util_Map 115
typedef void (*func_rhino_ast_AstRoot_setSymbolTable_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_ensureSymbolTable_R_java_util_Map 116
typedef jobject (*func_rhino_ast_AstRoot_ensureSymbolTable_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getStatements_R_java_util_List 117
typedef jobject (*func_rhino_ast_AstRoot_getStatements_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getSourceName_R_java_lang_String 118
typedef jobject (*func_rhino_ast_AstRoot_getSourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setSourceName_java_lang_String 119
typedef void (*func_rhino_ast_AstRoot_setSourceName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getEncodedSourceStart_R_int 120
typedef jint (*func_rhino_ast_AstRoot_getEncodedSourceStart_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setEncodedSourceStart_int 121
typedef void (*func_rhino_ast_AstRoot_setEncodedSourceStart_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getEncodedSourceEnd_R_int 122
typedef jint (*func_rhino_ast_AstRoot_getEncodedSourceEnd_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setEncodedSourceEnd_int 123
typedef void (*func_rhino_ast_AstRoot_setEncodedSourceEnd_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_setEncodedSourceBounds_int_int 124
typedef void (*func_rhino_ast_AstRoot_setEncodedSourceBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_AstRoot_setEncodedSource_java_lang_String 125
typedef void (*func_rhino_ast_AstRoot_setEncodedSource_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getEncodedSource_R_java_lang_String 126
typedef jobject (*func_rhino_ast_AstRoot_getEncodedSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getBaseLineno_R_int 127
typedef jint (*func_rhino_ast_AstRoot_getBaseLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setBaseLineno_int 128
typedef void (*func_rhino_ast_AstRoot_setBaseLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getEndLineno_R_int 129
typedef jint (*func_rhino_ast_AstRoot_getEndLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setEndLineno_int 130
typedef void (*func_rhino_ast_AstRoot_setEndLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getFunctionCount_R_int 131
typedef jint (*func_rhino_ast_AstRoot_getFunctionCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getFunctionNode_int_R_rhino_ast_FunctionNode 132
typedef jobject (*func_rhino_ast_AstRoot_getFunctionNode_int_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getFunctions_R_java_util_List 133
typedef jobject (*func_rhino_ast_AstRoot_getFunctions_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_addFunction_rhino_ast_FunctionNode_R_int 134
typedef jint (*func_rhino_ast_AstRoot_addFunction_rhino_ast_FunctionNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getRegexpCount_R_int 135
typedef jint (*func_rhino_ast_AstRoot_getRegexpCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getRegexpString_int_R_java_lang_String 136
typedef jobject (*func_rhino_ast_AstRoot_getRegexpString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getRegexpFlags_int_R_java_lang_String 137
typedef jobject (*func_rhino_ast_AstRoot_getRegexpFlags_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_addRegExp_rhino_ast_RegExpLiteral 138
typedef void (*func_rhino_ast_AstRoot_addRegExp_rhino_ast_RegExpLiteral)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getIndexForNameNode_rhino_Node_R_int 139
typedef jint (*func_rhino_ast_AstRoot_getIndexForNameNode_rhino_Node_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getParamOrVarName_int_R_java_lang_String 140
typedef jobject (*func_rhino_ast_AstRoot_getParamOrVarName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_AstRoot_getParamCount_R_int 141
typedef jint (*func_rhino_ast_AstRoot_getParamCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getParamAndVarCount_R_int 142
typedef jint (*func_rhino_ast_AstRoot_getParamAndVarCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getParamAndVarNames_R_Array1_java_lang_String 143
typedef jobject (*func_rhino_ast_AstRoot_getParamAndVarNames_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getParamAndVarConst_R_Array1_boolean 144
typedef jobject (*func_rhino_ast_AstRoot_getParamAndVarConst_R_Array1_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_addSymbol_rhino_ast_Symbol 145
typedef void (*func_rhino_ast_AstRoot_addSymbol_rhino_ast_Symbol)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getSymbols_R_java_util_List 146
typedef jobject (*func_rhino_ast_AstRoot_getSymbols_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setSymbols_java_util_List 147
typedef void (*func_rhino_ast_AstRoot_setSymbols_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_flattenSymbolTable_boolean 148
typedef void (*func_rhino_ast_AstRoot_flattenSymbolTable_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_AstRoot_getCompilerData_R_java_lang_Object 149
typedef jobject (*func_rhino_ast_AstRoot_getCompilerData_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setCompilerData_java_lang_Object 150
typedef void (*func_rhino_ast_AstRoot_setCompilerData_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_getNextTempName_R_java_lang_String 151
typedef jobject (*func_rhino_ast_AstRoot_getNextTempName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setInStrictMode_boolean 152
typedef void (*func_rhino_ast_AstRoot_setInStrictMode_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_ast_AstRoot_isInStrictMode_R_boolean 153
typedef jbool (*func_rhino_ast_AstRoot_isInStrictMode_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_getComments_R_java_util_SortedSet 154
typedef jobject (*func_rhino_ast_AstRoot_getComments_R_java_util_SortedSet)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstRoot_setComments_java_util_SortedSet 155
typedef void (*func_rhino_ast_AstRoot_setComments_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_addComment_rhino_ast_Comment 156
typedef void (*func_rhino_ast_AstRoot_addComment_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor 157
typedef void (*func_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor 158
typedef void (*func_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstRoot_checkParentLinks 159
typedef void (*func_rhino_ast_AstRoot_checkParentLinks)(jcontext ctx, jobject self);

void mark_rhino_ast_AstRoot(jobject object, jint mark, jint depth);
void clinit_rhino_ast_AstRoot(jcontext ctx);
void init_rhino_ast_AstRoot(jcontext ctx, jobject self);
void init_rhino_ast_AstRoot_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_AstRoot_getComments_R_java_util_SortedSet(jcontext ctx, jobject self);
void M_rhino_ast_AstRoot_setComments_java_util_SortedSet(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_AstRoot_addComment_rhino_ast_Comment(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_AstRoot_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_AstRoot_debugPrint_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_AstRoot_checkParentLinks(jcontext ctx, jobject self);
jbool SM_rhino_ast_AstRoot_lambda$checkParentLinks$1_rhino_ast_AstNode_R_boolean(jcontext ctx, jobject param0);
jint SM_rhino_ast_AstRoot_lambda$addComment$0_rhino_ast_Comment_rhino_ast_Comment_R_int(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
