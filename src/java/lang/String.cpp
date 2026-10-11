#include "java/lang/String.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Formatter.h"
#include "java/lang/Comparable.h"
#include "java/nio/charset/Charset.h"
#include "java/util/ArrayList.h"
#include "java/lang/Float.h"
#include "java/util/regex/Matcher.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/regex/Pattern.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/util/Locale.h"
#include "java/lang/Math.h"
#include "java/lang/StringIndexOutOfBoundsException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/io/UnsupportedOperationException.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"
#include "java/lang/String_1.h"

extern "C" {

jobject SF_java_lang_String_CASE_INSENSITIVE_ORDER;
jobject SF_java_lang_String_str;
jobject SF_java_lang_String_ZERO_CHAR;

void mark_java_lang_String(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_String_CASE_INSENSITIVE_ORDER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_String_CASE_INSENSITIVE_ORDER)->clazz)->markFunction)((jobject) SF_java_lang_String_CASE_INSENSITIVE_ORDER, mark, depth + 1);
		if (SF_java_lang_String_str)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_String_str)->clazz)->markFunction)((jobject) SF_java_lang_String_str, mark, depth + 1);
		if (SF_java_lang_String_ZERO_CHAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_String_ZERO_CHAR)->clazz)->markFunction)((jobject) SF_java_lang_String_ZERO_CHAR, mark, depth + 1);
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
	auto self = (java_lang_String *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void init_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(69);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = (jobject)SF_java_lang_String_ZERO_CHAR;
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(71);
	((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count = (jint(0));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(75);
	clinit_java_io_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_UnsupportedOperationException);
	init_java_io_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	init_java_lang_String_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char(ctx, (frame[1].o), (frame[2].i), (frame[3].i), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_byte_int_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char(ctx, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o));
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_byte_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = ((jarray) nullCheck(ctx, (frame[1].o)))->length;
	sp[2].o = (jobject)((func_java_nio_charset_Charset_displayName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_charset_Charset_displayName_R_java_lang_String])(ctx, (frame[2].o));
	init_java_lang_String_Array1_byte_int_int_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_byte_int_int_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[2].o = (jobject)((func_java_nio_charset_Charset_displayName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_charset_Charset_displayName_R_java_lang_String])(ctx, (frame[4].o));
	init_java_lang_String_Array1_byte_int_int_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char(ctx, (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].o));
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	init_java_lang_String_Array1_char_int_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:failedBoundsCheck", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(136);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[3].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_lang_String_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(145);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(146);
	if (((frame[2].i) | (frame[3].i)) < 0) goto label_2;
	}
	{
	if ((frame[3].i) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (frame[2].i))) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)M_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException(ctx, (frame[0].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length), (frame[2].i), (frame[3].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(150);
	((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count = (frame[3].i);
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(160);
	((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count = ((jint)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_count);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(168);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_StringBuffer_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_length_R_int])(ctx, (frame[1].o));
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_count = temp0;
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count));
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[1].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	((func_java_lang_StringBuffer_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp1, temp2, sp[1].o, (jint(0)));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_String_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_count = temp0;
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count));
	((java_lang_String *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(177);
	sp[0].o = frame[1].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	((func_java_lang_StringBuilder_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp1, temp2, sp[1].o, (jint(0)));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_codePointAt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:codePointAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(203);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(204);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Character_codePointAtImpl_Array1_char_int_int_R_int(ctx, sp[0].o, temp0, (((jarray) nullCheck(ctx, sp[1].o))->length));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_codePointBefore_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:codePointBefore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(232);
	frame[2].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(233);
	if ((frame[2].i) < 0) goto label_2;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(234);
	clinit_java_lang_StringIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringIndexOutOfBoundsException);
	init_java_lang_StringIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Character_codePointBeforeImpl_Array1_char_int_int_R_int(ctx, sp[0].o, (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_codePointCount_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:codePointCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(261);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 > (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(262);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)SM_java_lang_Character_codePointCountImpl_Array1_char_int_int_R_int(ctx, sp[0].o, (frame[1].i), ((frame[2].i) - (frame[1].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_offsetByCodePoints_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:offsetByCodePoints", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(288);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(289);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Character_offsetByCodePointsImpl_Array1_char_int_int_int_int_R_int(ctx, sp[0].o, temp0, (((jarray) nullCheck(ctx, sp[1].o))->length), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jchar M_java_lang_String_charAt_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:charAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_compareTo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[2].i = temp2;
	LINE_NUMBER(313);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)));
	LINE_NUMBER(315);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)));
	LINE_NUMBER(316);
	if ((frame[4].i) == (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[5].i));
	}
label_9:;
	{
	LINE_NUMBER(313);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_compareToIgnoreCase_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:compareToIgnoreCase", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:contentEquals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:contentEquals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(336);
	if ((jobject(nullptr)) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_copyValueOf_Array1_char_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:copyValueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(341);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_copyValueOf_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:copyValueOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(345);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_concat_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:concat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject) createArray(ctx, &class_char, (temp0 + temp1));
	frame[2].o = sp[0].o;
	LINE_NUMBER(356);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), (jint(0)), ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(357);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[2].o), ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count), ((jint)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_count));
	LINE_NUMBER(358);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_endsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:endsWith", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_1;
	}
	{
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(368);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 - (jint(1)));
	LINE_NUMBER(369);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (jint(1)));
	}
