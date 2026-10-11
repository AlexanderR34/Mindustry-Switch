#include "java/text/DateFormat.h"
#include "java/text/DateFormat.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/TimeZone.h"
#include "java/text/ParseException.h"
#include "java/text/Format.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Date.h"

extern "C" {

jint SF_java_text_DateFormat_FULL;
jint SF_java_text_DateFormat_LONG;
jint SF_java_text_DateFormat_MEDIUM;
jint SF_java_text_DateFormat_SHORT;
jint SF_java_text_DateFormat_DEFAULT;
jint SF_java_text_DateFormat_NONE;

void mark_java_text_DateFormat(jobject object, jint mark, jint depth) {
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
	auto self = (java_text_DateFormat *) object;
}

void init_java_text_DateFormat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(71);
	init_java_text_DateFormat_int_int(ctx, (frame[0].o), (jint(3)), (jint(3)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_text_DateFormat_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	init_java_text_Format(ctx, (frame[0].o));
	LINE_NUMBER(78);
	((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_dateStyle = (frame[1].i);
	LINE_NUMBER(79);
	((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_timeStyle = (frame[2].i);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormat_format_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuffer(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[2].o);
	sp[0].o = (jobject)((func_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String])(ctx, (frame[0].o), (checkCast(ctx, &class_java_util_Date, (frame[1].o))), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormat_format_java_util_Date_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:format", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:parseObject", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	clinit_java_text_ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_ParseException);
	init_java_text_ParseException_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not implemented"_j))), (jint(0)));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormat_parse_java_lang_String_R_java_util_Date(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:parse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_Date, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getInstance_R_java_text_DateFormat(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(ctx, (jint(3)), (jint(3)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getDateInstance_R_java_text_DateFormat(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getDateInstance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateInstance_int_R_java_text_DateFormat(ctx, (jint(3)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getTimeInstance_R_java_text_DateFormat(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getTimeInstance", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_java_text_DateFormat_getTimeInstance_int_R_java_text_DateFormat(ctx, (jint(3)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getDateInstance_int_R_java_text_DateFormat(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getDateInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(ctx, (frame[0].i), (clinit_java_text_DateFormat(ctx), (jint)SF_java_text_DateFormat_NONE));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getTimeInstance_int_R_java_text_DateFormat(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getTimeInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(ctx, (clinit_java_text_DateFormat(ctx), (jint)SF_java_text_DateFormat_NONE), (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getDateTimeInstance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(208);
	clinit_java_text_DateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_DateFormat);
	init_java_text_DateFormat_int_int(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_text_DateFormat_getDateTimeInstance_R_java_text_DateFormat(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:getDateTimeInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	{
	LINE_NUMBER(212);
	clinit_java_text_DateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_DateFormat);
	init_java_text_DateFormat_int_int(ctx, sp[0].o, (jint(2)), (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormat_setTimeZone_java_util_TimeZone(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:setTimeZone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_text_DateFormat_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	frame[1].i = (31);
	LINE_NUMBER(227);
	frame[2].i = (jint(1));
	LINE_NUMBER(228);
	frame[2].i = (((31) * (frame[2].i)) + ((jint)((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_dateStyle));
	LINE_NUMBER(229);
	frame[2].i = (((31) * (frame[2].i)) + ((jint)((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_timeStyle));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_java_text_DateFormat_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(240);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(242);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(246);
	frame[2].o = (checkCast(ctx, &class_java_text_DateFormat, (frame[1].o)));
	LINE_NUMBER(247);
	if (((jint)((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_dateStyle) == ((jint)((java_text_DateFormat *) NULL_CHECK((frame[2].o)))->F_dateStyle)) goto label_8;
	}
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(249);
	if (((jint)((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_timeStyle) == ((jint)((java_text_DateFormat *) NULL_CHECK((frame[2].o)))->F_timeStyle)) goto label_10;
	}
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormat_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:clone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	clinit_java_text_DateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_DateFormat);
	init_java_text_DateFormat_int_int(ctx, sp[0].o, ((jint)((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_dateStyle), ((jint)((java_text_DateFormat *) NULL_CHECK((frame[0].o)))->F_timeStyle));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_text_DateFormat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_text_Format(ctx);
	SF_java_text_DateFormat_FULL = jint(0);
	SF_java_text_DateFormat_LONG = jint(1);
	SF_java_text_DateFormat_MEDIUM = jint(2);
	SF_java_text_DateFormat_SHORT = jint(3);
	SF_java_text_DateFormat_DEFAULT = jint(2);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormat:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormat(ctx);
	{
	LINE_NUMBER(62);
	clinit_java_text_DateFormat(ctx);
	SF_java_text_DateFormat_NONE = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_text_DateFormat[] {
	(void *) M_java_text_DateFormat_hashCode_R_int,
	(void *) M_java_text_DateFormat_equals_java_lang_Object_R_boolean,
	(void *) M_java_text_DateFormat_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_text_DateFormat_format_java_lang_Object_R_java_lang_String,
	(void *) M_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object,
	(void *) M_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String,
	(void *) M_java_text_DateFormat_format_java_util_Date_R_java_lang_String,
	(void *) M_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String,
	(void *) M_java_text_DateFormat_parse_java_lang_String_R_java_util_Date,
	(void *) M_java_text_DateFormat_setTimeZone_java_util_TimeZone,
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
	{ "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;)Ljava/lang/String;" },
	{ "format", "(Ljava/util/Date;)Ljava/lang/String;" },
	{ "format", "(Ljava/util/Date;Ljava/lang/StringBuffer;)Ljava/lang/String;" },
	{ "parse", "(Ljava/lang/String;)Ljava/util/Date;" },
	{ "setTimeZone", "(Ljava/util/TimeZone;)V" },
};

static FieldMetadata fields[] {
	{ "FULL", &class_int, (intptr_t) &SF_java_text_DateFormat_FULL, "I", 25 },
	{ "LONG", &class_int, (intptr_t) &SF_java_text_DateFormat_LONG, "I", 25 },
	{ "MEDIUM", &class_int, (intptr_t) &SF_java_text_DateFormat_MEDIUM, "I", 25 },
	{ "SHORT", &class_int, (intptr_t) &SF_java_text_DateFormat_SHORT, "I", 25 },
	{ "DEFAULT", &class_int, (intptr_t) &SF_java_text_DateFormat_DEFAULT, "I", 25 },
	{ "NONE", &class_int, (intptr_t) &SF_java_text_DateFormat_NONE, "I", 10 },
	{ "dateStyle", &class_int, offsetof(java_text_DateFormat, F_dateStyle), "I", 2 },
	{ "timeStyle", &class_int, offsetof(java_text_DateFormat, F_timeStyle), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_DateFormat, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_text_DateFormat_int_int, 0, "(II)V", 0 },
	{ "format", (intptr_t) M_java_text_DateFormat_format_java_lang_Object_R_java_lang_String, VTABLE_java_text_DateFormat_format_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "format", (intptr_t) M_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String, VTABLE_java_text_DateFormat_format_java_lang_Object_java_lang_StringBuffer_R_java_lang_String, "(Ljava/lang/Object;Ljava/lang/StringBuffer;)Ljava/lang/String;", 1 },
	{ "format", (intptr_t) M_java_text_DateFormat_format_java_util_Date_R_java_lang_String, VTABLE_java_text_DateFormat_format_java_util_Date_R_java_lang_String, "(Ljava/util/Date;)Ljava/lang/String;", 1 },
	{ "format", (intptr_t) M_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String, VTABLE_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String, "(Ljava/util/Date;Ljava/lang/StringBuffer;)Ljava/lang/String;", 256 },
	{ "parseObject", (intptr_t) M_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object, VTABLE_java_text_DateFormat_parseObject_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "parse", (intptr_t) M_java_text_DateFormat_parse_java_lang_String_R_java_util_Date, VTABLE_java_text_DateFormat_parse_java_lang_String_R_java_util_Date, "(Ljava/lang/String;)Ljava/util/Date;", 1 },
	{ "getInstance", (intptr_t) SM_java_text_DateFormat_getInstance_R_java_text_DateFormat, 0, "()Ljava/text/DateFormat;", 25 },
	{ "getDateInstance", (intptr_t) SM_java_text_DateFormat_getDateInstance_R_java_text_DateFormat, 0, "()Ljava/text/DateFormat;", 25 },
	{ "getTimeInstance", (intptr_t) SM_java_text_DateFormat_getTimeInstance_R_java_text_DateFormat, 0, "()Ljava/text/DateFormat;", 25 },
	{ "getDateInstance", (intptr_t) SM_java_text_DateFormat_getDateInstance_int_R_java_text_DateFormat, 0, "(I)Ljava/text/DateFormat;", 25 },
	{ "getTimeInstance", (intptr_t) SM_java_text_DateFormat_getTimeInstance_int_R_java_text_DateFormat, 0, "(I)Ljava/text/DateFormat;", 25 },
	{ "getDateTimeInstance", (intptr_t) SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat, 0, "(II)Ljava/text/DateFormat;", 25 },
	{ "getDateTimeInstance", (intptr_t) SM_java_text_DateFormat_getDateTimeInstance_R_java_text_DateFormat, 0, "()Ljava/text/DateFormat;", 25 },
	{ "setTimeZone", (intptr_t) M_java_text_DateFormat_setTimeZone_java_util_TimeZone, VTABLE_java_text_DateFormat_setTimeZone_java_util_TimeZone, "(Ljava/util/TimeZone;)V", 1 },
	{ "hashCode", (intptr_t) M_java_text_DateFormat_hashCode_R_int, VTABLE_java_text_DateFormat_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_text_DateFormat_equals_java_lang_Object_R_boolean, VTABLE_java_text_DateFormat_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "clone", (intptr_t) M_java_text_DateFormat_clone_R_java_lang_Object, VTABLE_java_text_DateFormat_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_text_DateFormat, 0, "()V", 8 },
};

Class class_java_text_DateFormat{
		.nativeName = (intptr_t) "java/text/DateFormat",
		.parentClass = (intptr_t) &class_java_text_Format,
		.size = sizeof(java_text_DateFormat),
		.classVtable = (intptr_t) vtable_java_text_DateFormat,
		.staticInitializer = (intptr_t) clinit_java_text_DateFormat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_DateFormat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_DateFormat = registerClass(&class_java_text_DateFormat);

}
