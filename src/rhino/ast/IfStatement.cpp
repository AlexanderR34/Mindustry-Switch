#include "rhino/ast/IfStatement.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/IfStatement.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_rhino_ast_IfStatement(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_IfStatement *) object;
	if (self->F_condition)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_condition)->clazz)->markFunction)((jobject) self->F_condition, mark, depth + 1);
	if (self->F_thenPart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thenPart)->clazz)->markFunction)((jobject) self->F_thenPart, mark, depth + 1);
	if (self->F_elsePart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elsePart)->clazz)->markFunction)((jobject) self->F_elsePart, mark, depth + 1);
	if (self->F_elseKeyWordInlineComment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elseKeyWordInlineComment)->clazz)->markFunction)((jobject) self->F_elseKeyWordInlineComment, mark, depth + 1);
}

void clinit_rhino_ast_IfStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void init_rhino_ast_IfStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_IfStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(16);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePosition = (jint(-1));
	LINE_NUMBER(19);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(20);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(23);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (113);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_IfStatement_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_IfStatement(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(16);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePosition = (jint(-1));
	LINE_NUMBER(19);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(20);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(23);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (113);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_IfStatement_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_IfStatement(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(16);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePosition = (jint(-1));
	LINE_NUMBER(19);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(20);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(23);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (113);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_IfStatement_getCondition_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getCondition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_condition;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setCondition_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setCondition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	((func_rhino_ast_IfStatement_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_condition = (jref) (frame[1].o);
	LINE_NUMBER(51);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_IfStatement_getThenPart_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getThenPart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_thenPart;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setThenPart_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setThenPart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	((func_rhino_ast_IfStatement_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(67);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_thenPart = (jref) (frame[1].o);
	LINE_NUMBER(68);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getElsePart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setElsePart_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setElsePart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart = (jref) (frame[1].o);
	LINE_NUMBER(85);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(86);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_ast_IfStatement_getElsePosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getElsePosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePosition);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setElsePosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setElsePosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePosition = (frame[1].i);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_IfStatement_getLp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getLp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_lp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setLp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setLp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(114);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_IfStatement_getRp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getRp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_rp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setRp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setRp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_rp = (frame[1].i);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setParens_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setParens", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(135);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(136);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_rp = (frame[2].i);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_IfStatement_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:toSource", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_rhino_ast_IfStatement_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(142);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (32));
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"if ("_j))));
	LINE_NUMBER(145);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_condition;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8") "_j))));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_rhino_ast_IfStatement_getInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_getInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"    "_j))));
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_getInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_getInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_7:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_thenPart;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 == (130)) goto label_9;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_rhino_ast_IfStatement_getInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_getInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_11:;
	{
	LINE_NUMBER(154);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_thenPart;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_thenPart;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 == (130)) goto label_16;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"else "_j))));
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" else "_j))));
	}
