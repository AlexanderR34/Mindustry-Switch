#include "rhino/ast/CatchClause.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/Name.h"
#include "rhino/ast/CodeBlock.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/CatchClause.h"

extern "C" {


void mark_rhino_ast_CatchClause(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ast_AstNode(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ast_CatchClause *) object;
	if (self->F_varName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_varName)->clazz)->markFunction)((jobject) self->F_varName, mark, depth + 1);
	if (self->F_catchCondition)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_catchCondition)->clazz)->markFunction)((jobject) self->F_catchCondition, mark, depth + 1);
	if (self->F_body)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_body)->clazz)->markFunction)((jobject) self->F_body, mark, depth + 1);
}

void clinit_rhino_ast_CatchClause(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void init_rhino_ast_CatchClause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_CatchClause(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_ifPosition = (jint(-1));
	LINE_NUMBER(18);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(19);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(22);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (125);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_CatchClause_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_CatchClause(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(29);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(17);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_ifPosition = (jint(-1));
	LINE_NUMBER(18);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(19);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(22);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (125);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_CatchClause_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_CatchClause(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(33);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(17);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_ifPosition = (jint(-1));
	LINE_NUMBER(18);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(19);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(22);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (125);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_CatchClause_getVarName_R_rhino_ast_Name(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:getVarName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_varName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setVarName_rhino_ast_Name(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setVarName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	((func_rhino_ast_CatchClause_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_CatchClause_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(51);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_varName = (jref) (frame[1].o);
	LINE_NUMBER(52);
	((func_rhino_ast_Name_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Name_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_CatchClause_getCatchCondition_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:getCatchCondition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_catchCondition;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setCatchCondition_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setCatchCondition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_catchCondition = (jref) (frame[1].o);
	LINE_NUMBER(69);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(70);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_CatchClause_getBody_R_rhino_ast_CodeBlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:getBody", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_body;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setBody_rhino_ast_CodeBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setBody", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((func_rhino_ast_CatchClause_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_CatchClause_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(86);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_body = (jref) (frame[1].o);
	LINE_NUMBER(87);
	((func_rhino_ast_CodeBlock_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_CodeBlock_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_CatchClause_getLp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:getLp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_lp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setLp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setLp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(101);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_CatchClause_getRp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:getRp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_rp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setRp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setRp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(115);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_rp = (frame[1].i);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setParens_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setParens", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(122);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(123);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_rp = (frame[2].i);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_CatchClause_getIfPosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:getIfPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_ifPosition);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_setIfPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:setIfPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(139);
	((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_ifPosition = (frame[1].i);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_CatchClause_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:toSource", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(144);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_CatchClause_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_CatchClause_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"catch ("_j))));
	LINE_NUMBER(147);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_varName;
	sp[1].o = (jobject)((func_rhino_ast_Name_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_catchCondition;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" if "_j))));
	LINE_NUMBER(150);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_catchCondition;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8") "_j))));
	LINE_NUMBER(153);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_body;
	sp[1].o = (jobject)((func_rhino_ast_CodeBlock_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_CodeBlock_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_CatchClause_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/CatchClause:visit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_varName;
	((func_rhino_ast_Name_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_catchCondition;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_catchCondition;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((rhino_ast_CatchClause *) NULL_CHECK((frame[0].o)))->F_body;
	((func_rhino_ast_CodeBlock_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_CodeBlock_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_CatchClause[] {
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
	(void *) M_rhino_ast_CatchClause_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_CatchClause_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_CatchClause_getVarName_R_rhino_ast_Name,
	(void *) M_rhino_ast_CatchClause_setVarName_rhino_ast_Name,
	(void *) M_rhino_ast_CatchClause_getCatchCondition_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_CatchClause_setCatchCondition_rhino_ast_AstNode,
	(void *) M_rhino_ast_CatchClause_getBody_R_rhino_ast_CodeBlock,
	(void *) M_rhino_ast_CatchClause_setBody_rhino_ast_CodeBlock,
	(void *) M_rhino_ast_CatchClause_getLp_R_int,
	(void *) M_rhino_ast_CatchClause_setLp_int,
	(void *) M_rhino_ast_CatchClause_getRp_R_int,
	(void *) M_rhino_ast_CatchClause_setRp_int,
	(void *) M_rhino_ast_CatchClause_setParens_int_int,
	(void *) M_rhino_ast_CatchClause_getIfPosition_R_int,
	(void *) M_rhino_ast_CatchClause_setIfPosition_int,
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
	{ "getVarName", "()Lrhino/ast/Name;" },
	{ "setVarName", "(Lrhino/ast/Name;)V" },
	{ "getCatchCondition", "()Lrhino/ast/AstNode;" },
	{ "setCatchCondition", "(Lrhino/ast/AstNode;)V" },
	{ "getBody", "()Lrhino/ast/CodeBlock;" },
	{ "setBody", "(Lrhino/ast/CodeBlock;)V" },
	{ "getLp", "()I" },
	{ "setLp", "(I)V" },
	{ "getRp", "()I" },
	{ "setRp", "(I)V" },
	{ "setParens", "(II)V" },
	{ "getIfPosition", "()I" },
	{ "setIfPosition", "(I)V" },
};

static FieldMetadata fields[] {
	{ "varName", &class_rhino_ast_Name, offsetof(rhino_ast_CatchClause, F_varName), "Lrhino/ast/Name;", 2 },
	{ "catchCondition", &class_rhino_ast_AstNode, offsetof(rhino_ast_CatchClause, F_catchCondition), "Lrhino/ast/AstNode;", 2 },
	{ "body", &class_rhino_ast_CodeBlock, offsetof(rhino_ast_CatchClause, F_body), "Lrhino/ast/CodeBlock;", 2 },
	{ "ifPosition", &class_int, offsetof(rhino_ast_CatchClause, F_ifPosition), "I", 2 },
	{ "lp", &class_int, offsetof(rhino_ast_CatchClause, F_lp), "I", 2 },
	{ "rp", &class_int, offsetof(rhino_ast_CatchClause, F_rp), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_CatchClause, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_CatchClause_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_CatchClause_int_int, 0, "(II)V", 1 },
	{ "getVarName", (intptr_t) M_rhino_ast_CatchClause_getVarName_R_rhino_ast_Name, VTABLE_rhino_ast_CatchClause_getVarName_R_rhino_ast_Name, "()Lrhino/ast/Name;", 1 },
	{ "setVarName", (intptr_t) M_rhino_ast_CatchClause_setVarName_rhino_ast_Name, VTABLE_rhino_ast_CatchClause_setVarName_rhino_ast_Name, "(Lrhino/ast/Name;)V", 1 },
	{ "getCatchCondition", (intptr_t) M_rhino_ast_CatchClause_getCatchCondition_R_rhino_ast_AstNode, VTABLE_rhino_ast_CatchClause_getCatchCondition_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setCatchCondition", (intptr_t) M_rhino_ast_CatchClause_setCatchCondition_rhino_ast_AstNode, VTABLE_rhino_ast_CatchClause_setCatchCondition_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getBody", (intptr_t) M_rhino_ast_CatchClause_getBody_R_rhino_ast_CodeBlock, VTABLE_rhino_ast_CatchClause_getBody_R_rhino_ast_CodeBlock, "()Lrhino/ast/CodeBlock;", 1 },
	{ "setBody", (intptr_t) M_rhino_ast_CatchClause_setBody_rhino_ast_CodeBlock, VTABLE_rhino_ast_CatchClause_setBody_rhino_ast_CodeBlock, "(Lrhino/ast/CodeBlock;)V", 1 },
	{ "getLp", (intptr_t) M_rhino_ast_CatchClause_getLp_R_int, VTABLE_rhino_ast_CatchClause_getLp_R_int, "()I", 1 },
	{ "setLp", (intptr_t) M_rhino_ast_CatchClause_setLp_int, VTABLE_rhino_ast_CatchClause_setLp_int, "(I)V", 1 },
	{ "getRp", (intptr_t) M_rhino_ast_CatchClause_getRp_R_int, VTABLE_rhino_ast_CatchClause_getRp_R_int, "()I", 1 },
	{ "setRp", (intptr_t) M_rhino_ast_CatchClause_setRp_int, VTABLE_rhino_ast_CatchClause_setRp_int, "(I)V", 1 },
	{ "setParens", (intptr_t) M_rhino_ast_CatchClause_setParens_int_int, VTABLE_rhino_ast_CatchClause_setParens_int_int, "(II)V", 1 },
	{ "getIfPosition", (intptr_t) M_rhino_ast_CatchClause_getIfPosition_R_int, VTABLE_rhino_ast_CatchClause_getIfPosition_R_int, "()I", 1 },
	{ "setIfPosition", (intptr_t) M_rhino_ast_CatchClause_setIfPosition_int, VTABLE_rhino_ast_CatchClause_setIfPosition_int, "(I)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_CatchClause_toSource_int_R_java_lang_String, VTABLE_rhino_ast_CatchClause_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_CatchClause_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_CatchClause_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_CatchClause{
		.nativeName = (intptr_t) "rhino/ast/CatchClause",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_CatchClause),
		.classVtable = (intptr_t) vtable_rhino_ast_CatchClause,
		.staticInitializer = (intptr_t) clinit_rhino_ast_CatchClause,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_CatchClause,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 106,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_CatchClause = registerClass(&class_rhino_ast_CatchClause);

}
