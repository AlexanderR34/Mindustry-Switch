#include "rhino/ast/InfixExpression.h"
#include "rhino/Node.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "rhino/ast/InfixExpression.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/Token.h"
#include "rhino/ast/NodeVisitor.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_rhino_ast_InfixExpression(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_InfixExpression *) object;
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
}

void clinit_rhino_ast_InfixExpression(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void init_rhino_ast_InfixExpression(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_InfixExpression(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (jint(-1));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_InfixExpression_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_InfixExpression(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(13);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (jint(-1));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_InfixExpression_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_InfixExpression(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(23);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(13);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (jint(-1));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_InfixExpression_int_int_rhino_ast_AstNode_rhino_ast_AstNode(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_InfixExpression(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(29);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(13);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (jint(-1));
	LINE_NUMBER(30);
	((func_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(31);
	((func_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_InfixExpression_rhino_ast_AstNode_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_InfixExpression(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(38);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (jint(-1));
	LINE_NUMBER(39);
	((func_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_InfixExpression(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(47);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (jint(-1));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_rhino_ast_InfixExpression_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setType_int_R_rhino_Node])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	((func_rhino_ast_InfixExpression_setOperatorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_InfixExpression_setOperatorPosition_int])(ctx, sp[0].o, (temp0 - temp1));
	LINE_NUMBER(50);
	((func_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:setLeftAndRight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(54);
	((func_rhino_ast_InfixExpression_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	((func_rhino_ast_InfixExpression_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(58);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[2].o));
	frame[4].i = (temp1 + temp2);
	LINE_NUMBER(59);
	((func_rhino_ast_InfixExpression_setBounds_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setBounds_int_int])(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(62);
	((func_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(63);
	((func_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_InfixExpression_getOperator_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:getOperator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_rhino_ast_InfixExpression_getType_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_getType_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_InfixExpression_setOperator_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:setOperator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	jint temp0 = (jint)SM_rhino_Token_isValidToken_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(81);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid token: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_rhino_ast_InfixExpression_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_setType_int_R_rhino_Node])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:getLeft", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_left;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:setLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((func_rhino_ast_InfixExpression_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_left = (jref) (frame[1].o);
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getLineno_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLineno_R_int])(ctx, (frame[1].o));
	((func_rhino_ast_InfixExpression_setLineno_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_InfixExpression_setLineno_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(103);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:getRight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:setRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	((func_rhino_ast_InfixExpression_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(123);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right = (jref) (frame[1].o);
	LINE_NUMBER(124);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_InfixExpression_getOperatorPosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:getOperatorPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_InfixExpression_setOperatorPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:setOperatorPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(139);
	((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_operatorPosition = (frame[1].i);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_InfixExpression_hasSideEffects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:hasSideEffects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_rhino_ast_InfixExpression_getType_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_getType_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case 90: goto label_1;
		case 105: goto label_2;
		case 106: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp0 = (jint)((func_rhino_ast_AstNode_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp0 = (jint)((func_rhino_ast_AstNode_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_rhino_ast_AstNode_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
label_7:;
	INST_ICONST(1);
	goto label_10;
label_8:;
	INST_ICONST(0);
label_10:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(153);
	jint temp0 = (jint)M_rhino_ast_AstNode_hasSideEffects_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_InfixExpression_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:toSource", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(159);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_rhino_ast_InfixExpression_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_InfixExpression_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_left;
	LINE_NUMBER(160);
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = frame[0].o;
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_rhino_ast_InfixExpression_getType_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_InfixExpression_getType_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_rhino_ast_AstNode_operatorToString_int_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	LINE_NUMBER(164);
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_InfixExpression_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/InfixExpression:visit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_left;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((rhino_ast_InfixExpression *) NULL_CHECK((frame[0].o)))->F_right;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_InfixExpression[] {
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
	(void *) M_rhino_ast_InfixExpression_hasSideEffects_R_boolean,
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
	(void *) M_rhino_ast_InfixExpression_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_InfixExpression_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode,
	(void *) M_rhino_ast_InfixExpression_getOperator_R_int,
	(void *) M_rhino_ast_InfixExpression_setOperator_int,
	(void *) M_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode,
	(void *) M_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode,
	(void *) M_rhino_ast_InfixExpression_getOperatorPosition_R_int,
	(void *) M_rhino_ast_InfixExpression_setOperatorPosition_int,
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
	{ "setLeftAndRight", "(Lrhino/ast/AstNode;Lrhino/ast/AstNode;)V" },
	{ "getOperator", "()I" },
	{ "setOperator", "(I)V" },
	{ "getLeft", "()Lrhino/ast/AstNode;" },
	{ "setLeft", "(Lrhino/ast/AstNode;)V" },
	{ "getRight", "()Lrhino/ast/AstNode;" },
	{ "setRight", "(Lrhino/ast/AstNode;)V" },
	{ "getOperatorPosition", "()I" },
	{ "setOperatorPosition", "(I)V" },
};

static FieldMetadata fields[] {
	{ "left", &class_rhino_ast_AstNode, offsetof(rhino_ast_InfixExpression, F_left), "Lrhino/ast/AstNode;", 4 },
	{ "right", &class_rhino_ast_AstNode, offsetof(rhino_ast_InfixExpression, F_right), "Lrhino/ast/AstNode;", 4 },
	{ "operatorPosition", &class_int, offsetof(rhino_ast_InfixExpression, F_operatorPosition), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_InfixExpression, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_InfixExpression_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_InfixExpression_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_InfixExpression_int_int_rhino_ast_AstNode_rhino_ast_AstNode, 0, "(IILrhino/ast/AstNode;Lrhino/ast/AstNode;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_InfixExpression_rhino_ast_AstNode_rhino_ast_AstNode, 0, "(Lrhino/ast/AstNode;Lrhino/ast/AstNode;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_InfixExpression_int_rhino_ast_AstNode_rhino_ast_AstNode_int, 0, "(ILrhino/ast/AstNode;Lrhino/ast/AstNode;I)V", 1 },
	{ "setLeftAndRight", (intptr_t) M_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode, VTABLE_rhino_ast_InfixExpression_setLeftAndRight_rhino_ast_AstNode_rhino_ast_AstNode, "(Lrhino/ast/AstNode;Lrhino/ast/AstNode;)V", 1 },
	{ "getOperator", (intptr_t) M_rhino_ast_InfixExpression_getOperator_R_int, VTABLE_rhino_ast_InfixExpression_getOperator_R_int, "()I", 1 },
	{ "setOperator", (intptr_t) M_rhino_ast_InfixExpression_setOperator_int, VTABLE_rhino_ast_InfixExpression_setOperator_int, "(I)V", 1 },
	{ "getLeft", (intptr_t) M_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode, VTABLE_rhino_ast_InfixExpression_getLeft_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setLeft", (intptr_t) M_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode, VTABLE_rhino_ast_InfixExpression_setLeft_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getRight", (intptr_t) M_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode, VTABLE_rhino_ast_InfixExpression_getRight_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setRight", (intptr_t) M_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode, VTABLE_rhino_ast_InfixExpression_setRight_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getOperatorPosition", (intptr_t) M_rhino_ast_InfixExpression_getOperatorPosition_R_int, VTABLE_rhino_ast_InfixExpression_getOperatorPosition_R_int, "()I", 1 },
	{ "setOperatorPosition", (intptr_t) M_rhino_ast_InfixExpression_setOperatorPosition_int, VTABLE_rhino_ast_InfixExpression_setOperatorPosition_int, "(I)V", 1 },
	{ "hasSideEffects", (intptr_t) M_rhino_ast_InfixExpression_hasSideEffects_R_boolean, VTABLE_rhino_ast_InfixExpression_hasSideEffects_R_boolean, "()Z", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_InfixExpression_toSource_int_R_java_lang_String, VTABLE_rhino_ast_InfixExpression_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_InfixExpression_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_InfixExpression_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_InfixExpression{
		.nativeName = (intptr_t) "rhino/ast/InfixExpression",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_InfixExpression),
		.classVtable = (intptr_t) vtable_rhino_ast_InfixExpression,
		.staticInitializer = (intptr_t) clinit_rhino_ast_InfixExpression,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_InfixExpression,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 102,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_InfixExpression = registerClass(&class_rhino_ast_InfixExpression);

}
