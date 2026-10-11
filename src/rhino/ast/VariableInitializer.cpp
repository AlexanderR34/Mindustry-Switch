#include "rhino/ast/VariableInitializer.h"
#include "rhino/Node.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/VariableInitializer.h"
#include "rhino/ast/Name.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_rhino_ast_VariableInitializer(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_VariableInitializer *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_initializer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initializer)->clazz)->markFunction)((jobject) self->F_initializer, mark, depth + 1);
}

void clinit_rhino_ast_VariableInitializer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void M_rhino_ast_VariableInitializer_setNodeType_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:setNodeType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(28);
	if ((frame[1].i) == (123)) goto label_1;
	}
	{
	if ((frame[1].i) == (155)) goto label_1;
	}
	{
	if ((frame[1].i) == (154)) goto label_1;
	}
	{
	LINE_NUMBER(31);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid node type"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_rhino_ast_VariableInitializer_setType_int_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_setType_int_R_rhino_Node])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_VariableInitializer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_VariableInitializer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (123);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_VariableInitializer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_VariableInitializer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(39);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(19);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (123);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_VariableInitializer_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_VariableInitializer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(43);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(19);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (123);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_VariableInitializer_isDestructuring_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:isDestructuring", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_target;
	if ((isInstance(ctx, sp[0].o, &class_rhino_ast_Name)) != 0) goto label_1;
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

jobject M_rhino_ast_VariableInitializer_getTarget_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:getTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_target;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:setTarget", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(73);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid target arg"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(74);
	((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(75);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_VariableInitializer_getInitializer_R_rhino_ast_AstNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:getInitializer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_initializer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_VariableInitializer_setInitializer_rhino_ast_AstNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:setInitializer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_initializer = (jref) (frame[1].o);
	LINE_NUMBER(91);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(92);
	((func_rhino_ast_AstNode_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	}
label_2:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_VariableInitializer_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:toSource", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(97);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_VariableInitializer_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_VariableInitializer_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_initializer;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	LINE_NUMBER(102);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_initializer;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, sp[1].o, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_VariableInitializer_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/VariableInitializer:visit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_target;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_initializer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((rhino_ast_VariableInitializer *) NULL_CHECK((frame[0].o)))->F_initializer;
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_VariableInitializer[] {
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
	(void *) M_rhino_ast_VariableInitializer_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_VariableInitializer_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_VariableInitializer_setNodeType_int,
	(void *) M_rhino_ast_VariableInitializer_isDestructuring_R_boolean,
	(void *) M_rhino_ast_VariableInitializer_getTarget_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode,
	(void *) M_rhino_ast_VariableInitializer_getInitializer_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_VariableInitializer_setInitializer_rhino_ast_AstNode,
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
	{ "setNodeType", "(I)V" },
	{ "isDestructuring", "()Z" },
	{ "getTarget", "()Lrhino/ast/AstNode;" },
	{ "setTarget", "(Lrhino/ast/AstNode;)V" },
	{ "getInitializer", "()Lrhino/ast/AstNode;" },
	{ "setInitializer", "(Lrhino/ast/AstNode;)V" },
};

static FieldMetadata fields[] {
	{ "target", &class_rhino_ast_AstNode, offsetof(rhino_ast_VariableInitializer, F_target), "Lrhino/ast/AstNode;", 2 },
	{ "initializer", &class_rhino_ast_AstNode, offsetof(rhino_ast_VariableInitializer, F_initializer), "Lrhino/ast/AstNode;", 2 },
};

static MethodMetadata methods[] {
	{ "setNodeType", (intptr_t) M_rhino_ast_VariableInitializer_setNodeType_int, VTABLE_rhino_ast_VariableInitializer_setNodeType_int, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_VariableInitializer, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_VariableInitializer_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_VariableInitializer_int_int, 0, "(II)V", 1 },
	{ "isDestructuring", (intptr_t) M_rhino_ast_VariableInitializer_isDestructuring_R_boolean, VTABLE_rhino_ast_VariableInitializer_isDestructuring_R_boolean, "()Z", 1 },
	{ "getTarget", (intptr_t) M_rhino_ast_VariableInitializer_getTarget_R_rhino_ast_AstNode, VTABLE_rhino_ast_VariableInitializer_getTarget_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setTarget", (intptr_t) M_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode, VTABLE_rhino_ast_VariableInitializer_setTarget_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "getInitializer", (intptr_t) M_rhino_ast_VariableInitializer_getInitializer_R_rhino_ast_AstNode, VTABLE_rhino_ast_VariableInitializer_getInitializer_R_rhino_ast_AstNode, "()Lrhino/ast/AstNode;", 1 },
	{ "setInitializer", (intptr_t) M_rhino_ast_VariableInitializer_setInitializer_rhino_ast_AstNode, VTABLE_rhino_ast_VariableInitializer_setInitializer_rhino_ast_AstNode, "(Lrhino/ast/AstNode;)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_VariableInitializer_toSource_int_R_java_lang_String, VTABLE_rhino_ast_VariableInitializer_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_VariableInitializer_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_VariableInitializer_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_VariableInitializer{
		.nativeName = (intptr_t) "rhino/ast/VariableInitializer",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_VariableInitializer),
		.classVtable = (intptr_t) vtable_rhino_ast_VariableInitializer,
		.staticInitializer = (intptr_t) clinit_rhino_ast_VariableInitializer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_VariableInitializer,
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
static bool registered_rhino_ast_VariableInitializer = registerClass(&class_rhino_ast_VariableInitializer);

}
