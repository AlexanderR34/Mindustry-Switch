#include "rhino/ast/AstNode.h"
#include "rhino/ast/EmptyExpression.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/AstNode.h"
#include "java/lang/Comparable.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/AstRoot.h"
#include "java/util/HashMap.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Map.h"
#include "rhino/ast/FunctionNode.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/Scope.h"
#include "rhino/Node.h"
#include "rhino/ast/AstNode_DebugPrintVisitor.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/util/List.h"

extern "C" {

jobject SF_rhino_ast_AstNode_operatorNames;

void mark_rhino_ast_AstNode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ast_AstNode_operatorNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ast_AstNode_operatorNames)->clazz)->markFunction)((jobject) SF_rhino_ast_AstNode_operatorNames, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_Node(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ast_AstNode *) object;
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_inlineComment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inlineComment)->clazz)->markFunction)((jobject) self->F_inlineComment, mark, depth + 1);
}

void init_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(123);
	init_rhino_Node_int(ctx, (frame[0].o), (jint(-1)));
	LINE_NUMBER(54);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position = (jint(-1));
	LINE_NUMBER(55);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_length = (jint(1));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_AstNode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(131);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(132);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].i);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_AstNode_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(142);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(143);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].i);
	LINE_NUMBER(144);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_length = (frame[2].i);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_getPosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_setPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(158);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].i);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_getAbsolutePosition_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getAbsolutePosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	frame[1].i = ((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(169);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(170);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[2].o));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_setLength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(187);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_length = (frame[1].i);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_setBounds_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:setBounds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(195);
	((func_rhino_ast_AstNode_setPosition_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_setPosition_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(196);
	((func_rhino_ast_AstNode_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_setLength_int])(ctx, (frame[0].o), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_setRelative_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:setRelative", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	((rhino_ast_AstNode *) NULL_CHECK(sp[0].o))->F_position = (((jint)((rhino_ast_AstNode *) NULL_CHECK(sp[0].o))->F_position) - (frame[1].i));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_setParent_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:setParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getAbsolutePosition_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_getAbsolutePosition_R_int])(ctx, sp[1].o);
	((func_rhino_ast_AstNode_setRelative_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setRelative_int])(ctx, sp[0].o, (-temp0));
	}
label_3:;
	{
	LINE_NUMBER(232);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(233);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getAbsolutePosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getAbsolutePosition_R_int])(ctx, (frame[1].o));
	((func_rhino_ast_AstNode_setRelative_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setRelative_int])(ctx, sp[0].o, temp0);
	}
