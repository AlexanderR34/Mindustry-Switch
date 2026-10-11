#ifndef HEADER_rhino_ast_RegExpLiteral
#define HEADER_rhino_ast_RegExpLiteral

#include "Clearwing.h"
#include "rhino/ast/AstNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_RegExpLiteral {
	rhino_ast_AstNode parent;
	jref F_value;
	jref F_flags;
} rhino_ast_RegExpLiteral;

extern Class class_rhino_ast_RegExpLiteral;


#define VTABLE_rhino_ast_RegExpLiteral_hashCode_R_int 0
typedef jint (*func_rhino_ast_RegExpLiteral_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_RegExpLiteral_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_RegExpLiteral_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_RegExpLiteral_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_RegExpLiteral_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_finalize 5
typedef void (*func_rhino_ast_RegExpLiteral_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_notify 6
typedef void (*func_rhino_ast_RegExpLiteral_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_notifyAll 7
typedef void (*func_rhino_ast_RegExpLiteral_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_wait 8
typedef void (*func_rhino_ast_RegExpLiteral_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_wait_long 9
typedef void (*func_rhino_ast_RegExpLiteral_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_RegExpLiteral_wait_long_int 10
typedef void (*func_rhino_ast_RegExpLiteral_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_RegExpLiteral_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_RegExpLiteral_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_RegExpLiteral_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_RegExpLiteral_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getType_R_int 14
typedef jint (*func_rhino_ast_RegExpLiteral_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_RegExpLiteral_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_RegExpLiteral_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_RegExpLiteral_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_RegExpLiteral_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_RegExpLiteral_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_RegExpLiteral_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_RegExpLiteral_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_RegExpLiteral_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_RegExpLiteral_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_RegExpLiteral_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_RegExpLiteral_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_RegExpLiteral_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_RegExpLiteral_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_RegExpLiteral_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_RegExpLiteral_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_RegExpLiteral_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_RegExpLiteral_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_RegExpLiteral_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_RegExpLiteral_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_removeChildren 34
typedef void (*func_rhino_ast_RegExpLiteral_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_RegExpLiteral_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_RegExpLiteral_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_removeProp_int 37
typedef void (*func_rhino_ast_RegExpLiteral_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_RegExpLiteral_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_RegExpLiteral_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_RegExpLiteral_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_RegExpLiteral_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_RegExpLiteral_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_putIntProp_int_int 42
typedef void (*func_rhino_ast_RegExpLiteral_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_RegExpLiteral_getLineno_R_int 43
typedef jint (*func_rhino_ast_RegExpLiteral_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setLineno_int 44
typedef void (*func_rhino_ast_RegExpLiteral_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_RegExpLiteral_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setDouble_double 46
typedef void (*func_rhino_ast_RegExpLiteral_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_RegExpLiteral_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_RegExpLiteral_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setString_java_lang_String 48
typedef void (*func_rhino_ast_RegExpLiteral_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_RegExpLiteral_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_RegExpLiteral_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_labelId_R_int 51
typedef jint (*func_rhino_ast_RegExpLiteral_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_labelId_int 52
typedef void (*func_rhino_ast_RegExpLiteral_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_RegExpLiteral_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_RegExpLiteral_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_endCheck_R_int 61
typedef jint (*func_rhino_ast_RegExpLiteral_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_RegExpLiteral_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_resetTargets 63
typedef void (*func_rhino_ast_RegExpLiteral_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_resetTargets_r 64
typedef void (*func_rhino_ast_RegExpLiteral_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_RegExpLiteral_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_RegExpLiteral_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_RegExpLiteral_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_getPosition_R_int 68
typedef jint (*func_rhino_ast_RegExpLiteral_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setPosition_int 69
typedef void (*func_rhino_ast_RegExpLiteral_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_RegExpLiteral_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getLength_R_int 71
typedef jint (*func_rhino_ast_RegExpLiteral_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setLength_int 72
typedef void (*func_rhino_ast_RegExpLiteral_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_setBounds_int_int 73
typedef void (*func_rhino_ast_RegExpLiteral_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_RegExpLiteral_setRelative_int 74
typedef void (*func_rhino_ast_RegExpLiteral_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_RegExpLiteral_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_RegExpLiteral_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_RegExpLiteral_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_RegExpLiteral_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_RegExpLiteral_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_RegExpLiteral_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_RegExpLiteral_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_RegExpLiteral_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_RegExpLiteral_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_RegExpLiteral_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_RegExpLiteral_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_RegExpLiteral_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_RegExpLiteral_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_RegExpLiteral_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_RegExpLiteral_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_RegExpLiteral_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_depth_R_int 89
typedef jint (*func_rhino_ast_RegExpLiteral_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_RegExpLiteral_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_RegExpLiteral_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_RegExpLiteral_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_getValue_R_java_lang_String 93
typedef jobject (*func_rhino_ast_RegExpLiteral_getValue_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setValue_java_lang_String 94
typedef void (*func_rhino_ast_RegExpLiteral_setValue_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String 95
typedef jobject (*func_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_RegExpLiteral_setFlags_java_lang_String 96
typedef void (*func_rhino_ast_RegExpLiteral_setFlags_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ast_RegExpLiteral(jobject object, jint mark, jint depth);
void clinit_rhino_ast_RegExpLiteral(jcontext ctx);
void init_rhino_ast_RegExpLiteral(jcontext ctx, jobject self);
void init_rhino_ast_RegExpLiteral_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_RegExpLiteral_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_rhino_ast_RegExpLiteral_getValue_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_RegExpLiteral_setValue_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_RegExpLiteral_setFlags_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_RegExpLiteral_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_RegExpLiteral_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
