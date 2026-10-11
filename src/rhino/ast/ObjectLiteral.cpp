#include "rhino/ast/ObjectLiteral.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/InfixExpression.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/DestructuringForm.h"
#include "java/util/ArrayList.h"
#include "java/lang/Iterable.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/ObjectProperty.h"
#include "java/util/Collections.h"
#include "rhino/ast/ObjectLiteral.h"
#include "java/util/List.h"

extern "C" {

jobject SF_rhino_ast_ObjectLiteral_NO_ELEMS;

void mark_rhino_ast_ObjectLiteral(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ast_ObjectLiteral_NO_ELEMS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ast_ObjectLiteral_NO_ELEMS)->clazz)->markFunction)((jobject) SF_rhino_ast_ObjectLiteral_NO_ELEMS, mark, depth + 1);
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
	auto self = (rhino_ast_ObjectLiteral *) object;
	if (self->F_elements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elements)->clazz)->markFunction)((jobject) self->F_elements, mark, depth + 1);
}

void init_rhino_ast_ObjectLiteral(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ObjectLiteral(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(34);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (67);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_ObjectLiteral_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ObjectLiteral(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(41);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(34);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (67);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_ObjectLiteral_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ObjectLiteral(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(34);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (67);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ObjectLiteral_getElements_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:getElements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_rhino_ast_ObjectLiteral(ctx);
	(sp++)->o = SF_rhino_ast_ObjectLiteral_NO_ELEMS;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_ObjectLiteral_setElements_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:setElements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(63);
	((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements = (jref) (jobject(nullptr));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(67);
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
	frame[3].o = (checkCast(ctx, &class_rhino_ast_ObjectProperty, sp[0].o));
	LINE_NUMBER(68);
	((func_rhino_ast_ObjectLiteral_addElement_rhino_ast_ObjectProperty) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_addElement_rhino_ast_ObjectProperty])(ctx, (frame[0].o), (frame[3].o));
	goto label_6;
	}
label_3:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_ObjectLiteral_addElement_rhino_ast_ObjectProperty(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:addElement", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((func_rhino_ast_ObjectLiteral_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_ObjectLiteral *) NULL_CHECK(sp[0].o))->F_elements = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(83);
	((func_rhino_ast_ObjectProperty_setParent_rhino_ast_AstNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_setParent_rhino_ast_AstNode])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ObjectLiteral_setIsDestructuring_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:setIsDestructuring", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(93);
	((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_isDestructuring = (frame[1].i);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_ObjectLiteral_isDestructuring_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:isDestructuring", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_isDestructuring);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ObjectLiteral_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:toSource", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(108);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_ObjectLiteral_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{"_j))));
	LINE_NUMBER(111);
	sp[0].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_ObjectLiteral *) NULL_CHECK((frame[0].o)))->F_elements;
	((func_rhino_ast_ObjectLiteral_printList_java_util_List_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ObjectLiteral_printList_java_util_List_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ObjectLiteral_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:visit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_rhino_ast_ObjectLiteral_getElements_R_java_util_List) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ObjectLiteral_getElements_R_java_util_List])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_ObjectProperty, sp[0].o));
	LINE_NUMBER(126);
	((func_rhino_ast_ObjectProperty_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_ObjectProperty_visit_rhino_ast_NodeVisitor])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(127);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_rhino_ast_ObjectLiteral(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ObjectLiteral:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ObjectLiteral(ctx);
	{
	LINE_NUMBER(27);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_java_util_Collections_unmodifiableList_java_util_List_R_java_util_List(ctx, sp[0].o);
	clinit_rhino_ast_ObjectLiteral(ctx);
	SF_rhino_ast_ObjectLiteral_NO_ELEMS = sp[0].o;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_ObjectLiteral[] {
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
	(void *) M_rhino_ast_ObjectLiteral_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_ObjectLiteral_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_ObjectLiteral_setIsDestructuring_boolean,
	(void *) M_rhino_ast_ObjectLiteral_isDestructuring_R_boolean,
	(void *) M_rhino_ast_ObjectLiteral_getElements_R_java_util_List,
	(void *) M_rhino_ast_ObjectLiteral_setElements_java_util_List,
	(void *) M_rhino_ast_ObjectLiteral_addElement_rhino_ast_ObjectProperty,
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
	{ "setIsDestructuring", "(Z)V" },
	{ "isDestructuring", "()Z" },
	{ "getElements", "()Ljava/util/List;" },
	{ "setElements", "(Ljava/util/List;)V" },
	{ "addElement", "(Lrhino/ast/ObjectProperty;)V" },
};

static jclass interfaces[] { &class_rhino_ast_DestructuringForm, };

static FieldMetadata fields[] {
	{ "NO_ELEMS", &class_java_util_List, (intptr_t) &SF_rhino_ast_ObjectLiteral_NO_ELEMS, "Ljava/util/List;", 26 },
	{ "elements", &class_java_util_List, offsetof(rhino_ast_ObjectLiteral, F_elements), "Ljava/util/List;", 2 },
	{ "isDestructuring", &class_boolean, offsetof(rhino_ast_ObjectLiteral, F_isDestructuring), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_ObjectLiteral, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_ObjectLiteral_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_ObjectLiteral_int_int, 0, "(II)V", 1 },
	{ "getElements", (intptr_t) M_rhino_ast_ObjectLiteral_getElements_R_java_util_List, VTABLE_rhino_ast_ObjectLiteral_getElements_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "setElements", (intptr_t) M_rhino_ast_ObjectLiteral_setElements_java_util_List, VTABLE_rhino_ast_ObjectLiteral_setElements_java_util_List, "(Ljava/util/List;)V", 1 },
	{ "addElement", (intptr_t) M_rhino_ast_ObjectLiteral_addElement_rhino_ast_ObjectProperty, VTABLE_rhino_ast_ObjectLiteral_addElement_rhino_ast_ObjectProperty, "(Lrhino/ast/ObjectProperty;)V", 1 },
	{ "setIsDestructuring", (intptr_t) M_rhino_ast_ObjectLiteral_setIsDestructuring_boolean, VTABLE_rhino_ast_ObjectLiteral_setIsDestructuring_boolean, "(Z)V", 1 },
	{ "isDestructuring", (intptr_t) M_rhino_ast_ObjectLiteral_isDestructuring_R_boolean, VTABLE_rhino_ast_ObjectLiteral_isDestructuring_R_boolean, "()Z", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_ObjectLiteral_toSource_int_R_java_lang_String, VTABLE_rhino_ast_ObjectLiteral_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_ObjectLiteral_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_ObjectLiteral_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_ast_ObjectLiteral, 0, "()V", 8 },
};

Class class_rhino_ast_ObjectLiteral{
		.nativeName = (intptr_t) "rhino/ast/ObjectLiteral",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_ObjectLiteral),
		.classVtable = (intptr_t) vtable_rhino_ast_ObjectLiteral,
		.staticInitializer = (intptr_t) clinit_rhino_ast_ObjectLiteral,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_ObjectLiteral,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 98,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_ObjectLiteral = registerClass(&class_rhino_ast_ObjectLiteral);

}
