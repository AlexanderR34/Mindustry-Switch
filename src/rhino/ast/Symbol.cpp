#include "rhino/ast/Symbol.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/Token.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/ast/Symbol.h"
#include "rhino/ast/Scope.h"

extern "C" {


void mark_rhino_ast_Symbol(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (rhino_ast_Symbol *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
	if (self->F_containingTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_containingTable)->clazz)->markFunction)((jobject) self->F_containingTable, mark, depth + 1);
}

void clinit_rhino_ast_Symbol(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ast_Symbol(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Symbol(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_ast_Symbol_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_Symbol(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(27);
	((func_rhino_ast_Symbol_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Symbol_setName_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(28);
	((func_rhino_ast_Symbol_setDeclType_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Symbol_setDeclType_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_Symbol_getDeclType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:getDeclType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_declType);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Symbol_setDeclType_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:setDeclType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(42);
	if ((frame[1].i) == (110)) goto label_1;
	}
	{
	if ((frame[1].i) == (88)) goto label_1;
	}
	{
	if ((frame[1].i) == (123)) goto label_1;
	}
	{
	if ((frame[1].i) == (154)) goto label_1;
	}
	{
	if ((frame[1].i) == (155)) goto label_1;
	}
	{
	LINE_NUMBER(47);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid declType: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(48);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_declType = (frame[1].i);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Symbol_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Symbol_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Symbol_getNode_R_rhino_Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:getNode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_node;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_Symbol_getIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:getIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_index);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Symbol_setIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:setIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_index = (frame[1].i);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Symbol_setNode_rhino_Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:setNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_node = (jref) (frame[1].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:getContainingTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_containingTable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:setContainingTable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_containingTable = (jref) (frame[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:getDeclTypeName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_rhino_Token_typeToName_int_R_java_lang_String(ctx, ((jint)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_declType));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_Symbol_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/Symbol:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Symbol ("_j))));
	LINE_NUMBER(115);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8") name="_j))));
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_node;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" line="_j))));
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_ast_Symbol *) NULL_CHECK((frame[0].o)))->F_node;
	jint temp0 = (jint)((func_rhino_Node_getLineno_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Node_getLineno_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	}
label_6:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_Symbol[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_ast_Symbol_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ast_Symbol_getDeclType_R_int,
	(void *) M_rhino_ast_Symbol_setDeclType_int,
	(void *) M_rhino_ast_Symbol_getName_R_java_lang_String,
	(void *) M_rhino_ast_Symbol_setName_java_lang_String,
	(void *) M_rhino_ast_Symbol_getNode_R_rhino_Node,
	(void *) M_rhino_ast_Symbol_getIndex_R_int,
	(void *) M_rhino_ast_Symbol_setIndex_int,
	(void *) M_rhino_ast_Symbol_setNode_rhino_Node,
	(void *) M_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope,
	(void *) M_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope,
	(void *) M_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String,
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
	{ "getDeclType", "()I" },
	{ "setDeclType", "(I)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getNode", "()Lrhino/Node;" },
	{ "getIndex", "()I" },
	{ "setIndex", "(I)V" },
	{ "setNode", "(Lrhino/Node;)V" },
	{ "getContainingTable", "()Lrhino/ast/Scope;" },
	{ "setContainingTable", "(Lrhino/ast/Scope;)V" },
	{ "getDeclTypeName", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "declType", &class_int, offsetof(rhino_ast_Symbol, F_declType), "I", 2 },
	{ "index", &class_int, offsetof(rhino_ast_Symbol, F_index), "I", 2 },
	{ "name", &class_java_lang_String, offsetof(rhino_ast_Symbol, F_name), "Ljava/lang/String;", 2 },
	{ "node", &class_rhino_Node, offsetof(rhino_ast_Symbol, F_node), "Lrhino/Node;", 2 },
	{ "containingTable", &class_rhino_ast_Scope, offsetof(rhino_ast_Symbol, F_containingTable), "Lrhino/ast/Scope;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_Symbol, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_ast_Symbol_int_java_lang_String, 0, "(ILjava/lang/String;)V", 1 },
	{ "getDeclType", (intptr_t) M_rhino_ast_Symbol_getDeclType_R_int, VTABLE_rhino_ast_Symbol_getDeclType_R_int, "()I", 1 },
	{ "setDeclType", (intptr_t) M_rhino_ast_Symbol_setDeclType_int, VTABLE_rhino_ast_Symbol_setDeclType_int, "(I)V", 1 },
	{ "getName", (intptr_t) M_rhino_ast_Symbol_getName_R_java_lang_String, VTABLE_rhino_ast_Symbol_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_rhino_ast_Symbol_setName_java_lang_String, VTABLE_rhino_ast_Symbol_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getNode", (intptr_t) M_rhino_ast_Symbol_getNode_R_rhino_Node, VTABLE_rhino_ast_Symbol_getNode_R_rhino_Node, "()Lrhino/Node;", 1 },
	{ "getIndex", (intptr_t) M_rhino_ast_Symbol_getIndex_R_int, VTABLE_rhino_ast_Symbol_getIndex_R_int, "()I", 1 },
	{ "setIndex", (intptr_t) M_rhino_ast_Symbol_setIndex_int, VTABLE_rhino_ast_Symbol_setIndex_int, "(I)V", 1 },
	{ "setNode", (intptr_t) M_rhino_ast_Symbol_setNode_rhino_Node, VTABLE_rhino_ast_Symbol_setNode_rhino_Node, "(Lrhino/Node;)V", 1 },
	{ "getContainingTable", (intptr_t) M_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope, VTABLE_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope, "()Lrhino/ast/Scope;", 1 },
	{ "setContainingTable", (intptr_t) M_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope, VTABLE_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope, "(Lrhino/ast/Scope;)V", 1 },
	{ "getDeclTypeName", (intptr_t) M_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String, VTABLE_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_rhino_ast_Symbol_toString_R_java_lang_String, VTABLE_rhino_ast_Symbol_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_ast_Symbol{
		.nativeName = (intptr_t) "rhino/ast/Symbol",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ast_Symbol),
		.classVtable = (intptr_t) vtable_rhino_ast_Symbol,
		.staticInitializer = (intptr_t) clinit_rhino_ast_Symbol,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_Symbol,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_Symbol = registerClass(&class_rhino_ast_Symbol);

}
