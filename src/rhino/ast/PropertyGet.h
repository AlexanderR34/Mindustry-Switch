#ifndef HEADER_rhino_ast_PropertyGet
#define HEADER_rhino_ast_PropertyGet

#include "Clearwing.h"
#include "rhino/ast/InfixExpression.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_PropertyGet {
	rhino_ast_InfixExpression parent;
} rhino_ast_PropertyGet;

extern Class class_rhino_ast_PropertyGet;


#define VTABLE_rhino_ast_PropertyGet_hashCode_R_int 0
typedef jint (*func_rhino_ast_PropertyGet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_PropertyGet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_PropertyGet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_PropertyGet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_PropertyGet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_finalize 5
typedef void (*func_rhino_ast_PropertyGet_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_notify 6
typedef void (*func_rhino_ast_PropertyGet_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_notifyAll 7
typedef void (*func_rhino_ast_PropertyGet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_wait 8
typedef void (*func_rhino_ast_PropertyGet_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_wait_long 9
typedef void (*func_rhino_ast_PropertyGet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_PropertyGet_wait_long_int 10
typedef void (*func_rhino_ast_PropertyGet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_PropertyGet_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_PropertyGet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_PropertyGet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_PropertyGet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getType_R_int 14
typedef jint (*func_rhino_ast_PropertyGet_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_PropertyGet_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_PropertyGet_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_PropertyGet_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_PropertyGet_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_PropertyGet_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_PropertyGet_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_PropertyGet_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_PropertyGet_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_PropertyGet_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_PropertyGet_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_PropertyGet_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_PropertyGet_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_PropertyGet_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_PropertyGet_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_PropertyGet_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_PropertyGet_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_PropertyGet_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_PropertyGet_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_PropertyGet_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_removeChildren 34
typedef void (*func_rhino_ast_PropertyGet_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_PropertyGet_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_PropertyGet_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_removeProp_int 37
typedef void (*func_rhino_ast_PropertyGet_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_PropertyGet_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_PropertyGet_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_PropertyGet_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_PropertyGet_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_PropertyGet_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_putIntProp_int_int 42
typedef void (*func_rhino_ast_PropertyGet_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_PropertyGet_getLineno_R_int 43
typedef jint (*func_rhino_ast_PropertyGet_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setLineno_int 44
typedef void (*func_rhino_ast_PropertyGet_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_PropertyGet_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setDouble_double 46
typedef void (*func_rhino_ast_PropertyGet_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_PropertyGet_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_PropertyGet_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setString_java_lang_String 48
typedef void (*func_rhino_ast_PropertyGet_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_PropertyGet_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_PropertyGet_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_labelId_R_int 51
typedef jint (*func_rhino_ast_PropertyGet_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_labelId_int 52
typedef void (*func_rhino_ast_PropertyGet_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_PropertyGet_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_PropertyGet_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_PropertyGet_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_PropertyGet_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_PropertyGet_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_PropertyGet_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_PropertyGet_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_PropertyGet_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_endCheck_R_int 61
typedef jint (*func_rhino_ast_PropertyGet_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_PropertyGet_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_resetTargets 63
typedef void (*func_rhino_ast_PropertyGet_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_resetTargets_r 64
typedef void (*func_rhino_ast_PropertyGet_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_PropertyGet_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_PropertyGet_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_PropertyGet_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getPosition_R_int 68
typedef jint (*func_rhino_ast_PropertyGet_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setPosition_int 69
typedef void (*func_rhino_ast_PropertyGet_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_PropertyGet_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getLength_R_int 71
typedef jint (*func_rhino_ast_PropertyGet_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setLength_int 72
typedef void (*func_rhino_ast_PropertyGet_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_setBounds_int_int 73
typedef void (*func_rhino_ast_PropertyGet_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_PropertyGet_setRelative_int 74
typedef void (*func_rhino_ast_PropertyGet_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_PropertyGet_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_PropertyGet_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_PropertyGet_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_PropertyGet_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_PropertyGet_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_PropertyGet_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_PropertyGet_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_PropertyGet_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_PropertyGet_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_PropertyGet_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_PropertyGet_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_PropertyGet_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_PropertyGet_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_PropertyGet_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_depth_R_int 89
typedef jint (*func_rhino_ast_PropertyGet_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_PropertyGet_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_PropertyGet_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_PropertyGet_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode 93
typedef void (*func_rhino_ast_PropertyGet_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_PropertyGet_getOperator_R_int 94
typedef jint (*func_rhino_ast_PropertyGet_getOperator_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setOperator_int 95
typedef void (*func_rhino_ast_PropertyGet_setOperator_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getLeft_R_rhino_ast_AstNode 96
typedef jobject (*func_rhino_ast_PropertyGet_getLeft_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setLeft_rhino_ast_AstNode 97
typedef void (*func_rhino_ast_PropertyGet_setLeft_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getRight_R_rhino_ast_AstNode 98
typedef jobject (*func_rhino_ast_PropertyGet_getRight_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setRight_rhino_ast_AstNode 99
typedef void (*func_rhino_ast_PropertyGet_setRight_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getOperatorPosition_R_int 100
typedef jint (*func_rhino_ast_PropertyGet_getOperatorPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setOperatorPosition_int 101
typedef void (*func_rhino_ast_PropertyGet_setOperatorPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode 102
typedef jobject (*func_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setTarget_rhino_ast_AstNode 103
typedef void (*func_rhino_ast_PropertyGet_setTarget_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name 104
typedef jobject (*func_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_PropertyGet_setProperty_rhino_ast_Name 105
typedef void (*func_rhino_ast_PropertyGet_setProperty_rhino_ast_Name)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ast_PropertyGet(jobject object, jint mark, jint depth);
void clinit_rhino_ast_PropertyGet(jcontext ctx);
void init_rhino_ast_PropertyGet(jcontext ctx, jobject self);
void init_rhino_ast_PropertyGet_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_PropertyGet_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_rhino_ast_PropertyGet_int_int_rhino_ast_AstNode_rhino_ast_Name(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
void init_rhino_ast_PropertyGet_rhino_ast_AstNode_rhino_ast_Name(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_rhino_ast_PropertyGet_rhino_ast_AstNode_rhino_ast_Name_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_ast_PropertyGet_getTarget_R_rhino_ast_AstNode(jcontext ctx, jobject self);
void M_rhino_ast_PropertyGet_setTarget_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_PropertyGet_getProperty_R_rhino_ast_Name(jcontext ctx, jobject self);
void M_rhino_ast_PropertyGet_setProperty_rhino_ast_Name(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_PropertyGet_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_PropertyGet_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
