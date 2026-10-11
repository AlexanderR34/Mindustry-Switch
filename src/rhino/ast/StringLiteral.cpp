#include "rhino/ast/StringLiteral.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/StringLiteral.h"
#include "java/lang/Iterable.h"

extern "C" {


void mark_rhino_ast_StringLiteral(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_StringLiteral *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_rhino_ast_StringLiteral(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_AstNode(ctx);
}

void init_rhino_ast_StringLiteral(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_StringLiteral(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_rhino_ast_AstNode(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (41);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_StringLiteral_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_StringLiteral(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	init_rhino_ast_AstNode_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(15);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (41);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_StringLiteral_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_StringLiteral(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	init_rhino_ast_AstNode_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(15);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (41);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_StringLiteral_getValue_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_StringLiteral_getValue_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:getValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(46);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(48);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar));
	sp[1].o = (jobject)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_StringLiteral_setValue_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:setValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	((func_rhino_ast_StringLiteral_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_StringLiteral_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(58);
	((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar M_rhino_ast_StringLiteral_getQuoteCharacter_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:getQuoteCharacter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_StringLiteral_setQuoteCharacter_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:setQuoteCharacter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(69);
	((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar = (frame[1].i);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_StringLiteral_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:toSource", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_rhino_ast_StringLiteral_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_StringLiteral_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar));
	sp[1].o = (jobject)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar;
	LINE_NUMBER(76);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_escapeString_java_lang_String_char_R_java_lang_String(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ast_StringLiteral *) NULL_CHECK((frame[0].o)))->F_quoteChar));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_StringLiteral_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/StringLiteral:visit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_StringLiteral[] {
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
	(void *) M_rhino_ast_StringLiteral_toSource_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_toSource_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_makeIndent_int_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_shortName_R_java_lang_String,
	(void *) M_rhino_ast_StringLiteral_visit_rhino_ast_NodeVisitor,
	(void *) M_rhino_ast_AstNode_assertNotNull_java_lang_Object,
	(void *) M_rhino_ast_AstNode_printList_java_util_List_java_lang_StringBuilder,
	(void *) M_rhino_ast_AstNode_getEnclosingFunction_R_rhino_ast_FunctionNode,
	(void *) M_rhino_ast_AstNode_getEnclosingScope_R_rhino_ast_Scope,
	(void *) M_rhino_ast_AstNode_compareTo_rhino_ast_AstNode_R_int,
	(void *) M_rhino_ast_AstNode_depth_R_int,
	(void *) M_rhino_ast_AstNode_debugPrint_R_java_lang_String,
	(void *) M_rhino_ast_AstNode_getInlineComment_R_rhino_ast_AstNode,
	(void *) M_rhino_ast_AstNode_setInlineComment_rhino_ast_AstNode,
	(void *) M_rhino_ast_StringLiteral_getValue_R_java_lang_String,
	(void *) M_rhino_ast_StringLiteral_getValue_boolean_R_java_lang_String,
	(void *) M_rhino_ast_StringLiteral_setValue_java_lang_String,
	(void *) M_rhino_ast_StringLiteral_getQuoteCharacter_R_char,
	(void *) M_rhino_ast_StringLiteral_setQuoteCharacter_char,
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
	{ "getValue", "()Ljava/lang/String;" },
	{ "getValue", "(Z)Ljava/lang/String;" },
	{ "setValue", "(Ljava/lang/String;)V" },
	{ "getQuoteCharacter", "()C" },
	{ "setQuoteCharacter", "(C)V" },
};

static FieldMetadata fields[] {
	{ "value", &class_java_lang_String, offsetof(rhino_ast_StringLiteral, F_value), "Ljava/lang/String;", 2 },
	{ "quoteChar", &class_char, offsetof(rhino_ast_StringLiteral, F_quoteChar), "C", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_StringLiteral, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_StringLiteral_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_StringLiteral_int_int, 0, "(II)V", 1 },
	{ "getValue", (intptr_t) M_rhino_ast_StringLiteral_getValue_R_java_lang_String, VTABLE_rhino_ast_StringLiteral_getValue_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getValue", (intptr_t) M_rhino_ast_StringLiteral_getValue_boolean_R_java_lang_String, VTABLE_rhino_ast_StringLiteral_getValue_boolean_R_java_lang_String, "(Z)Ljava/lang/String;", 1 },
	{ "setValue", (intptr_t) M_rhino_ast_StringLiteral_setValue_java_lang_String, VTABLE_rhino_ast_StringLiteral_setValue_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getQuoteCharacter", (intptr_t) M_rhino_ast_StringLiteral_getQuoteCharacter_R_char, VTABLE_rhino_ast_StringLiteral_getQuoteCharacter_R_char, "()C", 1 },
	{ "setQuoteCharacter", (intptr_t) M_rhino_ast_StringLiteral_setQuoteCharacter_char, VTABLE_rhino_ast_StringLiteral_setQuoteCharacter_char, "(C)V", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_StringLiteral_toSource_int_R_java_lang_String, VTABLE_rhino_ast_StringLiteral_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_StringLiteral_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_StringLiteral_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_StringLiteral{
		.nativeName = (intptr_t) "rhino/ast/StringLiteral",
		.parentClass = (intptr_t) &class_rhino_ast_AstNode,
		.size = sizeof(rhino_ast_StringLiteral),
		.classVtable = (intptr_t) vtable_rhino_ast_StringLiteral,
		.staticInitializer = (intptr_t) clinit_rhino_ast_StringLiteral,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_StringLiteral,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 98,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_StringLiteral = registerClass(&class_rhino_ast_StringLiteral);

}
