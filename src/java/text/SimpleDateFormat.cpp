#include "java/text/SimpleDateFormat.h"
#include "java/text/DateFormat.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Date.h"
#include "java/util/Calendar.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/text/DateFormatSymbols.h"
#include "java/text/SimpleDateFormat.h"
#include "java/util/TimeZone.h"
#include "java/text/ParseException.h"
#include "java/util/List.h"
#include "java/util/Locale.h"

extern "C" {

jchar SF_java_text_SimpleDateFormat_ERA_LETTER;
jchar SF_java_text_SimpleDateFormat_YEAR_LETTER;
jchar SF_java_text_SimpleDateFormat_MONTH_LETTER;
jchar SF_java_text_SimpleDateFormat_WEEK_IN_YEAR_LETTER;
jchar SF_java_text_SimpleDateFormat_WEEK_IN_MONTH_LETTER;
jchar SF_java_text_SimpleDateFormat_DAY_IN_YEAR_LETTER;
jchar SF_java_text_SimpleDateFormat_DAY_LETTER;
jchar SF_java_text_SimpleDateFormat_DOW_IN_MONTH_LETTER;
jchar SF_java_text_SimpleDateFormat_DAY_OF_WEEK_LETTER;
jchar SF_java_text_SimpleDateFormat_AMPM_LETTER;
jchar SF_java_text_SimpleDateFormat_HOUR_LETTER;
jchar SF_java_text_SimpleDateFormat_HOUR_1_LETTER;
jchar SF_java_text_SimpleDateFormat_HOUR12_LETTER;
jchar SF_java_text_SimpleDateFormat_HOUR12_1_LETTER;
jchar SF_java_text_SimpleDateFormat_MINUTE_LETTER;
jchar SF_java_text_SimpleDateFormat_SECOND_LETTER;
jchar SF_java_text_SimpleDateFormat_MILLISECOND_LETTER;
jchar SF_java_text_SimpleDateFormat_TIMEZONE_LETTER;
jchar SF_java_text_SimpleDateFormat_TIMEZONE822_LETTER;
jchar SF_java_text_SimpleDateFormat_LITERAL_LETTER;
jchar SF_java_text_SimpleDateFormat_EXPLICIT_LITERAL;
jchar SF_java_text_SimpleDateFormat_SIGN_POSITIVE;
jchar SF_java_text_SimpleDateFormat_SIGN_NEGATIVE;
jint SF_java_text_SimpleDateFormat_MILLIS_TO_MINUTES;
jobject SF_java_text_SimpleDateFormat_PATTERN_LETTERS;
jobject SF_java_text_SimpleDateFormat_GMT;
jint SF_java_text_SimpleDateFormat_ERA;
jint SF_java_text_SimpleDateFormat_WEEK_OF_MONTH;
jint SF_java_text_SimpleDateFormat_WEEK_OF_YEAR;
jint SF_java_text_SimpleDateFormat_DAY_OF_WEEK_IN_MONTH;
jint SF_java_text_SimpleDateFormat_DAY_OF_YEAR;

void mark_java_text_SimpleDateFormat(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_text_SimpleDateFormat_PATTERN_LETTERS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_SimpleDateFormat_PATTERN_LETTERS)->clazz)->markFunction)((jobject) SF_java_text_SimpleDateFormat_PATTERN_LETTERS, mark, depth + 1);
		if (SF_java_text_SimpleDateFormat_GMT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_SimpleDateFormat_GMT)->clazz)->markFunction)((jobject) SF_java_text_SimpleDateFormat_GMT, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_text_DateFormat(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_text_SimpleDateFormat *) object;
	if (self->F_dateFormatSymbols)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dateFormatSymbols)->clazz)->markFunction)((jobject) self->F_dateFormatSymbols, mark, depth + 1);
	if (self->F_pattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pattern)->clazz)->markFunction)((jobject) self->F_pattern, mark, depth + 1);
	if (self->F_patternTokens)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patternTokens)->clazz)->markFunction)((jobject) self->F_patternTokens, mark, depth + 1);
}

void clinit_java_text_SimpleDateFormat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_text_DateFormat(ctx);
	SF_java_text_SimpleDateFormat_ERA_LETTER = jint(71);
	SF_java_text_SimpleDateFormat_YEAR_LETTER = jint(121);
	SF_java_text_SimpleDateFormat_MONTH_LETTER = jint(77);
	SF_java_text_SimpleDateFormat_WEEK_IN_YEAR_LETTER = jint(119);
	SF_java_text_SimpleDateFormat_WEEK_IN_MONTH_LETTER = jint(87);
	SF_java_text_SimpleDateFormat_DAY_IN_YEAR_LETTER = jint(68);
	SF_java_text_SimpleDateFormat_DAY_LETTER = jint(100);
	SF_java_text_SimpleDateFormat_DOW_IN_MONTH_LETTER = jint(70);
	SF_java_text_SimpleDateFormat_DAY_OF_WEEK_LETTER = jint(69);
	SF_java_text_SimpleDateFormat_AMPM_LETTER = jint(97);
	SF_java_text_SimpleDateFormat_HOUR_LETTER = jint(72);
	SF_java_text_SimpleDateFormat_HOUR_1_LETTER = jint(107);
	SF_java_text_SimpleDateFormat_HOUR12_LETTER = jint(75);
	SF_java_text_SimpleDateFormat_HOUR12_1_LETTER = jint(104);
	SF_java_text_SimpleDateFormat_MINUTE_LETTER = jint(109);
	SF_java_text_SimpleDateFormat_SECOND_LETTER = jint(115);
	SF_java_text_SimpleDateFormat_MILLISECOND_LETTER = jint(83);
	SF_java_text_SimpleDateFormat_TIMEZONE_LETTER = jint(122);
	SF_java_text_SimpleDateFormat_TIMEZONE822_LETTER = jint(90);
	SF_java_text_SimpleDateFormat_LITERAL_LETTER = jint(42);
	SF_java_text_SimpleDateFormat_EXPLICIT_LITERAL = jint(39);
	SF_java_text_SimpleDateFormat_SIGN_POSITIVE = jint(43);
	SF_java_text_SimpleDateFormat_SIGN_NEGATIVE = jint(45);
	SF_java_text_SimpleDateFormat_MILLIS_TO_MINUTES = jint(60000);
	SF_java_text_SimpleDateFormat_PATTERN_LETTERS = ((jobject) createStringLiteral(ctx, u8"adDEFGHhKkMmsSwWyzZ"_j));
	SF_java_text_SimpleDateFormat_GMT = ((jobject) createStringLiteral(ctx, u8"GMT"_j));
	SF_java_text_SimpleDateFormat_ERA = jint(0);
	SF_java_text_SimpleDateFormat_WEEK_OF_MONTH = jint(4);
	SF_java_text_SimpleDateFormat_WEEK_OF_YEAR = jint(3);
	SF_java_text_SimpleDateFormat_DAY_OF_WEEK_IN_MONTH = jint(8);
	SF_java_text_SimpleDateFormat_DAY_OF_YEAR = jint(6);
}