label_6:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_addChild_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:addChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	((func_rhino_ast_AstNode_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(248);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[0].o));
	((func_rhino_ast_AstNode_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_setLength_int])(ctx, sp[0].o, (temp2 - temp3));
	LINE_NUMBER(250);
	((func_rhino_ast_AstNode_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_addChildToBack_rhino_Node])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(251);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_getAstRoot_R_rhino_ast_AstRoot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getAstRoot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(261);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_AstRoot)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ast_AstRoot, (frame[1].o)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_toSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:toSource", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:makeIndent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(294);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(295);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	LINE_NUMBER(295);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_shortName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:shortName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	frame[2].i = temp0;
	LINE_NUMBER(308);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ast_AstNode_operatorToString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:operatorToString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(317);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(318);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(319);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid operator: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_AstNode_hasSideEffects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:hasSideEffects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case -1: goto label_1;
		case 0: goto label_2;
		case 1: goto label_2;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_1;
		case 6: goto label_1;
		case 7: goto label_1;
		case 8: goto label_1;
		case 9: goto label_2;
		case 10: goto label_2;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_2;
		case 14: goto label_2;
		case 15: goto label_2;
		case 16: goto label_2;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_2;
		case 20: goto label_2;
		case 21: goto label_2;
		case 22: goto label_2;
		case 23: goto label_2;
		case 24: goto label_2;
		case 25: goto label_2;
		case 26: goto label_2;
		case 27: goto label_2;
		case 28: goto label_2;
		case 29: goto label_2;
		case 30: goto label_1;
		case 31: goto label_1;
		case 32: goto label_2;
		case 33: goto label_2;
		case 34: goto label_2;
		case 35: goto label_1;
		case 36: goto label_2;
		case 37: goto label_1;
		case 38: goto label_1;
		case 39: goto label_2;
		case 40: goto label_2;
		case 41: goto label_2;
		case 42: goto label_2;
		case 43: goto label_2;
		case 44: goto label_2;
		case 45: goto label_2;
		case 46: goto label_2;
		case 47: goto label_2;
		case 48: goto label_2;
		case 49: goto label_2;
		case 50: goto label_1;
		case 51: goto label_1;
		case 52: goto label_2;
		case 53: goto label_2;
		case 54: goto label_2;
		case 55: goto label_2;
		case 56: goto label_1;
		case 57: goto label_1;
		case 58: goto label_2;
		case 59: goto label_2;
		case 60: goto label_2;
		case 61: goto label_2;
		case 62: goto label_2;
		case 63: goto label_2;
		case 64: goto label_2;
		case 65: goto label_1;
		case 66: goto label_2;
		case 67: goto label_2;
		case 68: goto label_2;
		case 69: goto label_1;
		case 70: goto label_1;
		case 71: goto label_1;
		case 72: goto label_2;
		case 73: goto label_1;
		case 74: goto label_2;
		case 75: goto label_2;
		case 76: goto label_2;
		case 77: goto label_2;
		case 78: goto label_2;
		case 79: goto label_2;
		case 80: goto label_2;
		case 81: goto label_2;
		case 82: goto label_1;
		case 83: goto label_1;
		case 84: goto label_2;
		case 85: goto label_2;
		case 86: goto label_2;
		case 87: goto label_2;
		case 88: goto label_2;
		case 89: goto label_2;
		case 90: goto label_2;
		case 91: goto label_1;
		case 92: goto label_1;
		case 93: goto label_1;
		case 94: goto label_1;
		case 95: goto label_1;
		case 96: goto label_1;
		case 97: goto label_1;
		case 98: goto label_1;
		case 99: goto label_1;
		case 100: goto label_1;
		case 101: goto label_1;
		case 102: goto label_1;
		case 103: goto label_2;
		case 104: goto label_2;
		case 105: goto label_2;
		case 106: goto label_2;
		case 107: goto label_1;
		case 108: goto label_1;
		case 109: goto label_2;
		case 110: goto label_1;
		case 111: goto label_1;
		case 112: goto label_1;
		case 113: goto label_1;
		case 114: goto label_1;
		case 115: goto label_1;
		case 116: goto label_2;
		case 117: goto label_2;
		case 118: goto label_1;
		case 119: goto label_1;
		case 120: goto label_1;
		case 121: goto label_1;
		case 122: goto label_1;
		case 123: goto label_1;
		case 124: goto label_1;
		case 125: goto label_1;
		case 126: goto label_1;
		case 127: goto label_2;
		case 128: goto label_2;
		case 129: goto label_2;
		case 130: goto label_1;
		case 131: goto label_1;
		case 132: goto label_1;
		case 133: goto label_1;
		case 134: goto label_2;
		case 135: goto label_1;
		case 136: goto label_1;
		case 137: goto label_2;
		case 138: goto label_2;
		case 139: goto label_2;
		case 140: goto label_1;
		case 141: goto label_1;
		case 142: goto label_1;
		case 143: goto label_1;
		case 144: goto label_2;
		case 145: goto label_2;
		case 146: goto label_2;
		case 147: goto label_2;
		case 148: goto label_2;
		case 149: goto label_2;
		case 150: goto label_2;
		case 151: goto label_2;
		case 152: goto label_2;
		case 153: goto label_2;
		case 154: goto label_1;
		case 155: goto label_1;
		case 156: goto label_2;
		case 157: goto label_2;
		case 158: goto label_2;
		case 159: goto label_1;
		case 160: goto label_1;
		case 161: goto label_2;
		case 162: goto label_2;
		case 163: goto label_2;
		case 164: goto label_2;
		case 165: goto label_2;
		case 166: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_assertNotNull_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:assertNotNull", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(427);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arg cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:printList", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(437);
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(438);
	frame[4].i = (jint(0));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(440);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (frame[6].o), (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(441);
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	if (temp0 >= ((frame[3].i) - (jint(1)))) goto label_7;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(443);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ast_EmptyExpression)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	}
label_9:;
	LINE_NUMBER(446);
	goto label_3;
label_4:;
	LINE_NUMBER(447);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:codeBug", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode(ctx);
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getEnclosingFunction", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(476);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_FunctionNode)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ast_FunctionNode, (frame[1].o)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getEnclosingScope", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(490);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ast_Scope)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ast_Scope, (frame[1].o)));
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(510);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getAbsolutePosition_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getAbsolutePosition_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(511);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getAbsolutePosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getAbsolutePosition_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(512);
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(513);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(514);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(515);
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(516);
	if ((frame[4].i) >= (frame[5].i)) goto label_8;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(517);
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(518);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_depth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:depth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = jint(1);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp1 = (jint)((func_rhino_ast_AstNode_depth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_depth_R_int])(ctx, sp[0].o);
	jint temp2 = temp0 + temp1;
	sp[0].i = temp2;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_getLineno_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getLineno", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return ((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno);
	}
