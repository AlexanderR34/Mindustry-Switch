#include "rhino/ast/SwitchCase.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/Comment.h"
#include "rhino/Token_CommentType.h"
#include "java/lang/Iterable.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/SwitchCase.h"
#include "java/util/List.h"

extern "C" {


void mark_rhino_ast_SwitchCase(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_SwitchCase *) object;
	if (self->F_expression)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expression)->clazz)->markFunction)((jobject) self->F_expression, mark, depth + 1);
	if (self->F_statements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_statements)->clazz)->markFunction)((jobject) self->F_statements, mark, depth + 1);
}

void clinit_rhino_ast_SwitchCase(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void init_rhino_ast_SwitchCase(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_SwitchCase(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (116);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_SwitchCase_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_SwitchCase(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(29);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (116);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_SwitchCase_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_SwitchCase(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(29);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (116);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_SwitchCase_getExpression_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:getExpression", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_SwitchCase_setExpression_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:setExpression", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression = (jref) (frame[1].o);
	LINE_NUMBER(59);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(60);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ast_SwitchCase_isDefault_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:isDefault", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_SwitchCase_getStatements_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:getStatements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_SwitchCase_setStatements_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:setStatements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(87);
	((func_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(88);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:addStatement", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	((func_rhino_ast_SwitchCase_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_SwitchCase_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_SwitchCase *) NULL_CHECK(sp[0].o))->F_statements = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jint temp2 = frame[2].i;
	jint temp3 = (jint)((func_rhino_ast_SwitchCase_getPosition_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getPosition_R_int])(ctx, (frame[0].o));
	((func_rhino_ast_SwitchCase_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_SwitchCase_setLength_int])(ctx, sp[0].o, (temp2 - temp3));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	jint temp4 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(107);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_SwitchCase_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:toSource", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(112);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_SwitchCase_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_SwitchCase_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"default:\n"_j))));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"case "_j))));
	LINE_NUMBER(118);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_rhino_ast_SwitchCase_getInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_SwitchCase_getInlineComment_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_SwitchCase_getInlineComment_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_5:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (frame[4].o), ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[4].o));
	if (temp0 != (162)) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_rhino_ast_Comment_getCommentType_R_rhino_Token$CommentType) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Comment, (frame[4].o))))->vtable)[VTABLE_rhino_ast_Comment_getCommentType_R_rhino_Token$CommentType])(ctx, (checkCast(ctx, &class_rhino_ast_Comment, (frame[4].o))));
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_LINE;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_16:;
	LINE_NUMBER(131);
	goto label_13;
label_11:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_SwitchCase_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/SwitchCase:visit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_expression;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((rhino_ast_SwitchCase *) NULL_CHECK((frame[0].o)))->F_statements;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(148);
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(149);
	goto label_6;
	}
label_1:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_SwitchCase[] {
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
	(void *) M_rhino_ast_SwitchCase_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_SwitchCase_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_SwitchCase_getExpression_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_SwitchCase_setExpression_rhino_ast_AstNode,
	(void *) M_rhino_ast_SwitchCase_isDefault_R_boolean,
	(void *) M_rhino_ast_SwitchCase_getStatements_R_java_util_List,
	(void *) M_rhino_ast_SwitchCase_setStatements_java_util_List,
	(void *) M_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode,
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
	{ "getExpression", "()Lrhino/ast/AstNode;" },
	{ "setExpression", "(Lrhino/ast/AstNode;)V" },
	{ "isDefault", "()Z" },
	{ "getStatements", "()Ljava/util/List;" },
	{ "setStatements", "(Ljava/util/List;)V" },
	{ "addStatement", "(Lrhino/ast/AstNode;)V" },
};

static FieldMetadata fields[] {
	{ "expression", &class_rhino_ast_AstNode, offsetof(rhino_ast_SwitchCase, F_expression), "Lrhino/ast/AstNode;", 2 },
	{ "statements", &class_java_util_List, offsetof(rhino_ast_SwitchCase, F_statements), "Ljava/util/List;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_SwitchCase, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_SwitchCase_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_SwitchCase_int_int, 0, "(II)V", 1 },
	{ "getExpression", (intptr_t) M_rhino_ast_SwitchCase_getExpression_R_rhino_ast_AstNode, VTABLE_rhino_ast_SwitchCase_getExpression_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setExpression", (intptr_t) M_rhino_ast_SwitchCase_setExpression_rhino_ast_AstNode, VTABLE_rhino_ast_SwitchCase_setExpression_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "isDefault", (intptr_t) M_rhino_ast_SwitchCase_isDefault_R_boolean, VTABLE_rhino_ast_SwitchCase_isDefault_R_boolean, "()Z", 1 },
	{ "getStatements", (intptr_t) M_rhino_ast_SwitchCase_getStatements_R_java_util_List, VTABLE_rhino_ast_SwitchCase_getStatements_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "setStatements", (intptr_t) M_rhino_ast_SwitchCase_setStatements_java_util_List, VTABLE_rhino_ast_SwitchCase_setStatements_java_util_List, "(Ljava/util/List;)V", 1 },
	{ "addStatement", (intptr_t) M_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode, VTABLE_rhino_ast_SwitchCase_addStatement_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_SwitchCase_toSource_int_R_java_lang_String, VTABLE_rhino_ast_SwitchCase_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_SwitchCase_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_SwitchCase_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_SwitchCase{
		.nativeName = (intptr_t) "rhino/ast/SwitchCase",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_SwitchCase),
		.classVtable = (intptr_t) vtable_rhino_ast_SwitchCase,
		.staticInitializer = (intptr_t) clinit_rhino_ast_SwitchCase,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_SwitchCase,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 99,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_SwitchCase = registerClass(&class_rhino_ast_SwitchCase);

}