label_18:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"    "_j))));
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_19:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 == (130)) goto label_21;
	}
	{
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, sp[0].o);
	if (temp0 == (113)) goto label_21;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_24:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_ast_IfStatement_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_IfStatement_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_14:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:visit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_condition;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_thenPart;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elsePart;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:getElseKeyWordInlineComment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elseKeyWordInlineComment;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_IfStatement_setElseKeyWordInlineComment_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/IfStatement:setElseKeyWordInlineComment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	((rhino_ast_IfStatement *) NULL_CHECK((frame[0].o)))->F_elseKeyWordInlineComment = (jref) (frame[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_IfStatement[] {
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
	(void *) M_rhino_ast_IfStatement_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_IfStatement_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_getCondition_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_setCondition_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_getThenPart_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_setThenPart_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_setElsePart_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_getElsePosition_R_int,
	(void *) M_rhino_ast_IfStatement_setElsePosition_int,
	(void *) M_rhino_ast_IfStatement_getLp_R_int,
	(void *) M_rhino_ast_IfStatement_setLp_int,
	(void *) M_rhino_ast_IfStatement_getRp_R_int,
	(void *) M_rhino_ast_IfStatement_setRp_int,
	(void *) M_rhino_ast_IfStatement_setParens_int_int,
	(void *) M_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_IfStatement_setElseKeyWordInlineComment_rhino_ast_AstNode,
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
	{ "getCondition", "()Lrhino/ast/AstNode;" },
	{ "setCondition", "(Lrhino/ast/AstNode;)V" },
	{ "getThenPart", "()Lrhino/ast/AstNode;" },
	{ "setThenPart", "(Lrhino/ast/AstNode;)V" },
	{ "getElsePart", "()Lrhino/ast/AstNode;" },
	{ "setElsePart", "(Lrhino/ast/AstNode;)V" },
	{ "getElsePosition", "()I" },
	{ "setElsePosition", "(I)V" },
	{ "getLp", "()I" },
	{ "setLp", "(I)V" },
	{ "getRp", "()I" },
	{ "setRp", "(I)V" },
	{ "setParens", "(II)V" },
	{ "getElseKeyWordInlineComment", "()Lrhino/ast/AstNode;" },
	{ "setElseKeyWordInlineComment", "(Lrhino/ast/AstNode;)V" },
};

static FieldMetadata fields[] {
	{ "condition", &class_rhino_ast_AstNode, offsetof(rhino_ast_IfStatement, F_condition), "Lrhino/ast/AstNode;", 2 },
	{ "thenPart", &class_rhino_ast_AstNode, offsetof(rhino_ast_IfStatement, F_thenPart), "Lrhino/ast/AstNode;", 2 },
	{ "elsePosition", &class_int, offsetof(rhino_ast_IfStatement, F_elsePosition), "I", 2 },
	{ "elsePart", &class_rhino_ast_AstNode, offsetof(rhino_ast_IfStatement, F_elsePart), "Lrhino/ast/AstNode;", 2 },
	{ "elseKeyWordInlineComment", &class_rhino_ast_AstNode, offsetof(rhino_ast_IfStatement, F_elseKeyWordInlineComment), "Lrhino/ast/AstNode;", 2 },
	{ "lp", &class_int, offsetof(rhino_ast_IfStatement, F_lp), "I", 2 },
	{ "rp", &class_int, offsetof(rhino_ast_IfStatement, F_rp), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_IfStatement, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_IfStatement_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_IfStatement_int_int, 0, "(II)V", 1 },
	{ "getCondition", (intptr_t) M_rhino_ast_IfStatement_getCondition_R_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_getCondition_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setCondition", (intptr_t) M_rhino_ast_IfStatement_setCondition_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_setCondition_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getThenPart", (intptr_t) M_rhino_ast_IfStatement_getThenPart_R_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_getThenPart_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setThenPart", (intptr_t) M_rhino_ast_IfStatement_setThenPart_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_setThenPart_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getElsePart", (intptr_t) M_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_getElsePart_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setElsePart", (intptr_t) M_rhino_ast_IfStatement_setElsePart_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_setElsePart_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getElsePosition", (intptr_t) M_rhino_ast_IfStatement_getElsePosition_R_int, VTABLE_rhino_ast_IfStatement_getElsePosition_R_int, "()I", 1 },
	{ "setElsePosition", (intptr_t) M_rhino_ast_IfStatement_setElsePosition_int, VTABLE_rhino_ast_IfStatement_setElsePosition_int, "(I)V", 1 },
	{ "getLp", (intptr_t) M_rhino_ast_IfStatement_getLp_R_int, VTABLE_rhino_ast_IfStatement_getLp_R_int, "()I", 1 },
	{ "setLp", (intptr_t) M_rhino_ast_IfStatement_setLp_int, VTABLE_rhino_ast_IfStatement_setLp_int, "(I)V", 1 },
	{ "getRp", (intptr_t) M_rhino_ast_IfStatement_getRp_R_int, VTABLE_rhino_ast_IfStatement_getRp_R_int, "()I", 1 },
	{ "setRp", (intptr_t) M_rhino_ast_IfStatement_setRp_int, VTABLE_rhino_ast_IfStatement_setRp_int, "(I)V", 1 },
	{ "setParens", (intptr_t) M_rhino_ast_IfStatement_setParens_int_int, VTABLE_rhino_ast_IfStatement_setParens_int_int, "(II)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_IfStatement_toSource_int_R_java_lang_String, VTABLE_rhino_ast_IfStatement_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_IfStatement_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_IfStatement_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
	{ "getElseKeyWordInlineComment", (intptr_t) M_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_getElseKeyWordInlineComment_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setElseKeyWordInlineComment", (intptr_t) M_rhino_ast_IfStatement_setElseKeyWordInlineComment_rhino_ast_AstNode, VTABLE_rhino_ast_IfStatement_setElseKeyWordInlineComment_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
};

Class class_rhino_ast_IfStatement{
		.nativeName = (intptr_t) "rhino/ast/IfStatement",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_IfStatement),
		.classVtable = (intptr_t) vtable_rhino_ast_IfStatement,
		.staticInitializer = (intptr_t) clinit_rhino_ast_IfStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_IfStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 108,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_IfStatement = registerClass(&class_rhino_ast_IfStatement);

}