label_1:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)((func_rhino_ast_AstNode_getLineno_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_getLineno_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_debugPrint_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:debugPrint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(591);
	clinit_rhino_ast_AstNode$DebugPrintVisitor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_AstNode$DebugPrintVisitor);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[1].o, (1000));
	init_rhino_ast_AstNode$DebugPrintVisitor_java_lang_StringBuilder(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(592);
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:getInlineComment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_inlineComment;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:setInlineComment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(601);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_inlineComment = (jref) (frame[1].o);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_AstNode_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)((func_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_rhino_ast_AstNode, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ast_AstNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_Node(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode(ctx);
	{
	LINE_NUMBER(71);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_rhino_ast_AstNode(ctx);
	SF_rhino_ast_AstNode_operatorNames = sp[0].o;
	LINE_NUMBER(74);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (52));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"in"_j))));
	LINE_NUMBER(75);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (32));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"typeof"_j))));
	LINE_NUMBER(76);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (53));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"instanceof"_j))));
	LINE_NUMBER(77);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (31));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"delete"_j))));
	LINE_NUMBER(78);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (90));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	LINE_NUMBER(79);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (104));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	LINE_NUMBER(80);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (105));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"||"_j))));
	LINE_NUMBER(81);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (106));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"&&"_j))));
	LINE_NUMBER(82);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (107));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"++"_j))));
	LINE_NUMBER(83);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (108));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"--"_j))));
	LINE_NUMBER(84);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (9));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	LINE_NUMBER(85);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (10));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"^"_j))));
	LINE_NUMBER(86);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (11));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"&"_j))));
	LINE_NUMBER(87);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (12));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"=="_j))));
	LINE_NUMBER(88);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (13));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"!="_j))));
	LINE_NUMBER(89);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (14));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<"_j))));
	LINE_NUMBER(90);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (16));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8">"_j))));
	LINE_NUMBER(91);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (15));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<="_j))));
	LINE_NUMBER(92);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (17));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8">="_j))));
	LINE_NUMBER(93);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (18));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<<"_j))));
	LINE_NUMBER(94);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (19));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8">>"_j))));
	LINE_NUMBER(95);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (20));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8">>>"_j))));
	LINE_NUMBER(96);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (21));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	LINE_NUMBER(97);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (22));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	LINE_NUMBER(98);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (23));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"*"_j))));
	LINE_NUMBER(99);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (24));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	LINE_NUMBER(100);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (25));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"%"_j))));
	LINE_NUMBER(101);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (26));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"!"_j))));
	LINE_NUMBER(102);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (27));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"~"_j))));
	LINE_NUMBER(103);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (28));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	LINE_NUMBER(104);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (29));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	LINE_NUMBER(105);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (46));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"==="_j))));
	LINE_NUMBER(106);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (47));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"!=="_j))));
	LINE_NUMBER(107);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (91));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	LINE_NUMBER(108);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (92));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"|="_j))));
	LINE_NUMBER(109);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (94));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"&="_j))));
	LINE_NUMBER(110);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (95));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"<<="_j))));
	LINE_NUMBER(111);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (96));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8">>="_j))));
	LINE_NUMBER(112);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (97));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8">>>="_j))));
	LINE_NUMBER(113);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (98));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"+="_j))));
	LINE_NUMBER(114);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (99));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-="_j))));
	LINE_NUMBER(115);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (100));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"*="_j))));
	LINE_NUMBER(116);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (101));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/="_j))));
	LINE_NUMBER(117);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (102));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"%="_j))));
	LINE_NUMBER(118);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (93));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"^="_j))));
	LINE_NUMBER(119);
	clinit_rhino_ast_AstNode(ctx);
	sp[0].o = (jobject)SF_rhino_ast_AstNode_operatorNames;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (127));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"void"_j))));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_AstNode[] {
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
	(void *) nullptr,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) nullptr,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
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
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static jclass innerClasses[] {
	&class_rhino_ast_AstNode$DebugPrintVisitor,
};

