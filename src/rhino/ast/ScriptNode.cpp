#include "rhino/ast/ScriptNode.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/ast/Name.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/FunctionNode.h"
#include "java/util/Map.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/Scope.h"
#include "rhino/ast/RegExpLiteral.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "java/util/Collections.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "rhino/ast/Symbol.h"

extern "C" {


void mark_rhino_ast_ScriptNode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ast_Scope(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ast_ScriptNode *) object;
	if (self->F_sourceName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceName)->clazz)->markFunction)((jobject) self->F_sourceName, mark, depth + 1);
	if (self->F_encodedSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encodedSource)->clazz)->markFunction)((jobject) self->F_encodedSource, mark, depth + 1);
	if (self->F_functions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_functions)->clazz)->markFunction)((jobject) self->F_functions, mark, depth + 1);
	if (self->F_regexps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regexps)->clazz)->markFunction)((jobject) self->F_regexps, mark, depth + 1);
	if (self->F_EMPTY_LIST)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_EMPTY_LIST)->clazz)->markFunction)((jobject) self->F_EMPTY_LIST, mark, depth + 1);
	if (self->F_symbols)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_symbols)->clazz)->markFunction)((jobject) self->F_symbols, mark, depth + 1);
	if (self->F_variableNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variableNames)->clazz)->markFunction)((jobject) self->F_variableNames, mark, depth + 1);
	if (self->F_isConsts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_isConsts)->clazz)->markFunction)((jobject) self->F_isConsts, mark, depth + 1);
	if (self->F_compilerData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_compilerData)->clazz)->markFunction)((jobject) self->F_compilerData, mark, depth + 1);
}

void clinit_rhino_ast_ScriptNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_Scope(ctx);
}

void init_rhino_ast_ScriptNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ScriptNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_rhino_ast_Scope(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceStart = (jint(-1));
	LINE_NUMBER(14);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceEnd = (jint(-1));
	LINE_NUMBER(17);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_endLineno = (jint(-1));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Collections_emptyList_R_java_util_List(ctx);
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_EMPTY_LIST = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[1].o, (jint(4)));
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_symbols = (jref) sp[1].o;
	LINE_NUMBER(24);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_paramCount = (jint(0));
	LINE_NUMBER(29);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_tempNumber = (jint(0));
	LINE_NUMBER(34);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[0].o);
	LINE_NUMBER(35);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (137);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_ScriptNode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ScriptNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	init_rhino_ast_Scope_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(13);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceStart = (jint(-1));
	LINE_NUMBER(14);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceEnd = (jint(-1));
	LINE_NUMBER(17);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_endLineno = (jint(-1));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_Collections_emptyList_R_java_util_List(ctx);
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_EMPTY_LIST = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[1].o, (jint(4)));
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_symbols = (jref) sp[1].o;
	LINE_NUMBER(24);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_paramCount = (jint(0));
	LINE_NUMBER(29);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_tempNumber = (jint(0));
	LINE_NUMBER(34);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[0].o);
	LINE_NUMBER(35);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (137);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getSourceName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getSourceName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_sourceName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setSourceName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setSourceName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_sourceName = (jref) (frame[1].o);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getEncodedSourceStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getEncodedSourceStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceStart);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setEncodedSourceStart_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setEncodedSourceStart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceStart = (frame[1].i);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getEncodedSourceEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceEnd);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setEncodedSourceEnd_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setEncodedSourceEnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(90);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceEnd = (frame[1].i);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setEncodedSourceBounds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(98);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceStart = (frame[1].i);
	LINE_NUMBER(99);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSourceEnd = (frame[2].i);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setEncodedSource_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setEncodedSource", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSource = (jref) (frame[1].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getEncodedSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_encodedSource;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getBaseLineno_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getBaseLineno", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return ((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setBaseLineno_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setBaseLineno", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(138);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((jint)((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno) < 0) goto label_2;
	}
label_1:;
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(139);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[1].i);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getEndLineno_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getEndLineno", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_endLineno);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setEndLineno_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setEndLineno", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(148);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((jint)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_endLineno) < 0) goto label_2;
	}
