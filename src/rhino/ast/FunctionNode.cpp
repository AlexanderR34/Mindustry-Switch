#include "rhino/ast/FunctionNode.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "java/lang/Boolean.h"
#include "rhino/ast/NodeVisitor.h"
#include "java/util/HashMap.h"
#include "rhino/ast/Name.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/FunctionNode.h"
#include "java/util/Map.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/ReturnStatement.h"
#include "rhino/ast/Scope.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "java/util/Collections.h"
#include "rhino/ast/FunctionNode_Form.h"
#include "java/util/List.h"

extern "C" {

jint SF_rhino_ast_FunctionNode_FUNCTION_STATEMENT;
jint SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION;
jint SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION_STATEMENT;
jint SF_rhino_ast_FunctionNode_ARROW_FUNCTION;
jobject SF_rhino_ast_FunctionNode_NO_PARAMS;

void mark_rhino_ast_FunctionNode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ast_FunctionNode_NO_PARAMS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ast_FunctionNode_NO_PARAMS)->clazz)->markFunction)((jobject) SF_rhino_ast_FunctionNode_NO_PARAMS, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ast_ScriptNode(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ast_FunctionNode *) object;
	if (self->F_functionName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_functionName)->clazz)->markFunction)((jobject) self->F_functionName, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
	if (self->F_body)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_body)->clazz)->markFunction)((jobject) self->F_body, mark, depth + 1);
	if (self->F_functionForm)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_functionForm)->clazz)->markFunction)((jobject) self->F_functionForm, mark, depth + 1);
	if (self->F_generatorResumePoints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generatorResumePoints)->clazz)->markFunction)((jobject) self->F_generatorResumePoints, mark, depth + 1);
	if (self->F_liveLocals)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liveLocals)->clazz)->markFunction)((jobject) self->F_liveLocals, mark, depth + 1);
	if (self->F_memberExprNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_memberExprNode)->clazz)->markFunction)((jobject) self->F_memberExprNode, mark, depth + 1);
}

