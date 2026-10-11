#include "arc/util/TextFormatter.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/text/MessageFormat.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/TextFormatter.h"
#include "java/util/Locale.h"

extern "C" {


void mark_arc_util_TextFormatter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_TextFormatter *) object;
	if (self->F_messageFormat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageFormat)->clazz)->markFunction)((jobject) self->F_messageFormat, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_arc_util_TextFormatter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_TextFormatter_java_util_Locale_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TextFormatter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_TextFormatter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((arc_util_TextFormatter *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(17);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_text_MessageFormat(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_text_MessageFormat);
	init_java_text_MessageFormat_java_lang_String_java_util_Locale(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))), (frame[1].o));
	((arc_util_TextFormatter *) NULL_CHECK(sp[0].o))->F_messageFormat = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TextFormatter:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_messageFormat;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_messageFormat;
	sp[1].o = (jobject)M_arc_util_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	((func_java_text_MessageFormat_applyPattern_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_MessageFormat_applyPattern_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_messageFormat;
	sp[0].o = (jobject)((func_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_MessageFormat_format_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)M_arc_util_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TextFormatter:replaceEscapeChars", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(60);
	frame[2].i = (jint(0));
	LINE_NUMBER(61);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(62);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(64);
	if ((frame[5].i) != (39)) goto label_8;
	}
	{
	LINE_NUMBER(65);
	frame[2].i = (jint(1));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"''"_j))));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(67);
	if ((frame[5].i) != (123)) goto label_12;
	}
	{
	LINE_NUMBER(68);
	frame[6].i = ((frame[4].i) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(69);
	if ((frame[6].i) >= (frame[3].i)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	if (temp0 != (123)) goto label_15;
	}
	{
	LINE_NUMBER(70);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(71);
	frame[7].i = (((frame[6].i) - (frame[4].i)) / (jint(2)));
	LINE_NUMBER(72);
	if ((frame[7].i) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(73);
	frame[2].i = (jint(1));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (39));
	}
label_21:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	LINE_NUMBER(77);
	INST_IINC(7, -1);
	if ((frame[7].i) > 0) goto label_21;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (39));
	}
label_18:;
	{
	LINE_NUMBER(80);
	if ((((frame[6].i) - (frame[4].i)) % (jint(2))) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (123));
	}
label_24:;
	{
	LINE_NUMBER(81);
	frame[4].i = ((frame[6].i) - (jint(1)));
	LINE_NUMBER(82);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	}
label_11:;
	{
	LINE_NUMBER(62);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(86);
	if ((frame[2].i) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_ALOAD(1);
label_27:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_util_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/TextFormatter:simpleFormat", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(104);
	frame[3].i = (jint(0));
	LINE_NUMBER(105);
	frame[4].i = (jint(-1));
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(107);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(109);
	if ((frame[4].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(110);
	if ((frame[7].i) != (123)) goto label_11;
	}
	{
	LINE_NUMBER(111);
	frame[3].i = (jint(1));
	LINE_NUMBER(112);
	if (((frame[6].i) + (jint(1))) >= (frame[5].i)) goto label_14;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[6].i) + (jint(1))));
	if (temp0 != (123)) goto label_14;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].i));
	LINE_NUMBER(114);
	INST_IINC(6, 1);
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(116);
	frame[4].i = (jint(0));
	goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[7].i));
	goto label_17;
	}
label_9:;
	{
	LINE_NUMBER(122);
	if ((frame[7].i) != (125)) goto label_18;
	}
	{
	LINE_NUMBER(123);
	if ((frame[4].i) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_20;
	}
	{
	LINE_NUMBER(124);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Argument index out of bounds: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[6].i) - (jint(1))));
	if (temp0 != (123)) goto label_22;
	}
	{
	LINE_NUMBER(126);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing argument index after a left curly brace"_j))));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(127);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))) != nullptr) goto label_24;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(131);
	frame[4].i = (jint(-1));
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(133);
	if ((frame[7].i) < (48)) goto label_27;
	}
	{
	if ((frame[7].i) <= (57)) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(134);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[7].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' while parsing argument index"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(135);
	frame[4].i = (((frame[4].i) * (10)) + ((frame[7].i) - (48)));
	}
label_17:;
	{
	LINE_NUMBER(107);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(139);
	if ((frame[4].i) < 0) goto label_29;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unmatched braces in the pattern."_j))));
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(141);
	if ((frame[3].i) == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((arc_util_TextFormatter *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_31;
	}
label_30:;
	INST_ALOAD(1);
label_31:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_TextFormatter[] {
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
	(void *) M_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_arc_util_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
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
	{ "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "replaceEscapeChars", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "simpleFormat", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "messageFormat", &class_java_text_MessageFormat, offsetof(arc_util_TextFormatter, F_messageFormat), "Ljava/text/MessageFormat;", 2 },
	{ "buffer", &class_java_lang_StringBuilder, offsetof(arc_util_TextFormatter, F_buffer), "Ljava/lang/StringBuilder;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_TextFormatter_java_util_Locale_boolean, 0, "(Ljava/util/Locale;Z)V", 1 },
	{ "format", (intptr_t) M_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_arc_util_TextFormatter_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 129 },
	{ "replaceEscapeChars", (intptr_t) M_arc_util_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String, VTABLE_arc_util_TextFormatter_replaceEscapeChars_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "simpleFormat", (intptr_t) M_arc_util_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, VTABLE_arc_util_TextFormatter_simpleFormat_java_lang_String_Array1_java_lang_Object_R_java_lang_String, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 130 },
};

Class class_arc_util_TextFormatter{
		.nativeName = (intptr_t) "arc/util/TextFormatter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_TextFormatter),
		.classVtable = (intptr_t) vtable_arc_util_TextFormatter,
		.staticInitializer = (intptr_t) clinit_arc_util_TextFormatter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_TextFormatter,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_TextFormatter = registerClass(&class_arc_util_TextFormatter);

}