label_1:;
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(149);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_endLineno = (frame[1].i);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getFunctionCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getFunctionCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getFunctionNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ast_FunctionNode, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getFunctions_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getFunctions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_EMPTY_LIST;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((rhino_ast_ScriptNode *) NULL_CHECK(sp[-1].o))->F_functions;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:addFunction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_functions = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(174);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_functions;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp1 - (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getRegexpCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getRegexpCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getRegexpString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_rhino_ast_RegExpLiteral_getValue_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_RegExpLiteral, sp[0].o)))->vtable)[VTABLE_rhino_ast_RegExpLiteral_getValue_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_RegExpLiteral, sp[0].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getRegexpFlags", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_RegExpLiteral, sp[0].o)))->vtable)[VTABLE_rhino_ast_RegExpLiteral_getFlags_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_RegExpLiteral, sp[0].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:addRegExp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_regexps = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(197);
	sp[0].o = frame[1].o;
	jint temp1 = jint(4);
	sp[1].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_regexps;
	jint temp2 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	((func_rhino_ast_RegExpLiteral_putIntProp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_RegExpLiteral_putIntProp_int_int])(ctx, sp[0].o, temp1, (temp2 - (jint(1))));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getIndexForNameNode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	if (sp[0].o != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_rhino_Node_getScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Node_getScope_R_rhino_ast_Scope])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(203);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	{
	sp[0].o = frame[2].o;
	sp[1].o = checkCast(ctx, &class_rhino_ast_Name, (frame[1].o));
	LINE_NUMBER(205);
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(206);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	INST_ICONST(-1);
	goto label_8;
label_7:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_rhino_ast_Symbol_getIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Symbol_getIndex_R_int])(ctx, sp[0].o);
	sp++;
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getParamOrVarName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	if (sp[0].o != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getParamCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getParamCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_paramCount);
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ScriptNode_getParamAndVarCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getParamAndVarCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	if (sp[0].o != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getParamAndVarNames", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	if (sp[0].o != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getParamAndVarConst", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	if (sp[0].o != nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_isConsts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:addSymbol", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	if (sp[0].o == nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)((func_rhino_ast_Symbol_getDeclType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Symbol_getDeclType_R_int])(ctx, (frame[1].o));
	if (temp0 != (88)) goto label_2;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_paramCount = (((jint)((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_paramCount) + (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getSymbols_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getSymbols", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setSymbols_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setSymbols", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols = (jref) (frame[1].o);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_flattenSymbolTable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:flattenSymbolTable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(257);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(263);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_rhino_ast_Symbol, sp[0].o));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope])(ctx, (frame[4].o));
	if (sp[0].o != (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	}
label_9:;
	{
	LINE_NUMBER(263);
	INST_IINC(3, 1);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(270);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols = (jref) (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, temp0);
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_variableNames = (jref) sp[1].o;
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, temp1);
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[0].o))->F_isConsts = (jref) sp[1].o;
	LINE_NUMBER(274);
	frame[2].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_14;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_symbols;
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_Symbol, sp[0].o));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_variableNames;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((func_rhino_ast_Symbol_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Symbol_getName_R_java_lang_String])(ctx, (frame[3].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(277);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_isConsts;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_rhino_ast_Symbol_getDeclType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Symbol_getDeclType_R_int])(ctx, (frame[3].o));
	sp[1].i = temp1;
	sp += 2;
	if (temp2 != (155)) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(278);
	((func_rhino_ast_Symbol_setIndex_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_Symbol_setIndex_int])(ctx, (frame[3].o), (frame[2].i));
	LINE_NUMBER(274);
	INST_IINC(2, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(280);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getCompilerData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_compilerData;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setCompilerData_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setCompilerData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(287);
	((func_rhino_ast_ScriptNode_assertNotNull_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ScriptNode_assertNotNull_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_compilerData;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(290);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(291);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_compilerData = (jref) (frame[1].o);
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:getNextTempName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_ast_ScriptNode *) NULL_CHECK(sp[1].o))->F_tempNumber;
	((rhino_ast_ScriptNode *) NULL_CHECK(sp[1].o))->F_tempNumber = (temp0 + (jint(1)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_setInStrictMode_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:setInStrictMode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(299);
	((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_inStrictMode = (frame[1].i);
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_ScriptNode_isInStrictMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:isInStrictMode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ScriptNode *) NULL_CHECK((frame[0].o)))->F_inStrictMode);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ScriptNode:visit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_rhino_ast_ScriptNode_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ScriptNode_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(310);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_ast_AstNode)) == 0) goto label_5;
	}
	{
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, (frame[3].o))))->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, (frame[3].o))), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(311);
	goto label_3;
label_1:;
	LINE_NUMBER(313);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_ScriptNode[] {
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
	(void *) M_rhino_ast_Scope_toSource_int_R_java_lang_String,
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
};

