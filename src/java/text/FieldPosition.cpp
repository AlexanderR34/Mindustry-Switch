#include "java/text/FieldPosition.h"
#include "java/lang/Object.h"
#include "java/text/FieldPosition.h"

extern "C" {


void mark_java_text_FieldPosition(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_FieldPosition *) object;
}

void clinit_java_text_FieldPosition(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_text_FieldPosition_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_FieldPosition(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(110);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_field = (jint(0));
	LINE_NUMBER(86);
	((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_endIndex = (jint(0));
	LINE_NUMBER(92);
	((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_beginIndex = (jint(0));
	LINE_NUMBER(111);
	((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_field = (frame[1].i);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_text_FieldPosition_getField_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:getField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_field);
	}

	popStackFrame(ctx);
}

jint M_java_text_FieldPosition_getBeginIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:getBeginIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_beginIndex);
	}

	popStackFrame(ctx);
}

jint M_java_text_FieldPosition_getEndIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:getEndIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_endIndex);
	}

	popStackFrame(ctx);
}

void M_java_text_FieldPosition_setBeginIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:setBeginIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(195);
	((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_beginIndex = (frame[1].i);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_text_FieldPosition_setEndIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:setEndIndex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_endIndex = (frame[1].i);
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_text_FieldPosition_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(224);
	if ((isInstance(ctx, (frame[1].o), &class_java_text_FieldPosition)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(226);
	frame[2].o = (checkCast(ctx, &class_java_text_FieldPosition, (frame[1].o)));
	LINE_NUMBER(235);
	if (((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_beginIndex) != ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[2].o)))->F_beginIndex)) goto label_5;
	}
	{
	if (((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_endIndex) != ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[2].o)))->F_endIndex)) goto label_5;
	}
	{
	if (((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_field) != ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[2].o)))->F_field)) goto label_5;
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

jint M_java_text_FieldPosition_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/FieldPosition:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (((((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_field) << (24)) | (((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_beginIndex) << (16))) | ((jint)((java_text_FieldPosition *) NULL_CHECK((frame[0].o)))->F_endIndex));
	}

	popStackFrame(ctx);
}

void *vtable_java_text_FieldPosition[] {
	(void *) M_java_text_FieldPosition_hashCode_R_int,
	(void *) M_java_text_FieldPosition_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_text_FieldPosition_getField_R_int,
	(void *) M_java_text_FieldPosition_getBeginIndex_R_int,
	(void *) M_java_text_FieldPosition_getEndIndex_R_int,
	(void *) M_java_text_FieldPosition_setBeginIndex_int,
	(void *) M_java_text_FieldPosition_setEndIndex_int,
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
	{ "getField", "()I" },
	{ "getBeginIndex", "()I" },
	{ "getEndIndex", "()I" },
	{ "setBeginIndex", "(I)V" },
	{ "setEndIndex", "(I)V" },
};

static FieldMetadata fields[] {
	{ "field", &class_int, offsetof(java_text_FieldPosition, F_field), "I", 0 },
	{ "endIndex", &class_int, offsetof(java_text_FieldPosition, F_endIndex), "I", 0 },
	{ "beginIndex", &class_int, offsetof(java_text_FieldPosition, F_beginIndex), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_FieldPosition_int, 0, "(I)V", 1 },
	{ "getField", (intptr_t) M_java_text_FieldPosition_getField_R_int, VTABLE_java_text_FieldPosition_getField_R_int, "()I", 1 },
	{ "getBeginIndex", (intptr_t) M_java_text_FieldPosition_getBeginIndex_R_int, VTABLE_java_text_FieldPosition_getBeginIndex_R_int, "()I", 1 },
	{ "getEndIndex", (intptr_t) M_java_text_FieldPosition_getEndIndex_R_int, VTABLE_java_text_FieldPosition_getEndIndex_R_int, "()I", 1 },
	{ "setBeginIndex", (intptr_t) M_java_text_FieldPosition_setBeginIndex_int, VTABLE_java_text_FieldPosition_setBeginIndex_int, "(I)V", 1 },
	{ "setEndIndex", (intptr_t) M_java_text_FieldPosition_setEndIndex_int, VTABLE_java_text_FieldPosition_setEndIndex_int, "(I)V", 1 },
	{ "equals", (intptr_t) M_java_text_FieldPosition_equals_java_lang_Object_R_boolean, VTABLE_java_text_FieldPosition_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_text_FieldPosition_hashCode_R_int, VTABLE_java_text_FieldPosition_hashCode_R_int, "()I", 1 },
};

Class class_java_text_FieldPosition{
		.nativeName = (intptr_t) "java/text/FieldPosition",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_FieldPosition),
		.classVtable = (intptr_t) vtable_java_text_FieldPosition,
		.staticInitializer = (intptr_t) clinit_java_text_FieldPosition,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_FieldPosition,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_FieldPosition = registerClass(&class_java_text_FieldPosition);

}