void init_java_text_SimpleDateFormat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_SimpleDateFormat(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(172);
	init_java_text_DateFormat(ctx, (frame[0].o));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_text_SimpleDateFormat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_SimpleDateFormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	init_java_text_DateFormat(ctx, (frame[0].o));
	LINE_NUMBER(182);
	((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_text_SimpleDateFormat_java_lang_String_java_util_Locale(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_SimpleDateFormat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(186);
	init_java_text_SimpleDateFormat_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_toPattern_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:toPattern", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:getDateFormatSymbols", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_dateFormatSymbols;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	clinit_java_text_DateFormatSymbols(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_text_DateFormatSymbols);
	init_java_text_DateFormatSymbols(ctx, sp[1].o);
	((java_text_SimpleDateFormat *) NULL_CHECK(sp[0].o))->F_dateFormatSymbols = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_dateFormatSymbols;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_SimpleDateFormat_setDateFormatSymbols_java_text_DateFormatSymbols(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:setDateFormatSymbols", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_dateFormatSymbols = (jref) (frame[1].o);
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_text_SimpleDateFormat_applyPattern_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:applyPattern", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern = (jref) (frame[1].o);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_patternTokens;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_patternTokens;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(228);
	((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_patternTokens = (jref) (jobject(nullptr));
	}
label_2:;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:getPatternTokens", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_patternTokens;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_parseDatePattern_java_lang_String_R_java_util_List) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_SimpleDateFormat_parseDatePattern_java_lang_String_R_java_util_List])(ctx, sp[1].o, sp[2].o);
	((java_text_SimpleDateFormat *) NULL_CHECK(sp[0].o))->F_patternTokens = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_patternTokens;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:clone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	clinit_java_text_SimpleDateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	sp[1].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	init_java_text_SimpleDateFormat_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_dateFormatSymbols;
	((func_java_text_SimpleDateFormat_setDateFormatSymbols_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_setDateFormatSymbols_java_text_DateFormatSymbols])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:format", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuffer(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[2].o);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:format", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)M_java_text_DateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(ctx);
	sp[0].o = (jobject)SM_java_util_Calendar_getInstance_java_util_TimeZone_R_java_util_Calendar(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(278);
	((func_java_util_Calendar_setTime_java_util_Date) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_setTime_java_util_Date])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(280);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(282);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[6].o), (jint(0)));
	frame[7].i = temp0;
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[6].o), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(284);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	frame[8].i = temp1;
	LINE_NUMBER(285);
	frame[9].i = (jint(-1));
	LINE_NUMBER(286);
	switch((frame[7].i)) {
		case 42: goto label_14;
		case 43: goto label_15;
		case 44: goto label_15;
		case 45: goto label_15;
		case 46: goto label_15;
		case 47: goto label_15;
		case 48: goto label_15;
		case 49: goto label_15;
		case 50: goto label_15;
		case 51: goto label_15;
		case 52: goto label_15;
		case 53: goto label_15;
		case 54: goto label_15;
		case 55: goto label_15;
		case 56: goto label_15;
		case 57: goto label_15;
		case 58: goto label_15;
		case 59: goto label_15;
		case 60: goto label_15;
		case 61: goto label_15;
		case 62: goto label_15;
		case 63: goto label_15;
		case 64: goto label_15;
		case 65: goto label_15;
		case 66: goto label_15;
		case 67: goto label_15;
		case 68: goto label_16;
		case 69: goto label_17;
		case 70: goto label_18;
		case 71: goto label_19;
		case 72: goto label_20;
		case 73: goto label_15;
		case 74: goto label_15;
		case 75: goto label_20;
		case 76: goto label_15;
		case 77: goto label_21;
		case 78: goto label_15;
		case 79: goto label_15;
		case 80: goto label_15;
		case 81: goto label_15;
		case 82: goto label_15;
		case 83: goto label_22;
		case 84: goto label_15;
		case 85: goto label_15;
		case 86: goto label_15;
		case 87: goto label_23;
		case 88: goto label_15;
		case 89: goto label_15;
		case 90: goto label_24;
		case 91: goto label_15;
		case 92: goto label_15;
		case 93: goto label_15;
		case 94: goto label_15;
		case 95: goto label_15;
		case 96: goto label_15;
		case 97: goto label_25;
		case 98: goto label_15;
		case 99: goto label_15;
		case 100: goto label_26;
		case 101: goto label_15;
		case 102: goto label_15;
		case 103: goto label_15;
		case 104: goto label_20;
		case 105: goto label_15;
		case 106: goto label_15;
		case 107: goto label_20;
		case 108: goto label_15;
		case 109: goto label_27;
		case 110: goto label_15;
		case 111: goto label_15;
		case 112: goto label_15;
		case 113: goto label_15;
		case 114: goto label_15;
		case 115: goto label_28;
		case 116: goto label_15;
		case 117: goto label_15;
		case 118: goto label_15;
		case 119: goto label_29;
		case 120: goto label_15;
		case 121: goto label_30;
		case 122: goto label_31;
		default: goto label_15;
	}
	}
label_14:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(289);
	goto label_15;
	}
label_25:;
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (9));
	if (temp0 != 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(293);
	if ((frame[8].i) != (jint(1))) goto label_37;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[10].i) == 0) goto label_39;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (jint(0)))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (jint(1)))), (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_40:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].i);
	goto label_15;
	}
label_37:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((frame[10].i) == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[11].o), (jint(0)));
	sp += 1;
	goto label_42;
	}
label_41:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[11].o), (jint(1)));
	sp += 1;
	}
label_42:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getEras_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getEras_R_Array1_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (jint(0)));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp0)));
	LINE_NUMBER(303);
	goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (7));
	frame[9].i = (temp0 - (jint(1)));
	LINE_NUMBER(306);
	if ((frame[8].i) <= (jint(3))) goto label_46;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i))));
	goto label_15;
	}
label_46:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i))));
	LINE_NUMBER(311);
	goto label_15;
	}
label_31:;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_util_TimeZone_getID_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TimeZone_getID_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)M_java_text_SimpleDateFormat_getTimeZoneDisplayNames_java_lang_String_R_Array1_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(314);
	if ((frame[12].o) != nullptr) goto label_50;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_java_util_TimeZone_getID_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_TimeZone_getID_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_50:;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (jint(2)))));
	LINE_NUMBER(319);
	goto label_15;
	}
label_24:;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].i = temp0;
	LINE_NUMBER(322);
	if ((frame[9].i) >= 0) goto label_54;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (45));
	LINE_NUMBER(324);
	frame[9].i = (-(frame[9].i));
	goto label_57;
	}
label_54:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (43));
	}
