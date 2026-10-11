#include "rhino/ast/Jump.h"
#include "rhino/Node.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "java/lang/UnsupportedOperationException.h"
#include "rhino/ast/NodeVisitor.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_rhino_ast_Jump(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_Jump *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_target2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target2)->clazz)->markFunction)((jobject) self->F_target2, mark, depth + 1);
	if (self->F_jumpNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_jumpNode)->clazz)->markFunction)((jobject) self->F_jumpNode, mark, depth + 1);
}

void clinit_rhino_ast_Jump(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void init_rhino_ast_Jump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Jump(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (jint(-1));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Jump_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Jump(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(23);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Jump_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Jump(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(27);
	init_rhino_ast_Jump_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(28);
	((func_rhino_ast_Jump_setLineno_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Jump_setLineno_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Jump_int_rhino_Node(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Jump(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	init_rhino_ast_Jump_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(33);
	((func_rhino_ast_Jump_addChildToBack_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Jump_addChildToBack_rhino_Node])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Jump_int_rhino_Node_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Jump(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(37);
	init_rhino_ast_Jump_int_rhino_Node(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(38);
	((func_rhino_ast_Jump_setLineno_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Jump_setLineno_int])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:getJumpStatement", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (121)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (122)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_jumpNode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Jump_setJumpStatement_rhino_ast_Jump(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:setJumpStatement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (121)) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (122)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(48);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_jumpNode;
	if (sp[0].o == nullptr) goto label_3;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(50);
	((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_jumpNode = (jref) (frame[1].o);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Jump_getDefault_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:getDefault", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (115)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Jump_setDefault_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:setDefault", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (115)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 == (132)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2;
	if (sp[0].o == nullptr) goto label_3;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(62);
	((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2 = (jref) (frame[1].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Jump_getFinally_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:getFinally", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (82)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Jump_setFinally_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:setFinally", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (82)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 == (132)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2;
	if (sp[0].o == nullptr) goto label_3;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(74);
	((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2 = (jref) (frame[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Jump_getLoop_R_rhino_ast_Jump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:getLoop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (131)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_jumpNode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Jump_setLoop_rhino_ast_Jump(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:setLoop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (131)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(84);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_jumpNode;
	if (sp[0].o == nullptr) goto label_3;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(86);
	((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_jumpNode = (jref) (frame[1].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Jump_getContinue_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:getContinue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (133)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Jump_setContinue_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:setContinue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type) == (133)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[1].o));
	if (temp0 == (132)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2;
	if (sp[0].o == nullptr) goto label_3;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(98);
	((rhino_ast_Jump *) NULL_CHECK((frame[0].o)))->F_target2 = (jref) (frame[1].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Jump_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:visit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	sp[1].o = (jobject)((func_rhino_ast_Jump_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Jump_toString_R_java_lang_String])(ctx, (frame[0].o));
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Jump_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Jump:toSource", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(112);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	sp[1].o = (jobject)((func_rhino_ast_Jump_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Jump_toString_R_java_lang_String])(ctx, (frame[0].o));
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_Jump[] {
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
	(void *) M_rhino_ast_Jump_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_Jump_visit_rhino_ast_NodeVisitor,
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
};

static FieldMetadata fields[] {
	{ "target", &class_rhino_Node, offsetof(rhino_ast_Jump, F_target), "Lrhino/Node;", 1 },
	{ "target2", &class_rhino_Node, offsetof(rhino_ast_Jump, F_target2), "Lrhino/Node;", 2 },
	{ "jumpNode", &class_rhino_ast_Jump, offsetof(rhino_ast_Jump, F_jumpNode), "Lrhino/ast/Jump;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_Jump, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Jump_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Jump_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Jump_int_rhino_Node, 0, "(ILrhino/Node;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Jump_int_rhino_Node_int, 0, "(ILrhino/Node;I)V", 1 },
	{ "getJumpStatement", (intptr_t) M_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump, VTABLE_rhino_ast_Jump_getJumpStatement_R_rhino_ast_Jump, "()Lrhino/ast/Jump;", 1 },
	{ "setJumpStatement", (intptr_t) M_rhino_ast_Jump_setJumpStatement_rhino_ast_Jump, VTABLE_rhino_ast_Jump_setJumpStatement_rhino_ast_Jump, "(Lrhino/ast/Jump;)V", 1 },
	{ "getDefault", (intptr_t) M_rhino_ast_Jump_getDefault_R_rhino_Node, VTABLE_rhino_ast_Jump_getDefault_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "setDefault", (intptr_t) M_rhino_ast_Jump_setDefault_rhino_Node, VTABLE_rhino_ast_Jump_setDefault_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "getFinally", (intptr_t) M_rhino_ast_Jump_getFinally_R_rhino_Node, VTABLE_rhino_ast_Jump_getFinally_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "setFinally", (intptr_t) M_rhino_ast_Jump_setFinally_rhino_Node, VTABLE_rhino_ast_Jump_setFinally_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "getLoop", (intptr_t) M_rhino_ast_Jump_getLoop_R_rhino_ast_Jump, VTABLE_rhino_ast_Jump_getLoop_R_rhino_ast_Jump, "()Lrhino/ast/Jump;", 1 },
	{ "setLoop", (intptr_t) M_rhino_ast_Jump_setLoop_rhino_ast_Jump, VTABLE_rhino_ast_Jump_setLoop_rhino_ast_Jump, "(Lrhino/ast/Jump;)V", 1 },
	{ "getContinue", (intptr_t) M_rhino_ast_Jump_getContinue_R_rhino_Node, VTABLE_rhino_ast_Jump_getContinue_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "setContinue", (intptr_t) M_rhino_ast_Jump_setContinue_rhino_Node, VTABLE_rhino_ast_Jump_setContinue_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "visit", (intptr_t) M_rhino_ast_Jump_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_Jump_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_Jump_toSource_int_R_java_lang_String, VTABLE_rhino_ast_Jump_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
};

Class class_rhino_ast_Jump{
		.nativeName = (intptr_t) "rhino/ast/Jump",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_Jump),
		.classVtable = (intptr_t) vtable_rhino_ast_Jump,
		.staticInitializer = (intptr_t) clinit_rhino_ast_Jump,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_Jump,
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
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_Jump = registerClass(&class_rhino_ast_Jump);

}
