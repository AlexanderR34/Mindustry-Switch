#ifndef HEADER_rhino_ast_Name
#define HEADER_rhino_ast_Name

#include "Clearwing.h"
#include "rhino/ast/AstNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_Name {
	rhino_ast_AstNode parent;
	jref F_identifier;
	jref F_scope;
} rhino_ast_Name;

extern Class class_rhino_ast_Name;


#define VTABLE_rhino_ast_Name_hashCode_R_int 0
typedef jint (*func_rhino_ast_Name_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_Name_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_Name_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_Name_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_Name_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_finalize 5
typedef void (*func_rhino_ast_Name_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_notify 6
typedef void (*func_rhino_ast_Name_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_notifyAll 7
typedef void (*func_rhino_ast_Name_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_wait 8
typedef void (*func_rhino_ast_Name_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_wait_long 9
typedef void (*func_rhino_ast_Name_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_Name_wait_long_int 10
typedef void (*func_rhino_ast_Name_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_Name_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_ast_Name_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_ast_Name_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_ast_Name_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getType_R_int 14
typedef jint (*func_rhino_ast_Name_getType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setType_int_R_rhino_Node 15
typedef jobject (*func_rhino_ast_Name_setType_int_R_rhino_Node)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_getJsDoc_R_java_lang_String 16
typedef jobject (*func_rhino_ast_Name_getJsDoc_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getJsDocNode_R_rhino_ast_Comment 17
typedef jobject (*func_rhino_ast_Name_getJsDocNode_R_rhino_ast_Comment)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setJsDocNode_rhino_ast_Comment 18
typedef void (*func_rhino_ast_Name_setJsDocNode_rhino_ast_Comment)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_hasChildren_R_boolean 19
typedef jbool (*func_rhino_ast_Name_hasChildren_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getFirstChild_R_rhino_Node 20
typedef jobject (*func_rhino_ast_Name_getFirstChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getLastChild_R_rhino_Node 21
typedef jobject (*func_rhino_ast_Name_getLastChild_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getNext_R_rhino_Node 22
typedef jobject (*func_rhino_ast_Name_getNext_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getChildBefore_rhino_Node_R_rhino_Node 23
typedef jobject (*func_rhino_ast_Name_getChildBefore_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_getLastSibling_R_rhino_Node 24
typedef jobject (*func_rhino_ast_Name_getLastSibling_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_addChildToFront_rhino_Node 25
typedef void (*func_rhino_ast_Name_addChildToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_addChildToBack_rhino_Node 26
typedef void (*func_rhino_ast_Name_addChildToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_addChildrenToFront_rhino_Node 27
typedef void (*func_rhino_ast_Name_addChildrenToFront_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_addChildrenToBack_rhino_Node 28
typedef void (*func_rhino_ast_Name_addChildrenToBack_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_addChildBefore_rhino_Node_rhino_Node 29
typedef void (*func_rhino_ast_Name_addChildBefore_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Name_addChildAfter_rhino_Node_rhino_Node 30
typedef void (*func_rhino_ast_Name_addChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Name_removeChild_rhino_Node 31
typedef void (*func_rhino_ast_Name_removeChild_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_replaceChild_rhino_Node_rhino_Node 32
typedef void (*func_rhino_ast_Name_replaceChild_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Name_replaceChildAfter_rhino_Node_rhino_Node 33
typedef void (*func_rhino_ast_Name_replaceChildAfter_rhino_Node_rhino_Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Name_removeChildren 34
typedef void (*func_rhino_ast_Name_removeChildren)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_lookupProperty_int_R_rhino_Node$PropListItem 35
typedef jobject (*func_rhino_ast_Name_lookupProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_ensureProperty_int_R_rhino_Node$PropListItem 36
typedef jobject (*func_rhino_ast_Name_ensureProperty_int_R_rhino_Node$PropListItem)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_removeProp_int 37
typedef void (*func_rhino_ast_Name_removeProp_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_getProp_int_R_java_lang_Object 38
typedef jobject (*func_rhino_ast_Name_getProp_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_getIntProp_int_int_R_int 39
typedef jint (*func_rhino_ast_Name_getIntProp_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_Name_getExistingIntProp_int_R_int 40
typedef jint (*func_rhino_ast_Name_getExistingIntProp_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_putProp_int_java_lang_Object 41
typedef void (*func_rhino_ast_Name_putProp_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ast_Name_putIntProp_int_int 42
typedef void (*func_rhino_ast_Name_putIntProp_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_Name_getLineno_R_int 43
typedef jint (*func_rhino_ast_Name_getLineno_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setLineno_int 44
typedef void (*func_rhino_ast_Name_setLineno_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_getDouble_R_double 45
typedef jdouble (*func_rhino_ast_Name_getDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setDouble_double 46
typedef void (*func_rhino_ast_Name_setDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_rhino_ast_Name_getString_R_java_lang_String 47
typedef jobject (*func_rhino_ast_Name_getString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setString_java_lang_String 48
typedef void (*func_rhino_ast_Name_setString_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_getScope_R_rhino_ast_Scope 49
typedef jobject (*func_rhino_ast_Name_getScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setScope_rhino_ast_Scope 50
typedef void (*func_rhino_ast_Name_setScope_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_labelId_R_int 51
typedef jint (*func_rhino_ast_Name_labelId_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_labelId_int 52
typedef void (*func_rhino_ast_Name_labelId_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_hasConsistentReturnUsage_R_boolean 53
typedef jbool (*func_rhino_ast_Name_hasConsistentReturnUsage_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckIf_R_int 54
typedef jint (*func_rhino_ast_Name_endCheckIf_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckSwitch_R_int 55
typedef jint (*func_rhino_ast_Name_endCheckSwitch_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckTry_R_int 56
typedef jint (*func_rhino_ast_Name_endCheckTry_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckLoop_R_int 57
typedef jint (*func_rhino_ast_Name_endCheckLoop_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckBlock_R_int 58
typedef jint (*func_rhino_ast_Name_endCheckBlock_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckLabel_R_int 59
typedef jint (*func_rhino_ast_Name_endCheckLabel_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheckBreak_R_int 60
typedef jint (*func_rhino_ast_Name_endCheckBreak_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_endCheck_R_int 61
typedef jint (*func_rhino_ast_Name_endCheck_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_hasSideEffects_R_boolean 62
typedef jbool (*func_rhino_ast_Name_hasSideEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_resetTargets 63
typedef void (*func_rhino_ast_Name_resetTargets)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_resetTargets_r 64
typedef void (*func_rhino_ast_Name_resetTargets_r)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_toString_rhino_ObjToIntMap_java_lang_StringBuilder 65
typedef void (*func_rhino_ast_Name_toString_rhino_ObjToIntMap_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Name_toStringTree_rhino_ast_ScriptNode_R_java_lang_String 66
typedef jobject (*func_rhino_ast_Name_toStringTree_rhino_ast_ScriptNode_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_compareTo_java_lang_Object_R_int 67
typedef jint (*func_rhino_ast_Name_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_getPosition_R_int 68
typedef jint (*func_rhino_ast_Name_getPosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setPosition_int 69
typedef void (*func_rhino_ast_Name_setPosition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_getAbsolutePosition_R_int 70
typedef jint (*func_rhino_ast_Name_getAbsolutePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getLength_R_int 71
typedef jint (*func_rhino_ast_Name_getLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setLength_int 72
typedef void (*func_rhino_ast_Name_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_setBounds_int_int 73
typedef void (*func_rhino_ast_Name_setBounds_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_rhino_ast_Name_setRelative_int 74
typedef void (*func_rhino_ast_Name_setRelative_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_getParent_R_rhino_ast_AstNode 75
typedef jobject (*func_rhino_ast_Name_getParent_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setParent_rhino_ast_AstNode 76
typedef void (*func_rhino_ast_Name_setParent_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_addChild_rhino_ast_AstNode 77
typedef void (*func_rhino_ast_Name_addChild_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_getAstRoot_R_rhino_ast_AstRoot 78
typedef jobject (*func_rhino_ast_Name_getAstRoot_R_rhino_ast_AstRoot)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_toSource_int_R_java_lang_String 79
typedef jobject (*func_rhino_ast_Name_toSource_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_toSource_R_java_lang_String 80
typedef jobject (*func_rhino_ast_Name_toSource_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_makeIndent_int_R_java_lang_String 81
typedef jobject (*func_rhino_ast_Name_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Name_shortName_R_java_lang_String 82
typedef jobject (*func_rhino_ast_Name_shortName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_visit_rhino_ast_NodeVisitor 83
typedef void (*func_rhino_ast_Name_visit_rhino_ast_NodeVisitor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_assertNotNull_java_lang_Object 84
typedef void (*func_rhino_ast_Name_assertNotNull_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_printList_java_util_List_java_lang_StringBuilder 85
typedef void (*func_rhino_ast_Name_printList_java_util_List_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ast_Name_getEnclosingFunction_R_rhino_ast_FunctionNode 86
typedef jobject (*func_rhino_ast_Name_getEnclosingFunction_R_rhino_ast_FunctionNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getEnclosingScope_R_rhino_ast_Scope 87
typedef jobject (*func_rhino_ast_Name_getEnclosingScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_compareTo_rhino_ast_AstNode_R_int 88
typedef jint (*func_rhino_ast_Name_compareTo_rhino_ast_AstNode_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_depth_R_int 89
typedef jint (*func_rhino_ast_Name_depth_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_debugPrint_R_java_lang_String 90
typedef jobject (*func_rhino_ast_Name_debugPrint_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_getInlineComment_R_rhino_ast_AstNode 91
typedef jobject (*func_rhino_ast_Name_getInlineComment_R_rhino_ast_AstNode)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setInlineComment_rhino_ast_AstNode 92
typedef void (*func_rhino_ast_Name_setInlineComment_rhino_ast_AstNode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String 93
typedef jobject (*func_rhino_ast_Name_getIdentifier_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_setIdentifier_java_lang_String 94
typedef void (*func_rhino_ast_Name_setIdentifier_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Name_getDefiningScope_R_rhino_ast_Scope 95
typedef jobject (*func_rhino_ast_Name_getDefiningScope_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_isLocalName_R_boolean 96
typedef jbool (*func_rhino_ast_Name_isLocalName_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Name_length_R_int 97
typedef jint (*func_rhino_ast_Name_length_R_int)(jcontext ctx, jobject self);

void mark_rhino_ast_Name(jobject object, jint mark, jint depth);
void clinit_rhino_ast_Name(jcontext ctx);
void init_rhino_ast_Name(jcontext ctx, jobject self);
void init_rhino_ast_Name_int(jcontext ctx, jobject self, jint param0);
void init_rhino_ast_Name_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_rhino_ast_Name_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void init_rhino_ast_Name_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_ast_Name_getIdentifier_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_Name_setIdentifier_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_rhino_ast_Name_setScope_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_Name_getScope_R_rhino_ast_Scope(jcontext ctx, jobject self);
jobject M_rhino_ast_Name_getDefiningScope_R_rhino_ast_Scope(jcontext ctx, jobject self);
jbool M_rhino_ast_Name_isLocalName_R_boolean(jcontext ctx, jobject self);
jint M_rhino_ast_Name_length_R_int(jcontext ctx, jobject self);
jobject M_rhino_ast_Name_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_Name_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