label_57:;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[9].i) / (60)), (jint(2)));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(329);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[9].i) % (60)), (jint(2)));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(330);
	goto label_15;
	}
label_30:;
	{
	LINE_NUMBER(332);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (jint(1)));
	frame[9].i = temp0;
	LINE_NUMBER(333);
	if ((frame[8].i) != (jint(2))) goto label_61;
	}
	{
	LINE_NUMBER(334);
	frame[9].i = ((frame[9].i) % (100));
	}
label_61:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[2].o), (frame[9].i));
	LINE_NUMBER(337);
	goto label_15;
	}
label_21:;
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (jint(2)));
	frame[9].i = (temp0 - (jint(0)));
	LINE_NUMBER(340);
	if ((frame[8].i) <= (jint(3))) goto label_65;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i))));
	goto label_15;
	}
label_65:;
	{
	LINE_NUMBER(342);
	if ((frame[8].i) != (jint(3))) goto label_67;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i))));
	goto label_15;
	}
label_67:;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), ((frame[9].i) + (jint(1))), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(347);
	goto label_15;
	}
label_26:;
	{
	LINE_NUMBER(349);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (jint(5)));
	frame[9].i = temp0;
	LINE_NUMBER(350);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(351);
	goto label_15;
	}
label_20:;
	{
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (11));
	frame[9].i = temp0;
	LINE_NUMBER(357);
	if ((frame[7].i) == (107)) goto label_73;
	}
	{
	if ((frame[7].i) != (104)) goto label_74;
	}
label_73:;
	LINE_NUMBER(358);
	INST_IINC(9, 1);
label_74:;
	{
	LINE_NUMBER(360);
	if ((frame[7].i) == (75)) goto label_75;
	}
	{
	if ((frame[7].i) != (104)) goto label_76;
	}
label_75:;
	{
	LINE_NUMBER(361);
	frame[9].i = ((frame[9].i) % (12));
	}
label_76:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(364);
	goto label_15;
	}
label_27:;
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (12));
	frame[9].i = temp0;
	LINE_NUMBER(367);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(368);
	goto label_15;
	}
label_28:;
	{
	LINE_NUMBER(370);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (13));
	frame[9].i = temp0;
	LINE_NUMBER(371);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(372);
	goto label_15;
	}
label_22:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (14));
	frame[9].i = temp0;
	LINE_NUMBER(375);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(376);
	goto label_15;
	}
label_29:;
	{
	LINE_NUMBER(378);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (jint(3)));
	frame[9].i = temp0;
	LINE_NUMBER(379);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(380);
	goto label_15;
	}
label_23:;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (jint(4)));
	frame[9].i = temp0;
	LINE_NUMBER(383);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(384);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (6));
	frame[9].i = temp0;
	LINE_NUMBER(387);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	goto label_15;
	}
label_18:;
	{
	LINE_NUMBER(390);
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (8));
	frame[9].i = temp0;
	LINE_NUMBER(391);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(280);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_getTimeZoneDisplayNames_java_lang_String_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:getTimeZoneDisplayNames", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(400);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_4:;
	{
	LINE_NUMBER(399);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:leftPad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(409);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(410);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (48));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(409);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_parse_java_lang_String_R_java_util_Date(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parse", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((java_text_SimpleDateFormat *) NULL_CHECK((frame[0].o)))->F_pattern;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)M_java_text_DateFormat_parse_java_lang_String_R_java_util_Date(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(425);
	frame[2].i = (jint(0));
	LINE_NUMBER(427);
	sp[0].o = (jobject)SM_java_util_TimeZone_getTimeZone_java_lang_String_R_java_util_TimeZone(ctx, (((jobject) createStringLiteral(ctx, u8"GMT"_j))));
	sp[0].o = (jobject)SM_java_util_Calendar_getInstance_java_util_TimeZone_R_java_util_Calendar(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(428);
	frame[4].i = (jint(-1));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(430);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(432);
	frame[8].i = (jint(0));
	LINE_NUMBER(433);
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 >= (temp1 - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_java_util_List_get_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_get_int_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), ((frame[6].i) + (jint(1))));
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (jint(0)));
	if (temp0 == (42)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	INST_ISTORE(8);
label_12:;
	{
	LINE_NUMBER(436);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(437);
	frame[10].i = (jint(-1));
	LINE_NUMBER(438);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[7].o), (jint(0)));
	frame[11].i = temp0;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[7].o), (jint(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(440);
	switch((frame[11].i)) {
		case 42: goto label_20;
		case 43: goto label_21;
		case 44: goto label_21;
		case 45: goto label_21;
		case 46: goto label_21;
		case 47: goto label_21;
		case 48: goto label_21;
		case 49: goto label_21;
		case 50: goto label_21;
		case 51: goto label_21;
		case 52: goto label_21;
		case 53: goto label_21;
		case 54: goto label_21;
		case 55: goto label_21;
		case 56: goto label_21;
		case 57: goto label_21;
		case 58: goto label_21;
		case 59: goto label_21;
		case 60: goto label_21;
		case 61: goto label_21;
		case 62: goto label_21;
		case 63: goto label_21;
		case 64: goto label_21;
		case 65: goto label_21;
		case 66: goto label_21;
		case 67: goto label_21;
		case 68: goto label_22;
		case 69: goto label_23;
		case 70: goto label_24;
		case 71: goto label_21;
		case 72: goto label_25;
		case 73: goto label_21;
		case 74: goto label_21;
		case 75: goto label_25;
		case 76: goto label_21;
		case 77: goto label_26;
		case 78: goto label_21;
		case 79: goto label_21;
		case 80: goto label_21;
		case 81: goto label_21;
		case 82: goto label_21;
		case 83: goto label_27;
		case 84: goto label_21;
		case 85: goto label_21;
		case 86: goto label_21;
		case 87: goto label_28;
		case 88: goto label_21;
		case 89: goto label_21;
		case 90: goto label_29;
		case 91: goto label_21;
		case 92: goto label_21;
		case 93: goto label_21;
		case 94: goto label_21;
		case 95: goto label_21;
		case 96: goto label_21;
		case 97: goto label_30;
		case 98: goto label_21;
		case 99: goto label_21;
		case 100: goto label_31;
		case 101: goto label_21;
		case 102: goto label_21;
		case 103: goto label_21;
		case 104: goto label_25;
		case 105: goto label_21;
		case 106: goto label_21;
		case 107: goto label_25;
		case 108: goto label_21;
		case 109: goto label_32;
		case 110: goto label_21;
		case 111: goto label_21;
		case 112: goto label_21;
		case 113: goto label_21;
		case 114: goto label_21;
		case 115: goto label_33;
		case 116: goto label_21;
		case 117: goto label_21;
		case 118: goto label_21;
		case 119: goto label_34;
		case 120: goto label_21;
		case 121: goto label_35;
		case 122: goto label_29;
		default: goto label_21;
	}
	}
label_20:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readLiteral_java_lang_String_int_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readLiteral_java_lang_String_int_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(443);
	goto label_21;
	}
