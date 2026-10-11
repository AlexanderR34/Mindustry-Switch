#include "rhino/ast/LetNode.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/VariableDeclaration.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/LetNode.h"
#include "java/lang/Iterable.h"
#include "java/util/List.h"
#include "rhino/ast/Scope.h"

extern "C" {


void mark_rhino_ast_LetNode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ast_Scope(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ast_LetNode *) object;
	if (self->F_variables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variables)->clazz)->markFunction)((jobject) self->F_variables, mark, depth + 1);
	if (self->F_body)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_body)->clazz)->markFunction)((jobject) self->F_body, mark, depth + 1);
}

void clinit_rhino_ast_LetNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_Scope(ctx);
}

void init_rhino_ast_LetNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_LetNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_rhino_ast_Scope(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(24);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(27);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (159);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_LetNode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_LetNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(34);
	init_rhino_ast_Scope_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(23);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(24);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(27);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (159);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_LetNode_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_LetNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(38);
	init_rhino_ast_Scope_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(23);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(24);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(27);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (159);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_LetNode_getVariables_R_rhino_ast_VariableDeclaration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:getVariables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_variables;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_LetNode_setVariables_rhino_ast_VariableDeclaration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:setVariables", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	((func_rhino_ast_LetNode_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_LetNode_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_variables = (jref) (frame[1].o);
	LINE_NUMBER(55);
	((func_rhino_ast_VariableDeclaration_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_VariableDeclaration_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:getBody", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_body;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_LetNode_setBody_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_body = (jref) (frame[1].o);
	LINE_NUMBER(77);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(78);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_ast_LetNode_getLp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:getLp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_lp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_LetNode_setLp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:setLp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(92);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_LetNode_getRp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:getRp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_rp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_LetNode_setRp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:setRp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(106);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_rp = (frame[1].i);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_LetNode_setParens_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:setParens", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(114);
	((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_rp = (frame[2].i);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_LetNode_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:toSource", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_rhino_ast_LetNode_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_LetNode_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(120);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"let ("_j))));
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_variables;
	sp[1].o = (jobject)((func_rhino_ast_VariableDeclaration_getVariables_R_java_util_List) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_VariableDeclaration_getVariables_R_java_util_List])(ctx, sp[1].o);
	((func_rhino_ast_LetNode_printList_java_util_List_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_LetNode_printList_java_util_List_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8") "_j))));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_body;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_body;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_LetNode_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/LetNode:visit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_variables;
	((func_rhino_ast_VariableDeclaration_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_VariableDeclaration_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_body;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((rhino_ast_LetNode *) NULL_CHECK((frame[0].o)))->F_body;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_LetNode[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_Node_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_Node_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_rhino_Node_getType_R_int,
	(void *) M_rhino_Node_setType_int_R_rhino_Node,
	(void *) M_rhino_Node_getJsDoc_R_java_lang_String,
	(void *) M_rhino_Node_getJsDocNode_R_rhino_ast_Comment,
	(void *) M_rhino_Node_setJsDocNode_rhino_ast_Comment,
	(void *) M_rhino_Node_hasChildren_R_boolean,
	(void *) M_rhino_Node_getFirstChild_R_rhino_Node,
	(void *) M_rhino_Node_getLastChild_R_rhino_Node,
	(void *) M_rhino_Node_getNext_R_rhino_Node,
	(void *) M_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node,
	(void *) M_rhino_Node_getLastSibling_R_rhino_Node,
	(void *) M_rhino_Node_addChildToFront_rhino_Node,
	(void *) M_rhino_Node_addChildToBack_rhino_Node,
	(void *) M_rhino_Node_addChildrenToFront_rhino_Node,
	(void *) M_rhino_Node_addChildrenToBack_rhino_Node,
	(void *) M_rhino_Node_addChildBefore_rhino_Node_rhino_Node,
	(void *) M_rhino_Node_addChildAfter_rhino_Node_rhino_Node,
	(void *) M_rhino_Node_removeChild_rhino_Node,
	(void *) M_rhino_Node_replaceChild_rhino_Node_rhino_Node,
	(void *) M_rhino_Node_replaceChildAfter_rhino_Node_rhino_Node,
	(void *) M_rhino_Node_removeChildren,
	(void *) M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem,
	(void *) M_rhino_Node_ensureProperty_int_R_rhino_Node$PropListItem,
	(void *) M_rhino_Node_removeProp_int,
	(void *) M_rhino_Node_getProp_int_R_java_lang_Object,
	(void *) M_rhino_Node_getIntProp_int_int_R_int,
	(void *) M_rhino_Node_getExistingIntProp_int_R_int,
	(void *) M_rhino_Node_putProp_int_java_lang_Object,
	(void *) M_rhino_Node_putIntProp_int_int,
	(void *) M_rhino_ast_AstNode_getLineno_R_int,
	(void *) M_rhino_Node_setLineno_int,
	(void *) M_rhino_Node_getDouble_R_double,
	(void *) M_rhino_Node_setDouble_double,
	(void *) M_rhino_Node_getString_R_java_lang_String,
	(void *) M_rhino_Node_setString_java_lang_String,
	(void *) M_rhino_Node_getScope_R_rhino_ast_Scope,
	(void *) M_rhino_Node_setScope_rhino_ast_Scope,
	(void *) M_rhino_Node_labelId_R_int,
	(void *) M_rhino_Node_labelId_int,
	(void *) M_rhino_Node_hasConsistentReturnUsage_R_boolean,
	(void *) M_rhino_Node_endCheckIf_R_int,
	(void *) M_rhino_Node_endCheckSwitch_R_int,
	(void *) M_rhino_Node_endCheckTry_R_int,
	(void *) M_rhino_Node_endCheckLoop_R_int,
	(void *) M_rhino_Node_endCheckBlock_R_int,
	(void *) M_rhino_Node_endCheckLabel_R_int,
	(void *) M_rhino_Node_endCheckBreak_R_int,
	(void *) M_rhino_Node_endCheck_R_int,
	(void *) M_rhino_ast_AstNode_hasSideEffects_R_boolean,
	(void *) M_rhino_Node_resetTargets,
	(void *) M_rhino_Node_resetTargets_r,
	(void *) M_rhino_Node_toString_rhino_ObjToIntMap_java_lang_StringBuilder,
	(void *) M_rhino_Node_toStringTree_rhino_ast_ScriptNode_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_compareTo_java_lang_Object_R_int,
	(void *) M_rhino_ast_AstNode_getPosition_R_int,
	(void *) M_rhino_ast_AstNode_setPosition_int,
	(void *) M_rhino_ast_AstNode_getAbsolutePosition_R_int,
	(void *) M_rhino_ast_AstNode_getLength_R_int,
	(void *) M_rhino_ast_AstNode_setLength_int,
	(void *) M_rhino_ast_AstNode_setBounds_int_int,
	(void *) M_rhino_ast_AstNode_setRelative_int,
	(void *) M_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setParent_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_addChild_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_getAstRoot_R_rhino_ast_AstRoot,
	(void *) M_rhino_ast_LetNode_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_LetNode_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump,
	(void *) M_rhino_ast_Jump_setJumpStatement_rhino_ast_Jump,
	(void *) M_rhino_ast_Jump_getDefault_R_rhino_Node,
	(void *) M_rhino_ast_Jump_setDefault_rhino_Node,
	(void *) M_rhino_ast_Jump_getFinally_R_rhino_Node,
	(void *) M_rhino_ast_Jump_setFinally_rhino_Node,
	(void *) M_rhino_ast_Jump_getLoop_R_rhino_ast_Jump,
	(void *) M_rhino_ast_Jump_setLoop_rhino_ast_Jump,
	(void *) M_rhino_ast_Jump_getContinue_R_rhino_Node,
	(void *) M_rhino_ast_Jump_setContinue_rhino_Node,
	(void *) M_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_Scope_setParentScope_rhino_ast_Scope,
	(void *) M_rhino_ast_Scope_clearParentScope,
	(void *) M_rhino_ast_Scope_getChildScopes_R_java_util_List,
	(void *) M_rhino_ast_Scope_addChildScope_rhino_ast_Scope,
	(void *) M_rhino_ast_Scope_replaceWith_rhino_ast_Scope,
	(void *) M_rhino_ast_Scope_getTop_R_rhino_ast_ScriptNode,
	(void *) M_rhino_ast_Scope_setTop_rhino_ast_ScriptNode,
	(void *) M_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope,
	(void *) M_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol,
	(void *) M_rhino_ast_Scope_putSymbol_rhino_ast_Symbol,
	(void *) M_rhino_ast_Scope_getSymbolTable_R_java_util_Map,
	(void *) M_rhino_ast_Scope_setSymbolTable_java_util_Map,
	(void *) M_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map,
	(void *) M_rhino_ast_Scope_getStatements_R_java_util_List,
	(void *) M_rhino_ast_LetNode_getVariables_R_rhino_ast_VariableDeclaration,
	(void *) M_rhino_ast_LetNode_setVariables_rhino_ast_VariableDeclaration,
	(void *) M_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_LetNode_setBody_rhino_ast_AstNode,
	(void *) M_rhino_ast_LetNode_getLp_R_int,
	(void *) M_rhino_ast_LetNode_setLp_int,
	(void *) M_rhino_ast_LetNode_getRp_R_int,
	(void *) M_rhino_ast_LetNode_setRp_int,
	(void *) M_rhino_ast_LetNode_setParens_int_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "getType", "()I" },
	{ "setType", "(I)Lrhino/Node;" },
	{ "getJsDoc", "()Ljava/lang/String;" },
	{ "getJsDocNode", "()Lrhino/ast/Comment;" },
	{ "setJsDocNode", "(Lrhino/ast/Comment;)V" },
	{ "hasChildren", "()Z" },
	{ "getFirstChild", "()Lrhino/Node;" },
	{ "getLastChild", "()Lrhino/Node;" },
	{ "getNext", "()Lrhino/Node;" },
	{ "getChildBefore", "(Lrhino/Node;)Lrhino/Node;" },
	{ "getLastSibling", "()Lrhino/Node;" },
	{ "addChildToFront", "(Lrhino/Node;)V" },
	{ "addChildToBack", "(Lrhino/Node;)V" },
	{ "addChildrenToFront", "(Lrhino/Node;)V" },
	{ "addChildrenToBack", "(Lrhino/Node;)V" },
	{ "addChildBefore", "(Lrhino/Node;Lrhino/Node;)V" },
	{ "addChildAfter", "(Lrhino/Node;Lrhino/Node;)V" },
	{ "removeChild", "(Lrhino/Node;)V" },
	{ "replaceChild", "(Lrhino/Node;Lrhino/Node;)V" },
	{ "replaceChildAfter", "(Lrhino/Node;Lrhino/Node;)V" },
	{ "removeChildren", "()V" },
	{ "lookupProperty", "(I)Lrhino/Node$PropListItem;" },
	{ "ensureProperty", "(I)Lrhino/Node$PropListItem;" },
	{ "removeProp", "(I)V" },
	{ "getProp", "(I)Ljava/lang/Object;" },
	{ "getIntProp", "(II)I" },
	{ "getExistingIntProp", "(I)I" },
	{ "putProp", "(ILjava/lang/Object;)V" },
	{ "putIntProp", "(II)V" },
	{ "getLineno", "()I" },
	{ "setLineno", "(I)V" },
	{ "getDouble", "()D" },
	{ "setDouble", "(D)V" },
	{ "getString", "()Ljava/lang/String;" },
	{ "setString", "(Ljava/lang/String;)V" },
	{ "getScope", "()Lrhino/ast/Scope;" },
	{ "setScope", "(Lrhino/ast/Scope;)V" },
	{ "labelId", "()I" },
	{ "labelId", "(I)V" },
	{ "hasConsistentReturnUsage", "()Z" },
	{ "endCheckIf", "()I" },
	{ "endCheckSwitch", "()I" },
	{ "endCheckTry", "()I" },
	{ "endCheckLoop", "()I" },
	{ "endCheckBlock", "()I" },
	{ "endCheckLabel", "()I" },
	{ "endCheckBreak", "()I" },
	{ "endCheck", "()I" },
	{ "hasSideEffects", "()Z" },
	{ "resetTargets", "()V" },
	{ "resetTargets_r", "()V" },
	{ "toString", "(Lrhino/ObjToIntMap;Ljava/lang/StringBuilder;)V" },
	{ "toStringTree", "(Lrhino/ast/ScriptNode;)Ljava/lang/String;" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getPosition", "()I" },
	{ "setPosition", "(I)V" },
	{ "getAbsolutePosition", "()I" },
	{ "getLength", "()I" },
	{ "setLength", "(I)V" },
	{ "setBounds", "(II)V" },
	{ "setRelative", "(I)V" },
	{ "getParent", "()Lrhino/ast/AstNode;" },
	{ "setParent", "(Lrhino/ast/AstNode;)V" },
	{ "addChild", "(Lrhino/ast/AstNode;)V" },
	{ "getAstRoot", "()Lrhino/ast/AstRoot;" },
	{ "toSource", "(I)Ljava/lang/String;" },
	{ "toSource", "()Ljava/lang/String;" },
	{ "makeIndent", "(I)Ljava/lang/String;" },
	{ "shortName", "()Ljava/lang/String;" },
	{ "visit", "(Lrhino/ast/NodeVisitor;)V" },
	{ "assertNotNull", "(Ljava/lang/Object;)V" },
	{ "printList", "(Ljava/util/List;Ljava/lang/StringBuilder;)V" },
	{ "getEnclosingFunction", "()Lrhino/ast/FunctionNode;" },
	{ "getEnclosingScope", "()Lrhino/ast/Scope;" },
	{ "compareTo", "(Lrhino/ast/AstNode;)I" },
	{ "depth", "()I" },
	{ "debugPrint", "()Ljava/lang/String;" },
	{ "getInlineComment", "()Lrhino/ast/AstNode;" },
	{ "setInlineComment", "(Lrhino/ast/AstNode;)V" },
	{ "getJumpStatement", "()Lrhino/ast/Jump;" },
	{ "setJumpStatement", "(Lrhino/ast/Jump;)V" },
	{ "getDefault", "()Lrhino/Node;" },
	{ "setDefault", "(Lrhino/Node;)V" },
	{ "getFinally", "()Lrhino/Node;" },
	{ "setFinally", "(Lrhino/Node;)V" },
	{ "getLoop", "()Lrhino/ast/Jump;" },
	{ "setLoop", "(Lrhino/ast/Jump;)V" },
	{ "getContinue", "()Lrhino/Node;" },
	{ "setContinue", "(Lrhino/Node;)V" },
	{ "getParentScope", "()Lrhino/ast/Scope;" },
	{ "setParentScope", "(Lrhino/ast/Scope;)V" },
	{ "clearParentScope", "()V" },
	{ "getChildScopes", "()Ljava/util/List;" },
	{ "addChildScope", "(Lrhino/ast/Scope;)V" },
	{ "replaceWith", "(Lrhino/ast/Scope;)V" },
	{ "getTop", "()Lrhino/ast/ScriptNode;" },
	{ "setTop", "(Lrhino/ast/ScriptNode;)V" },
	{ "getDefiningScope", "(Ljava/lang/String;)Lrhino/ast/Scope;" },
	{ "getSymbol", "(Ljava/lang/String;)Lrhino/ast/Symbol;" },
	{ "putSymbol", "(Lrhino/ast/Symbol;)V" },
	{ "getSymbolTable", "()Ljava/util/Map;" },
	{ "setSymbolTable", "(Ljava/util/Map;)V" },
	{ "ensureSymbolTable", "()Ljava/util/Map;" },
	{ "getStatements", "()Ljava/util/List;" },
	{ "getVariables", "()Lrhino/ast/VariableDeclaration;" },
	{ "setVariables", "(Lrhino/ast/VariableDeclaration;)V" },
	{ "getBody", "()Lrhino/ast/AstNode;" },
	{ "setBody", "(Lrhino/ast/AstNode;)V" },
	{ "getLp", "()I" },
	{ "setLp", "(I)V" },
	{ "getRp", "()I" },
	{ "setRp", "(I)V" },
	{ "setParens", "(II)V" },
};

static FieldMetadata fields[] {
	{ "variables", &class_rhino_ast_VariableDeclaration, offsetof(rhino_ast_LetNode, F_variables), "Lrhino/ast/VariableDeclaration;", 2 },
	{ "body", &class_rhino_ast_AstNode, offsetof(rhino_ast_LetNode, F_body), "Lrhino/ast/AstNode;", 2 },
	{ "lp", &class_int, offsetof(rhino_ast_LetNode, F_lp), "I", 2 },
	{ "rp", &class_int, offsetof(rhino_ast_LetNode, F_rp), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_LetNode, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_LetNode_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_LetNode_int_int, 0, "(II)V", 1 },
	{ "getVariables", (intptr_t) M_rhino_ast_LetNode_getVariables_R_rhino_ast_VariableDeclaration, VTABLE_rhino_ast_LetNode_getVariables_R_rhino_ast_VariableDeclaration, "()Lrhino/ast/VariableDeclaration;", 1 },
	{ "setVariables", (intptr_t) M_rhino_ast_LetNode_setVariables_rhino_ast_VariableDeclaration, VTABLE_rhino_ast_LetNode_setVariables_rhino_ast_VariableDeclaration, "(Lrhino/ast/VariableDeclaration;)V", 1 },
	{ "getBody", (intptr_t) M_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode, VTABLE_rhino_ast_LetNode_getBody_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setBody", (intptr_t) M_rhino_ast_LetNode_setBody_rhino_ast_AstNode, VTABLE_rhino_ast_LetNode_setBody_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getLp", (intptr_t) M_rhino_ast_LetNode_getLp_R_int, VTABLE_rhino_ast_LetNode_getLp_R_int, "()I", 1 },
	{ "setLp", (intptr_t) M_rhino_ast_LetNode_setLp_int, VTABLE_rhino_ast_LetNode_setLp_int, "(I)V", 1 },
	{ "getRp", (intptr_t) M_rhino_ast_LetNode_getRp_R_int, VTABLE_rhino_ast_LetNode_getRp_R_int, "()I", 1 },
	{ "setRp", (intptr_t) M_rhino_ast_LetNode_setRp_int, VTABLE_rhino_ast_LetNode_setRp_int, "(I)V", 1 },
	{ "setParens", (intptr_t) M_rhino_ast_LetNode_setParens_int_int, VTABLE_rhino_ast_LetNode_setParens_int_int, "(II)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_LetNode_toSource_int_R_java_lang_String, VTABLE_rhino_ast_LetNode_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_LetNode_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_LetNode_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_LetNode{
		.nativeName = (intptr_t) "rhino/ast/LetNode",
		.parentClass = (intptr_t) &class_rhino_ast_Scope,
		.size = sizeof(rhino_ast_LetNode),
		.classVtable = (intptr_t) vtable_rhino_ast_LetNode,
		.staticInitializer = (intptr_t) clinit_rhino_ast_LetNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_LetNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 127,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_LetNode = registerClass(&class_rhino_ast_LetNode);

}
