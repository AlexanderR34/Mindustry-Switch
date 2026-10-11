#include "rhino/Node.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/NumberLiteral.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/Name.h"
#include "rhino/ast/Comment.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/Scope.h"
#include "rhino/Node_PropListItem.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "rhino/ast/ScriptNode.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/Node_NodeIterator.h"
#include "java/lang/RuntimeException.h"
#include "rhino/Node_1.h"

extern "C" {

jint SF_rhino_Node_FUNCTION_PROP;
jint SF_rhino_Node_LOCAL_PROP;
jint SF_rhino_Node_LOCAL_BLOCK_PROP;
jint SF_rhino_Node_REGEXP_PROP;
jint SF_rhino_Node_CASEARRAY_PROP;
jint SF_rhino_Node_TARGETBLOCK_PROP;
jint SF_rhino_Node_VARIABLE_PROP;
jint SF_rhino_Node_ISNUMBER_PROP;
jint SF_rhino_Node_DIRECTCALL_PROP;
jint SF_rhino_Node_SPECIALCALL_PROP;
jint SF_rhino_Node_SKIP_INDEXES_PROP;
jint SF_rhino_Node_OBJECT_IDS_PROP;
jint SF_rhino_Node_INCRDECR_PROP;
jint SF_rhino_Node_CATCH_SCOPE_PROP;
jint SF_rhino_Node_LABEL_ID_PROP;
jint SF_rhino_Node_MEMBER_TYPE_PROP;
jint SF_rhino_Node_NAME_PROP;
jint SF_rhino_Node_CONTROL_BLOCK_PROP;
jint SF_rhino_Node_PARENTHESIZED_PROP;
jint SF_rhino_Node_GENERATOR_END_PROP;
jint SF_rhino_Node_DESTRUCTURING_ARRAY_LENGTH;
jint SF_rhino_Node_DESTRUCTURING_NAMES;
jint SF_rhino_Node_DESTRUCTURING_PARAMS;
jint SF_rhino_Node_JSDOC_PROP;
jint SF_rhino_Node_EXPRESSION_CLOSURE_PROP;
jint SF_rhino_Node_DESTRUCTURING_SHORTHAND;
jint SF_rhino_Node_ARROW_FUNCTION_PROP;
jint SF_rhino_Node_DECLARATION_PROP;
jint SF_rhino_Node_LAST_PROP;
jint SF_rhino_Node_BOTH;
jint SF_rhino_Node_LEFT;
jint SF_rhino_Node_RIGHT;
jint SF_rhino_Node_NON_SPECIALCALL;
jint SF_rhino_Node_SPECIALCALL_EVAL;
jint SF_rhino_Node_SPECIALCALL_WITH;
jint SF_rhino_Node_DECR_FLAG;
jint SF_rhino_Node_POST_FLAG;
jint SF_rhino_Node_PROPERTY_FLAG;
jint SF_rhino_Node_ATTRIBUTE_FLAG;
jint SF_rhino_Node_DESCENDANTS_FLAG;
jobject SF_rhino_Node_NOT_SET;
jint SF_rhino_Node_END_UNREACHED;
jint SF_rhino_Node_END_DROPS_OFF;
jint SF_rhino_Node_END_RETURNS;
jint SF_rhino_Node_END_RETURNS_VALUE;
jint SF_rhino_Node_END_YIELDS;

void mark_rhino_Node(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Node_NOT_SET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Node_NOT_SET)->clazz)->markFunction)((jobject) SF_rhino_Node_NOT_SET, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_Node *) object;
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_first)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_first)->clazz)->markFunction)((jobject) self->F_first, mark, depth + 1);
	if (self->F_last)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_last)->clazz)->markFunction)((jobject) self->F_last, mark, depth + 1);
	if (self->F_propListHead)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_propListHead)->clazz)->markFunction)((jobject) self->F_propListHead, mark, depth + 1);
}

