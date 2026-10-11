#include "java/text/ParsePosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_text_ParsePosition(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_ParsePosition *) object;
}

void clinit_java_text_ParsePosition(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jint M_java_text_ParsePosition_getIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:getIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index);
	}

	popStackFrame(ctx);
}

void M_java_text_ParsePosition_setIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:setIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(85);
	((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index = (frame[1].i);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_text_ParsePosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_ParsePosition(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(93);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(65);
	((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(66);
	((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_errorIndex = (jint(-1));
	LINE_NUMBER(94);
	((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index = (frame[1].i);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_text_ParsePosition_setErrorIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:setErrorIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(106);
	((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_errorIndex = (frame[1].i);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_text_ParsePosition_getErrorIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:getErrorIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_errorIndex);
	}

	popStackFrame(ctx);
}

jbool M_java_text_ParsePosition_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(127);
	if ((isInstance(ctx, (frame[1].o), &class_java_text_ParsePosition)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(129);
	frame[2].o = (checkCast(ctx, &class_java_text_ParsePosition, (frame[1].o)));
	LINE_NUMBER(130);
	if (((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index) != ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[2].o)))->F_index)) goto label_5;
	}
	{
	if (((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_errorIndex) != ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[2].o)))->F_errorIndex)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_text_ParsePosition_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return ((((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_errorIndex) << (16)) | ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index));
	}

	popStackFrame(ctx);
}

jobject M_java_text_ParsePosition_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/ParsePosition:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[index="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_index));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",errorIndex="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_text_ParsePosition *) NULL_CHECK((frame[0].o)))->F_errorIndex));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (93));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_text_ParsePosition[] {
	(void *) M_java_text_ParsePosition_hashCode_R_int,
	(void *) M_java_text_ParsePosition_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_text_ParsePosition_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_text_ParsePosition_getIndex_R_int,
	(void *) M_java_text_ParsePosition_setIndex_int,
	(void *) M_java_text_ParsePosition_setErrorIndex_int,
	(void *) M_java_text_ParsePosition_getErrorIndex_R_int,
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
	{ "getIndex", "()I" },
	{ "setIndex", "(I)V" },
	{ "setErrorIndex", "(I)V" },
	{ "getErrorIndex", "()I" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(java_text_ParsePosition, F_index), "I", 0 },
	{ "errorIndex", &class_int, offsetof(java_text_ParsePosition, F_errorIndex), "I", 0 },
};

static MethodMetadata methods[] {
	{ "getIndex", (intptr_t) M_java_text_ParsePosition_getIndex_R_int, VTABLE_java_text_ParsePosition_getIndex_R_int, "()I", 1 },
	{ "setIndex", (intptr_t) M_java_text_ParsePosition_setIndex_int, VTABLE_java_text_ParsePosition_setIndex_int, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_text_ParsePosition_int, 0, "(I)V", 1 },
	{ "setErrorIndex", (intptr_t) M_java_text_ParsePosition_setErrorIndex_int, VTABLE_java_text_ParsePosition_setErrorIndex_int, "(I)V", 1 },
	{ "getErrorIndex", (intptr_t) M_java_text_ParsePosition_getErrorIndex_R_int, VTABLE_java_text_ParsePosition_getErrorIndex_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_text_ParsePosition_equals_java_lang_Object_R_boolean, VTABLE_java_text_ParsePosition_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_text_ParsePosition_hashCode_R_int, VTABLE_java_text_ParsePosition_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_text_ParsePosition_toString_R_java_lang_String, VTABLE_java_text_ParsePosition_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_text_ParsePosition{
		.nativeName = (intptr_t) "java/text/ParsePosition",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_ParsePosition),
		.classVtable = (intptr_t) vtable_java_text_ParsePosition,
		.staticInitializer = (intptr_t) clinit_java_text_ParsePosition,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_ParsePosition,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_ParsePosition = registerClass(&class_java_text_ParsePosition);

}
