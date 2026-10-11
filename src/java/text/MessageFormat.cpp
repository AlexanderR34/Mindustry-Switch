#include "java/text/MessageFormat.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/text/MessageFormat.h"
#include "java/text/Format.h"
#include "java/text/FieldPosition.h"
#include "java/lang/StringBuffer.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/util/Locale.h"

extern "C" {


void mark_java_text_MessageFormat(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_text_Format(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_text_MessageFormat *) object;
	if (self->F_pattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pattern)->clazz)->markFunction)((jobject) self->F_pattern, mark, depth + 1);
}

void clinit_java_text_MessageFormat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_text_Format(ctx);
}

void init_java_text_MessageFormat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_MessageFormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_java_text_MessageFormat_java_lang_String_java_util_Locale(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_text_MessageFormat_java_lang_String_java_util_Locale(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_MessageFormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(13);
	init_java_text_Format(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((java_text_MessageFormat *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_text_MessageFormat_setLocale_java_util_Locale(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:setLocale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_getLocale_R_java_util_Locale(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:getLocale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_text_MessageFormat_applyPattern_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:applyPattern", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	((java_text_MessageFormat *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_toPattern_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:toPattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((java_text_MessageFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_MessageFormat_setFormatsByArgumentIndex_Array1_java_text_Format(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:setFormatsByArgumentIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_text_MessageFormat_setFormats_Array1_java_text_Format(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:setFormats", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_text_MessageFormat_setFormatByArgumentIndex_int_java_text_Format(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:setFormatByArgumentIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_text_MessageFormat_setFormat_int_java_text_Format(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:setFormat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_getFormatsByArgumentIndex_R_Array1_java_text_Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:getFormatsByArgumentIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_getFormats_R_Array1_java_text_Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:getFormats", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_format_Array1_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:format", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(59);
	frame[4].i = (jint(-1));
	LINE_NUMBER(60);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((java_text_MessageFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_text_MessageFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(62);
	if ((frame[6].i) != (123)) goto label_10;
	}
	{
	LINE_NUMBER(63);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(64);
	if ((frame[4].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (frame[6].i));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(66);
	if ((frame[6].i) != (125)) goto label_12;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((java_text_MessageFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[7].i = temp0;
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[7].i))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(70);
	goto label_16;
label_2:;
	INST_ASTORE(7);
label_16:;
	{
	LINE_NUMBER(71);
	frame[4].i = (jint(-1));
	}
label_12:;
	{
	LINE_NUMBER(60);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_text_MessageFormat_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_MessageFormat(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(78);
	clinit_java_text_MessageFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_MessageFormat);
	init_java_text_MessageFormat_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:format", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuffer(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[2].o);
	clinit_java_text_FieldPosition(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_text_FieldPosition);
	init_java_text_FieldPosition_int(ctx, sp[3].o, (jint(0)));
	sp[0].o = (jobject)((func_java_text_MessageFormat_format_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_MessageFormat_format_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_format_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:format", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_text_MessageFormat_format_Array1_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_MessageFormat_format_Array1_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer])(ctx, (frame[0].o), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[1].o))), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_formatToCharacterIterator_java_lang_Object_R_java_text_AttributedCharacterIterator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:formatToCharacterIterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_parse_java_lang_String_java_text_ParsePosition_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:parse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_parse_java_lang_String_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:parse", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_parseObject_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:parseObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_MessageFormat_parseObject_java_lang_String_java_text_ParsePosition_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/MessageFormat:parseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_java_text_MessageFormat[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String,
	(void *) M_java_text_MessageFormat_parseObject_java_lang_String_R_java_lang_Object,
	(void *) M_java_text_MessageFormat_setLocale_java_util_Locale,
	(void *) M_java_text_MessageFormat_getLocale_R_java_util_Locale,
	(void *) M_java_text_MessageFormat_applyPattern_java_lang_String,
	(void *) M_java_text_MessageFormat_toPattern_R_java_lang_String,
	(void *) M_java_text_MessageFormat_setFormatsByArgumentIndex_Array1_java_text_Format,
	(void *) M_java_text_MessageFormat_setFormats_Array1_java_text_Format,
	(void *) M_java_text_MessageFormat_setFormatByArgumentIndex_int_java_text_Format,
	(void *) M_java_text_MessageFormat_setFormat_int_java_text_Format,
	(void *) M_java_text_MessageFormat_getFormatsByArgumentIndex_R_Array1_java_text_Format,
	(void *) M_java_text_MessageFormat_getFormats_R_Array1_java_text_Format,
	(void *) M_java_text_MessageFormat_format_Array1_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer,
	(void *) M_java_text_MessageFormat_format_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer,
	(void *) M_java_text_MessageFormat_formatToCharacterIterator_java_lang_Object_R_java_text_AttributedCharacterIterator,
	(void *) M_java_text_MessageFormat_parse_java_lang_String_java_text_ParsePosition_R_Array1_java_lang_Object,
	(void *) M_java_text_MessageFormat_parse_java_lang_String_R_Array1_java_lang_Object,
	(void *) M_java_text_MessageFormat_parseObject_java_lang_String_java_text_ParsePosition_R_java_lang_Object,
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
	{ "format", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "setLocale", "(Ljava/util/Locale;)V" },
	{ "getLocale", "()Ljava/util/Locale;" },
	{ "applyPattern", "(Ljava/lang/String;)V" },
	{ "toPattern", "()Ljava/lang/String;" },
	{ "setFormatsByArgumentIndex", "([Ljava/text/Format;)V" },
	{ "setFormats", "([Ljava/text/Format;)V" },
	{ "setFormatByArgumentIndex", "(ILjava/text/Format;)V" },
	{ "setFormat", "(ILjava/text/Format;)V" },
	{ "getFormatsByArgumentIndex", "()[Ljava/text/Format;" },
	{ "getFormats", "()[Ljava/text/Format;" },
	{ "format", "([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;" },
	{ "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;" },
	{ "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;" },
	{ "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;" },
	{ "parse", "(Ljava/lang/String;)[Ljava/lang/Object;" },
	{ "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "pattern", &class_java_lang_String, offsetof(java_text_MessageFormat, F_pattern), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_MessageFormat_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_text_MessageFormat_java_lang_String_java_util_Locale, 0, "(Ljava/lang/String;Ljava/util/Locale;)V", 1 },
	{ "setLocale", (intptr_t) M_java_text_MessageFormat_setLocale_java_util_Locale, VTABLE_java_text_MessageFormat_setLocale_java_util_Locale, "(Ljava/util/Locale;)V", 1 },
	{ "getLocale", (intptr_t) M_java_text_MessageFormat_getLocale_R_java_util_Locale, VTABLE_java_text_MessageFormat_getLocale_R_java_util_Locale, "()Ljava/util/Locale;", 1 },
	{ "applyPattern", (intptr_t) M_java_text_MessageFormat_applyPattern_java_lang_String, VTABLE_java_text_MessageFormat_applyPattern_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "toPattern", (intptr_t) M_java_text_MessageFormat_toPattern_R_java_lang_String, VTABLE_java_text_MessageFormat_toPattern_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setFormatsByArgumentIndex", (intptr_t) M_java_text_MessageFormat_setFormatsByArgumentIndex_Array1_java_text_Format, VTABLE_java_text_MessageFormat_setFormatsByArgumentIndex_Array1_java_text_Format, "([Ljava/text/Format;)V", 1 },
	{ "setFormats", (intptr_t) M_java_text_MessageFormat_setFormats_Array1_java_text_Format, VTABLE_java_text_MessageFormat_setFormats_Array1_java_text_Format, "([Ljava/text/Format;)V", 1 },
	{ "setFormatByArgumentIndex", (intptr_t) M_java_text_MessageFormat_setFormatByArgumentIndex_int_java_text_Format, VTABLE_java_text_MessageFormat_setFormatByArgumentIndex_int_java_text_Format, "(ILjava/text/Format;)V", 1 },
	{ "setFormat", (intptr_t) M_java_text_MessageFormat_setFormat_int_java_text_Format, VTABLE_java_text_MessageFormat_setFormat_int_java_text_Format, "(ILjava/text/Format;)V", 1 },
	{ "getFormatsByArgumentIndex", (intptr_t) M_java_text_MessageFormat_getFormatsByArgumentIndex_R_Array1_java_text_Format, VTABLE_java_text_MessageFormat_getFormatsByArgumentIndex_R_Array1_java_text_Format, "()[Ljava/text/Format;", 1 },
	{ "getFormats", (intptr_t) M_java_text_MessageFormat_getFormats_R_Array1_java_text_Format, VTABLE_java_text_MessageFormat_getFormats_R_Array1_java_text_Format, "()[Ljava/text/Format;", 1 },
	{ "format", (intptr_t) M_java_text_MessageFormat_format_Array1_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer, VTABLE_java_text_MessageFormat_format_Array1_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer, "([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", 17 },
	{ "format", (intptr_t) SM_java_text_MessageFormat_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 137 },
	{ "format", (intptr_t) M_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String, VTABLE_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "format", (intptr_t) M_java_text_MessageFormat_format_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer, VTABLE_java_text_MessageFormat_format_java_lang_Object_java_lang_StringBuffer_java_text_FieldPosition_R_java_lang_StringBuffer, "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", 17 },
	{ "formatToCharacterIterator", (intptr_t) M_java_text_MessageFormat_formatToCharacterIterator_java_lang_Object_R_java_text_AttributedCharacterIterator, VTABLE_java_text_MessageFormat_formatToCharacterIterator_java_lang_Object_R_java_text_AttributedCharacterIterator, "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;", 1 },
	{ "parse", (intptr_t) M_java_text_MessageFormat_parse_java_lang_String_java_text_ParsePosition_R_Array1_java_lang_Object, VTABLE_java_text_MessageFormat_parse_java_lang_String_java_text_ParsePosition_R_Array1_java_lang_Object, "(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;", 1 },
	{ "parse", (intptr_t) M_java_text_MessageFormat_parse_java_lang_String_R_Array1_java_lang_Object, VTABLE_java_text_MessageFormat_parse_java_lang_String_R_Array1_java_lang_Object, "(Ljava/lang/String;)[Ljava/lang/Object;", 1 },
	{ "parseObject", (intptr_t) M_java_text_MessageFormat_parseObject_java_lang_String_R_java_lang_Object, VTABLE_java_text_MessageFormat_parseObject_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "parseObject", (intptr_t) M_java_text_MessageFormat_parseObject_java_lang_String_java_text_ParsePosition_R_java_lang_Object, VTABLE_java_text_MessageFormat_parseObject_java_lang_String_java_text_ParsePosition_R_java_lang_Object, "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;", 1 },
};

Class class_java_text_MessageFormat{
		.nativeName = (intptr_t) "java/text/MessageFormat",
		.parentClass = (intptr_t) &class_java_text_Format,
		.size = sizeof(java_text_MessageFormat),
		.classVtable = (intptr_t) vtable_java_text_MessageFormat,
		.staticInitializer = (intptr_t) clinit_java_text_MessageFormat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_MessageFormat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_MessageFormat = registerClass(&class_java_text_MessageFormat);

}