label_4:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	if (temp0 == ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i)))) goto label_7;
	}
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(373);
	INST_IINC(2, -1);
	LINE_NUMBER(369);
	INST_IINC(3, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_getBytes_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:getBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_UnsupportedEncodingException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(413);
	frame[1].o = sp[0].o;
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:getBytes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_charset_Charset_displayName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_charset_Charset_displayName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_getBytes_java_lang_String_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_String_getChars_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:getChars", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(434);
	frame[5].i = (frame[1].i);
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i)));
	LINE_NUMBER(436);
	INST_IINC(4, 1);
	LINE_NUMBER(434);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_String_getChars_Array1_char_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:getChars", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = jint(0);
	sp[1].o = frame[1].o;
	jint temp1 = frame[2].i;
	sp[2].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_split_java_lang_String_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:split", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:split", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_split_java_lang_CharSequence_int_R_Array1_java_lang_String])(ctx, sp[0].o, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:replaceAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_replaceAll_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:replaceFirst", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_replaceFirst_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_matches_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:matches", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(471);
	jint temp0 = (jint)SM_java_util_regex_Pattern_matches_java_lang_String_java_lang_CharSequence_R_boolean(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_indexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:indexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_indexOf_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(492);
	frame[3].i = (frame[2].i);
	}
label_1:;
	{
	if ((frame[3].i) >= ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_2;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i))) != (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
	{
	LINE_NUMBER(492);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_indexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:indexOf", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(506);
	frame[2].i = (jint(0));
	LINE_NUMBER(507);
	frame[3].i = ((jint)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_count);
	LINE_NUMBER(508);
	frame[4].i = ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(509);
	if ((frame[3].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(510);
	if ((frame[3].i) <= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	frame[5].o = sp[0].o;
	LINE_NUMBER(514);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (jint(0))));
	LINE_NUMBER(515);
	frame[7].i = (frame[3].i);
	}
label_10:;
	{
	LINE_NUMBER(517);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[0].o), (frame[6].i), (frame[2].i));
	frame[8].i = temp0;
	LINE_NUMBER(518);
	if ((frame[8].i) == (jint(-1))) goto label_12;
	}
	{
	if (((frame[3].i) + (frame[8].i)) <= (frame[4].i)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_13:;
	{
	LINE_NUMBER(521);
	frame[9].i = (frame[8].i);
	frame[10].i = (jint(0));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	frame[11].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(523);
	INST_IINC(10, 1);
	if ((frame[10].i) >= (frame[7].i)) goto label_17;
	}
	{
	sp[0].o = frame[11].o;
	INST_IINC(9, 1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[9].i))) != ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[10].i)))) goto label_17;
	}
	goto label_16;
label_17:;
	{
	LINE_NUMBER(526);
	if ((frame[10].i) != (frame[7].i)) goto label_18;
	}
	{
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_18:;
	{
	LINE_NUMBER(529);
	frame[2].i = ((frame[8].i) + (jint(1)));
	LINE_NUMBER(530);
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(532);
	if ((frame[2].i) >= (frame[4].i)) goto label_21;
	}
	INST_ILOAD(2);
	goto label_22;
label_21:;
	INST_ILOAD(4);
label_22:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_lang_String_indexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:indexOf", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(543);
	if ((frame[2].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(544);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(546);
	frame[3].i = ((jint)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_count);
	LINE_NUMBER(547);
	frame[4].i = ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(548);
	if ((frame[3].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(549);
	if (((frame[3].i) + (frame[2].i)) <= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_7:;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	frame[5].o = sp[0].o;
	LINE_NUMBER(553);
	frame[6].i = (jint(0));
	LINE_NUMBER(554);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(555);
	frame[8].i = ((frame[6].i) + (frame[3].i));
	}
label_12:;
	{
	LINE_NUMBER(557);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[0].o), (frame[7].i), (frame[2].i));
	frame[9].i = temp0;
	LINE_NUMBER(558);
	if ((frame[9].i) == (jint(-1))) goto label_14;
	}
	{
	if (((frame[3].i) + (frame[9].i)) <= (frame[4].i)) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_15:;
	{
	LINE_NUMBER(561);
	frame[10].i = (frame[9].i);
	frame[11].i = (frame[6].i);
	LINE_NUMBER(562);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	frame[12].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(563);
	INST_IINC(11, 1);
	if ((frame[11].i) >= (frame[8].i)) goto label_19;
	}
	{
	sp[0].o = frame[12].o;
	INST_IINC(10, 1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[10].i))) != ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[11].i)))) goto label_19;
	}
	goto label_18;