label_30:;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readAmPmMarker_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readAmPmMarker_java_lang_String_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(446);
	if ((frame[9].o) == nullptr) goto label_38;
	}
	{
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseAmPmMarker_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseAmPmMarker_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[10].i = temp0;
	if (temp0 != (jint(-1))) goto label_39;
	}
label_38:;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"am/pm marker"_j))), (frame[2].i));
	}
label_39:;
	{
	LINE_NUMBER(449);
	if ((frame[10].i) != (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(450);
	if ((frame[4].i) != (jint(-1))) goto label_41;
	}
	INST_ICONST(0);
	goto label_42;
label_41:;
	INST_ILOAD(4);
label_42:;
	{
	sp -= 1;
	frame[4].i = (sp[0].i + (720));
	goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readDayOfWeek_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readDayOfWeek_java_lang_String_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(455);
	if ((frame[9].o) != nullptr) goto label_21;
	}
	{
	LINE_NUMBER(456);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"weekday"_j))), (frame[2].i));
	goto label_21;
	}
label_29:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readTimeZone_java_lang_String_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readTimeZone_java_lang_String_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(462);
	if ((frame[9].o) == nullptr) goto label_46;
	}
	{
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i));
	frame[10].i = temp0;
	if (temp0 != (jint(-1))) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(463);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"timezone"_j))), (frame[2].i));
	}
label_47:;
	{
	LINE_NUMBER(465);
	if ((frame[4].i) != (jint(-1))) goto label_48;
	}
	INST_ICONST(0);
	goto label_49;
label_48:;
	INST_ILOAD(4);
label_49:;
	{
	sp -= 1;
	frame[4].i = (sp[0].i + (frame[10].i));
	LINE_NUMBER(466);
	goto label_21;
	}
label_35:;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(469);
	sp[0].o = frame[3].o;
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseYear_java_lang_String_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseYear_java_lang_String_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[7].o), (frame[2].i));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(470);
	goto label_21;
	}
label_26:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readMonth_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readMonth_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(473);
	sp[0].o = frame[3].o;
	jint temp0 = jint(2);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseMonth_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseMonth_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(474);
	goto label_21;
	}
label_31:;
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = frame[3].o;
	jint temp0 = jint(5);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"day of month"_j))), (jint(1)), (31));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(478);
	goto label_21;
	}
label_25:;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(484);
	sp[0].o = frame[3].o;
	jint temp0 = 11;
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseHour_java_lang_String_char_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseHour_java_lang_String_char_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[11].i), (frame[2].i));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(485);
	goto label_21;
	}
label_32:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = frame[3].o;
	jint temp0 = 12;
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"minute"_j))), (jint(0)), (59));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(489);
	goto label_21;
	}
label_33:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(492);
	sp[0].o = frame[3].o;
	jint temp0 = 13;
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"second"_j))), (jint(0)), (59));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(493);
	goto label_21;
	}
label_27:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(496);
	sp[0].o = frame[3].o;
	jint temp0 = 14;
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"millisecond"_j))), (jint(0)), (999));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(497);
	goto label_21;
	}
label_34:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(500);
	sp[0].o = frame[3].o;
	jint temp0 = jint(3);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"week of year"_j))), (jint(1)), (52));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(501);
	goto label_21;
	}
label_28:;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(504);
	sp[0].o = frame[3].o;
	jint temp0 = jint(4);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"week of month"_j))), (jint(0)), (jint(5)));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(505);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(508);
	sp[0].o = frame[3].o;
	jint temp0 = 6;
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[9].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"day of year"_j))), (jint(1)), (365));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(509);
	goto label_21;
	}
label_24:;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[7].o), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(512);
	sp[0].o = frame[3].o;
	jint temp0 = 8;
	sp[1].o = frame[0].o;
	sp[2].o = frame[9].o;
	jint temp1 = frame[2].i;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"day of week in month"_j));
	jint temp2 = -5;
	jint temp3 = jint(5);
	LINE_NUMBER(513);
	jint temp4 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, sp[1].o, sp[2].o, temp1, sp[3].o, temp2, temp3);
	LINE_NUMBER(512);
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp0, temp4);
	}
label_21:;
	{
	LINE_NUMBER(516);
	if ((frame[9].o) == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(517);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[9].o));
	frame[2].i = (temp0 + temp1);
	}
label_74:;
	{
	LINE_NUMBER(430);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)SM_java_util_Calendar_getInstance_R_java_util_Calendar(ctx);
	sp[0].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(521);
	((func_java_util_Calendar_setTimeZone_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_setTimeZone_java_util_TimeZone])(ctx, (frame[3].o), (frame[6].o));
	LINE_NUMBER(524);
	if ((frame[4].i) == (jint(-1))) goto label_78;
	}
	{
	LINE_NUMBER(528);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_getDSTOffset_java_util_Calendar_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDSTOffset_java_util_Calendar_R_int])(ctx, (frame[0].o), (frame[3].o));
	frame[4].i = (temp0 + temp1);
	LINE_NUMBER(529);
	sp[0].o = frame[3].o;
	jint temp2 = 12;
	jint temp3 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[3].o), (12));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp2, (temp3 + (frame[4].i)));
	LINE_NUMBER(531);
	sp[0].o = frame[3].o;
	jint temp4 = 14;
	jint temp5 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, (frame[6].o));
	((func_java_util_Calendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_set_int_int])(ctx, sp[0].o, temp4, temp5);
	}
label_78:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_java_util_Calendar_getTime_R_java_util_Date) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Calendar_getTime_R_java_util_Date])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_parseHour_java_lang_String_char_int_R_int(jcontext ctx, jobject self, jobject param0, jchar param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseHour", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(549);
	if ((frame[2].i) == (107)) goto label_1;
	}
	{
	if ((frame[2].i) != (104)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(550);
	if ((frame[2].i) == (72)) goto label_5;
	}
	{
	if ((frame[2].i) != (107)) goto label_6;
	}
label_5:;
	INST_BIPUSH(23);
	goto label_7;
label_6:;
	INST_BIPUSH(11);
label_7:;
	{
	sp -= 1;
	frame[5].i = (sp[0].i + (frame[4].i));
	LINE_NUMBER(551);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (((jobject) createStringLiteral(ctx, u8"hour"_j))), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return (temp0 - (frame[4].i));
	}

	popStackFrame(ctx);
}