void init_rhino_Node_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1272);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (jint(-1));
	LINE_NUMBER(84);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1272);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (jint(-1));
	LINE_NUMBER(88);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	((rhino_Node *) NULL_CHECK(sp[1].o))->F_last = (jref) sp[2].o;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[2].o;
	LINE_NUMBER(90);
	((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_rhino_Node_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(93);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1272);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (jint(-1));
	LINE_NUMBER(94);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(95);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[2].o);
	LINE_NUMBER(96);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[3].o);
	LINE_NUMBER(97);
	((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(98);
	((rhino_Node *) NULL_CHECK((frame[3].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(101);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1272);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (jint(-1));
	LINE_NUMBER(102);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(103);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[2].o);
	LINE_NUMBER(104);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[4].o);
	LINE_NUMBER(105);
	((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(106);
	((rhino_Node *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[4].o);
	LINE_NUMBER(107);
	((rhino_Node *) NULL_CHECK((frame[4].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(110);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1272);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (jint(-1));
	LINE_NUMBER(111);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(112);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[2].i);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_rhino_Node_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(116);
	init_rhino_Node_int_rhino_Node(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(117);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[3].i);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_rhino_Node_rhino_Node_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(121);
	init_rhino_Node_int_rhino_Node_rhino_Node(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(122);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[4].i);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(126);
	init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(127);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[5].i);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Node_newNumber_double_R_rhino_Node(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:newNumber", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(131);
	clinit_rhino_ast_NumberLiteral(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_NumberLiteral);
	init_rhino_ast_NumberLiteral(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(132);
	((func_rhino_ast_NumberLiteral_setNumber_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_NumberLiteral_setNumber_double])(ctx, (frame[2].o), (frame[0].d));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Node_newString_java_lang_String_R_rhino_Node(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:newString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(ctx, (41), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:newString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(141);
	clinit_rhino_ast_Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Name);
	init_rhino_ast_Name(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(142);
	((func_rhino_ast_Name_setIdentifier_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_Name_setIdentifier_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_rhino_ast_Name_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_Name_setType_int_R_rhino_Node])(ctx, (frame[2].o), (frame[0].i));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_getType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return ((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_setType_int_R_rhino_Node(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:setType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(155);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getJsDoc_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getJsDoc", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((func_rhino_Node_getJsDocNode_R_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getJsDocNode_R_rhino_ast_Comment])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(166);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_rhino_ast_Comment_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Comment_getValue_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getJsDocNode_R_rhino_ast_Comment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getJsDocNode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_rhino_Node_getProp_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getProp_int_R_java_lang_Object])(ctx, (frame[0].o), (24));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_rhino_Node_setJsDocNode_rhino_ast_Comment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:setJsDocNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	((func_rhino_Node_putProp_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_putProp_int_java_lang_Object])(ctx, (frame[0].o), (24), (frame[1].o));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Node_hasChildren_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:hasChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_rhino_Node_getFirstChild_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getFirstChild", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getLastChild_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getLastChild", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getNext_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getNext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_next;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getChildBefore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next;
	if (sp[0].o == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(210);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(211);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"node is not a child"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getLastSibling_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getLastSibling", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Node_addChildToFront_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:addChildToFront", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(226);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[1].o);
	LINE_NUMBER(227);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(228);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[1].o);
	}
label_3:;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Node_addChildToBack_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:addChildToBack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(233);
	((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	((rhino_Node *) NULL_CHECK(sp[1].o))->F_last = (jref) sp[2].o;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[2].o;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(239);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[1].o);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_addChildrenToFront_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:addChildrenToFront", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_rhino_Node_getLastSibling_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getLastSibling_R_rhino_Node])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(244);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(245);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[1].o);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(247);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[2].o);
	}
label_4:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Node_addChildrenToBack_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:addChildrenToBack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Node_getLastSibling_R_rhino_Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getLastSibling_R_rhino_Node])(ctx, (frame[1].o));
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_last = (jref) sp[1].o;
	LINE_NUMBER(256);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(257);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[1].o);
	}
label_4:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Node_addChildBefore_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:addChildBefore", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(266);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newChild had siblings in addChildBefore"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != (frame[2].o)) goto label_3;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(270);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[1].o);
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(274);
	((func_rhino_Node_addChildAfter_rhino_Node_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_addChildAfter_rhino_Node_rhino_Node])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_addChildAfter_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:addChildAfter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(282);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newChild had siblings in addChildAfter"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(284);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(285);
	((rhino_Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(286);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != (frame[2].o)) goto label_5;
	}
	{
	LINE_NUMBER(287);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[1].o);
	}
label_5:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Node_removeChild_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:removeChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(292);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK(sp[1].o))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(296);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(297);
	((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_replaceChild_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:replaceChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(302);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(303);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first = (jref) (frame[2].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(306);
	((rhino_Node *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(309);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[2].o);
	}
label_6:;
	{
	LINE_NUMBER(310);
	((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_replaceChildAfter_rhino_Node_rhino_Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:replaceChildAfter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[3].o)))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(316);
	((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(317);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(318);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(319);
	((rhino_Node *) NULL_CHECK((frame[3].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_removeChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:removeChildren", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = jobject(nullptr);
	((rhino_Node *) NULL_CHECK(sp[1].o))->F_last = (jref) sp[2].o;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_first = (jref) sp[2].o;
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:iterator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	clinit_rhino_Node$NodeIterator(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node$NodeIterator);
	init_rhino_Node$NodeIterator_rhino_Node(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Node_propToString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:propToString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:lookupProperty", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_propListHead;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(453);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	if ((frame[1].i) == ((jint)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_type)) goto label_2;
	}
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_ensureProperty_int_R_rhino_Node$PropListItem(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:ensureProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(461);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(462);
	clinit_rhino_Node$PropListItem(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node$PropListItem);
	init_rhino_Node$PropListItem_rhino_Node$1(ctx, sp[0].o, (jobject(nullptr)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(463);
	((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_type = (frame[1].i);
	LINE_NUMBER(464);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_propListHead;
	((rhino_Node$PropListItem *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(465);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_propListHead = (jref) (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_Node_removeProp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:removeProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_propListHead;
	frame[2].o = sp[0].o;
	LINE_NUMBER(472);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(473);
	frame[3].o = (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(474);
	if (((jint)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_type) == (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(475);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(476);
	sp[0].o = (jobject)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(477);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	LINE_NUMBER(478);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(481);
	if ((frame[3].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_next;
	((rhino_Node *) NULL_CHECK(sp[0].o))->F_propListHead = (jref) sp[1].o;
	goto label_2;
	}
label_10:;
	{
	LINE_NUMBER(484);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_next;
	((rhino_Node$PropListItem *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Node_getProp_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getProp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(491);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_objectValue;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_getIntProp_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getIntProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(499);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return ((jint)((rhino_Node$PropListItem *) NULL_CHECK((frame[3].o)))->F_intValue);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_getExistingIntProp_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getExistingIntProp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(507);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_2:;
	{
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return ((jint)((rhino_Node$PropListItem *) NULL_CHECK((frame[2].o)))->F_intValue);
	}

	popStackFrame(ctx);
}

void M_rhino_Node_putProp_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:putProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(514);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(515);
	((func_rhino_Node_removeProp_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_removeProp_int])(ctx, (frame[0].o), (frame[1].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)M_rhino_Node_ensureProperty_int_R_rhino_Node$PropListItem(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(518);
	((rhino_Node$PropListItem *) NULL_CHECK((frame[3].o)))->F_objectValue = (jref) (frame[2].o);
	}
label_3:;
	LINE_NUMBER(520);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Node_putIntProp_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:putIntProp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)M_rhino_Node_ensureProperty_int_R_rhino_Node$PropListItem(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(524);
	((rhino_Node$PropListItem *) NULL_CHECK((frame[3].o)))->F_intValue = (frame[2].i);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_getLineno_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getLineno", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return ((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno);
	}

	popStackFrame(ctx);
}

void M_rhino_Node_setLineno_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:setLineno", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(536);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[1].i);
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_rhino_Node_getDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getDouble", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(541);
	jdouble temp0 = (jdouble)((func_rhino_ast_NumberLiteral_getNumber_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[0].o))))->vtable)[VTABLE_rhino_ast_NumberLiteral_getNumber_R_double])(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_setDouble_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:setDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(545);
	((func_rhino_ast_NumberLiteral_setNumber_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[0].o))))->vtable)[VTABLE_rhino_ast_NumberLiteral_setNumber_double])(ctx, (checkCast(ctx, &class_rhino_ast_NumberLiteral, (frame[0].o))), (frame[1].d));
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[0].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_setString_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:setString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(555);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(556);
	((func_rhino_ast_Name_setIdentifier_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[0].o))))->vtable)[VTABLE_rhino_ast_Name_setIdentifier_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[0].o))), (frame[1].o));
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Node_getScope_R_rhino_ast_Scope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:getScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_rhino_Node_getScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getScope_R_rhino_ast_Scope])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_setScope_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:setScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(566);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(567);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_ast_Name)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(570);
	((func_rhino_Node_setScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_setScope_rhino_ast_Scope])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Node_newTarget_R_rhino_Node(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:newTarget", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	{
	LINE_NUMBER(574);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (132));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_labelId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:labelId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(578);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (132)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (73)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (166)) goto label_1;
	}
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_1:;
	{
	LINE_NUMBER(581);
	jint temp0 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[0].o), (15), (jint(-1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_labelId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:labelId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(585);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (132)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (73)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (166)) goto label_1;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_1:;
	{
	LINE_NUMBER(588);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[0].o), (15), (frame[1].i));
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Node_hasConsistentReturnUsage_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:hasConsistentReturnUsage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	jint temp0 = (jint)M_rhino_Node_endCheck_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(658);
	if (((frame[1].i) & (jint(4))) == 0) goto label_2;
	}
	{
	if (((frame[1].i) & (11)) != 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckIf_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckIf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_next;
	frame[1].o = sp[0].o;
	LINE_NUMBER(672);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((checkCast(ctx, &class_rhino_ast_Jump, (frame[0].o)))))->F_target;
	frame[2].o = sp[0].o;
	LINE_NUMBER(674);
	jint temp0 = (jint)M_rhino_Node_endCheck_R_int(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(676);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(677);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)M_rhino_Node_endCheck_R_int(ctx, (frame[2].o));
	frame[3].i = (temp0 | temp1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(679);
	frame[3].i = ((frame[3].i) | (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckSwitch_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckSwitch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(692);
	frame[1].i = (jint(0));
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckTry_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckTry", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(728);
	frame[1].i = (jint(0));
	LINE_NUMBER(761);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckLoop_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckLoop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	sp[1].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(790);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_type) == (6)) goto label_3;
	}
	{
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((checkCast(ctx, &class_rhino_ast_Jump, (frame[1].o)))))->F_target;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	jint temp0 = (jint)M_rhino_Node_endCheck_R_int(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(797);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_first;
	if (((jint)((rhino_Node *) NULL_CHECK(sp[0].o))->F_type) != (45)) goto label_6;
	}
	{
	LINE_NUMBER(798);
	frame[2].i = ((frame[2].i) & (-2));
	}
label_6:;
	{
	LINE_NUMBER(801);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[0].o), (18), (jint(0)));
	frame[2].i = (temp0 | temp1);
	LINE_NUMBER(803);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckBlock_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckBlock", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(814);
	frame[2].i = (jint(1));
	LINE_NUMBER(818);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	if (((frame[2].i) & (jint(1))) == 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(819);
	frame[2].i = ((frame[2].i) & (-2));
	LINE_NUMBER(820);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)M_rhino_Node_endCheck_R_int(ctx, (frame[1].o));
	frame[2].i = (temp0 | temp1);
	LINE_NUMBER(818);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(822);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckLabel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckLabel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_next;
	jint temp0 = (jint)M_rhino_Node_endCheck_R_int(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(836);
	jint temp1 = frame[1].i;
	jint temp2 = (jint)((func_rhino_Node_getIntProp_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_getIntProp_int_int_R_int])(ctx, (frame[0].o), (18), (jint(0)));
	frame[1].i = (temp1 | temp2);
	LINE_NUMBER(838);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheckBreak_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheckBreak", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((func_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Jump, (frame[0].o))))->vtable)[VTABLE_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump])(ctx, (checkCast(ctx, &class_rhino_ast_Jump, (frame[0].o))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(848);
	((func_rhino_Node_putIntProp_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_putIntProp_int_int])(ctx, (frame[1].o), (18), (jint(1)));
	LINE_NUMBER(849);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_Node_endCheck_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:endCheck", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(862);
	switch(((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 4: goto label_1;
		case 50: goto label_2;
		case 73: goto label_3;
		case 121: goto label_4;
		case 122: goto label_2;
		case 130: goto label_5;
		case 132: goto label_6;
		case 133: goto label_7;
		case 134: goto label_8;
		case 142: goto label_5;
		case 166: goto label_3;
		default: goto label_9;
	}
	}
label_4:;
	{
	LINE_NUMBER(864);
	jint temp0 = (jint)M_rhino_Node_endCheckBreak_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_8:;
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)M_rhino_Node_endCheck_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(869);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(873);
	popStackFrame(ctx);
	return (8);
	}
label_2:;
	{
	LINE_NUMBER(877);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (jint(4));
	}
label_12:;
	{
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return (jint(2));
	}
label_6:;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_next;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(886);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_next;
	jint temp0 = (jint)M_rhino_Node_endCheck_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_14:;
	{
	LINE_NUMBER(887);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)M_rhino_Node_endCheckLoop_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(896);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	switch(((jint)((rhino_Node *) NULL_CHECK(sp[0].o))->F_type)) {
		case 7: goto label_18;
		case 82: goto label_19;
		case 115: goto label_20;
		case 131: goto label_21;
		default: goto label_22;
	}
	}
label_21:;
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)M_rhino_Node_endCheckLabel_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_18:;
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)M_rhino_Node_endCheckIf_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_20:;
	{
	LINE_NUMBER(906);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)M_rhino_Node_endCheckSwitch_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_19:;
	{
	LINE_NUMBER(909);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)M_rhino_Node_endCheckTry_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_22:;
	{
	LINE_NUMBER(912);
	jint temp0 = (jint)M_rhino_Node_endCheckBlock_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(916);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_Node_hasSideEffects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:hasSideEffects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(921);
	switch(((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type)) {
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
		case 90: goto label_3;
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
		case 103: goto label_4;
		case 104: goto label_2;
		case 105: goto label_5;
		case 106: goto label_5;
		case 107: goto label_1;
		case 108: goto label_1;
		case 109: goto label_2;
		case 110: goto label_2;
		case 111: goto label_2;
		case 112: goto label_2;
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
		case 134: goto label_3;
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
label_3:;
	{
	LINE_NUMBER(924);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(925);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	jint temp0 = (jint)((func_rhino_Node_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_hasSideEffects_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}
label_6:;
	{
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	if (sp[0].o != nullptr) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_9:;
	{
	LINE_NUMBER(933);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	jint temp0 = (jint)((func_rhino_Node_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK(sp[0].o))->F_next;
	LINE_NUMBER(934);
	jint temp0 = (jint)((func_rhino_Node_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_12;
label_10:;
	INST_ICONST(0);
label_12:;
	LINE_NUMBER(933);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o != nullptr) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(939);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_14:;
	{
	LINE_NUMBER(940);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	jint temp0 = (jint)((func_rhino_Node_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_last;
	jint temp0 = (jint)((func_rhino_Node_hasSideEffects_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Node_hasSideEffects_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1007);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(1010);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_Node_resetTargets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:resetTargets", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1026);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) != (126)) goto label_1;
	}
	{
	LINE_NUMBER(1027);
	M_rhino_Node_resetTargets_r(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1029);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_3:;
	LINE_NUMBER(1031);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Node_resetTargets_r(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:resetTargets_r", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1034);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (132)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (73)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) != (166)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1035);
	((func_rhino_Node_labelId_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Node_labelId_int])(ctx, (frame[0].o), (jint(-1)));
	}
label_2:;
	{
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_first;
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(1038);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1039);
	M_rhino_Node_resetTargets_r(ctx, (frame[1].o));
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((rhino_Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[1].o = sp[0].o;
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Node_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Node_toString_rhino_ObjToIntMap_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_Node_toStringTree_rhino_ast_ScriptNode_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:toStringTree", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1214);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_rhino_Node_toStringTreeHelper_rhino_ast_ScriptNode_rhino_Node_rhino_ObjToIntMap_int_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:toStringTreeHelper", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	LINE_NUMBER(1241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_Node_generatePrintIds_rhino_Node_rhino_ObjToIntMap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:generatePrintIds", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	LINE_NUMBER(1251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_Node_appendPrintId_rhino_Node_rhino_ObjToIntMap_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:appendPrintId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	LINE_NUMBER(1266);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_Node_access$000_R_rhino_Node(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:access$000", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	{
	LINE_NUMBER(12);
	clinit_rhino_Node(ctx);
	sp[0].o = (jobject)SF_rhino_Node_NOT_SET;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Node_FUNCTION_PROP = jint(1);
	SF_rhino_Node_LOCAL_PROP = jint(2);
	SF_rhino_Node_LOCAL_BLOCK_PROP = jint(3);
	SF_rhino_Node_REGEXP_PROP = jint(4);
	SF_rhino_Node_CASEARRAY_PROP = jint(5);
	SF_rhino_Node_TARGETBLOCK_PROP = jint(6);
	SF_rhino_Node_VARIABLE_PROP = jint(7);
	SF_rhino_Node_ISNUMBER_PROP = jint(8);
	SF_rhino_Node_DIRECTCALL_PROP = jint(9);
	SF_rhino_Node_SPECIALCALL_PROP = jint(10);
	SF_rhino_Node_SKIP_INDEXES_PROP = jint(11);
	SF_rhino_Node_OBJECT_IDS_PROP = jint(12);
	SF_rhino_Node_INCRDECR_PROP = jint(13);
	SF_rhino_Node_CATCH_SCOPE_PROP = jint(14);
	SF_rhino_Node_LABEL_ID_PROP = jint(15);
	SF_rhino_Node_MEMBER_TYPE_PROP = jint(16);
	SF_rhino_Node_NAME_PROP = jint(17);
	SF_rhino_Node_CONTROL_BLOCK_PROP = jint(18);
	SF_rhino_Node_PARENTHESIZED_PROP = jint(19);
	SF_rhino_Node_GENERATOR_END_PROP = jint(20);
	SF_rhino_Node_DESTRUCTURING_ARRAY_LENGTH = jint(21);
	SF_rhino_Node_DESTRUCTURING_NAMES = jint(22);
	SF_rhino_Node_DESTRUCTURING_PARAMS = jint(23);
	SF_rhino_Node_JSDOC_PROP = jint(24);
	SF_rhino_Node_EXPRESSION_CLOSURE_PROP = jint(25);
	SF_rhino_Node_DESTRUCTURING_SHORTHAND = jint(26);
	SF_rhino_Node_ARROW_FUNCTION_PROP = jint(27);
	SF_rhino_Node_DECLARATION_PROP = jint(28);
	SF_rhino_Node_LAST_PROP = jint(28);
	SF_rhino_Node_BOTH = jint(0);
	SF_rhino_Node_LEFT = jint(1);
	SF_rhino_Node_RIGHT = jint(2);
	SF_rhino_Node_NON_SPECIALCALL = jint(0);
	SF_rhino_Node_SPECIALCALL_EVAL = jint(1);
	SF_rhino_Node_SPECIALCALL_WITH = jint(2);
	SF_rhino_Node_DECR_FLAG = jint(1);
	SF_rhino_Node_POST_FLAG = jint(2);
	SF_rhino_Node_PROPERTY_FLAG = jint(1);
	SF_rhino_Node_ATTRIBUTE_FLAG = jint(2);
	SF_rhino_Node_DESCENDANTS_FLAG = jint(4);
	SF_rhino_Node_END_UNREACHED = jint(0);
	SF_rhino_Node_END_DROPS_OFF = jint(1);
	SF_rhino_Node_END_RETURNS = jint(2);
	SF_rhino_Node_END_RETURNS_VALUE = jint(4);
	SF_rhino_Node_END_YIELDS = jint(8);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Node:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Node(ctx);
	{
	LINE_NUMBER(326);
	clinit_rhino_Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Node);
	init_rhino_Node_int(ctx, sp[0].o, (jint(-1)));
	clinit_rhino_Node(ctx);
	SF_rhino_Node_NOT_SET = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Node[] {
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
	(void *) M_rhino_Node_getLineno_R_int,
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
	(void *) M_rhino_Node_hasSideEffects_R_boolean,
	(void *) M_rhino_Node_resetTargets,
	(void *) M_rhino_Node_resetTargets_r,
	(void *) M_rhino_Node_toString_rhino_ObjToIntMap_java_lang_StringBuilder,
	(void *) M_rhino_Node_toStringTree_rhino_ast_ScriptNode_R_java_lang_String,
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
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static jclass innerClasses[] {
	&class_rhino_Node$NodeIterator,
	&class_rhino_Node$PropListItem,
};

static FieldMetadata fields[] {
	{ "FUNCTION_PROP", &class_int, (intptr_t) &SF_rhino_Node_FUNCTION_PROP, "I", 25 },
	{ "LOCAL_PROP", &class_int, (intptr_t) &SF_rhino_Node_LOCAL_PROP, "I", 25 },
	{ "LOCAL_BLOCK_PROP", &class_int, (intptr_t) &SF_rhino_Node_LOCAL_BLOCK_PROP, "I", 25 },
	{ "REGEXP_PROP", &class_int, (intptr_t) &SF_rhino_Node_REGEXP_PROP, "I", 25 },
	{ "CASEARRAY_PROP", &class_int, (intptr_t) &SF_rhino_Node_CASEARRAY_PROP, "I", 25 },
	{ "TARGETBLOCK_PROP", &class_int, (intptr_t) &SF_rhino_Node_TARGETBLOCK_PROP, "I", 25 },
	{ "VARIABLE_PROP", &class_int, (intptr_t) &SF_rhino_Node_VARIABLE_PROP, "I", 25 },
	{ "ISNUMBER_PROP", &class_int, (intptr_t) &SF_rhino_Node_ISNUMBER_PROP, "I", 25 },
	{ "DIRECTCALL_PROP", &class_int, (intptr_t) &SF_rhino_Node_DIRECTCALL_PROP, "I", 25 },
	{ "SPECIALCALL_PROP", &class_int, (intptr_t) &SF_rhino_Node_SPECIALCALL_PROP, "I", 25 },
	{ "SKIP_INDEXES_PROP", &class_int, (intptr_t) &SF_rhino_Node_SKIP_INDEXES_PROP, "I", 25 },
	{ "OBJECT_IDS_PROP", &class_int, (intptr_t) &SF_rhino_Node_OBJECT_IDS_PROP, "I", 25 },
	{ "INCRDECR_PROP", &class_int, (intptr_t) &SF_rhino_Node_INCRDECR_PROP, "I", 25 },
	{ "CATCH_SCOPE_PROP", &class_int, (intptr_t) &SF_rhino_Node_CATCH_SCOPE_PROP, "I", 25 },
	{ "LABEL_ID_PROP", &class_int, (intptr_t) &SF_rhino_Node_LABEL_ID_PROP, "I", 25 },
	{ "MEMBER_TYPE_PROP", &class_int, (intptr_t) &SF_rhino_Node_MEMBER_TYPE_PROP, "I", 25 },
	{ "NAME_PROP", &class_int, (intptr_t) &SF_rhino_Node_NAME_PROP, "I", 25 },
	{ "CONTROL_BLOCK_PROP", &class_int, (intptr_t) &SF_rhino_Node_CONTROL_BLOCK_PROP, "I", 25 },
	{ "PARENTHESIZED_PROP", &class_int, (intptr_t) &SF_rhino_Node_PARENTHESIZED_PROP, "I", 25 },
	{ "GENERATOR_END_PROP", &class_int, (intptr_t) &SF_rhino_Node_GENERATOR_END_PROP, "I", 25 },
	{ "DESTRUCTURING_ARRAY_LENGTH", &class_int, (intptr_t) &SF_rhino_Node_DESTRUCTURING_ARRAY_LENGTH, "I", 25 },
	{ "DESTRUCTURING_NAMES", &class_int, (intptr_t) &SF_rhino_Node_DESTRUCTURING_NAMES, "I", 25 },
	{ "DESTRUCTURING_PARAMS", &class_int, (intptr_t) &SF_rhino_Node_DESTRUCTURING_PARAMS, "I", 25 },
	{ "JSDOC_PROP", &class_int, (intptr_t) &SF_rhino_Node_JSDOC_PROP, "I", 25 },
	{ "EXPRESSION_CLOSURE_PROP", &class_int, (intptr_t) &SF_rhino_Node_EXPRESSION_CLOSURE_PROP, "I", 25 },
	{ "DESTRUCTURING_SHORTHAND", &class_int, (intptr_t) &SF_rhino_Node_DESTRUCTURING_SHORTHAND, "I", 25 },
	{ "ARROW_FUNCTION_PROP", &class_int, (intptr_t) &SF_rhino_Node_ARROW_FUNCTION_PROP, "I", 25 },
	{ "DECLARATION_PROP", &class_int, (intptr_t) &SF_rhino_Node_DECLARATION_PROP, "I", 25 },
	{ "LAST_PROP", &class_int, (intptr_t) &SF_rhino_Node_LAST_PROP, "I", 25 },
	{ "BOTH", &class_int, (intptr_t) &SF_rhino_Node_BOTH, "I", 25 },
	{ "LEFT", &class_int, (intptr_t) &SF_rhino_Node_LEFT, "I", 25 },
	{ "RIGHT", &class_int, (intptr_t) &SF_rhino_Node_RIGHT, "I", 25 },
	{ "NON_SPECIALCALL", &class_int, (intptr_t) &SF_rhino_Node_NON_SPECIALCALL, "I", 25 },
	{ "SPECIALCALL_EVAL", &class_int, (intptr_t) &SF_rhino_Node_SPECIALCALL_EVAL, "I", 25 },
	{ "SPECIALCALL_WITH", &class_int, (intptr_t) &SF_rhino_Node_SPECIALCALL_WITH, "I", 25 },
	{ "DECR_FLAG", &class_int, (intptr_t) &SF_rhino_Node_DECR_FLAG, "I", 25 },
	{ "POST_FLAG", &class_int, (intptr_t) &SF_rhino_Node_POST_FLAG, "I", 25 },
	{ "PROPERTY_FLAG", &class_int, (intptr_t) &SF_rhino_Node_PROPERTY_FLAG, "I", 25 },
	{ "ATTRIBUTE_FLAG", &class_int, (intptr_t) &SF_rhino_Node_ATTRIBUTE_FLAG, "I", 25 },
	{ "DESCENDANTS_FLAG", &class_int, (intptr_t) &SF_rhino_Node_DESCENDANTS_FLAG, "I", 25 },
	{ "NOT_SET", &class_rhino_Node, (intptr_t) &SF_rhino_Node_NOT_SET, "Lrhino/Node;", 26 },
	{ "END_UNREACHED", &class_int, (intptr_t) &SF_rhino_Node_END_UNREACHED, "I", 25 },
	{ "END_DROPS_OFF", &class_int, (intptr_t) &SF_rhino_Node_END_DROPS_OFF, "I", 25 },
	{ "END_RETURNS", &class_int, (intptr_t) &SF_rhino_Node_END_RETURNS, "I", 25 },
	{ "END_RETURNS_VALUE", &class_int, (intptr_t) &SF_rhino_Node_END_RETURNS_VALUE, "I", 25 },
	{ "END_YIELDS", &class_int, (intptr_t) &SF_rhino_Node_END_YIELDS, "I", 25 },
	{ "type", &class_int, offsetof(rhino_Node, F_type), "I", 4 },
	{ "next", &class_rhino_Node, offsetof(rhino_Node, F_next), "Lrhino/Node;", 4 },
	{ "first", &class_rhino_Node, offsetof(rhino_Node, F_first), "Lrhino/Node;", 4 },
	{ "last", &class_rhino_Node, offsetof(rhino_Node, F_last), "Lrhino/Node;", 4 },
	{ "lineno", &class_int, offsetof(rhino_Node, F_lineno), "I", 4 },
	{ "propListHead", &class_rhino_Node$PropListItem, offsetof(rhino_Node, F_propListHead), "Lrhino/Node$PropListItem;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Node_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_rhino_Node, 0, "(ILrhino/Node;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_rhino_Node_rhino_Node, 0, "(ILrhino/Node;Lrhino/Node;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node, 0, "(ILrhino/Node;Lrhino/Node;Lrhino/Node;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_rhino_Node_int, 0, "(ILrhino/Node;I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_rhino_Node_rhino_Node_int, 0, "(ILrhino/Node;Lrhino/Node;I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_Node_int_rhino_Node_rhino_Node_rhino_Node_int, 0, "(ILrhino/Node;Lrhino/Node;Lrhino/Node;I)V", 1 },
	{ "newNumber", (intptr_t) SM_rhino_Node_newNumber_double_R_rhino_Node, 0, "(D)Lrhino/Node;", 9 },
	{ "newString", (intptr_t) SM_rhino_Node_newString_java_lang_String_R_rhino_Node, 0, "(Ljava/lang/String;)Lrhino/Node;", 9 },
	{ "newString", (intptr_t) SM_rhino_Node_newString_int_java_lang_String_R_rhino_Node, 0, "(ILjava/lang/String;)Lrhino/Node;", 9 },
	{ "getType", (intptr_t) M_rhino_Node_getType_R_int, VTABLE_rhino_Node_getType_R_int, "()I", 1 },
	{ "setType", (intptr_t) M_rhino_Node_setType_int_R_rhino_Node, VTABLE_rhino_Node_setType_int_R_rhino_Node, "(I)Lrhino/Node;", 1 },
	{ "getJsDoc", (intptr_t) M_rhino_Node_getJsDoc_R_java_lang_String, VTABLE_rhino_Node_getJsDoc_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getJsDocNode", (intptr_t) M_rhino_Node_getJsDocNode_R_rhino_ast_Comment, VTABLE_rhino_Node_getJsDocNode_R_rhino_ast_Comment, "()Lrhino/ast/Comment;", 1 },
	{ "setJsDocNode", (intptr_t) M_rhino_Node_setJsDocNode_rhino_ast_Comment, VTABLE_rhino_Node_setJsDocNode_rhino_ast_Comment, "(Lrhino/ast/Comment;)V", 1 },
	{ "hasChildren", (intptr_t) M_rhino_Node_hasChildren_R_boolean, VTABLE_rhino_Node_hasChildren_R_boolean, "()Z", 1 },
	{ "getFirstChild", (intptr_t) M_rhino_Node_getFirstChild_R_rhino_Node, VTABLE_rhino_Node_getFirstChild_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "getLastChild", (intptr_t) M_rhino_Node_getLastChild_R_rhino_Node, VTABLE_rhino_Node_getLastChild_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "getNext", (intptr_t) M_rhino_Node_getNext_R_rhino_Node, VTABLE_rhino_Node_getNext_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "getChildBefore", (intptr_t) M_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node, VTABLE_rhino_Node_getChildBefore_rhino_Node_R_rhino_Node, "(Lrhino/Node;)Lrhino/Node;", 1 },
	{ "getLastSibling", (intptr_t) M_rhino_Node_getLastSibling_R_rhino_Node, VTABLE_rhino_Node_getLastSibling_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "addChildToFront", (intptr_t) M_rhino_Node_addChildToFront_rhino_Node, VTABLE_rhino_Node_addChildToFront_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "addChildToBack", (intptr_t) M_rhino_Node_addChildToBack_rhino_Node, VTABLE_rhino_Node_addChildToBack_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "addChildrenToFront", (intptr_t) M_rhino_Node_addChildrenToFront_rhino_Node, VTABLE_rhino_Node_addChildrenToFront_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "addChildrenToBack", (intptr_t) M_rhino_Node_addChildrenToBack_rhino_Node, VTABLE_rhino_Node_addChildrenToBack_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "addChildBefore", (intptr_t) M_rhino_Node_addChildBefore_rhino_Node_rhino_Node, VTABLE_rhino_Node_addChildBefore_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;)V", 1 },
	{ "addChildAfter", (intptr_t) M_rhino_Node_addChildAfter_rhino_Node_rhino_Node, VTABLE_rhino_Node_addChildAfter_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;)V", 1 },
	{ "removeChild", (intptr_t) M_rhino_Node_removeChild_rhino_Node, VTABLE_rhino_Node_removeChild_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "replaceChild", (intptr_t) M_rhino_Node_replaceChild_rhino_Node_rhino_Node, VTABLE_rhino_Node_replaceChild_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;)V", 1 },
	{ "replaceChildAfter", (intptr_t) M_rhino_Node_replaceChildAfter_rhino_Node_rhino_Node, VTABLE_rhino_Node_replaceChildAfter_rhino_Node_rhino_Node, "(Lrhino/Node;Lrhino/Node;)V", 1 },
	{ "removeChildren", (intptr_t) M_rhino_Node_removeChildren, VTABLE_rhino_Node_removeChildren, "()V", 1 },
	{ "iterator", (intptr_t) M_rhino_Node_iterator_R_java_util_Iterator, VTABLE_rhino_Node_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "propToString", (intptr_t) SM_rhino_Node_propToString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 10 },
	{ "lookupProperty", (intptr_t) M_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem, VTABLE_rhino_Node_lookupProperty_int_R_rhino_Node$PropListItem, "(I)Lrhino/Node$PropListItem;", 2 },
	{ "ensureProperty", (intptr_t) M_rhino_Node_ensureProperty_int_R_rhino_Node$PropListItem, VTABLE_rhino_Node_ensureProperty_int_R_rhino_Node$PropListItem, "(I)Lrhino/Node$PropListItem;", 2 },
	{ "removeProp", (intptr_t) M_rhino_Node_removeProp_int, VTABLE_rhino_Node_removeProp_int, "(I)V", 1 },
	{ "getProp", (intptr_t) M_rhino_Node_getProp_int_R_java_lang_Object, VTABLE_rhino_Node_getProp_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 1 },
	{ "getIntProp", (intptr_t) M_rhino_Node_getIntProp_int_int_R_int, VTABLE_rhino_Node_getIntProp_int_int_R_int, "(II)I", 1 },
	{ "getExistingIntProp", (intptr_t) M_rhino_Node_getExistingIntProp_int_R_int, VTABLE_rhino_Node_getExistingIntProp_int_R_int, "(I)I", 1 },
	{ "putProp", (intptr_t) M_rhino_Node_putProp_int_java_lang_Object, VTABLE_rhino_Node_putProp_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "putIntProp", (intptr_t) M_rhino_Node_putIntProp_int_int, VTABLE_rhino_Node_putIntProp_int_int, "(II)V", 1 },
	{ "getLineno", (intptr_t) M_rhino_Node_getLineno_R_int, VTABLE_rhino_Node_getLineno_R_int, "()I", 1 },
	{ "setLineno", (intptr_t) M_rhino_Node_setLineno_int, VTABLE_rhino_Node_setLineno_int, "(I)V", 1 },
	{ "getDouble", (intptr_t) M_rhino_Node_getDouble_R_double, VTABLE_rhino_Node_getDouble_R_double, "()D", 17 },
	{ "setDouble", (intptr_t) M_rhino_Node_setDouble_double, VTABLE_rhino_Node_setDouble_double, "(D)V", 17 },
	{ "getString", (intptr_t) M_rhino_Node_getString_R_java_lang_String, VTABLE_rhino_Node_getString_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "setString", (intptr_t) M_rhino_Node_setString_java_lang_String, VTABLE_rhino_Node_setString_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "getScope", (intptr_t) M_rhino_Node_getScope_R_rhino_ast_Scope, VTABLE_rhino_Node_getScope_R_rhino_ast_Scope, "()Lrhino/ast/Scope;", 1 },
	{ "setScope", (intptr_t) M_rhino_Node_setScope_rhino_ast_Scope, VTABLE_rhino_Node_setScope_rhino_ast_Scope, "(Lrhino/ast/Scope;)V", 1 },
	{ "newTarget", (intptr_t) SM_rhino_Node_newTarget_R_rhino_Node, 0, "()Lrhino/Node;", 9 },
	{ "labelId", (intptr_t) M_rhino_Node_labelId_R_int, VTABLE_rhino_Node_labelId_R_int, "()I", 17 },
	{ "labelId", (intptr_t) M_rhino_Node_labelId_int, VTABLE_rhino_Node_labelId_int, "(I)V", 1 },
	{ "hasConsistentReturnUsage", (intptr_t) M_rhino_Node_hasConsistentReturnUsage_R_boolean, VTABLE_rhino_Node_hasConsistentReturnUsage_R_boolean, "()Z", 1 },
	{ "endCheckIf", (intptr_t) M_rhino_Node_endCheckIf_R_int, VTABLE_rhino_Node_endCheckIf_R_int, "()I", 2 },
	{ "endCheckSwitch", (intptr_t) M_rhino_Node_endCheckSwitch_R_int, VTABLE_rhino_Node_endCheckSwitch_R_int, "()I", 2 },
	{ "endCheckTry", (intptr_t) M_rhino_Node_endCheckTry_R_int, VTABLE_rhino_Node_endCheckTry_R_int, "()I", 2 },
	{ "endCheckLoop", (intptr_t) M_rhino_Node_endCheckLoop_R_int, VTABLE_rhino_Node_endCheckLoop_R_int, "()I", 2 },
	{ "endCheckBlock", (intptr_t) M_rhino_Node_endCheckBlock_R_int, VTABLE_rhino_Node_endCheckBlock_R_int, "()I", 2 },
	{ "endCheckLabel", (intptr_t) M_rhino_Node_endCheckLabel_R_int, VTABLE_rhino_Node_endCheckLabel_R_int, "()I", 2 },
	{ "endCheckBreak", (intptr_t) M_rhino_Node_endCheckBreak_R_int, VTABLE_rhino_Node_endCheckBreak_R_int, "()I", 2 },
	{ "endCheck", (intptr_t) M_rhino_Node_endCheck_R_int, VTABLE_rhino_Node_endCheck_R_int, "()I", 2 },
	{ "hasSideEffects", (intptr_t) M_rhino_Node_hasSideEffects_R_boolean, VTABLE_rhino_Node_hasSideEffects_R_boolean, "()Z", 1 },
	{ "resetTargets", (intptr_t) M_rhino_Node_resetTargets, VTABLE_rhino_Node_resetTargets, "()V", 1 },
	{ "resetTargets_r", (intptr_t) M_rhino_Node_resetTargets_r, VTABLE_rhino_Node_resetTargets_r, "()V", 2 },
	{ "toString", (intptr_t) M_rhino_Node_toString_R_java_lang_String, VTABLE_rhino_Node_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_rhino_Node_toString_rhino_ObjToIntMap_java_lang_StringBuilder, VTABLE_rhino_Node_toString_rhino_ObjToIntMap_java_lang_StringBuilder, "(Lrhino/ObjToIntMap;Ljava/lang/StringBuilder;)V", 2 },
	{ "toStringTree", (intptr_t) M_rhino_Node_toStringTree_rhino_ast_ScriptNode_R_java_lang_String, VTABLE_rhino_Node_toStringTree_rhino_ast_ScriptNode_R_java_lang_String, "(Lrhino/ast/ScriptNode;)Ljava/lang/String;", 1 },
	{ "toStringTreeHelper", (intptr_t) SM_rhino_Node_toStringTreeHelper_rhino_ast_ScriptNode_rhino_Node_rhino_ObjToIntMap_int_java_lang_StringBuilder, 0, "(Lrhino/ast/ScriptNode;Lrhino/Node;Lrhino/ObjToIntMap;ILjava/lang/StringBuilder;)V", 10 },
	{ "generatePrintIds", (intptr_t) SM_rhino_Node_generatePrintIds_rhino_Node_rhino_ObjToIntMap, 0, "(Lrhino/Node;Lrhino/ObjToIntMap;)V", 10 },
	{ "appendPrintId", (intptr_t) SM_rhino_Node_appendPrintId_rhino_Node_rhino_ObjToIntMap_java_lang_StringBuilder, 0, "(Lrhino/Node;Lrhino/ObjToIntMap;Ljava/lang/StringBuilder;)V", 10 },
	{ "access$000", (intptr_t) SM_rhino_Node_access$000_R_rhino_Node, 0, "()Lrhino/Node;", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_Node, 0, "()V", 8 },
};

Class class_rhino_Node{
		.nativeName = (intptr_t) "rhino/Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Node),
		.classVtable = (intptr_t) vtable_rhino_Node,
		.staticInitializer = (intptr_t) clinit_rhino_Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 52,
		.nativeFields = (intptr_t) fields,
		.methodCount = 73,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 67,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Node = registerClass(&class_rhino_Node);

}