label_19:;
	{
	LINE_NUMBER(566);
	if ((frame[11].i) != (frame[8].i)) goto label_20;
	}
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[9].i);
	}
label_20:;
	{
	LINE_NUMBER(569);
	frame[2].i = ((frame[9].i) + (jint(1)));
	LINE_NUMBER(570);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(572);
	if ((frame[2].i) >= (frame[4].i)) goto label_23;
	}
	INST_ILOAD(2);
	goto label_24;
label_23:;
	INST_ILOAD(4);
label_24:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_String_intern_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:intern", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	clinit_java_lang_String(ctx);
	sp[0].o = (jobject)SF_java_lang_String_str;
	jint temp0 = (jint)((func_java_util_ArrayList_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(584);
	if ((frame[1].i) <= (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(585);
	clinit_java_lang_String(ctx);
	sp[0].o = (jobject)SF_java_lang_String_str;
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(587);
	clinit_java_lang_String(ctx);
	sp[0].o = (jobject)SF_java_lang_String_str;
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_lastIndexOf_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:lastIndexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(597);
	frame[2].i = (((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count) - (jint(1)));
	}
label_1:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i))) != (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_4:;
	{
	LINE_NUMBER(597);
	INST_IINC(2, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_lastIndexOf_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:lastIndexOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(610);
	frame[3].i = ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(611);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	frame[4].o = sp[0].o;
	LINE_NUMBER(612);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(613);
	if ((frame[2].i) < (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(614);
	frame[2].i = ((frame[3].i) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(616);
	frame[5].i = (frame[2].i);
	}
label_7:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(617);
	if (((jint)ARRAY_ACCESS(jchar, (frame[4].o), (frame[5].i))) != (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_9:;
	{
	LINE_NUMBER(616);
	INST_IINC(5, -1);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_lastIndexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:lastIndexOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_lang_String_lastIndexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_lastIndexOf_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_lastIndexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:lastIndexOf", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(656);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(657);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp1;
	LINE_NUMBER(658);
	if ((frame[4].i) > (frame[3].i)) goto label_3;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(659);
	if ((frame[4].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(660);
	if ((frame[2].i) <= ((frame[3].i) - (frame[4].i))) goto label_7;
	}
	{
	LINE_NUMBER(661);
	frame[2].i = ((frame[3].i) - (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(665);
	frame[6].i = (jint(0));
	LINE_NUMBER(666);
	frame[7].i = ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(667);
	frame[8].i = ((frame[6].i) + (frame[4].i));
	}
label_12:;
	{
	LINE_NUMBER(669);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_int_R_int])(ctx, (frame[0].o), (frame[7].i), (frame[2].i));
	frame[9].i = temp0;
	LINE_NUMBER(670);
	if ((frame[9].i) != (jint(-1))) goto label_14;
	}
	{
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(673);
	frame[10].i = (frame[9].i);
	frame[11].i = (frame[6].i);
	}
label_17:;
	{
	LINE_NUMBER(674);
	INST_IINC(11, 1);
	if ((frame[11].i) >= (frame[8].i)) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	INST_IINC(10, 1);
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[10].i))) != ((jint)ARRAY_ACCESS(jchar, (frame[5].o), (frame[11].i)))) goto label_18;
	}
	goto label_17;
label_18:;
	{
	LINE_NUMBER(677);
	if ((frame[11].i) != (frame[8].i)) goto label_19;
	}
	{
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return (frame[9].i);
	}
label_19:;
	{
	LINE_NUMBER(680);
	frame[2].i = ((frame[9].i) - (jint(1)));
	LINE_NUMBER(681);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(683);
	if ((frame[2].i) >= (frame[3].i)) goto label_22;
	}
	INST_ILOAD(2);
	goto label_23;
label_22:;
	INST_ILOAD(3);
label_23:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_lang_String_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:regionMatches", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(714);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(715);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"string == null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(717);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	if ((((jint)((java_lang_String *) NULL_CHECK((frame[2].o)))->F_count) - (frame[3].i)) >= (frame[4].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(718);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(720);
	if ((frame[1].i) < 0) goto label_5;
	}
	{
	if ((((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count) - (frame[1].i)) >= (frame[4].i)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(723);
	if ((frame[4].i) > 0) goto label_7;
	}
	{
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(726);
	frame[5].i = (frame[1].i);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(727);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	frame[7].o = sp[0].o;
	LINE_NUMBER(728);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[2].o)))->F_value;
	frame[8].o = sp[0].o;
	LINE_NUMBER(729);
	frame[9].i = (jint(0));
	}
label_13:;
	{
	if ((frame[9].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(730);
	if (((jint)ARRAY_ACCESS(jchar, (frame[7].o), ((frame[5].i) + (frame[9].i)))) == ((jint)ARRAY_ACCESS(jchar, (frame[8].o), ((frame[6].i) + (frame[9].i))))) goto label_16;
	}
	{
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(729);
	INST_IINC(9, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(734);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:regionMatches", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(744);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(745);
	jint temp0 = (jint)((func_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean])(ctx, (frame[0].o), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(747);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(748);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"string == null"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(750);
	if ((frame[2].i) < 0) goto label_5;
	}
	{
	if ((frame[5].i) <= (((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count) - (frame[2].i))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(753);
	if ((frame[4].i) < 0) goto label_7;
	}
	{
	if ((frame[5].i) <= (((jint)((java_lang_String *) NULL_CHECK((frame[3].o)))->F_count) - (frame[4].i))) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(754);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(756);
	frame[6].i = ((frame[2].i) + (frame[5].i));
	LINE_NUMBER(757);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[3].o)))->F_value;
	frame[7].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(758);
	if ((frame[2].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	frame[8].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	LINE_NUMBER(760);
	sp[0].o = frame[7].o;
	jint temp1 = frame[4].i;
	INST_IINC(4, 1);
	frame[9].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp1));
	LINE_NUMBER(761);
	if ((frame[8].i) == (frame[9].i)) goto label_15;
	}
	{
	jint temp0 = (jint)M_java_lang_String_foldCase_char_R_char(ctx, (frame[0].o), (frame[8].i));
	jint temp1 = (jint)M_java_lang_String_foldCase_char_R_char(ctx, (frame[0].o), (frame[9].i));
	if (temp0 == temp1) goto label_15;
	}
	{
	LINE_NUMBER(762);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	LINE_NUMBER(764);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jchar M_java_lang_String_foldCase_char_R_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:foldCase", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(773);
	if ((frame[1].i) >= (128)) goto label_1;
	}
	{
	LINE_NUMBER(774);
	if ((65) > (frame[1].i)) goto label_3;
	}
	{
	if ((frame[1].i) > (90)) goto label_3;
	}
	{
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (jchar(((frame[1].i) + (32))));
	}
label_3:;
	{
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_1:;
	{
	LINE_NUMBER(779);
	jint temp0 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, (frame[1].i));
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_replace_char_char_R_java_lang_String(jcontext ctx, jobject self, jchar param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:replace", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	frame[3].o = sp[0].o;
	LINE_NUMBER(790);
	frame[4].i = ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count);
	LINE_NUMBER(792);
	frame[5].i = (jint(0));
	LINE_NUMBER(793);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(794);
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(795);
	if (((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i))) != (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(796);
	if ((frame[6].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(798);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[7].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(799);
	frame[3].o = (frame[7].o);
	LINE_NUMBER(800);
	frame[6].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(802);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[5].i)) = (frame[2].i);
	}
label_7:;
	{
	LINE_NUMBER(804);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(807);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[3].o));
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_ALOAD(0);
label_15:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_String_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:startsWith", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(814);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_int_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_startsWith_java_lang_String_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:startsWith", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(821);
	if (((frame[2].i) + ((jint)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_count)) <= ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	{
	LINE_NUMBER(822);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(824);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= ((jint)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_count)) goto label_4;
	}
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[1].o)))->F_value;
	jint temp0 = (jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (temp0 == ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((frame[3].i) + (frame[2].i))))) goto label_6;
	}
	{
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(824);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_substring_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:substring", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(838);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(839);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(841);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) > ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_3;
	}
	{
	LINE_NUMBER(843);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(845);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:substring", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(854);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	if ((frame[2].i) != ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_1;
	}
	{
	LINE_NUMBER(855);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(859);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) > (frame[2].i)) goto label_3;
	}
	{
	if ((frame[2].i) > ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_3;
	}
	{
	LINE_NUMBER(861);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), ((frame[2].i) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(863);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_toCharArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:toCharArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count));
	frame[1].o = sp[0].o;
	LINE_NUMBER(871);
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count));
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_toLowerCase_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:toLowerCase", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(879);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject) createArray(ctx, &class_char, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(880);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_3;
	}
	{
	LINE_NUMBER(881);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(880);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(883);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:toLowerCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(889);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_toUpperCase_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:toUpperCase", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(901);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject) createArray(ctx, &class_char, temp0);
	frame[1].o = sp[0].o;
	LINE_NUMBER(902);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= ((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count)) goto label_3;
	}
	{
	LINE_NUMBER(903);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp1 = (jint)SM_java_lang_Character_toUpperCase_char_R_char(ctx, ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[2].i))));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(902);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(905);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:toUpperCase", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(911);
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_String_trim_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:trim", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(922);
	frame[1].i = (jint(0));
	frame[2].i = (((jint)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_count) - (jint(1)));
	LINE_NUMBER(923);
	frame[3].i = (frame[2].i);
	}