void M_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:validateNumber", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(558);
	if ((frame[1].i) < (frame[4].i)) goto label_1;
	}
	{
	if ((frame[1].i) <= (frame[5].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(559);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(561);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:throwInvalid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(571);
	clinit_java_text_ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" value"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_text_ParseException_java_lang_String_int(ctx, sp[0].o, sp[1].o, (frame[2].i));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseNumber", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(584);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(585);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(587);
	frame[6].i = (jint(-1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(589);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	frame[6].i = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(592);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(590);
	frame[7].o = sp[0].o;
	LINE_NUMBER(591);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	}
label_7:;
	{
	LINE_NUMBER(593);
	if ((frame[4].i) == (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(594);
	((func_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].i));
	}
label_9:;
	{
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_getDSTOffset_java_util_Calendar_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:getDSTOffset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)SM_java_util_Calendar_getInstance_R_java_util_Calendar(ctx);
	sp[0].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, (frame[2].o));
	frame[3].i = (temp0 / (jint(60000)));
	LINE_NUMBER(610);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp1 - (frame[3].i));
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:getOffsetInMinutes", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(621);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[1].o), (jint(1)));
	jint temp2 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[1].o), (jint(2)));
	sp[1].o = frame[1].o;
	jint temp3 = jint(5);
	LINE_NUMBER(622);
	jint temp4 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, sp[1].o, temp3);
	jint temp5 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[1].o), (7));
	jint temp6 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, (frame[1].o), (14));
	LINE_NUMBER(621);
	jint temp7 = (jint)((func_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp4, temp5, temp6);
	popStackFrame(ctx);
	return (temp7 / (jint(60000)));
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_readLiteral_java_lang_String_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:readLiteral", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(634);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:readNumber", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(649);
	if ((frame[4].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(652);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(653);
	frame[6].i = (frame[2].i);
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(654);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(655);
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_isNumeric_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_isNumeric_char_R_boolean])(ctx, (frame[0].o), (frame[7].i));
	if (temp1 != 0) goto label_8;
	}
	{
	LINE_NUMBER(657);
	if ((frame[6].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(658);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(653);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_parseYear_java_lang_String_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseYear", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(683);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (((jobject) createStringLiteral(ctx, u8"year"_j))), (jint(-1)), (jint(-1)));
	frame[4].i = temp0;
	LINE_NUMBER(684);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(685);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[6].i = temp2;
	LINE_NUMBER(686);
	sp[0].o = (jobject)SM_java_util_Calendar_getInstance_R_java_util_Calendar(ctx);
	jint temp3 = (jint)((func_java_util_Calendar_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_get_int_R_int])(ctx, sp[0].o, (jint(1)));
	frame[7].i = temp3;
	LINE_NUMBER(687);
	if ((frame[5].i) != (jint(2))) goto label_5;
	}
	{
	if ((frame[6].i) >= (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(688);
	frame[8].i = (((frame[7].i) / (100)) * (100));
	LINE_NUMBER(689);
	frame[4].i = ((frame[4].i) + (frame[8].i));
	LINE_NUMBER(690);
	if ((frame[4].i) <= ((frame[7].i) + (20))) goto label_5;
	}
	LINE_NUMBER(691);
	INST_IINC(4, -100);
label_5:;
	{
	LINE_NUMBER(694);
	((func_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int])(ctx, (frame[0].o), (frame[4].i), (frame[3].i), (((jobject) createStringLiteral(ctx, u8"year"_j))), (1000), ((frame[7].i) + (1000)));
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_readDayOfWeek_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:readDayOfWeek", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(706);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(707);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(708);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(711);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_6;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(712);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[4].o), (frame[8].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(713);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(711);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_11;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(717);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[4].o), (frame[8].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(718);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(716);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_readAmPmMarker_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:readAmPmMarker", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(733);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(734);
	if ((frame[3].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(735);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	}
label_2:;
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(739);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_7;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(740);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (frame[9].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(741);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(739);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(744);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_11:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_12;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(745);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (jint(0)));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[9].o), (jint(0)));
	if (temp0 != temp1) goto label_14;
	}
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(744);
	INST_IINC(8, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_parseAmPmMarker_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseAmPmMarker", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(765);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(766);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(767);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_5:;
	{
	LINE_NUMBER(765);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(770);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(771);
	jint temp1 = frame[4].i;
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(0)))), (jint(0)));
	if (temp1 != temp2) goto label_8;
	}
	{
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(774);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (jint(1)))), (jint(0)));
	if (temp0 != temp1) goto label_10;
	}
	{
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(777);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"am/pm marker"_j))), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_readMonth_java_lang_String_int_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:readMonth", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(789);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 >= (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(790);
	if ((frame[4].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(791);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(793);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_isNumeric_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_isNumeric_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(797);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	frame[5].i = temp0;
	LINE_NUMBER(798);
	if ((frame[5].i) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(799);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(802);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_10:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_11;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(803);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[6].o), (frame[10].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(804);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(802);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(807);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_15:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_16;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(808);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[6].o), (frame[10].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(809);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[10].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(807);
	INST_IINC(9, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(812);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_parseMonth_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseMonth", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(828);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(829);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (((jobject) createStringLiteral(ctx, u8"month"_j))), (jint(1)), (12));
	popStackFrame(ctx);
	return ((temp0 - (jint(1))) + (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(832);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(833);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(834);
	popStackFrame(ctx);
	return ((frame[4].i) + (jint(0)));
	}
label_7:;
	{
	LINE_NUMBER(832);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(837);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(838);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(839);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return ((frame[4].i) + (jint(0)));
	}
label_13:;
	{
	LINE_NUMBER(838);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(843);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"month"_j))), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_text_SimpleDateFormat_readTimeZone_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:readTimeZone", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(855);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (32), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(857);
	if ((frame[3].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(858);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(860);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(862);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(864);
	if ((frame[5].i) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(865);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"z"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), (jint(1)));
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ACONST_NULL();
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(868);
	if ((frame[5].i) < (8)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"GMT"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(871);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[4].o), (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(872);
	if ((frame[5].i) < (jint(5))) goto label_14;
	}
	{
	if ((frame[6].i) == (45)) goto label_15;
	}
	{
	if ((frame[6].i) != (43)) goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(873);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (jint(5))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_16:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_17;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(876);
	frame[11].o = (frame[10].o);
	frame[12].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	frame[13].i = (jint(0));
	}
label_19:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_20;
	}
	{
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(877);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[14].o), (frame[4].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[14].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 + temp2));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_22:;
	{
	LINE_NUMBER(876);
	INST_IINC(13, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(875);
	INST_IINC(9, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseTimeZone", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(897);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(899);
	if ((frame[3].i) == (45)) goto label_2;
	}
	{
	if ((frame[3].i) != (43)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(904);
	frame[4].i = (jint(2));
	LINE_NUMBER(905);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 != (jint(3))) goto label_6;
	}
	LINE_NUMBER(906);
	INST_IINC(4, -1);
label_6:;
	{
	LINE_NUMBER(908);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[4].i));
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (((jobject) createStringLiteral(ctx, u8"timezone"_j))), (jint(0)), (23));
	frame[5].i = temp0;
	LINE_NUMBER(909);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i));
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (((jobject) createStringLiteral(ctx, u8"timezone"_j))), (jint(0)), (59));
	frame[6].i = temp1;
	LINE_NUMBER(910);
	frame[6].i = ((frame[6].i) + ((frame[5].i) * (60)));
	LINE_NUMBER(911);
	if ((frame[3].i) == (45)) goto label_11;
	}
	{
	LINE_NUMBER(912);
	frame[6].i = (-(frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(914);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_3:;
	{
	LINE_NUMBER(917);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"GMT"_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(918);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (58));
	frame[4].i = temp0;
	LINE_NUMBER(919);
	if ((frame[4].i) == (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(920);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(3)), (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[4].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(922);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(3)));
	frame[1].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(924);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}
label_13:;
	{
	LINE_NUMBER(927);
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_20;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(928);
	frame[8].o = (frame[7].o);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_22:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_23;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(929);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[11].o), (frame[1].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(930);
	sp[0].o = (jobject)SM_java_util_TimeZone_getTimeZone_java_lang_String_R_java_util_TimeZone(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(0)))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(931);
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, (frame[12].o));
	popStackFrame(ctx);
	return (-(temp0 / (jint(60000))));
	}
