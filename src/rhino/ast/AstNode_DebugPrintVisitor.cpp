#include "rhino/ast/AstNode_DebugPrintVisitor.h"
#include "java/lang/Object.h"
#include "rhino/ast/AstNode_DebugPrintVisitor.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Node.h"
#include "java/lang/String.h"
#include "rhino/ast/AstNode.h"
#include "rhino/ast/NodeVisitor.h"
#include "rhino/Token.h"
#include "rhino/ast/Name.h"
#include "rhino/ast/StringLiteral.h"

extern "C" {

jint SF_rhino_ast_AstNode$DebugPrintVisitor_DEBUG_INDENT;

void mark_rhino_ast_AstNode$DebugPrintVisitor(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_AstNode$DebugPrintVisitor *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_rhino_ast_AstNode$DebugPrintVisitor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_ast_AstNode$DebugPrintVisitor_DEBUG_INDENT = jint(2);
}

void init_rhino_ast_AstNode$DebugPrintVisitor_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode$DebugPrintVisitor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_AstNode$DebugPrintVisitor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(534);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(535);
	((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (frame[1].o);
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode$DebugPrintVisitor:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode$DebugPrintVisitor:makeIndent", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(544);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, ((jint(2)) * (frame[1].i)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(545);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint(2)) * (frame[1].i))) goto label_3;
	}
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(545);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/AstNode$DebugPrintVisitor:visit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(553);
	jint temp0 = (jint)((func_rhino_ast_AstNode_getType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getType_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(554);
	sp[0].o = (jobject)SM_rhino_Token_typeToName_int_R_java_lang_String(ctx, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(555);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp1 = (jint)((func_rhino_ast_AstNode_getAbsolutePosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getAbsolutePosition_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\t"_j))));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = frame[0].o;
	jint temp2 = (jint)((func_rhino_ast_AstNode_depth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_depth_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)M_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String(ctx, sp[1].o, temp2);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(557);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp3 = (jint)((func_rhino_ast_AstNode_getPosition_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getPosition_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp3);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp4 = (jint)((func_rhino_ast_AstNode_getLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_ast_AstNode_getLength_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp4);
	LINE_NUMBER(560);
	if ((frame[2].i) != (39)) goto label_8;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_rhino_ast_Name_getIdentifier_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))))->vtable)[VTABLE_rhino_ast_Name_getIdentifier_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_Name, (frame[1].o))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(562);
	if ((frame[2].i) != (41)) goto label_10;
	}
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_rhino_ast_StringLiteral_getValue_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))))->vtable)[VTABLE_rhino_ast_StringLiteral_getValue_boolean_R_java_lang_String])(ctx, (checkCast(ctx, &class_rhino_ast_StringLiteral, (frame[1].o))), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((rhino_ast_AstNode$DebugPrintVisitor *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_AstNode$DebugPrintVisitor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean,
	(void *) M_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String,
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
	{ "visit", "(Lrhino/ast/AstNode;)Z" },
	{ "makeIndent", "(I)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_rhino_ast_NodeVisitor, };

static FieldMetadata fields[] {
	{ "buffer", &class_java_lang_StringBuilder, offsetof(rhino_ast_AstNode$DebugPrintVisitor, F_buffer), "Ljava/lang/StringBuilder;", 18 },
	{ "DEBUG_INDENT", &class_int, (intptr_t) &SF_rhino_ast_AstNode$DebugPrintVisitor_DEBUG_INDENT, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_AstNode$DebugPrintVisitor_java_lang_StringBuilder, 0, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "toString", (intptr_t) M_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String, VTABLE_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "makeIndent", (intptr_t) M_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String, VTABLE_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String, "(I)Ljava/lang/String;", 2 },
	{ "visit", (intptr_t) M_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean, VTABLE_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean, "(Lrhino/ast/AstNode;)Z", 1 },
};

Class class_rhino_ast_AstNode$DebugPrintVisitor{
		.nativeName = (intptr_t) "rhino/ast/AstNode$DebugPrintVisitor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ast_AstNode$DebugPrintVisitor),
		.classVtable = (intptr_t) vtable_rhino_ast_AstNode$DebugPrintVisitor,
		.staticInitializer = (intptr_t) clinit_rhino_ast_AstNode$DebugPrintVisitor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_AstNode$DebugPrintVisitor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ast_AstNode,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_AstNode$DebugPrintVisitor = registerClass(&class_rhino_ast_AstNode$DebugPrintVisitor);

}