label_3:;
	{
	LINE_NUMBER(924);
	if ((frame[1].i) > (frame[3].i)) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i))) > (32)) goto label_4;
	}
	{
	LINE_NUMBER(925);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(927);
	if ((frame[3].i) < (frame[1].i)) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i))) > (32)) goto label_6;
	}
	{
	LINE_NUMBER(928);
	INST_IINC(3, -1);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(930);
	if ((frame[1].i) != 0) goto label_8;
	}
	{
	if ((frame[3].i) != (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(931);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_8:;
	{
	LINE_NUMBER(934);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((java_lang_String *) NULL_CHECK((frame[0].o)))->F_value;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (((frame[3].i) - (frame[1].i)) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_boolean_R_java_lang_String(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(941);
	if ((frame[0].i) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_char_R_java_lang_String(jcontext ctx, jchar param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(948);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject) createArray(ctx, &class_char, (jint(1)));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (frame[0].i);
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(949);
	((java_lang_String *) NULL_CHECK((frame[1].o)))->F_hashCode = (frame[0].i);
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_Array1_char_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(954);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(962);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_double_R_java_lang_String(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[0].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_long_R_java_lang_String(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:valueOf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1001);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_String_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:subSequence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:format", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1012);
	clinit_java_util_Formatter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Formatter);
	init_java_util_Formatter(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_util_Formatter_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Formatter_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_String_format_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:format", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1016);
	sp[0].o = (jobject)SM_java_lang_String_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_String_contains_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1020);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 == (jint(-1))) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_String_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1024);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_lang_String_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_String(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/String:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_String(ctx);
	{
	LINE_NUMBER(48);
	clinit_java_lang_String$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String$1);
	init_java_lang_String$1(ctx, sp[0].o);
	clinit_java_lang_String(ctx);
	SF_java_lang_String_CASE_INSENSITIVE_ORDER = sp[0].o;
	LINE_NUMBER(54);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	clinit_java_lang_String(ctx);
	SF_java_lang_String_str = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject) createArray(ctx, &class_char, (jint(0)));
	clinit_java_lang_String(ctx);
	SF_java_lang_String_ZERO_CHAR = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_String[] {
	(void *) M_java_lang_String_hashCode_R_int,
	(void *) M_java_lang_String_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_String_toString_R_java_lang_String,
	(void *) M_java_lang_String_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_String_length_R_int,
	(void *) M_java_lang_String_charAt_int_R_char,
	(void *) M_java_lang_String_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_java_lang_String_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException,
	(void *) M_java_lang_String_codePointAt_int_R_int,
	(void *) M_java_lang_String_codePointBefore_int_R_int,
	(void *) M_java_lang_String_codePointCount_int_int_R_int,
	(void *) M_java_lang_String_offsetByCodePoints_int_int_R_int,
	(void *) M_java_lang_String_compareTo_java_lang_String_R_int,
	(void *) M_java_lang_String_compareToIgnoreCase_java_lang_String_R_int,
	(void *) M_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean,
	(void *) M_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean,
	(void *) M_java_lang_String_concat_java_lang_String_R_java_lang_String,
	(void *) M_java_lang_String_endsWith_java_lang_String_R_boolean,
	(void *) M_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean,
	(void *) M_java_lang_String_getBytes_R_Array1_byte,
	(void *) M_java_lang_String_getBytes_java_lang_String_R_Array1_byte,
	(void *) M_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte,
	(void *) M_java_lang_String_getChars_int_int_Array1_char_int,
	(void *) M_java_lang_String_getChars_Array1_char_int,
	(void *) M_java_lang_String_split_java_lang_String_R_Array1_java_lang_String,
	(void *) M_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String,
	(void *) M_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String,
	(void *) M_java_lang_String_matches_java_lang_String_R_boolean,
	(void *) M_java_lang_String_indexOf_int_R_int,
	(void *) M_java_lang_String_indexOf_int_int_R_int,
	(void *) M_java_lang_String_indexOf_java_lang_String_R_int,
	(void *) M_java_lang_String_indexOf_java_lang_String_int_R_int,
	(void *) M_java_lang_String_intern_R_java_lang_String,
	(void *) M_java_lang_String_lastIndexOf_int_R_int,
	(void *) M_java_lang_String_lastIndexOf_int_int_R_int,
	(void *) M_java_lang_String_lastIndexOf_java_lang_String_R_int,
	(void *) M_java_lang_String_lastIndexOf_java_lang_String_int_R_int,
	(void *) M_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean,
	(void *) M_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean,
	(void *) M_java_lang_String_foldCase_char_R_char,
	(void *) M_java_lang_String_replace_char_char_R_java_lang_String,
	(void *) M_java_lang_String_startsWith_java_lang_String_R_boolean,
	(void *) M_java_lang_String_startsWith_java_lang_String_int_R_boolean,
	(void *) M_java_lang_String_substring_int_R_java_lang_String,
	(void *) M_java_lang_String_substring_int_int_R_java_lang_String,
	(void *) M_java_lang_String_toCharArray_R_Array1_char,
	(void *) M_java_lang_String_toLowerCase_R_java_lang_String,
	(void *) M_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String,
	(void *) M_java_lang_String_toUpperCase_R_java_lang_String,
	(void *) M_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String,
	(void *) M_java_lang_String_trim_R_java_lang_String,
	(void *) M_java_lang_String_contains_java_lang_CharSequence_R_boolean,
	(void *) M_java_lang_String_isEmpty_R_boolean,
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
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "failedBoundsCheck", "(III)Ljava/lang/StringIndexOutOfBoundsException;" },
	{ "codePointAt", "(I)I" },
	{ "codePointBefore", "(I)I" },
	{ "codePointCount", "(II)I" },
	{ "offsetByCodePoints", "(II)I" },
	{ "compareTo", "(Ljava/lang/String;)I" },
	{ "compareToIgnoreCase", "(Ljava/lang/String;)I" },
	{ "contentEquals", "(Ljava/lang/CharSequence;)Z" },
	{ "contentEquals", "(Ljava/lang/StringBuffer;)Z" },
	{ "concat", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "endsWith", "(Ljava/lang/String;)Z" },
	{ "equalsIgnoreCase", "(Ljava/lang/String;)Z" },
	{ "getBytes", "()[B" },
	{ "getBytes", "(Ljava/lang/String;)[B" },
	{ "getBytes", "(Ljava/nio/charset/Charset;)[B" },
	{ "getChars", "(II[CI)V" },
	{ "getChars", "([CI)V" },
	{ "split", "(Ljava/lang/String;)[Ljava/lang/String;" },
	{ "split", "(Ljava/lang/String;I)[Ljava/lang/String;" },
	{ "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;" },
	{ "matches", "(Ljava/lang/String;)Z" },
	{ "indexOf", "(I)I" },
	{ "indexOf", "(II)I" },
	{ "indexOf", "(Ljava/lang/String;)I" },
	{ "indexOf", "(Ljava/lang/String;I)I" },
	{ "intern", "()Ljava/lang/String;" },
	{ "lastIndexOf", "(I)I" },
	{ "lastIndexOf", "(II)I" },
	{ "lastIndexOf", "(Ljava/lang/String;)I" },
	{ "lastIndexOf", "(Ljava/lang/String;I)I" },
	{ "regionMatches", "(ILjava/lang/String;II)Z" },
	{ "regionMatches", "(ZILjava/lang/String;II)Z" },
	{ "foldCase", "(C)C" },
	{ "replace", "(CC)Ljava/lang/String;" },
	{ "startsWith", "(Ljava/lang/String;)Z" },
	{ "startsWith", "(Ljava/lang/String;I)Z" },
	{ "substring", "(I)Ljava/lang/String;" },
	{ "substring", "(II)Ljava/lang/String;" },
	{ "toCharArray", "()[C" },
	{ "toLowerCase", "()Ljava/lang/String;" },
	{ "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;" },
	{ "toUpperCase", "()Ljava/lang/String;" },
	{ "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;" },
	{ "trim", "()Ljava/lang/String;" },
	{ "contains", "(Ljava/lang/CharSequence;)Z" },
	{ "isEmpty", "()Z" },
};

static jclass interfaces[] { &class_java_lang_CharSequence, &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "CASE_INSENSITIVE_ORDER", &class_java_util_Comparator, (intptr_t) &SF_java_lang_String_CASE_INSENSITIVE_ORDER, "Ljava/util/Comparator;", 9 },
	{ "str", &class_java_util_ArrayList, (intptr_t) &SF_java_lang_String_str, "Ljava/util/ArrayList;", 10 },
	{ "value", getArrayClass(&class_char, 1), offsetof(java_lang_String, F_value), "[C", 18 },
	{ "count", &class_int, offsetof(java_lang_String, F_count), "I", 18 },
	{ "hashCode", &class_int, offsetof(java_lang_String, F_hashCode), "I", 2 },
	{ "nativeString", &class_long, offsetof(java_lang_String, F_nativeString), "J", 2 },
	{ "ZERO_CHAR", getArrayClass(&class_char, 1), (intptr_t) &SF_java_lang_String_ZERO_CHAR, "[C", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_String, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_int_int_int, 0, "([III)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_byte, 0, "([B)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_byte_int_int, 0, "([BII)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_byte_int_int_java_lang_String, 0, "([BIILjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_byte_java_nio_charset_Charset, 0, "([BLjava/nio/charset/Charset;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_byte_int_int_java_nio_charset_Charset, 0, "([BIILjava/nio/charset/Charset;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_byte_java_lang_String, 0, "([BLjava/lang/String;)V", 1 },
	{ "bytesToChars", (intptr_t) SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char, 0, "([BIILjava/lang/String;)[C", 265 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_char, 0, "([C)V", 1 },
	{ "failedBoundsCheck", (intptr_t) M_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException, VTABLE_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException, "(III)Ljava/lang/StringIndexOutOfBoundsException;", 2 },
	{ "<init>", (intptr_t) init_java_lang_String_Array1_char_int_int, 0, "([CII)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_java_lang_StringBuffer, 0, "(Ljava/lang/StringBuffer;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_String_java_lang_StringBuilder, 0, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "codePointAt", (intptr_t) M_java_lang_String_codePointAt_int_R_int, VTABLE_java_lang_String_codePointAt_int_R_int, "(I)I", 1 },
	{ "codePointBefore", (intptr_t) M_java_lang_String_codePointBefore_int_R_int, VTABLE_java_lang_String_codePointBefore_int_R_int, "(I)I", 1 },
	{ "codePointCount", (intptr_t) M_java_lang_String_codePointCount_int_int_R_int, VTABLE_java_lang_String_codePointCount_int_int_R_int, "(II)I", 1 },
	{ "offsetByCodePoints", (intptr_t) M_java_lang_String_offsetByCodePoints_int_int_R_int, VTABLE_java_lang_String_offsetByCodePoints_int_int_R_int, "(II)I", 1 },
	{ "charAt", (intptr_t) M_java_lang_String_charAt_int_R_char, VTABLE_java_lang_String_charAt_int_R_char, "(I)C", 17 },
	{ "compareTo", (intptr_t) M_java_lang_String_compareTo_java_lang_String_R_int, VTABLE_java_lang_String_compareTo_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "compareToIgnoreCase", (intptr_t) M_java_lang_String_compareToIgnoreCase_java_lang_String_R_int, VTABLE_java_lang_String_compareToIgnoreCase_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "contentEquals", (intptr_t) M_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean, VTABLE_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean, "(Ljava/lang/CharSequence;)Z", 1 },
	{ "contentEquals", (intptr_t) M_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean, VTABLE_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean, "(Ljava/lang/StringBuffer;)Z", 1 },
	{ "copyValueOf", (intptr_t) SM_java_lang_String_copyValueOf_Array1_char_R_java_lang_String, 0, "([C)Ljava/lang/String;", 9 },
	{ "copyValueOf", (intptr_t) SM_java_lang_String_copyValueOf_Array1_char_int_int_R_java_lang_String, 0, "([CII)Ljava/lang/String;", 9 },
	{ "concat", (intptr_t) M_java_lang_String_concat_java_lang_String_R_java_lang_String, VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "endsWith", (intptr_t) M_java_lang_String_endsWith_java_lang_String_R_boolean, VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "equals", (intptr_t) M_java_lang_String_equals_java_lang_Object_R_boolean, VTABLE_java_lang_String_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 257 },
	{ "equalsIgnoreCase", (intptr_t) M_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean, VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 257 },
	{ "getBytes", (intptr_t) M_java_lang_String_getBytes_R_Array1_byte, VTABLE_java_lang_String_getBytes_R_Array1_byte, "()[B", 1 },
	{ "getBytes", (intptr_t) M_java_lang_String_getBytes_java_lang_String_R_Array1_byte, VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte, "(Ljava/lang/String;)[B", 257 },
	{ "getBytes", (intptr_t) M_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte, VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte, "(Ljava/nio/charset/Charset;)[B", 1 },
	{ "getChars", (intptr_t) M_java_lang_String_getChars_int_int_Array1_char_int, VTABLE_java_lang_String_getChars_int_int_Array1_char_int, "(II[CI)V", 1 },
	{ "getChars", (intptr_t) M_java_lang_String_getChars_Array1_char_int, VTABLE_java_lang_String_getChars_Array1_char_int, "([CI)V", 0 },
	{ "hashCode", (intptr_t) M_java_lang_String_hashCode_R_int, VTABLE_java_lang_String_hashCode_R_int, "()I", 257 },
	{ "split", (intptr_t) M_java_lang_String_split_java_lang_String_R_Array1_java_lang_String, VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String, "(Ljava/lang/String;)[Ljava/lang/String;", 1 },
	{ "split", (intptr_t) M_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String, VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String, "(Ljava/lang/String;I)[Ljava/lang/String;", 1 },
	{ "replaceAll", (intptr_t) M_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "replaceFirst", (intptr_t) M_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "replace", (intptr_t) M_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String, VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String, "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;", 257 },
	{ "matches", (intptr_t) M_java_lang_String_matches_java_lang_String_R_boolean, VTABLE_java_lang_String_matches_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "indexOf", (intptr_t) M_java_lang_String_indexOf_int_R_int, VTABLE_java_lang_String_indexOf_int_R_int, "(I)I", 1 },
	{ "indexOf", (intptr_t) M_java_lang_String_indexOf_int_int_R_int, VTABLE_java_lang_String_indexOf_int_int_R_int, "(II)I", 1 },
	{ "indexOf", (intptr_t) M_java_lang_String_indexOf_java_lang_String_R_int, VTABLE_java_lang_String_indexOf_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "indexOf", (intptr_t) M_java_lang_String_indexOf_java_lang_String_int_R_int, VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "intern", (intptr_t) M_java_lang_String_intern_R_java_lang_String, VTABLE_java_lang_String_intern_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastIndexOf", (intptr_t) M_java_lang_String_lastIndexOf_int_R_int, VTABLE_java_lang_String_lastIndexOf_int_R_int, "(I)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_lang_String_lastIndexOf_int_int_R_int, VTABLE_java_lang_String_lastIndexOf_int_int_R_int, "(II)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_lang_String_lastIndexOf_java_lang_String_R_int, VTABLE_java_lang_String_lastIndexOf_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "lastIndexOf", (intptr_t) M_java_lang_String_lastIndexOf_java_lang_String_int_R_int, VTABLE_java_lang_String_lastIndexOf_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "length", (intptr_t) M_java_lang_String_length_R_int, VTABLE_java_lang_String_length_R_int, "()I", 1 },
	{ "regionMatches", (intptr_t) M_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean, VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean, "(ILjava/lang/String;II)Z", 1 },
	{ "regionMatches", (intptr_t) M_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean, VTABLE_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean, "(ZILjava/lang/String;II)Z", 1 },
	{ "foldCase", (intptr_t) M_java_lang_String_foldCase_char_R_char, VTABLE_java_lang_String_foldCase_char_R_char, "(C)C", 2 },
	{ "replace", (intptr_t) M_java_lang_String_replace_char_char_R_java_lang_String, VTABLE_java_lang_String_replace_char_char_R_java_lang_String, "(CC)Ljava/lang/String;", 1 },
	{ "startsWith", (intptr_t) M_java_lang_String_startsWith_java_lang_String_R_boolean, VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "startsWith", (intptr_t) M_java_lang_String_startsWith_java_lang_String_int_R_boolean, VTABLE_java_lang_String_startsWith_java_lang_String_int_R_boolean, "(Ljava/lang/String;I)Z", 1 },
	{ "substring", (intptr_t) M_java_lang_String_substring_int_R_java_lang_String, VTABLE_java_lang_String_substring_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "substring", (intptr_t) M_java_lang_String_substring_int_int_R_java_lang_String, VTABLE_java_lang_String_substring_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "toCharArray", (intptr_t) M_java_lang_String_toCharArray_R_Array1_char, VTABLE_java_lang_String_toCharArray_R_Array1_char, "()[C", 1 },
	{ "toLowerCase", (intptr_t) M_java_lang_String_toLowerCase_R_java_lang_String, VTABLE_java_lang_String_toLowerCase_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toLowerCase", (intptr_t) M_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String, VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String, "(Ljava/util/Locale;)Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_java_lang_String_toString_R_java_lang_String, VTABLE_java_lang_String_toString_R_java_lang_String, "()Ljava/lang/String;", 257 },
	{ "toUpperCase", (intptr_t) M_java_lang_String_toUpperCase_R_java_lang_String, VTABLE_java_lang_String_toUpperCase_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toUpperCase", (intptr_t) M_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String, VTABLE_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String, "(Ljava/util/Locale;)Ljava/lang/String;", 1 },
	{ "trim", (intptr_t) M_java_lang_String_trim_R_java_lang_String, VTABLE_java_lang_String_trim_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_boolean_R_java_lang_String, 0, "(Z)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_char_R_java_lang_String, 0, "(C)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_Array1_char_R_java_lang_String, 0, "([C)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String, 0, "([CII)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_double_R_java_lang_String, 0, "(D)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_long_R_java_lang_String, 0, "(J)Ljava/lang/String;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "subSequence", (intptr_t) M_java_lang_String_subSequence_int_int_R_java_lang_CharSequence, VTABLE_java_lang_String_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 1 },
	{ "finalize", (intptr_t) M_java_lang_String_finalize, VTABLE_java_lang_String_finalize, "()V", 260 },
	{ "format", (intptr_t) SM_java_lang_String_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 137 },
	{ "format", (intptr_t) SM_java_lang_String_format_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_lang_String, 0, "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", 137 },
	{ "contains", (intptr_t) M_java_lang_String_contains_java_lang_CharSequence_R_boolean, VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean, "(Ljava/lang/CharSequence;)Z", 1 },
	{ "isEmpty", (intptr_t) M_java_lang_String_isEmpty_R_boolean, VTABLE_java_lang_String_isEmpty_R_boolean, "()Z", 1 },
	{ "compareTo", (intptr_t) M_java_lang_String_compareTo_java_lang_Object_R_int, VTABLE_java_lang_String_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_lang_String, 0, "()V", 8 },
};

Class class_java_lang_String{
		.nativeName = (intptr_t) "java/lang/String",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_String),
		.classVtable = (intptr_t) vtable_java_lang_String,
		.staticInitializer = (intptr_t) clinit_java_lang_String,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_String,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 84,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_String = registerClass(&class_java_lang_String);

}