void init_rhino_ast_FunctionNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_FunctionNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(83);
	init_rhino_ast_ScriptNode(ctx, (frame[0].o));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_FUNCTION;
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_functionForm = (jref) sp[1].o;
	LINE_NUMBER(67);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(68);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(80);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (110);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_FunctionNode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_FunctionNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	init_rhino_ast_ScriptNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_FUNCTION;
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_functionForm = (jref) sp[1].o;
	LINE_NUMBER(67);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(68);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(80);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (110);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_FunctionNode_int_rhino_ast_Name(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_FunctionNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	init_rhino_ast_ScriptNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_FUNCTION;
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_functionForm = (jref) sp[1].o;
	LINE_NUMBER(67);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(68);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	LINE_NUMBER(80);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (110);
	LINE_NUMBER(92);
	((func_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setFunctionName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName = (jref) (frame[1].o);
	LINE_NUMBER(109);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(110);
	((func_rhino_ast_Name_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Name_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_getParams_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getParams", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_rhino_ast_FunctionNode(ctx);
	(sp++)->o = SF_rhino_ast_FunctionNode_NO_PARAMS;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setParams_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setParams", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(137);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params = (jref) (jobject(nullptr));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(142);
	((func_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode])(ctx, (frame[0].o), (frame[3].o));
	goto label_6;
	}
label_3:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:addParam", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	((func_rhino_ast_FunctionNode_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_params = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(158);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isParam", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp0 = (jint)((func_java_util_List_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jobject M_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getBody", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_body;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setBody", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	((func_rhino_ast_FunctionNode_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(190);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_body = (jref) (frame[1].o);
	LINE_NUMBER(191);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getProp_int_R_java_lang_Object])(ctx, (frame[1].o), (25));
	jint temp0 = (jint)((func_java_lang_Boolean_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Boolean_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(192);
	((func_rhino_ast_FunctionNode_setIsExpressionClosure_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setIsExpressionClosure_boolean])(ctx, (frame[0].o), (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(195);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(196);
	((func_rhino_ast_FunctionNode_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setLength_int])(ctx, (frame[0].o), ((frame[2].i) - ((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position)));
	LINE_NUMBER(197);
	((func_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_setEncodedSourceBounds_int_int])(ctx, (frame[0].o), ((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position), (frame[2].i));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_FunctionNode_getLp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getLp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setLp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setLp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(211);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_FunctionNode_getRp_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getRp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_rp);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setRp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setRp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_rp = (frame[1].i);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setParens_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setParens", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(232);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp = (frame[1].i);
	LINE_NUMBER(233);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_rp = (frame[2].i);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_isExpressionClosure_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isExpressionClosure", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isExpressionClosure);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setIsExpressionClosure_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setIsExpressionClosure", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(247);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isExpressionClosure = (frame[1].i);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_requiresActivation_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:requiresActivation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_needsActivation);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setRequiresActivation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setRequiresActivation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_needsActivation = (jint(1));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_isGenerator_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isGenerator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isGenerator);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setIsGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setIsGenerator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isGenerator = (jint(1));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_isES6Generator_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isES6Generator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isES6Generator);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setIsES6Generator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setIsES6Generator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isES6Generator = (jint(1));
	LINE_NUMBER(281);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isGenerator = (jint(1));
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:addResumptionPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_generatorResumePoints;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_generatorResumePoints = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_generatorResumePoints;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getResumptionPoints", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_generatorResumePoints;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getLiveLocals", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_liveLocals;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:addLiveLocals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_liveLocals;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_liveLocals = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_liveLocals;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:addFunction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)M_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(307);
	jint temp1 = (jint)((func_rhino_ast_FunctionNode_getFunctionCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getFunctionCount_R_int])(ctx, (frame[0].o));
	if (temp1 <= 0) goto label_2;
	}
	{
	LINE_NUMBER(308);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_needsActivation = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_FunctionNode_getFunctionType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getFunctionType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionType);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setFunctionType_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setFunctionType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(321);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionType = (frame[1].i);
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_isMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionForm;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_GETTER;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionForm;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_SETTER;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionForm;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_METHOD;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ast_FunctionNode_isGetterMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isGetterMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionForm;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_GETTER;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_rhino_ast_FunctionNode_isSetterMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isSetterMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionForm;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_SETTER;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_rhino_ast_FunctionNode_isNormalMethod_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:isNormalMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionForm;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_METHOD;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_rhino_ast_FunctionNode_setFunctionIsGetterMethod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setFunctionIsGetterMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_GETTER;
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_functionForm = (jref) sp[1].o;
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setFunctionIsSetterMethod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setFunctionIsSetterMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_SETTER;
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_functionForm = (jref) sp[1].o;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setFunctionIsNormalMethod(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setFunctionIsNormalMethod", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	clinit_rhino_ast_FunctionNode$Form(ctx);
	sp[1].o = (jobject)SF_rhino_ast_FunctionNode$Form_METHOD;
	((rhino_ast_FunctionNode *) NULL_CHECK(sp[0].o))->F_functionForm = (jref) sp[1].o;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:setMemberExprNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(363);
	((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_memberExprNode = (jref) (frame[1].o);
	LINE_NUMBER(364);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(365);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(366);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:getMemberExprNode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_memberExprNode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_FunctionNode_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:toSource", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(374);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(375);
	if (((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionType) != (jint(4))) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(376);
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isMethod_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isMethod_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(378);
	if ((frame[3].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"function"_j))));
	}
label_5:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(384);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	sp[1].o = (jobject)((func_rhino_ast_Name_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"() "_j))));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(388);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	if (((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_lp) != (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	((func_rhino_ast_FunctionNode_printList_java_util_List_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_printList_java_util_List_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"("_j))));
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_params;
	((func_rhino_ast_FunctionNode_printList_java_util_List_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_FunctionNode_printList_java_util_List_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8") "_j))));
	}
label_14:;
	{
	LINE_NUMBER(397);
	if ((frame[3].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"=> "_j))));
	}
label_20:;
	{
	LINE_NUMBER(400);
	if (((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isExpressionClosure) == 0) goto label_22;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_getLastChild_R_rhino_Node])(ctx, (frame[4].o));
	if ((isInstance(ctx, sp[0].o, &class_rhino_ast_ReturnStatement)) == 0) goto label_25;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getLastChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_getLastChild_R_rhino_Node])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_rhino_ast_ReturnStatement_getReturnValue_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_ReturnStatement, sp[0].o)))->vtable)[VTABLE_rhino_ast_ReturnStatement_getReturnValue_R_rhino_ast_AstNode])(ctx, (checkCast(ctx, &class_rhino_ast_ReturnStatement, sp[0].o)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(405);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(406);
	if (((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionType) != (jint(1))) goto label_29;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	goto label_29;
	}
label_25:;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(412);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (frame[4].o), (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_29:;
	LINE_NUMBER(414);
	goto label_32;
label_22:;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_32:;
	{
	LINE_NUMBER(417);
	if (((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionType) == (jint(1))) goto label_33;
	}
	{
	jint temp0 = (jint)((func_rhino_ast_FunctionNode_isMethod_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_isMethod_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_34:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:visit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(430);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_functionName;
	((func_rhino_ast_Name_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Name_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getParams_R_java_util_List) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getParams_R_java_util_List])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_AstNode, sp[0].o));
	LINE_NUMBER(435);
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(436);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(438);
	if (((jint)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_isExpressionClosure) != 0) goto label_1;
	}
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_memberExprNode;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((rhino_ast_FunctionNode *) NULL_CHECK((frame[0].o)))->F_memberExprNode;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(444);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_rhino_ast_FunctionNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_ScriptNode(ctx);
	SF_rhino_ast_FunctionNode_FUNCTION_STATEMENT = jint(1);
	SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION = jint(2);
	SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION_STATEMENT = jint(3);
	SF_rhino_ast_FunctionNode_ARROW_FUNCTION = jint(4);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/FunctionNode:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_FunctionNode(ctx);
	{
	LINE_NUMBER(59);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_java_util_Collections_unmodifiableList_java_util_List_R_java_util_List(ctx, sp[0].o);
	clinit_rhino_ast_FunctionNode(ctx);
	SF_rhino_ast_FunctionNode_NO_PARAMS = sp[0].o;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_FunctionNode[] {
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
	(void *) M_rhino_ast_FunctionNode_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor,
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
	(void *) M_rhino_ast_ScriptNode_getSourceName_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_setSourceName_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_getEncodedSourceStart_R_int,
	(void *) M_rhino_ast_ScriptNode_setEncodedSourceStart_int,
	(void *) M_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int,
	(void *) M_rhino_ast_ScriptNode_setEncodedSourceEnd_int,
	(void *) M_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int,
	(void *) M_rhino_ast_ScriptNode_setEncodedSource_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_getBaseLineno_R_int,
	(void *) M_rhino_ast_ScriptNode_setBaseLineno_int,
	(void *) M_rhino_ast_ScriptNode_getEndLineno_R_int,
	(void *) M_rhino_ast_ScriptNode_setEndLineno_int,
	(void *) M_rhino_ast_ScriptNode_getFunctionCount_R_int,
	(void *) M_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_ScriptNode_getFunctions_R_java_util_List,
	(void *) M_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int,
	(void *) M_rhino_ast_ScriptNode_getRegexpCount_R_int,
	(void *) M_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral,
	(void *) M_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int,
	(void *) M_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_getParamCount_R_int,
	(void *) M_rhino_ast_ScriptNode_getParamAndVarCount_R_int,
	(void *) M_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean,
	(void *) M_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol,
	(void *) M_rhino_ast_ScriptNode_getSymbols_R_java_util_List,
	(void *) M_rhino_ast_ScriptNode_setSymbols_java_util_List,
	(void *) M_rhino_ast_ScriptNode_flattenSymbolTable_boolean,
	(void *) M_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object,
	(void *) M_rhino_ast_ScriptNode_setCompilerData_java_lang_Object,
	(void *) M_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_setInStrictMode_boolean,
	(void *) M_rhino_ast_ScriptNode_isInStrictMode_R_boolean,
	(void *) M_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name,
	(void *) M_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name,
	(void *) M_rhino_ast_FunctionNode_getName_R_java_lang_String,
	(void *) M_rhino_ast_FunctionNode_getParams_R_java_util_List,
	(void *) M_rhino_ast_FunctionNode_setParams_java_util_List,
	(void *) M_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode,
	(void *) M_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean,
	(void *) M_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode,
	(void *) M_rhino_ast_FunctionNode_getLp_R_int,
	(void *) M_rhino_ast_FunctionNode_setLp_int,
	(void *) M_rhino_ast_FunctionNode_getRp_R_int,
	(void *) M_rhino_ast_FunctionNode_setRp_int,
	(void *) M_rhino_ast_FunctionNode_setParens_int_int,
	(void *) M_rhino_ast_FunctionNode_isExpressionClosure_R_boolean,
	(void *) M_rhino_ast_FunctionNode_setIsExpressionClosure_boolean,
	(void *) M_rhino_ast_FunctionNode_requiresActivation_R_boolean,
	(void *) M_rhino_ast_FunctionNode_setRequiresActivation,
	(void *) M_rhino_ast_FunctionNode_isGenerator_R_boolean,
	(void *) M_rhino_ast_FunctionNode_setIsGenerator,
	(void *) M_rhino_ast_FunctionNode_isES6Generator_R_boolean,
	(void *) M_rhino_ast_FunctionNode_setIsES6Generator,
	(void *) M_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node,
	(void *) M_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List,
	(void *) M_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map,
	(void *) M_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int,
	(void *) M_rhino_ast_FunctionNode_getFunctionType_R_int,
	(void *) M_rhino_ast_FunctionNode_setFunctionType_int,
	(void *) M_rhino_ast_FunctionNode_isMethod_R_boolean,
	(void *) M_rhino_ast_FunctionNode_isGetterMethod_R_boolean,
	(void *) M_rhino_ast_FunctionNode_isSetterMethod_R_boolean,
	(void *) M_rhino_ast_FunctionNode_isNormalMethod_R_boolean,
	(void *) M_rhino_ast_FunctionNode_setFunctionIsGetterMethod,
	(void *) M_rhino_ast_FunctionNode_setFunctionIsSetterMethod,
	(void *) M_rhino_ast_FunctionNode_setFunctionIsNormalMethod,
	(void *) M_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode,
	(void *) M_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode,
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
	{ "getSourceName", "()Ljava/lang/String;" },
	{ "setSourceName", "(Ljava/lang/String;)V" },
	{ "getEncodedSourceStart", "()I" },
	{ "setEncodedSourceStart", "(I)V" },
	{ "getEncodedSourceEnd", "()I" },
	{ "setEncodedSourceEnd", "(I)V" },
	{ "setEncodedSourceBounds", "(II)V" },
	{ "setEncodedSource", "(Ljava/lang/String;)V" },
	{ "getEncodedSource", "()Ljava/lang/String;" },
	{ "getBaseLineno", "()I" },
	{ "setBaseLineno", "(I)V" },
	{ "getEndLineno", "()I" },
	{ "setEndLineno", "(I)V" },
	{ "getFunctionCount", "()I" },
	{ "getFunctionNode", "(I)Lrhino/ast/FunctionNode;" },
	{ "getFunctions", "()Ljava/util/List;" },
	{ "addFunction", "(Lrhino/ast/FunctionNode;)I" },
	{ "getRegexpCount", "()I" },
	{ "getRegexpString", "(I)Ljava/lang/String;" },
	{ "getRegexpFlags", "(I)Ljava/lang/String;" },
	{ "addRegExp", "(Lrhino/ast/RegExpLiteral;)V" },
	{ "getIndexForNameNode", "(Lrhino/Node;)I" },
	{ "getParamOrVarName", "(I)Ljava/lang/String;" },
	{ "getParamCount", "()I" },
	{ "getParamAndVarCount", "()I" },
	{ "getParamAndVarNames", "()[Ljava/lang/String;" },
	{ "getParamAndVarConst", "()[Z" },
	{ "addSymbol", "(Lrhino/ast/Symbol;)V" },
	{ "getSymbols", "()Ljava/util/List;" },
	{ "setSymbols", "(Ljava/util/List;)V" },
	{ "flattenSymbolTable", "(Z)V" },
	{ "getCompilerData", "()Ljava/lang/Object;" },
	{ "setCompilerData", "(Ljava/lang/Object;)V" },
	{ "getNextTempName", "()Ljava/lang/String;" },
	{ "setInStrictMode", "(Z)V" },
	{ "isInStrictMode", "()Z" },
	{ "getFunctionName", "()Lrhino/ast/Name;" },
	{ "setFunctionName", "(Lrhino/ast/Name;)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getParams", "()Ljava/util/List;" },
	{ "setParams", "(Ljava/util/List;)V" },
	{ "addParam", "(Lrhino/ast/AstNode;)V" },
	{ "isParam", "(Lrhino/ast/AstNode;)Z" },
	{ "getBody", "()Lrhino/ast/AstNode;" },
	{ "setBody", "(Lrhino/ast/AstNode;)V" },
	{ "getLp", "()I" },
	{ "setLp", "(I)V" },
	{ "getRp", "()I" },
	{ "setRp", "(I)V" },
	{ "setParens", "(II)V" },
	{ "isExpressionClosure", "()Z" },
	{ "setIsExpressionClosure", "(Z)V" },
	{ "requiresActivation", "()Z" },
	{ "setRequiresActivation", "()V" },
	{ "isGenerator", "()Z" },
	{ "setIsGenerator", "()V" },
	{ "isES6Generator", "()Z" },
	{ "setIsES6Generator", "()V" },
	{ "addResumptionPoint", "(Lrhino/Node;)V" },
	{ "getResumptionPoints", "()Ljava/util/List;" },
	{ "getLiveLocals", "()Ljava/util/Map;" },
	{ "addLiveLocals", "(Lrhino/Node;[I)V" },
	{ "getFunctionType", "()I" },
	{ "setFunctionType", "(I)V" },
	{ "isMethod", "()Z" },
	{ "isGetterMethod", "()Z" },
	{ "isSetterMethod", "()Z" },
	{ "isNormalMethod", "()Z" },
	{ "setFunctionIsGetterMethod", "()V" },
	{ "setFunctionIsSetterMethod", "()V" },
	{ "setFunctionIsNormalMethod", "()V" },
	{ "setMemberExprNode", "(Lrhino/ast/AstNode;)V" },
	{ "getMemberExprNode", "()Lrhino/ast/AstNode;" },
};

static jclass innerClasses[] {
	&class_rhino_ast_FunctionNode$Form,
};

static FieldMetadata fields[] {
	{ "FUNCTION_STATEMENT", &class_int, (intptr_t) &SF_rhino_ast_FunctionNode_FUNCTION_STATEMENT, "I", 25 },
	{ "FUNCTION_EXPRESSION", &class_int, (intptr_t) &SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION, "I", 25 },
	{ "FUNCTION_EXPRESSION_STATEMENT", &class_int, (intptr_t) &SF_rhino_ast_FunctionNode_FUNCTION_EXPRESSION_STATEMENT, "I", 25 },
	{ "ARROW_FUNCTION", &class_int, (intptr_t) &SF_rhino_ast_FunctionNode_ARROW_FUNCTION, "I", 25 },
	{ "NO_PARAMS", &class_java_util_List, (intptr_t) &SF_rhino_ast_FunctionNode_NO_PARAMS, "Ljava/util/List;", 26 },
	{ "functionName", &class_rhino_ast_Name, offsetof(rhino_ast_FunctionNode, F_functionName), "Lrhino/ast/Name;", 2 },
	{ "params", &class_java_util_List, offsetof(rhino_ast_FunctionNode, F_params), "Ljava/util/List;", 2 },
	{ "body", &class_rhino_ast_AstNode, offsetof(rhino_ast_FunctionNode, F_body), "Lrhino/ast/AstNode;", 2 },
	{ "isExpressionClosure", &class_boolean, offsetof(rhino_ast_FunctionNode, F_isExpressionClosure), "Z", 2 },
	{ "functionForm", &class_rhino_ast_FunctionNode$Form, offsetof(rhino_ast_FunctionNode, F_functionForm), "Lrhino/ast/FunctionNode$Form;", 2 },
	{ "lp", &class_int, offsetof(rhino_ast_FunctionNode, F_lp), "I", 2 },
	{ "rp", &class_int, offsetof(rhino_ast_FunctionNode, F_rp), "I", 2 },
	{ "functionType", &class_int, offsetof(rhino_ast_FunctionNode, F_functionType), "I", 2 },
	{ "needsActivation", &class_boolean, offsetof(rhino_ast_FunctionNode, F_needsActivation), "Z", 2 },
	{ "isGenerator", &class_boolean, offsetof(rhino_ast_FunctionNode, F_isGenerator), "Z", 2 },
	{ "isES6Generator", &class_boolean, offsetof(rhino_ast_FunctionNode, F_isES6Generator), "Z", 2 },
	{ "generatorResumePoints", &class_java_util_List, offsetof(rhino_ast_FunctionNode, F_generatorResumePoints), "Ljava/util/List;", 2 },
	{ "liveLocals", &class_java_util_Map, offsetof(rhino_ast_FunctionNode, F_liveLocals), "Ljava/util/Map;", 2 },
	{ "memberExprNode", &class_rhino_ast_AstNode, offsetof(rhino_ast_FunctionNode, F_memberExprNode), "Lrhino/ast/AstNode;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_FunctionNode, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_FunctionNode_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_FunctionNode_int_rhino_ast_Name, 0, "(ILrhino/ast/Name;)V", 1 },
	{ "getFunctionName", (intptr_t) M_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name, VTABLE_rhino_ast_FunctionNode_getFunctionName_R_rhino_ast_Name, "()Lrhino/ast/Name;", 1 },
	{ "setFunctionName", (intptr_t) M_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name, VTABLE_rhino_ast_FunctionNode_setFunctionName_rhino_ast_Name, "(Lrhino/ast/Name;)V", 1 },
	{ "getName", (intptr_t) M_rhino_ast_FunctionNode_getName_R_java_lang_String, VTABLE_rhino_ast_FunctionNode_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getParams", (intptr_t) M_rhino_ast_FunctionNode_getParams_R_java_util_List, VTABLE_rhino_ast_FunctionNode_getParams_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "setParams", (intptr_t) M_rhino_ast_FunctionNode_setParams_java_util_List, VTABLE_rhino_ast_FunctionNode_setParams_java_util_List, "(Ljava/util/List;)V", 1 },
	{ "addParam", (intptr_t) M_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode, VTABLE_rhino_ast_FunctionNode_addParam_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "isParam", (intptr_t) M_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean, VTABLE_rhino_ast_FunctionNode_isParam_rhino_ast_AstNode_R_boolean, "(Lrhino/ast/AstNode;)Z", 1 },
	{ "getBody", (intptr_t) M_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode, VTABLE_rhino_ast_FunctionNode_getBody_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setBody", (intptr_t) M_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode, VTABLE_rhino_ast_FunctionNode_setBody_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getLp", (intptr_t) M_rhino_ast_FunctionNode_getLp_R_int, VTABLE_rhino_ast_FunctionNode_getLp_R_int, "()I", 1 },
	{ "setLp", (intptr_t) M_rhino_ast_FunctionNode_setLp_int, VTABLE_rhino_ast_FunctionNode_setLp_int, "(I)V", 1 },
	{ "getRp", (intptr_t) M_rhino_ast_FunctionNode_getRp_R_int, VTABLE_rhino_ast_FunctionNode_getRp_R_int, "()I", 1 },
	{ "setRp", (intptr_t) M_rhino_ast_FunctionNode_setRp_int, VTABLE_rhino_ast_FunctionNode_setRp_int, "(I)V", 1 },
	{ "setParens", (intptr_t) M_rhino_ast_FunctionNode_setParens_int_int, VTABLE_rhino_ast_FunctionNode_setParens_int_int, "(II)V", 1 },
	{ "isExpressionClosure", (intptr_t) M_rhino_ast_FunctionNode_isExpressionClosure_R_boolean, VTABLE_rhino_ast_FunctionNode_isExpressionClosure_R_boolean, "()Z", 1 },
	{ "setIsExpressionClosure", (intptr_t) M_rhino_ast_FunctionNode_setIsExpressionClosure_boolean, VTABLE_rhino_ast_FunctionNode_setIsExpressionClosure_boolean, "(Z)V", 1 },
	{ "requiresActivation", (intptr_t) M_rhino_ast_FunctionNode_requiresActivation_R_boolean, VTABLE_rhino_ast_FunctionNode_requiresActivation_R_boolean, "()Z", 1 },
	{ "setRequiresActivation", (intptr_t) M_rhino_ast_FunctionNode_setRequiresActivation, VTABLE_rhino_ast_FunctionNode_setRequiresActivation, "()V", 1 },
	{ "isGenerator", (intptr_t) M_rhino_ast_FunctionNode_isGenerator_R_boolean, VTABLE_rhino_ast_FunctionNode_isGenerator_R_boolean, "()Z", 1 },
	{ "setIsGenerator", (intptr_t) M_rhino_ast_FunctionNode_setIsGenerator, VTABLE_rhino_ast_FunctionNode_setIsGenerator, "()V", 1 },
	{ "isES6Generator", (intptr_t) M_rhino_ast_FunctionNode_isES6Generator_R_boolean, VTABLE_rhino_ast_FunctionNode_isES6Generator_R_boolean, "()Z", 1 },
	{ "setIsES6Generator", (intptr_t) M_rhino_ast_FunctionNode_setIsES6Generator, VTABLE_rhino_ast_FunctionNode_setIsES6Generator, "()V", 1 },
	{ "addResumptionPoint", (intptr_t) M_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node, VTABLE_rhino_ast_FunctionNode_addResumptionPoint_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "getResumptionPoints", (intptr_t) M_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List, VTABLE_rhino_ast_FunctionNode_getResumptionPoints_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "getLiveLocals", (intptr_t) M_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map, VTABLE_rhino_ast_FunctionNode_getLiveLocals_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "addLiveLocals", (intptr_t) M_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int, VTABLE_rhino_ast_FunctionNode_addLiveLocals_rhino_Node_Array1_int, "(Lrhino/Node;[I)V", 1 },
	{ "addFunction", (intptr_t) M_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int, VTABLE_rhino_ast_FunctionNode_addFunction_rhino_ast_FunctionNode_R_int, "(Lrhino/ast/FunctionNode;)I", 1 },
	{ "getFunctionType", (intptr_t) M_rhino_ast_FunctionNode_getFunctionType_R_int, VTABLE_rhino_ast_FunctionNode_getFunctionType_R_int, "()I", 1 },
	{ "setFunctionType", (intptr_t) M_rhino_ast_FunctionNode_setFunctionType_int, VTABLE_rhino_ast_FunctionNode_setFunctionType_int, "(I)V", 1 },
	{ "isMethod", (intptr_t) M_rhino_ast_FunctionNode_isMethod_R_boolean, VTABLE_rhino_ast_FunctionNode_isMethod_R_boolean, "()Z", 1 },
	{ "isGetterMethod", (intptr_t) M_rhino_ast_FunctionNode_isGetterMethod_R_boolean, VTABLE_rhino_ast_FunctionNode_isGetterMethod_R_boolean, "()Z", 1 },
	{ "isSetterMethod", (intptr_t) M_rhino_ast_FunctionNode_isSetterMethod_R_boolean, VTABLE_rhino_ast_FunctionNode_isSetterMethod_R_boolean, "()Z", 1 },
	{ "isNormalMethod", (intptr_t) M_rhino_ast_FunctionNode_isNormalMethod_R_boolean, VTABLE_rhino_ast_FunctionNode_isNormalMethod_R_boolean, "()Z", 1 },
	{ "setFunctionIsGetterMethod", (intptr_t) M_rhino_ast_FunctionNode_setFunctionIsGetterMethod, VTABLE_rhino_ast_FunctionNode_setFunctionIsGetterMethod, "()V", 1 },
	{ "setFunctionIsSetterMethod", (intptr_t) M_rhino_ast_FunctionNode_setFunctionIsSetterMethod, VTABLE_rhino_ast_FunctionNode_setFunctionIsSetterMethod, "()V", 1 },
	{ "setFunctionIsNormalMethod", (intptr_t) M_rhino_ast_FunctionNode_setFunctionIsNormalMethod, VTABLE_rhino_ast_FunctionNode_setFunctionIsNormalMethod, "()V", 1 },
	{ "setMemberExprNode", (intptr_t) M_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode, VTABLE_rhino_ast_FunctionNode_setMemberExprNode_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getMemberExprNode", (intptr_t) M_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode, VTABLE_rhino_ast_FunctionNode_getMemberExprNode_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_FunctionNode_toSource_int_R_java_lang_String, VTABLE_rhino_ast_FunctionNode_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_FunctionNode_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_ast_FunctionNode, 0, "()V", 8 },
};

Class class_rhino_ast_FunctionNode{
		.nativeName = (intptr_t) "rhino/ast/FunctionNode",
		.parentClass = (intptr_t) &class_rhino_ast_ScriptNode,
		.size = sizeof(rhino_ast_FunctionNode),
		.classVtable = (intptr_t) vtable_rhino_ast_FunctionNode,
		.staticInitializer = (intptr_t) clinit_rhino_ast_FunctionNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_FunctionNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 191,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_FunctionNode = registerClass(&class_rhino_ast_FunctionNode);

}
