#ifndef HEADER_rhino_ast_EmptyExpression
#define HEADER_rhino_ast_EmptyExpression

#include "Clearwing.h"
#include "rhino/ast/AstNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_EmptyExpression {
	rhino_ast_AstNode parent;
} rhino_ast_EmptyExpression;

extern Class class_rhino_ast_EmptyExpression;


#define VTABLE_rhino_ast_EmptyExpression_hashCode_R_int 0
typedef jint (*func_rhino_ast_EmptyExpression_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_EmptyExpression_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_EmptyExpression_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_EmptyExpression_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_EmptyExpression_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_finalize 5
typedef void (*func_rhino_ast_EmptyExpression_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_notify 6
typedef void (*func_rhino_ast_EmptyExpression_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_notifyAll 7
typedef void (*func_rhino_ast_EmptyExpression_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_wait 8
typedef void (*func_rhino_ast_EmptyExpression_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_wait_long 9
typedef void (*func_rhino_ast_EmptyExpression_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_EmptyExpression_wait_long_int 10
typedef void (*func_rhino_ast_EmptyExpression_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_EmptyExpression_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_EmptyExpression_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_EmptyExpression_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_EmptyExpression_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getType_R_int 14
typedef jint (*func_rhino_ast_EmptyExpression_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_EmptyExpression_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_EmptyExpression_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_EmptyExpression_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_EmptyExpression_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_EmptyExpression_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_EmptyExpression_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_EmptyExpression_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_EmptyExpression_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_EmptyExpression_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_EmptyExpression_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_EmptyExpression_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_EmptyExpression_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_EmptyExpression_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_EmptyExpression_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_EmptyExpression_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_EmptyExpression_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_EmptyExpression_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_EmptyExpression_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_EmptyExpression_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_removeChildren 34
typedef void (*func_rhino_ast_EmptyExpression_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_EmptyExpression_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_EmptyExpression_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_removeProp_int 37
typedef void (*func_rhino_ast_EmptyExpression_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_EmptyExpression_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_EmptyExpression_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_EmptyExpression_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_EmptyExpression_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_EmptyExpression_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_putIntProp_int_int 42
typedef void (*func_rhino_ast_EmptyExpression_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_EmptyExpression_getLineno_R_int 43
typedef jint (*func_rhino_ast_EmptyExpression_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setLineno_int 44
typedef void (*func_rhino_ast_EmptyExpression_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_EmptyExpression_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setDouble_double 46
typedef void (*func_rhino_ast_EmptyExpression_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_EmptyExpression_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_EmptyExpression_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setString_java_lang_String 48
typedef void (*func_rhino_ast_EmptyExpression_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_EmptyExpression_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_EmptyExpression_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_labelId_R_int 51
typedef jint (*func_rhino_ast_EmptyExpression_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_labelId_int 52
typedef void (*func_rhino_ast_EmptyExpression_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_EmptyExpression_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_EmptyExpression_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_EmptyExpression_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_EmptyExpression_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_EmptyExpression_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_EmptyExpression_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_EmptyExpression_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_EmptyExpression_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_endCheck_R_int 61
typedef jint (*func_rhino_ast_EmptyExpression_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_EmptyExpression_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_resetTargets 63
typedef void (*func_rhino_ast_EmptyExpression_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_resetTargets_r 64
typedef void (*func_rhino_ast_EmptyExpression_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_EmptyExpression_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_EmptyExpression_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_EmptyExpression_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_getPosition_R_int 68
typedef jint (*func_rhino_ast_EmptyExpression_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setPosition_int 69
typedef void (*func_rhino_ast_EmptyExpression_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_EmptyExpression_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getLength_R_int 71
typedef jint (*func_rhino_ast_EmptyExpression_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setLength_int 72
typedef void (*func_rhino_ast_EmptyExpression_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_setBounds_int_int 73
typedef void (*func_rhino_ast_EmptyExpression_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_EmptyExpression_setRelative_int 74
typedef void (*func_rhino_ast_EmptyExpression_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_EmptyExpression_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_EmptyExpression_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_EmptyExpression_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_EmptyExpression_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_EmptyExpression_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_EmptyExpression_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_EmptyExpression_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyExpression_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_EmptyExpression_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_EmptyExpression_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_EmptyExpression_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_EmptyExpression_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyExpression_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_EmptyExpression_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_EmptyExpression_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_EmptyExpression_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyExpression_depth_R_int 89
typedef jint (*func_rhino_ast_EmptyExpression_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_EmptyExpression_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_EmptyExpression_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyExpression_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_EmptyExpression_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ast_EmptyExpression(jobject object, jint mark, jint depth);
void clinit_rhino_ast_EmptyExpression(jcontext ctx);
void init_rhino_ast_EmptyExpression(jcontext ctx, jobject self);
void init_rhino_ast_EmptyExpression_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_EmptyExpression_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_ast_EmptyExpression_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_EmptyExpression_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