label_25:;
	{
	LINE_NUMBER(928);
	INST_IINC(10, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(927);
	INST_IINC(6, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(935);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"timezone"_j))), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:findEndText", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(946);
	frame[3].i = (frame[2].i);
	}
label_1:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(947);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_isAlpha_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_isAlpha_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	jint temp1 = (jint)((func_java_text_SimpleDateFormat_isNumeric_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_isNumeric_char_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(948);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
	{
	LINE_NUMBER(946);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(951);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_java_text_SimpleDateFormat_isAlpha_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:isAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(958);
	if ((frame[1].i) < (65)) goto label_1;
	}
	{
	if ((frame[1].i) <= (90)) goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) < (97)) goto label_3;
	}
	{
	if ((frame[1].i) > (122)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_text_SimpleDateFormat_isNumeric_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:isNumeric", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(965);
	if ((frame[1].i) < (48)) goto label_1;
	}
	{
	if ((frame[1].i) > (57)) goto label_1;
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

jobject M_java_text_SimpleDateFormat_parseDatePattern_java_lang_String_R_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/SimpleDateFormat:parseDatePattern", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(979);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(980);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(981);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(982);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(984);
	if ((frame[5].i) != (39)) goto label_7;
	}
	{
	LINE_NUMBER(985);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (39), ((frame[4].i) + (jint(1))));
	frame[6].i = temp0;
	LINE_NUMBER(986);
	if ((frame[6].i) == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(987);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(988);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(989);
	frame[3].o = (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(991);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (42));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[4].i) + (jint(1))), (frame[6].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(993);
	frame[4].i = (frame[6].i);
	LINE_NUMBER(994);
	goto label_16;
	}
label_7:;
	{
	LINE_NUMBER(998);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"adDEFGHhKkMmsSwWyzZ"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"adDEFGHhKkMmsSwWyzZ"_j))), (frame[5].i));
	if (temp0 == (jint(-1))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(999);
	if ((frame[6].i) != 0) goto label_20;
	}
	{
	LINE_NUMBER(1000);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(1001);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1002);
	frame[3].o = (jobject(nullptr));
	}
label_22:;
	{
	LINE_NUMBER(1005);
	frame[7].i = (frame[4].i);
	}
label_25:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(1006);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[7].i));
	frame[5].i = temp0;
	LINE_NUMBER(1007);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"adDEFGHhKkMmsSwWyzZ"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"adDEFGHhKkMmsSwWyzZ"_j))), (frame[5].i));
	if (temp1 == (jint(-1))) goto label_29;
	}
	LINE_NUMBER(1008);
	goto label_26;
label_29:;
	{
	LINE_NUMBER(1010);
	jint temp0 = (jint)((func_java_text_SimpleDateFormat_isAlpha_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_SimpleDateFormat_isAlpha_char_R_boolean])(ctx, (frame[0].o), (frame[5].i));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(1011);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Illegal pattern character: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(1005);
	INST_IINC(7, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(1014);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (42));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), (frame[7].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1015);
	frame[4].i = ((frame[7].i) - (jint(1)));
	LINE_NUMBER(1016);
	goto label_16;
	}
label_20:;
	{
	LINE_NUMBER(1018);
	if ((frame[3].o) != nullptr) goto label_35;
	}
	{
	LINE_NUMBER(1019);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1020);
	goto label_16;
	}
label_35:;
	{
	LINE_NUMBER(1021);
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	if (temp0 != temp1) goto label_38;
	}
	{
	LINE_NUMBER(1022);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_16;
	}
