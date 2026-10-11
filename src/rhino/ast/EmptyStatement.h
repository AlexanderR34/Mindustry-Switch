#ifndef HEADER_rhino_ast_EmptyStatement
#define HEADER_rhino_ast_EmptyStatement

#include "Clearwing.h"
#include "rhino/ast/AstNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_EmptyStatement {
	rhino_ast_AstNode parent;
} rhino_ast_EmptyStatement;

extern Class class_rhino_ast_EmptyStatement;


#define VTABLE_rhino_ast_EmptyStatement_hashCode_R_int 0
typedef jint (*func_rhino_ast_EmptyStatement_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_EmptyStatement_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_EmptyStatement_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_EmptyStatement_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_EmptyStatement_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_finalize 5
typedef void (*func_rhino_ast_EmptyStatement_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_notify 6
typedef void (*func_rhino_ast_EmptyStatement_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_notifyAll 7
typedef void (*func_rhino_ast_EmptyStatement_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_wait 8
typedef void (*func_rhino_ast_EmptyStatement_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_wait_long 9
typedef void (*func_rhino_ast_EmptyStatement_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_EmptyStatement_wait_long_int 10
typedef void (*func_rhino_ast_EmptyStatement_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_EmptyStatement_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_EmptyStatement_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_EmptyStatement_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_EmptyStatement_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getType_R_int 14
typedef jint (*func_rhino_ast_EmptyStatement_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_EmptyStatement_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_EmptyStatement_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_EmptyStatement_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_EmptyStatement_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_EmptyStatement_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_EmptyStatement_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_EmptyStatement_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_EmptyStatement_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_EmptyStatement_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_EmptyStatement_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_EmptyStatement_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_EmptyStatement_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_EmptyStatement_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_EmptyStatement_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_EmptyStatement_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_EmptyStatement_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_EmptyStatement_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_EmptyStatement_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_EmptyStatement_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_removeChildren 34
typedef void (*func_rhino_ast_EmptyStatement_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_EmptyStatement_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_EmptyStatement_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_removeProp_int 37
typedef void (*func_rhino_ast_EmptyStatement_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_EmptyStatement_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_EmptyStatement_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_EmptyStatement_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_EmptyStatement_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_EmptyStatement_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_putIntProp_int_int 42
typedef void (*func_rhino_ast_EmptyStatement_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_EmptyStatement_getLineno_R_int 43
typedef jint (*func_rhino_ast_EmptyStatement_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setLineno_int 44
typedef void (*func_rhino_ast_EmptyStatement_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_EmptyStatement_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setDouble_double 46
typedef void (*func_rhino_ast_EmptyStatement_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_EmptyStatement_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_EmptyStatement_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setString_java_lang_String 48
typedef void (*func_rhino_ast_EmptyStatement_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_EmptyStatement_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_EmptyStatement_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_labelId_R_int 51
typedef jint (*func_rhino_ast_EmptyStatement_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_labelId_int 52
typedef void (*func_rhino_ast_EmptyStatement_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_EmptyStatement_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_EmptyStatement_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_EmptyStatement_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_EmptyStatement_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_EmptyStatement_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_EmptyStatement_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_EmptyStatement_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_EmptyStatement_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_endCheck_R_int 61
typedef jint (*func_rhino_ast_EmptyStatement_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_EmptyStatement_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_resetTargets 63
typedef void (*func_rhino_ast_EmptyStatement_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_resetTargets_r 64
typedef void (*func_rhino_ast_EmptyStatement_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_EmptyStatement_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_EmptyStatement_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_EmptyStatement_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_getPosition_R_int 68
typedef jint (*func_rhino_ast_EmptyStatement_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setPosition_int 69
typedef void (*func_rhino_ast_EmptyStatement_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_EmptyStatement_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getLength_R_int 71
typedef jint (*func_rhino_ast_EmptyStatement_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setLength_int 72
typedef void (*func_rhino_ast_EmptyStatement_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_setBounds_int_int 73
typedef void (*func_rhino_ast_EmptyStatement_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_EmptyStatement_setRelative_int 74
typedef void (*func_rhino_ast_EmptyStatement_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_EmptyStatement_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_EmptyStatement_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_EmptyStatement_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_EmptyStatement_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_EmptyStatement_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_EmptyStatement_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_EmptyStatement_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_EmptyStatement_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_EmptyStatement_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_EmptyStatement_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_EmptyStatement_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_EmptyStatement_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_EmptyStatement_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_EmptyStatement_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_EmptyStatement_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_EmptyStatement_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_EmptyStatement_depth_R_int 89
typedef jint (*func_rhino_ast_EmptyStatement_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_EmptyStatement_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_EmptyStatement_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_EmptyStatement_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_EmptyStatement_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ast_EmptyStatement(jobject object, jint mark, jint depth);
void clinit_rhino_ast_EmptyStatement(jcontext ctx);
void init_rhino_ast_EmptyStatement(jcontext ctx, jobject self);
void init_rhino_ast_EmptyStatement_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_EmptyStatement_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_ast_EmptyStatement_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_EmptyStatement_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