static FieldMetadata fields[] {
	{ "position", &class_int, offsetof(rhino_ast_AstNode, F_position), "I", 4 },
	{ "length", &class_int, offsetof(rhino_ast_AstNode, F_length), "I", 4 },
	{ "parent", &class_rhino_ast_AstNode, offsetof(rhino_ast_AstNode, F_parent), "Lrhino/ast/AstNode;", 4 },
	{ "inlineComment", &class_rhino_ast_AstNode, offsetof(rhino_ast_AstNode, F_inlineComment), "Lrhino/ast/AstNode;", 4 },
	{ "operatorNames", &class_java_util_Map, (intptr_t) &SF_rhino_ast_AstNode_operatorNames, "Ljava/util/Map;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_AstNode, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_AstNode_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_AstNode_int_int, 0, "(II)V", 1 },
	{ "getPosition", (intptr_t) M_rhino_ast_AstNode_getPosition_R_int, VTABLE_rhino_ast_AstNode_getPosition_R_int, "()I", 1 },
	{ "setPosition", (intptr_t) M_rhino_ast_AstNode_setPosition_int, VTABLE_rhino_ast_AstNode_setPosition_int, "(I)V", 1 },
	{ "getAbsolutePosition", (intptr_t) M_rhino_ast_AstNode_getAbsolutePosition_R_int, VTABLE_rhino_ast_AstNode_getAbsolutePosition_R_int, "()I", 1 },
	{ "getLength", (intptr_t) M_rhino_ast_AstNode_getLength_R_int, VTABLE_rhino_ast_AstNode_getLength_R_int, "()I", 1 },
	{ "setLength", (intptr_t) M_rhino_ast_AstNode_setLength_int, VTABLE_rhino_ast_AstNode_setLength_int, "(I)V", 1 },
	{ "setBounds", (intptr_t) M_rhino_ast_AstNode_setBounds_int_int, VTABLE_rhino_ast_AstNode_setBounds_int_int, "(II)V", 1 },
	{ "setRelative", (intptr_t) M_rhino_ast_AstNode_setRelative_int, VTABLE_rhino_ast_AstNode_setRelative_int, "(I)V", 1 },
	{ "getParent", (intptr_t) M_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode, VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setParent", (intptr_t) M_rhino_ast_AstNode_setParent_rhino_ast_AstNode, VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "addChild", (intptr_t) M_rhino_ast_AstNode_addChild_rhino_ast_AstNode, VTABLE_rhino_ast_AstNode_addChild_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getAstRoot", (intptr_t) M_rhino_ast_AstNode_getAstRoot_R_rhino_ast_AstRoot, VTABLE_rhino_ast_AstNode_getAstRoot_R_rhino_ast_AstRoot, "()Lrhino/ast/AstRoot;", 1 },
	{ "toSource", 0, VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1025 },
	{ "toSource", (intptr_t) M_rhino_ast_AstNode_toSource_R_java_lang_String, VTABLE_rhino_ast_AstNode_toSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "makeIndent", (intptr_t) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String, VTABLE_rhino_ast_AstNode_makeIndent_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "shortName", (intptr_t) M_rhino_ast_AstNode_shortName_R_java_lang_String, VTABLE_rhino_ast_AstNode_shortName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "operatorToString", (intptr_t) SM_rhino_ast_AstNode_operatorToString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "visit", 0, VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1025 },
	{ "hasSideEffects", (intptr_t) M_rhino_ast_AstNode_hasSideEffects_R_boolean, VTABLE_rhino_ast_AstNode_hasSideEffects_R_boolean, "()Z", 1 },
	{ "assertNotNull", (intptr_t) M_rhino_ast_AstNode_assertNotNull_java_lang_Object, VTABLE_rhino_ast_AstNode_assertNotNull_java_lang_Object, "(Ljava/lang/Object;)V", 4 },
	{ "printList", (intptr_t) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder, VTABLE_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder, "(Ljava/util/List;Ljava/lang/StringBuilder;)V", 4 },
	{ "codeBug", (intptr_t) SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException, 0, "()Ljava/lang/RuntimeException;", 9 },
	{ "getEnclosingFunction", (intptr_t) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode, VTABLE_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode, "()Lrhino/ast/FunctionNode;", 1 },
	{ "getEnclosingScope", (intptr_t) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope, VTABLE_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope, "()Lrhino/ast/Scope;", 1 },
	{ "compareTo", (intptr_t) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int, VTABLE_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int, "(Lrhino/ast/AstNode;)I", 1 },
	{ "depth", (intptr_t) M_rhino_ast_AstNode_depth_R_int, VTABLE_rhino_ast_AstNode_depth_R_int, "()I", 1 },
	{ "getLineno", (intptr_t) M_rhino_ast_AstNode_getLineno_R_int, VTABLE_rhino_ast_AstNode_getLineno_R_int, "()I", 1 },
	{ "debugPrint", (intptr_t) M_rhino_ast_AstNode_debugPrint_R_java_lang_String, VTABLE_rhino_ast_AstNode_debugPrint_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getInlineComment", (intptr_t) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode, VTABLE_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setInlineComment", (intptr_t) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode, VTABLE_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "compareTo", (intptr_t) M_rhino_ast_AstNode_compareTo_java_lang_Object_R_int, VTABLE_rhino_ast_AstNode_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_rhino_ast_AstNode, 0, "()V", 8 },
};

Class class_rhino_ast_AstNode{
		.nativeName = (intptr_t) "rhino/ast/AstNode",
		.parentClass = (intptr_t) &class_rhino_Node,
		.size = sizeof(rhino_ast_AstNode),
		.classVtable = (intptr_t) vtable_rhino_ast_AstNode,
		.staticInitializer = (intptr_t) clinit_rhino_ast_AstNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_AstNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 93,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_AstNode = registerClass(&class_rhino_ast_AstNode);

}