static FieldMetadata fields[] {
	{ "encodedSourceStart", &class_int, offsetof(rhino_ast_ScriptNode, F_encodedSourceStart), "I", 2 },
	{ "encodedSourceEnd", &class_int, offsetof(rhino_ast_ScriptNode, F_encodedSourceEnd), "I", 2 },
	{ "sourceName", &class_java_lang_String, offsetof(rhino_ast_ScriptNode, F_sourceName), "Ljava/lang/String;", 2 },
	{ "encodedSource", &class_java_lang_String, offsetof(rhino_ast_ScriptNode, F_encodedSource), "Ljava/lang/String;", 2 },
	{ "endLineno", &class_int, offsetof(rhino_ast_ScriptNode, F_endLineno), "I", 2 },
	{ "functions", &class_java_util_List, offsetof(rhino_ast_ScriptNode, F_functions), "Ljava/util/List;", 2 },
	{ "regexps", &class_java_util_List, offsetof(rhino_ast_ScriptNode, F_regexps), "Ljava/util/List;", 2 },
	{ "EMPTY_LIST", &class_java_util_List, offsetof(rhino_ast_ScriptNode, F_EMPTY_LIST), "Ljava/util/List;", 18 },
	{ "symbols", &class_java_util_List, offsetof(rhino_ast_ScriptNode, F_symbols), "Ljava/util/List;", 2 },
	{ "paramCount", &class_int, offsetof(rhino_ast_ScriptNode, F_paramCount), "I", 2 },
	{ "variableNames", getArrayClass(&class_java_lang_String, 1), offsetof(rhino_ast_ScriptNode, F_variableNames), "[Ljava/lang/String;", 2 },
	{ "isConsts", getArrayClass(&class_boolean, 1), offsetof(rhino_ast_ScriptNode, F_isConsts), "[Z", 2 },
	{ "compilerData", &class_java_lang_Object, offsetof(rhino_ast_ScriptNode, F_compilerData), "Ljava/lang/Object;", 2 },
	{ "tempNumber", &class_int, offsetof(rhino_ast_ScriptNode, F_tempNumber), "I", 2 },
	{ "inStrictMode", &class_boolean, offsetof(rhino_ast_ScriptNode, F_inStrictMode), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_ScriptNode, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_ScriptNode_int, 0, "(I)V", 1 },
	{ "getSourceName", (intptr_t) M_rhino_ast_ScriptNode_getSourceName_R_java_lang_String, VTABLE_rhino_ast_ScriptNode_getSourceName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setSourceName", (intptr_t) M_rhino_ast_ScriptNode_setSourceName_java_lang_String, VTABLE_rhino_ast_ScriptNode_setSourceName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getEncodedSourceStart", (intptr_t) M_rhino_ast_ScriptNode_getEncodedSourceStart_R_int, VTABLE_rhino_ast_ScriptNode_getEncodedSourceStart_R_int, "()I", 1 },
	{ "setEncodedSourceStart", (intptr_t) M_rhino_ast_ScriptNode_setEncodedSourceStart_int, VTABLE_rhino_ast_ScriptNode_setEncodedSourceStart_int, "(I)V", 1 },
	{ "getEncodedSourceEnd", (intptr_t) M_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int, VTABLE_rhino_ast_ScriptNode_getEncodedSourceEnd_R_int, "()I", 1 },
	{ "setEncodedSourceEnd", (intptr_t) M_rhino_ast_ScriptNode_setEncodedSourceEnd_int, VTABLE_rhino_ast_ScriptNode_setEncodedSourceEnd_int, "(I)V", 1 },
	{ "setEncodedSourceBounds", (intptr_t) M_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int, VTABLE_rhino_ast_ScriptNode_setEncodedSourceBounds_int_int, "(II)V", 1 },
	{ "setEncodedSource", (intptr_t) M_rhino_ast_ScriptNode_setEncodedSource_java_lang_String, VTABLE_rhino_ast_ScriptNode_setEncodedSource_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getEncodedSource", (intptr_t) M_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String, VTABLE_rhino_ast_ScriptNode_getEncodedSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getBaseLineno", (intptr_t) M_rhino_ast_ScriptNode_getBaseLineno_R_int, VTABLE_rhino_ast_ScriptNode_getBaseLineno_R_int, "()I", 1 },
	{ "setBaseLineno", (intptr_t) M_rhino_ast_ScriptNode_setBaseLineno_int, VTABLE_rhino_ast_ScriptNode_setBaseLineno_int, "(I)V", 1 },
	{ "getEndLineno", (intptr_t) M_rhino_ast_ScriptNode_getEndLineno_R_int, VTABLE_rhino_ast_ScriptNode_getEndLineno_R_int, "()I", 1 },
	{ "setEndLineno", (intptr_t) M_rhino_ast_ScriptNode_setEndLineno_int, VTABLE_rhino_ast_ScriptNode_setEndLineno_int, "(I)V", 1 },
	{ "getFunctionCount", (intptr_t) M_rhino_ast_ScriptNode_getFunctionCount_R_int, VTABLE_rhino_ast_ScriptNode_getFunctionCount_R_int, "()I", 1 },
	{ "getFunctionNode", (intptr_t) M_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode, VTABLE_rhino_ast_ScriptNode_getFunctionNode_int_R_rhino_ast_FunctionNode, "(I)Lrhino/ast/FunctionNode;", 1 },
	{ "getFunctions", (intptr_t) M_rhino_ast_ScriptNode_getFunctions_R_java_util_List, VTABLE_rhino_ast_ScriptNode_getFunctions_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "addFunction", (intptr_t) M_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int, VTABLE_rhino_ast_ScriptNode_addFunction_rhino_ast_FunctionNode_R_int, "(Lrhino/ast/FunctionNode;)I", 1 },
	{ "getRegexpCount", (intptr_t) M_rhino_ast_ScriptNode_getRegexpCount_R_int, VTABLE_rhino_ast_ScriptNode_getRegexpCount_R_int, "()I", 1 },
	{ "getRegexpString", (intptr_t) M_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String, VTABLE_rhino_ast_ScriptNode_getRegexpString_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getRegexpFlags", (intptr_t) M_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String, VTABLE_rhino_ast_ScriptNode_getRegexpFlags_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "addRegExp", (intptr_t) M_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral, VTABLE_rhino_ast_ScriptNode_addRegExp_rhino_ast_RegExpLiteral, "(Lrhino/ast/RegExpLiteral;)V", 1 },
	{ "getIndexForNameNode", (intptr_t) M_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int, VTABLE_rhino_ast_ScriptNode_getIndexForNameNode_rhino_Node_R_int, "(Lrhino/Node;)I", 1 },
	{ "getParamOrVarName", (intptr_t) M_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String, VTABLE_rhino_ast_ScriptNode_getParamOrVarName_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getParamCount", (intptr_t) M_rhino_ast_ScriptNode_getParamCount_R_int, VTABLE_rhino_ast_ScriptNode_getParamCount_R_int, "()I", 1 },
	{ "getParamAndVarCount", (intptr_t) M_rhino_ast_ScriptNode_getParamAndVarCount_R_int, VTABLE_rhino_ast_ScriptNode_getParamAndVarCount_R_int, "()I", 1 },
	{ "getParamAndVarNames", (intptr_t) M_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String, VTABLE_rhino_ast_ScriptNode_getParamAndVarNames_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getParamAndVarConst", (intptr_t) M_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean, VTABLE_rhino_ast_ScriptNode_getParamAndVarConst_R_Array1_boolean, "()[Z", 1 },
	{ "addSymbol", (intptr_t) M_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol, VTABLE_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol, "(Lrhino/ast/Symbol;)V", 0 },
	{ "getSymbols", (intptr_t) M_rhino_ast_ScriptNode_getSymbols_R_java_util_List, VTABLE_rhino_ast_ScriptNode_getSymbols_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "setSymbols", (intptr_t) M_rhino_ast_ScriptNode_setSymbols_java_util_List, VTABLE_rhino_ast_ScriptNode_setSymbols_java_util_List, "(Ljava/util/List;)V", 1 },
	{ "flattenSymbolTable", (intptr_t) M_rhino_ast_ScriptNode_flattenSymbolTable_boolean, VTABLE_rhino_ast_ScriptNode_flattenSymbolTable_boolean, "(Z)V", 1 },
	{ "getCompilerData", (intptr_t) M_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object, VTABLE_rhino_ast_ScriptNode_getCompilerData_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setCompilerData", (intptr_t) M_rhino_ast_ScriptNode_setCompilerData_java_lang_Object, VTABLE_rhino_ast_ScriptNode_setCompilerData_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getNextTempName", (intptr_t) M_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String, VTABLE_rhino_ast_ScriptNode_getNextTempName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setInStrictMode", (intptr_t) M_rhino_ast_ScriptNode_setInStrictMode_boolean, VTABLE_rhino_ast_ScriptNode_setInStrictMode_boolean, "(Z)V", 1 },
	{ "isInStrictMode", (intptr_t) M_rhino_ast_ScriptNode_isInStrictMode_R_boolean, VTABLE_rhino_ast_ScriptNode_isInStrictMode_R_boolean, "()Z", 1 },
	{ "visit", (intptr_t) M_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_ScriptNode_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_ScriptNode{
		.nativeName = (intptr_t) "rhino/ast/ScriptNode",
		.parentClass = (intptr_t) &class_rhino_ast_Scope,
		.size = sizeof(rhino_ast_ScriptNode),
		.classVtable = (intptr_t) vtable_rhino_ast_ScriptNode,
		.staticInitializer = (intptr_t) clinit_rhino_ast_ScriptNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_ScriptNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 154,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_ScriptNode = registerClass(&class_rhino_ast_ScriptNode);

}