label_38:;
	{
	LINE_NUMBER(1024);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1025);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[5].i));
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(981);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1028);
	if ((frame[3].o) == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(1029);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp1 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_41:;
	{
	LINE_NUMBER(1031);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_text_SimpleDateFormat[] {
	(void *) M_java_text_DateFormat_hashCode_R_int,
	(void *) M_java_text_DateFormat_equals_java_lang_Object_R_boolean,
	(void *) M_java_text_SimpleDateFormat_clone_R_java_lang_Object,
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
	(void *) M_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_parse_java_lang_String_R_java_util_Date,
	(void *) M_java_text_DateFormat_setTimeZone_java_util_TimeZone,
	(void *) M_java_text_SimpleDateFormat_toPattern_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols,
	(void *) M_java_text_SimpleDateFormat_setDateFormatSymbols_java_text_DateFormatSymbols,
	(void *) M_java_text_SimpleDateFormat_applyPattern_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List,
	(void *) M_java_text_SimpleDateFormat_getTimeZoneDisplayNames_java_lang_String_R_Array1_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_parseHour_java_lang_String_char_int_R_int,
	(void *) M_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int,
	(void *) M_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int,
	(void *) M_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int,
	(void *) M_java_text_SimpleDateFormat_getDSTOffset_java_util_Calendar_R_int,
	(void *) M_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int,
	(void *) M_java_text_SimpleDateFormat_readLiteral_java_lang_String_int_java_lang_String_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_parseYear_java_lang_String_java_lang_String_int_R_int,
	(void *) M_java_text_SimpleDateFormat_readDayOfWeek_java_lang_String_int_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_readAmPmMarker_java_lang_String_int_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_parseAmPmMarker_java_lang_String_int_R_int,
	(void *) M_java_text_SimpleDateFormat_readMonth_java_lang_String_int_java_lang_String_boolean_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_parseMonth_java_lang_String_int_R_int,
	(void *) M_java_text_SimpleDateFormat_readTimeZone_java_lang_String_int_R_java_lang_String,
	(void *) M_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int,
	(void *) M_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int,
	(void *) M_java_text_SimpleDateFormat_isAlpha_char_R_boolean,
	(void *) M_java_text_SimpleDateFormat_isNumeric_char_R_boolean,
	(void *) M_java_text_SimpleDateFormat_parseDatePattern_java_lang_String_R_java_util_List,
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
	{ "toPattern", "()Ljava/lang/String;" },
	{ "getDateFormatSymbols", "()Ljava/text/DateFormatSymbols;" },
	{ "setDateFormatSymbols", "(Ljava/text/DateFormatSymbols;)V" },
	{ "applyPattern", "(Ljava/lang/String;)V" },
	{ "getPatternTokens", "()Ljava/util/List;" },
	{ "getTimeZoneDisplayNames", "(Ljava/lang/String;)[Ljava/lang/String;" },
	{ "leftPad", "(II)Ljava/lang/String;" },
	{ "parseHour", "(Ljava/lang/String;CI)I" },
	{ "validateNumber", "(IILjava/lang/String;II)V" },
	{ "throwInvalid", "(Ljava/lang/String;I)I" },
	{ "parseNumber", "(Ljava/lang/String;ILjava/lang/String;II)I" },
	{ "getDSTOffset", "(Ljava/util/Calendar;)I" },
	{ "getOffsetInMinutes", "(Ljava/util/Calendar;Ljava/util/TimeZone;)I" },
	{ "readLiteral", "(Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;" },
	{ "readNumber", "(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;" },
	{ "parseYear", "(Ljava/lang/String;Ljava/lang/String;I)I" },
	{ "readDayOfWeek", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "readAmPmMarker", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "parseAmPmMarker", "(Ljava/lang/String;I)I" },
	{ "readMonth", "(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;" },
	{ "parseMonth", "(Ljava/lang/String;I)I" },
	{ "readTimeZone", "(Ljava/lang/String;I)Ljava/lang/String;" },
	{ "parseTimeZone", "(Ljava/lang/String;I)I" },
	{ "findEndText", "(Ljava/lang/String;I)I" },
	{ "isAlpha", "(C)Z" },
	{ "isNumeric", "(C)Z" },
	{ "parseDatePattern", "(Ljava/lang/String;)Ljava/util/List;" },
};

static FieldMetadata fields[] {
	{ "ERA_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_ERA_LETTER, "C", 26 },
	{ "YEAR_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_YEAR_LETTER, "C", 26 },
	{ "MONTH_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_MONTH_LETTER, "C", 26 },
	{ "WEEK_IN_YEAR_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_WEEK_IN_YEAR_LETTER, "C", 26 },
	{ "WEEK_IN_MONTH_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_WEEK_IN_MONTH_LETTER, "C", 26 },
	{ "DAY_IN_YEAR_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_DAY_IN_YEAR_LETTER, "C", 26 },
	{ "DAY_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_DAY_LETTER, "C", 26 },
	{ "DOW_IN_MONTH_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_DOW_IN_MONTH_LETTER, "C", 26 },
	{ "DAY_OF_WEEK_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_DAY_OF_WEEK_LETTER, "C", 26 },
	{ "AMPM_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_AMPM_LETTER, "C", 26 },
	{ "HOUR_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_HOUR_LETTER, "C", 26 },
	{ "HOUR_1_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_HOUR_1_LETTER, "C", 26 },
	{ "HOUR12_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_HOUR12_LETTER, "C", 26 },
	{ "HOUR12_1_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_HOUR12_1_LETTER, "C", 26 },
	{ "MINUTE_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_MINUTE_LETTER, "C", 26 },
	{ "SECOND_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_SECOND_LETTER, "C", 26 },
	{ "MILLISECOND_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_MILLISECOND_LETTER, "C", 26 },
	{ "TIMEZONE_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_TIMEZONE_LETTER, "C", 26 },
	{ "TIMEZONE822_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_TIMEZONE822_LETTER, "C", 26 },
	{ "LITERAL_LETTER", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_LITERAL_LETTER, "C", 26 },
	{ "EXPLICIT_LITERAL", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_EXPLICIT_LITERAL, "C", 26 },
	{ "SIGN_POSITIVE", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_SIGN_POSITIVE, "C", 26 },
	{ "SIGN_NEGATIVE", &class_char, (intptr_t) &SF_java_text_SimpleDateFormat_SIGN_NEGATIVE, "C", 26 },
	{ "MILLIS_TO_MINUTES", &class_int, (intptr_t) &SF_java_text_SimpleDateFormat_MILLIS_TO_MINUTES, "I", 26 },
	{ "PATTERN_LETTERS", &class_java_lang_String, (intptr_t) &SF_java_text_SimpleDateFormat_PATTERN_LETTERS, "Ljava/lang/String;", 26 },
	{ "GMT", &class_java_lang_String, (intptr_t) &SF_java_text_SimpleDateFormat_GMT, "Ljava/lang/String;", 26 },
	{ "ERA", &class_int, (intptr_t) &SF_java_text_SimpleDateFormat_ERA, "I", 26 },
	{ "WEEK_OF_MONTH", &class_int, (intptr_t) &SF_java_text_SimpleDateFormat_WEEK_OF_MONTH, "I", 26 },
	{ "WEEK_OF_YEAR", &class_int, (intptr_t) &SF_java_text_SimpleDateFormat_WEEK_OF_YEAR, "I", 26 },
	{ "DAY_OF_WEEK_IN_MONTH", &class_int, (intptr_t) &SF_java_text_SimpleDateFormat_DAY_OF_WEEK_IN_MONTH, "I", 26 },
	{ "DAY_OF_YEAR", &class_int, (intptr_t) &SF_java_text_SimpleDateFormat_DAY_OF_YEAR, "I", 26 },
	{ "dateFormatSymbols", &class_java_text_DateFormatSymbols, offsetof(java_text_SimpleDateFormat, F_dateFormatSymbols), "Ljava/text/DateFormatSymbols;", 2 },
	{ "pattern", &class_java_lang_String, offsetof(java_text_SimpleDateFormat, F_pattern), "Ljava/lang/String;", 2 },
	{ "patternTokens", &class_java_util_List, offsetof(java_text_SimpleDateFormat, F_patternTokens), "Ljava/util/List;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_SimpleDateFormat, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_text_SimpleDateFormat_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_text_SimpleDateFormat_java_lang_String_java_util_Locale, 0, "(Ljava/lang/String;Ljava/util/Locale;)V", 1 },
	{ "toPattern", (intptr_t) M_java_text_SimpleDateFormat_toPattern_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_toPattern_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDateFormatSymbols", (intptr_t) M_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols, VTABLE_java_text_SimpleDateFormat_getDateFormatSymbols_R_java_text_DateFormatSymbols, "()Ljava/text/DateFormatSymbols;", 1 },
	{ "setDateFormatSymbols", (intptr_t) M_java_text_SimpleDateFormat_setDateFormatSymbols_java_text_DateFormatSymbols, VTABLE_java_text_SimpleDateFormat_setDateFormatSymbols_java_text_DateFormatSymbols, "(Ljava/text/DateFormatSymbols;)V", 1 },
	{ "applyPattern", (intptr_t) M_java_text_SimpleDateFormat_applyPattern_java_lang_String, VTABLE_java_text_SimpleDateFormat_applyPattern_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getPatternTokens", (intptr_t) M_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List, VTABLE_java_text_SimpleDateFormat_getPatternTokens_R_java_util_List, "()Ljava/util/List;", 0 },
	{ "clone", (intptr_t) M_java_text_SimpleDateFormat_clone_R_java_lang_Object, VTABLE_java_text_SimpleDateFormat_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "format", (intptr_t) M_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String, "(Ljava/util/Date;)Ljava/lang/String;", 1 },
	{ "format", (intptr_t) M_java_text_SimpleDateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_format_java_util_Date_java_lang_StringBuffer_R_java_lang_String, "(Ljava/util/Date;Ljava/lang/StringBuffer;)Ljava/lang/String;", 0 },
	{ "getTimeZoneDisplayNames", (intptr_t) M_java_text_SimpleDateFormat_getTimeZoneDisplayNames_java_lang_String_R_Array1_java_lang_String, VTABLE_java_text_SimpleDateFormat_getTimeZoneDisplayNames_java_lang_String_R_Array1_java_lang_String, "(Ljava/lang/String;)[Ljava/lang/String;", 2 },
	{ "leftPad", (intptr_t) M_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_leftPad_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 0 },
	{ "parse", (intptr_t) M_java_text_SimpleDateFormat_parse_java_lang_String_R_java_util_Date, VTABLE_java_text_SimpleDateFormat_parse_java_lang_String_R_java_util_Date, "(Ljava/lang/String;)Ljava/util/Date;", 1 },
	{ "parseHour", (intptr_t) M_java_text_SimpleDateFormat_parseHour_java_lang_String_char_int_R_int, VTABLE_java_text_SimpleDateFormat_parseHour_java_lang_String_char_int_R_int, "(Ljava/lang/String;CI)I", 0 },
	{ "validateNumber", (intptr_t) M_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int, VTABLE_java_text_SimpleDateFormat_validateNumber_int_int_java_lang_String_int_int, "(IILjava/lang/String;II)V", 0 },
	{ "throwInvalid", (intptr_t) M_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int, VTABLE_java_text_SimpleDateFormat_throwInvalid_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 0 },
	{ "parseNumber", (intptr_t) M_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int, VTABLE_java_text_SimpleDateFormat_parseNumber_java_lang_String_int_java_lang_String_int_int_R_int, "(Ljava/lang/String;ILjava/lang/String;II)I", 0 },
	{ "getDSTOffset", (intptr_t) M_java_text_SimpleDateFormat_getDSTOffset_java_util_Calendar_R_int, VTABLE_java_text_SimpleDateFormat_getDSTOffset_java_util_Calendar_R_int, "(Ljava/util/Calendar;)I", 0 },
	{ "getOffsetInMinutes", (intptr_t) M_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int, VTABLE_java_text_SimpleDateFormat_getOffsetInMinutes_java_util_Calendar_java_util_TimeZone_R_int, "(Ljava/util/Calendar;Ljava/util/TimeZone;)I", 0 },
	{ "readLiteral", (intptr_t) M_java_text_SimpleDateFormat_readLiteral_java_lang_String_int_java_lang_String_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_readLiteral_java_lang_String_int_java_lang_String_R_java_lang_String, "(Ljava/lang/String;ILjava/lang/String;)Ljava/lang/String;", 0 },
	{ "readNumber", (intptr_t) M_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_readNumber_java_lang_String_int_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;", 0 },
	{ "parseYear", (intptr_t) M_java_text_SimpleDateFormat_parseYear_java_lang_String_java_lang_String_int_R_int, VTABLE_java_text_SimpleDateFormat_parseYear_java_lang_String_java_lang_String_int_R_int, "(Ljava/lang/String;Ljava/lang/String;I)I", 0 },
	{ "readDayOfWeek", (intptr_t) M_java_text_SimpleDateFormat_readDayOfWeek_java_lang_String_int_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_readDayOfWeek_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 0 },
	{ "readAmPmMarker", (intptr_t) M_java_text_SimpleDateFormat_readAmPmMarker_java_lang_String_int_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_readAmPmMarker_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 0 },
	{ "parseAmPmMarker", (intptr_t) M_java_text_SimpleDateFormat_parseAmPmMarker_java_lang_String_int_R_int, VTABLE_java_text_SimpleDateFormat_parseAmPmMarker_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 0 },
	{ "readMonth", (intptr_t) M_java_text_SimpleDateFormat_readMonth_java_lang_String_int_java_lang_String_boolean_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_readMonth_java_lang_String_int_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;ILjava/lang/String;Z)Ljava/lang/String;", 0 },
	{ "parseMonth", (intptr_t) M_java_text_SimpleDateFormat_parseMonth_java_lang_String_int_R_int, VTABLE_java_text_SimpleDateFormat_parseMonth_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 0 },
	{ "readTimeZone", (intptr_t) M_java_text_SimpleDateFormat_readTimeZone_java_lang_String_int_R_java_lang_String, VTABLE_java_text_SimpleDateFormat_readTimeZone_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 0 },
	{ "parseTimeZone", (intptr_t) M_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int, VTABLE_java_text_SimpleDateFormat_parseTimeZone_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 0 },
	{ "findEndText", (intptr_t) M_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int, VTABLE_java_text_SimpleDateFormat_findEndText_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 0 },
	{ "isAlpha", (intptr_t) M_java_text_SimpleDateFormat_isAlpha_char_R_boolean, VTABLE_java_text_SimpleDateFormat_isAlpha_char_R_boolean, "(C)Z", 0 },
	{ "isNumeric", (intptr_t) M_java_text_SimpleDateFormat_isNumeric_char_R_boolean, VTABLE_java_text_SimpleDateFormat_isNumeric_char_R_boolean, "(C)Z", 0 },
	{ "parseDatePattern", (intptr_t) M_java_text_SimpleDateFormat_parseDatePattern_java_lang_String_R_java_util_List, VTABLE_java_text_SimpleDateFormat_parseDatePattern_java_lang_String_R_java_util_List, "(Ljava/lang/String;)Ljava/util/List;", 0 },
};

Class class_java_text_SimpleDateFormat{
		.nativeName = (intptr_t) "java/text/SimpleDateFormat",
		.parentClass = (intptr_t) &class_java_text_DateFormat,
		.size = sizeof(java_text_SimpleDateFormat),
		.classVtable = (intptr_t) vtable_java_text_SimpleDateFormat,
		.staticInitializer = (intptr_t) clinit_java_text_SimpleDateFormat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_SimpleDateFormat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_SimpleDateFormat = registerClass(&class_java_text_SimpleDateFormat);

}
