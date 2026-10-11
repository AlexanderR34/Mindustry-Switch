#include "rhino/ast/ParseProblem.h"
#include "rhino/ast/ParseProblem.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/ast/ParseProblem_Type.h"

extern "C" {


void mark_rhino_ast_ParseProblem(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ast_ParseProblem *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_message)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_message)->clazz)->markFunction)((jobject) self->F_message, mark, depth + 1);
	if (self->F_sourceName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceName)->clazz)->markFunction)((jobject) self->F_sourceName, mark, depth + 1);
}

void clinit_rhino_ast_ParseProblem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ast_ParseProblem_rhino_ast_ParseProblem$Type_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ParseProblem(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((func_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	((func_rhino_ast_ParseProblem_setMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ParseProblem_setMessage_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(23);
	((func_rhino_ast_ParseProblem_setSourceName_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ParseProblem_setSourceName_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(24);
	((func_rhino_ast_ParseProblem_setFileOffset_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ParseProblem_setFileOffset_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(25);
	((func_rhino_ast_ParseProblem_setLength_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ast_ParseProblem_setLength_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:setType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ParseProblem_getMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:getMessage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_message;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ParseProblem_setMessage_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:setMessage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ParseProblem_getSourceName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:getSourceName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_sourceName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ParseProblem_setSourceName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:setSourceName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_sourceName = (jref) (frame[1].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ParseProblem_getFileOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:getFileOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_offset);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ParseProblem_setFileOffset_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:setFileOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_offset = (frame[1].i);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_ast_ParseProblem_getLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:getLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return ((jint)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_length);
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ParseProblem_setLength_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(65);
	((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_length = (frame[1].i);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ParseProblem_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ParseProblem:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_sourceName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":offset="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_offset));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",length="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_length));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[1].o = (jobject)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_rhino_ast_ParseProblem$Type(ctx);
	sp[2].o = (jobject)SF_rhino_ast_ParseProblem$Type_Error;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"error: "_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"warning: "_j));
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((rhino_ast_ParseProblem *) NULL_CHECK((frame[0].o)))->F_message;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_ParseProblem[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_ast_ParseProblem_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type,
	(void *) M_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type,
	(void *) M_rhino_ast_ParseProblem_getMessage_R_java_lang_String,
	(void *) M_rhino_ast_ParseProblem_setMessage_java_lang_String,
	(void *) M_rhino_ast_ParseProblem_getSourceName_R_java_lang_String,
	(void *) M_rhino_ast_ParseProblem_setSourceName_java_lang_String,
	(void *) M_rhino_ast_ParseProblem_getFileOffset_R_int,
	(void *) M_rhino_ast_ParseProblem_setFileOffset_int,
	(void *) M_rhino_ast_ParseProblem_getLength_R_int,
	(void *) M_rhino_ast_ParseProblem_setLength_int,
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
	{ "getType", "()Lrhino/ast/ParseProblem$Type;" },
	{ "setType", "(Lrhino/ast/ParseProblem$Type;)V" },
	{ "getMessage", "()Ljava/lang/String;" },
	{ "setMessage", "(Ljava/lang/String;)V" },
	{ "getSourceName", "()Ljava/lang/String;" },
	{ "setSourceName", "(Ljava/lang/String;)V" },
	{ "getFileOffset", "()I" },
	{ "setFileOffset", "(I)V" },
	{ "getLength", "()I" },
	{ "setLength", "(I)V" },
};

static jclass innerClasses[] {
	&class_rhino_ast_ParseProblem$Type,
};

static FieldMetadata fields[] {
	{ "type", &class_rhino_ast_ParseProblem$Type, offsetof(rhino_ast_ParseProblem, F_type), "Lrhino/ast/ParseProblem$Type;", 2 },
	{ "message", &class_java_lang_String, offsetof(rhino_ast_ParseProblem, F_message), "Ljava/lang/String;", 2 },
	{ "sourceName", &class_java_lang_String, offsetof(rhino_ast_ParseProblem, F_sourceName), "Ljava/lang/String;", 2 },
	{ "offset", &class_int, offsetof(rhino_ast_ParseProblem, F_offset), "I", 2 },
	{ "length", &class_int, offsetof(rhino_ast_ParseProblem, F_length), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_ParseProblem_rhino_ast_ParseProblem$Type_java_lang_String_java_lang_String_int_int, 0, "(Lrhino/ast/ParseProblem$Type;Ljava/lang/String;Ljava/lang/String;II)V", 1 },
	{ "getType", (intptr_t) M_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type, VTABLE_rhino_ast_ParseProblem_getType_R_rhino_ast_ParseProblem$Type, "()Lrhino/ast/ParseProblem$Type;", 1 },
	{ "setType", (intptr_t) M_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type, VTABLE_rhino_ast_ParseProblem_setType_rhino_ast_ParseProblem$Type, "(Lrhino/ast/ParseProblem$Type;)V", 1 },
	{ "getMessage", (intptr_t) M_rhino_ast_ParseProblem_getMessage_R_java_lang_String, VTABLE_rhino_ast_ParseProblem_getMessage_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setMessage", (intptr_t) M_rhino_ast_ParseProblem_setMessage_java_lang_String, VTABLE_rhino_ast_ParseProblem_setMessage_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getSourceName", (intptr_t) M_rhino_ast_ParseProblem_getSourceName_R_java_lang_String, VTABLE_rhino_ast_ParseProblem_getSourceName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setSourceName", (intptr_t) M_rhino_ast_ParseProblem_setSourceName_java_lang_String, VTABLE_rhino_ast_ParseProblem_setSourceName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getFileOffset", (intptr_t) M_rhino_ast_ParseProblem_getFileOffset_R_int, VTABLE_rhino_ast_ParseProblem_getFileOffset_R_int, "()I", 1 },
	{ "setFileOffset", (intptr_t) M_rhino_ast_ParseProblem_setFileOffset_int, VTABLE_rhino_ast_ParseProblem_setFileOffset_int, "(I)V", 1 },
	{ "getLength", (intptr_t) M_rhino_ast_ParseProblem_getLength_R_int, VTABLE_rhino_ast_ParseProblem_getLength_R_int, "()I", 1 },
	{ "setLength", (intptr_t) M_rhino_ast_ParseProblem_setLength_int, VTABLE_rhino_ast_ParseProblem_setLength_int, "(I)V", 1 },
	{ "toString", (intptr_t) M_rhino_ast_ParseProblem_toString_R_java_lang_String, VTABLE_rhino_ast_ParseProblem_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_ast_ParseProblem{
		.nativeName = (intptr_t) "rhino/ast/ParseProblem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ast_ParseProblem),
		.classVtable = (intptr_t) vtable_rhino_ast_ParseProblem,
		.staticInitializer = (intptr_t) clinit_rhino_ast_ParseProblem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_ParseProblem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_ParseProblem = registerClass(&class_rhino_ast_ParseProblem);

}
