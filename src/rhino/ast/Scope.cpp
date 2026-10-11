#include "rhino/ast/Scope.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "rhino/ast/Jump.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "java/util/Map_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/ArrayList.h"
#include "java/util/Map.h"
#include "java/lang/Iterable.h"
#include "rhino/ast/Scope.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "rhino/Node.h"
#include "java/util/Set.h"
#include "rhino/ast/ScriptNode.h"
#include "java/lang/String.h"
#include "java/util/Collections.h"
#include "java/util/LinkedHashMap.h"
#include "java/lang/RuntimeException.h"
#include "java/util/List.h"
#include "rhino/ast/Symbol.h"

extern "C" {


void mark_rhino_ast_Scope(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ast_Jump(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_ast_Scope *) object;
	if (self->F_symbolTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_symbolTable)->clazz)->markFunction)((jobject) self->F_symbolTable, mark, depth + 1);
	if (self->F_parentScope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentScope)->clazz)->markFunction)((jobject) self->F_parentScope, mark, depth + 1);
	if (self->F_top)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_top)->clazz)->markFunction)((jobject) self->F_top, mark, depth + 1);
	if (self->F_childScopes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_childScopes)->clazz)->markFunction)((jobject) self->F_childScopes, mark, depth + 1);
}

void clinit_rhino_ast_Scope(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ast_Jump(ctx);
}

