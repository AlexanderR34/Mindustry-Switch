#include "rhino/ast/AstRoot.h"
#include "java/lang/StringBuilder.h"
#include "java/util/SortedSet.h"
#include "java/util/Iterator.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/AstRoot.h"
#include "rhino/ast/Comment.h"
#include "java/util/TreeSet.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/Scope.h"
#include "java/util/Set.h"
#include "java/lang/Object.h"
#include "rhino/ast/AstRoot_invoke_java_util_Comparator_0.h"
#include "rhino/Node.h"
#include "rhino/ast/AstNode_DebugPrintVisitor.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "rhino/ast/AstRoot_invoke_rhino_ast_NodeVisitor_0.h"
#include "java/util/Comparator.h"
#include "java/lang/IllegalStateException.h"

extern "C" {


void mark_rhino_ast_AstRoot(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (rhino_ast_AstRoot *) object;
	if (self->F_comments)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comments)->clazz)->markFunction)((jobject) self->F_comments, mark, depth + 1);
}

void clinit_rhino_ast_AstRoot(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_ScriptNode(ctx);
}

void init_rhino_ast_AstRoot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstRoot(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_rhino_ast_ScriptNode(ctx, (frame[0].o));
	LINE_NUMBER(22);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (137);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_AstRoot_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstRoot(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(29);
	init_rhino_ast_ScriptNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(22);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (137);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstRoot_getComments_R_java_util_SortedSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:getComments", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstRoot_setComments_java_util_SortedSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:setComments", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(47);
	((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments = (jref) (jobject(nullptr));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	((func_java_util_Set_clear) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_clear, sp[0].o))(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o));
	LINE_NUMBER(52);
	((func_rhino_ast_AstRoot_addComment_rhino_ast_Comment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstRoot_addComment_rhino_ast_Comment])(ctx, (frame[0].o), (frame[3].o));
	goto label_6;
	}
label_3:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_AstRoot_addComment_rhino_ast_Comment(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:addComment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	((func_rhino_ast_AstRoot_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstRoot_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_java_util_TreeSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_TreeSet);
	{ /* InvokeDynamic */
		clinit_rhino_ast_AstRoot_invoke_java_util_Comparator_0(ctx);
		auto proxy = (rhino_ast_AstRoot_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_rhino_ast_AstRoot_invoke_java_util_Comparator_0);
		sp[2].o = (jobject) proxy;
	}
	init_java_util_TreeSet_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	((rhino_ast_AstRoot *) NULL_CHECK(sp[0].o))->F_comments = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(67);
	((func_rhino_ast_Comment_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Comment_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:visitComments", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((rhino_ast_AstRoot *) NULL_CHECK((frame[0].o)))->F_comments;
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_Comment, sp[0].o));
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(81);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:visitAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	((func_rhino_ast_AstRoot_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstRoot_visit_rhino_ast_NodeVisitor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(94);
	((func_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstRoot_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:toSource", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(99);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_rhino_ast_AstRoot_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstRoot_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(101);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, (frame[4].o))))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, (frame[4].o))), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_rhino_Node_getType_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Node_getType_R_int])(ctx, (frame[4].o));
	if (temp0 != (162)) goto label_6;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_6:;
	LINE_NUMBER(105);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstRoot_debugPrint_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:debugPrint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	clinit_rhino_ast_AstNode$DebugPrintVisitor(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_AstNode$DebugPrintVisitor);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[1].o, (1000));
	init_rhino_ast_AstNode$DebugPrintVisitor_java_lang_StringBuilder(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(115);
	((func_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_AstRoot_checkParentLinks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:checkParentLinks", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_rhino_ast_AstRoot_invoke_rhino_ast_NodeVisitor_0(ctx);
		auto proxy = (rhino_ast_AstRoot_invoke_rhino_ast_NodeVisitor_0 *) gcAlloc(ctx, &class_rhino_ast_AstRoot_invoke_rhino_ast_NodeVisitor_0);
		sp[1].o = (jobject) proxy;
	}
	((func_rhino_ast_AstRoot_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstRoot_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ast_AstRoot_lambda$checkParentLinks$1_rhino_ast_AstNode_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:lambda$checkParentLinks$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstRoot(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(127);
	if ((frame[1].i) != (137)) goto label_2;
	}
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_AstNode_getParent_R_rhino_ast_AstNode])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(130);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No parent for node: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	LINE_NUMBER(132);
	sp[2].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[2].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint SM_rhino_ast_AstRoot_lambda$addComment$0_rhino_ast_Comment_rhino_ast_Comment_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstRoot:lambda$addComment$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstRoot(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position) - ((jint)((rhino_ast_AstNode *) NULL_CHECK((frame[1].o)))->F_position));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_AstRoot[] {
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
	(void *) M_rhino_ast_AstRoot_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstRoot_debugPrint_R_java_lang_String,
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
	(void *) M_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int,
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
	(void *) M_rhino_ast_AstRoot_getComments_R_java_util_SortedSet,
	(void *) M_rhino_ast_AstRoot_setComments_java_util_SortedSet,
	(void *) M_rhino_ast_AstRoot_addComment_rhino_ast_Comment,
	(void *) M_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstRoot_checkParentLinks,
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
	{ "getComments", "()Ljava/util/SortedSet;" },
	{ "setComments", "(Ljava/util/SortedSet;)V" },
	{ "addComment", "(Lrhino/ast/Comment;)V" },
	{ "visitComments", "(Lrhino/ast/NodeVisitor;)V" },
	{ "visitAll", "(Lrhino/ast/NodeVisitor;)V" },
	{ "checkParentLinks", "()V" },
};

static FieldMetadata fields[] {
	{ "comments", &class_java_util_SortedSet, offsetof(rhino_ast_AstRoot, F_comments), "Ljava/util/SortedSet;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_AstRoot, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_AstRoot_int, 0, "(I)V", 1 },
	{ "getComments", (intptr_t) M_rhino_ast_AstRoot_getComments_R_java_util_SortedSet, VTABLE_rhino_ast_AstRoot_getComments_R_java_util_SortedSet, "()Ljava/util/SortedSet;", 1 },
	{ "setComments", (intptr_t) M_rhino_ast_AstRoot_setComments_java_util_SortedSet, VTABLE_rhino_ast_AstRoot_setComments_java_util_SortedSet, "(Ljava/util/SortedSet;)V", 1 },
	{ "addComment", (intptr_t) M_rhino_ast_AstRoot_addComment_rhino_ast_Comment, VTABLE_rhino_ast_AstRoot_addComment_rhino_ast_Comment, "(Lrhino/ast/Comment;)V", 1 },
	{ "visitComments", (intptr_t) M_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor, VTABLE_rhino_ast_AstRoot_visitComments_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
	{ "visitAll", (intptr_t) M_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor, VTABLE_rhino_ast_AstRoot_visitAll_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_AstRoot_toSource_int_R_java_lang_String, VTABLE_rhino_ast_AstRoot_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "debugPrint", (intptr_t) M_rhino_ast_AstRoot_debugPrint_R_java_lang_String, VTABLE_rhino_ast_AstRoot_debugPrint_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "checkParentLinks", (intptr_t) M_rhino_ast_AstRoot_checkParentLinks, VTABLE_rhino_ast_AstRoot_checkParentLinks, "()V", 1 },
	{ "lambda$checkParentLinks$1", (intptr_t) SM_rhino_ast_AstRoot_lambda$checkParentLinks$1_rhino_ast_AstNode_R_boolean, 0, "(Lrhino/ast/AstNode;)Z", 4106 },
	{ "lambda$addComment$0", (intptr_t) SM_rhino_ast_AstRoot_lambda$addComment$0_rhino_ast_Comment_rhino_ast_Comment_R_int, 0, "(Lrhino/ast/Comment;Lrhino/ast/Comment;)I", 4106 },
};

Class class_rhino_ast_AstRoot{
		.nativeName = (intptr_t) "rhino/ast/AstRoot",
		.parentClass = (intptr_t) &class_rhino_ast_ScriptNode,
		.size = sizeof(rhino_ast_AstRoot),
		.classVtable = (intptr_t) vtable_rhino_ast_AstRoot,
		.staticInitializer = (intptr_t) clinit_rhino_ast_AstRoot,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_AstRoot,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 160,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_AstRoot = registerClass(&class_rhino_ast_AstRoot);

}