void init_rhino_ast_Scope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Scope(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_rhino_ast_Jump(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (130);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Scope_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Scope(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(27);
	init_rhino_ast_Jump(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((rhino_Node *) NULL_CHECK((frame[0].o)))->F_type = (130);
	LINE_NUMBER(28);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_position = (frame[1].i);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Scope_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Scope(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	init_rhino_ast_Scope_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(33);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_length = (frame[2].i);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getParentScope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_parentScope;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_setParentScope_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:setParentScope", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_parentScope = (jref) (frame[1].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_ast_ScriptNode, (frame[0].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((rhino_ast_Scope *) NULL_CHECK(sp[-1].o))->F_top;
label_3:;
	{
	sp -= 2;
	((rhino_ast_Scope *) NULL_CHECK(sp[0].o))->F_top = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_clearParentScope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:clearParentScope", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_parentScope = (jref) (jobject(nullptr));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getChildScopes_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getChildScopes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_addChildScope_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:addChildScope", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_Scope *) NULL_CHECK(sp[0].o))->F_childScopes = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(74);
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_replaceWith_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:replaceWith", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_Scope, sp[0].o));
	LINE_NUMBER(88);
	((func_rhino_ast_Scope_addChildScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Scope_addChildScope_rhino_ast_Scope])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(89);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(91);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_childScopes = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	jint temp0 = (jint)((func_java_util_Map_isEmpty_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_isEmpty_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(94);
	SM_rhino_ast_Scope_joinScopes_rhino_ast_Scope_rhino_ast_Scope(ctx, (frame[0].o), (frame[1].o));
	}
label_8:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getTop_R_rhino_ast_ScriptNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getTop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_top;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_setTop_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:setTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_top = (jref) (frame[1].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ast_Scope_splitScope_rhino_ast_Scope_R_rhino_ast_Scope(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:splitScope", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Scope(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(119);
	clinit_rhino_ast_Scope(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ast_Scope);
	jint temp0 = (jint)((func_rhino_ast_Scope_getType_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_getType_R_int])(ctx, (frame[0].o));
	init_rhino_ast_Scope_int(ctx, sp[0].o, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	((rhino_ast_Scope *) NULL_CHECK(sp[0].o))->F_symbolTable = (jref) sp[1].o;
	LINE_NUMBER(121);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable = (jref) (jobject(nullptr));
	LINE_NUMBER(122);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent;
	((rhino_ast_AstNode *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope])(ctx, (frame[0].o));
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	((func_rhino_ast_Scope_setParentScope_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope])(ctx, (frame[1].o), (frame[1].o));
	LINE_NUMBER(125);
	((rhino_ast_AstNode *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_top;
	((rhino_ast_Scope *) NULL_CHECK(sp[0].o))->F_top = (jref) sp[1].o;
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_rhino_ast_Scope_joinScopes_rhino_ast_Scope_rhino_ast_Scope(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:joinScopes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Scope(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)M_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)M_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)SM_java_util_Collections_disjoint_java_util_Collection_java_util_Collection_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)SM_rhino_ast_AstNode_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_3:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_util_Map_entrySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_entrySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_rhino_ast_Symbol, sp[0].o));
	LINE_NUMBER(141);
	((func_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope])(ctx, (frame[6].o), (frame[1].o));
	LINE_NUMBER(142);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[6].o));
	LINE_NUMBER(143);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getDefiningScope", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	frame[2].o = (frame[0].o);
	}
label_1:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getSymbolTable_R_java_util_Map) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_ast_Scope_getSymbolTable_R_java_util_Map])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(155);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_Map_containsKey_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[2].o)))->F_parentScope;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getSymbol", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_rhino_ast_Symbol, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_putSymbol_rhino_ast_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:putSymbol", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_rhino_ast_Symbol_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Symbol_getName_R_java_lang_String])(ctx, (frame[1].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(176);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null symbol name"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)M_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map(ctx, (frame[0].o));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	sp[1].o = (jobject)((func_rhino_ast_Symbol_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Symbol_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(179);
	((func_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_top;
	((func_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ast_ScriptNode_addSymbol_rhino_ast_Symbol])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getSymbolTable_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getSymbolTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_setSymbolTable_java_util_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:setSymbolTable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable = (jref) (frame[1].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:ensureSymbolTable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap_int(ctx, sp[1].o, (jint(5)));
	((rhino_ast_Scope *) NULL_CHECK(sp[0].o))->F_symbolTable = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((rhino_ast_Scope *) NULL_CHECK((frame[0].o)))->F_symbolTable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_getStatements_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:getStatements", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_rhino_ast_Scope_getFirstChild_R_rhino_Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_getFirstChild_R_rhino_Node])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(215);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(216);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (checkCast(ctx, &class_rhino_ast_AstNode, (frame[2].o))));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_rhino_Node_getNext_R_rhino_Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Node_getNext_R_rhino_Node])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Scope_toSource_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:toSource", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(224);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_Scope_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"{\n"_j))));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_rhino_ast_Scope_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_Node, sp[0].o));
	LINE_NUMBER(228);
	frame[5].o = (checkCast(ctx, &class_rhino_ast_AstNode, (frame[4].o)));
	LINE_NUMBER(229);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_AstNode_toSource_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_AstNode_toSource_int_R_java_lang_String])(ctx, (frame[5].o), ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(230);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[5].o));
	if (temp0 != (162)) goto label_9;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_9:;
	LINE_NUMBER(233);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_rhino_ast_Scope_makeIndent_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_makeIndent_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"}\n"_j))));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Scope_visit_rhino_ast_NodeVisitor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Scope:visit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)((func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_ast_NodeVisitor, INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_rhino_ast_Scope_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Scope_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
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
	LINE_NUMBER(243);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_ast_AstNode)) == 0) goto label_5;
	}
	{
	((func_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, (frame[3].o))))->vtable)[VTABLE_rhino_ast_AstNode_visit_rhino_ast_NodeVisitor])(ctx, (checkCast(ctx, &class_rhino_ast_AstNode, (frame[3].o))), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(244);
	goto label_3;
label_1:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_ast_Scope[] {
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
	(void *) M_rhino_ast_Scope_visit_rhino_ast_NodeVisitor,
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
};

static FieldMetadata fields[] {
	{ "symbolTable", &class_java_util_Map, offsetof(rhino_ast_Scope, F_symbolTable), "Ljava/util/Map;", 4 },
	{ "parentScope", &class_rhino_ast_Scope, offsetof(rhino_ast_Scope, F_parentScope), "Lrhino/ast/Scope;", 4 },
	{ "top", &class_rhino_ast_ScriptNode, offsetof(rhino_ast_Scope, F_top), "Lrhino/ast/ScriptNode;", 4 },
	{ "childScopes", &class_java_util_List, offsetof(rhino_ast_Scope, F_childScopes), "Ljava/util/List;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_Scope, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Scope_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Scope_int_int, 0, "(II)V", 1 },
	{ "getParentScope", (intptr_t) M_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope, VTABLE_rhino_ast_Scope_getParentScope_R_rhino_ast_Scope, "()Lrhino/ast/Scope;", 1 },
	{ "setParentScope", (intptr_t) M_rhino_ast_Scope_setParentScope_rhino_ast_Scope, VTABLE_rhino_ast_Scope_setParentScope_rhino_ast_Scope, "(Lrhino/ast/Scope;)V", 1 },
	{ "clearParentScope", (intptr_t) M_rhino_ast_Scope_clearParentScope, VTABLE_rhino_ast_Scope_clearParentScope, "()V", 1 },
	{ "getChildScopes", (intptr_t) M_rhino_ast_Scope_getChildScopes_R_java_util_List, VTABLE_rhino_ast_Scope_getChildScopes_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "addChildScope", (intptr_t) M_rhino_ast_Scope_addChildScope_rhino_ast_Scope, VTABLE_rhino_ast_Scope_addChildScope_rhino_ast_Scope, "(Lrhino/ast/Scope;)V", 1 },
	{ "replaceWith", (intptr_t) M_rhino_ast_Scope_replaceWith_rhino_ast_Scope, VTABLE_rhino_ast_Scope_replaceWith_rhino_ast_Scope, "(Lrhino/ast/Scope;)V", 1 },
	{ "getTop", (intptr_t) M_rhino_ast_Scope_getTop_R_rhino_ast_ScriptNode, VTABLE_rhino_ast_Scope_getTop_R_rhino_ast_ScriptNode, "()Lrhino/ast/ScriptNode;", 1 },
	{ "setTop", (intptr_t) M_rhino_ast_Scope_setTop_rhino_ast_ScriptNode, VTABLE_rhino_ast_Scope_setTop_rhino_ast_ScriptNode, "(Lrhino/ast/ScriptNode;)V", 1 },
	{ "splitScope", (intptr_t) SM_rhino_ast_Scope_splitScope_rhino_ast_Scope_R_rhino_ast_Scope, 0, "(Lrhino/ast/Scope;)Lrhino/ast/Scope;", 9 },
	{ "joinScopes", (intptr_t) SM_rhino_ast_Scope_joinScopes_rhino_ast_Scope_rhino_ast_Scope, 0, "(Lrhino/ast/Scope;Lrhino/ast/Scope;)V", 9 },
	{ "getDefiningScope", (intptr_t) M_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope, VTABLE_rhino_ast_Scope_getDefiningScope_java_lang_String_R_rhino_ast_Scope, "(Ljava/lang/String;)Lrhino/ast/Scope;", 1 },
	{ "getSymbol", (intptr_t) M_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol, VTABLE_rhino_ast_Scope_getSymbol_java_lang_String_R_rhino_ast_Symbol, "(Ljava/lang/String;)Lrhino/ast/Symbol;", 1 },
	{ "putSymbol", (intptr_t) M_rhino_ast_Scope_putSymbol_rhino_ast_Symbol, VTABLE_rhino_ast_Scope_putSymbol_rhino_ast_Symbol, "(Lrhino/ast/Symbol;)V", 1 },
	{ "getSymbolTable", (intptr_t) M_rhino_ast_Scope_getSymbolTable_R_java_util_Map, VTABLE_rhino_ast_Scope_getSymbolTable_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "setSymbolTable", (intptr_t) M_rhino_ast_Scope_setSymbolTable_java_util_Map, VTABLE_rhino_ast_Scope_setSymbolTable_java_util_Map, "(Ljava/util/Map;)V", 1 },
	{ "ensureSymbolTable", (intptr_t) M_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map, VTABLE_rhino_ast_Scope_ensureSymbolTable_R_java_util_Map, "()Ljava/util/Map;", 2 },
	{ "getStatements", (intptr_t) M_rhino_ast_Scope_getStatements_R_java_util_List, VTABLE_rhino_ast_Scope_getStatements_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "toSource", (intptr_t) M_rhino_ast_Scope_toSource_int_R_java_lang_String, VTABLE_rhino_ast_Scope_toSource_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "visit", (intptr_t) M_rhino_ast_Scope_visit_rhino_ast_NodeVisitor, VTABLE_rhino_ast_Scope_visit_rhino_ast_NodeVisitor, "(Lrhino/ast/NodeVisitor;)V", 1 },
};

Class class_rhino_ast_Scope{
		.nativeName = (intptr_t) "rhino/ast/Scope",
		.parentClass = (intptr_t) &class_rhino_ast_Jump,
		.size = sizeof(rhino_ast_Scope),
		.classVtable = (intptr_t) vtable_rhino_ast_Scope,
		.staticInitializer = (intptr_t) clinit_rhino_ast_Scope,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_Scope,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 118,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_Scope = registerClass(&class_rhino_ast_Scope);

}
