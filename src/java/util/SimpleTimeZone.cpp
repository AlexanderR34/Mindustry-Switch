#include "java/util/SimpleTimeZone.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/GregorianCalendar.h"
#include "java/util/TimeZone.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/util/SimpleTimeZone.h"
#include "java/util/Date.h"

extern "C" {

jint SF_java_util_SimpleTimeZone_DOM_MODE;
jint SF_java_util_SimpleTimeZone_DOW_IN_MONTH_MODE;
jint SF_java_util_SimpleTimeZone_DOW_GE_DOM_MODE;
jint SF_java_util_SimpleTimeZone_DOW_LE_DOM_MODE;
jint SF_java_util_SimpleTimeZone_UTC_TIME;
jint SF_java_util_SimpleTimeZone_STANDARD_TIME;
jint SF_java_util_SimpleTimeZone_WALL_TIME;
jint SF_java_util_SimpleTimeZone_MILLIS_PER_SECOND;
jint SF_java_util_SimpleTimeZone_MILLIS_PER_MINUTE;
jint SF_java_util_SimpleTimeZone_MILLIS_PER_HOUR;
jint SF_java_util_SimpleTimeZone_JULIAN_1_CE;
jint SF_java_util_SimpleTimeZone_JULIAN_1970_CE;
jobject SF_java_util_SimpleTimeZone_MONTH_LENGTH;
jobject SF_java_util_SimpleTimeZone_DAYS_BEFORE;

void mark_java_util_SimpleTimeZone(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_SimpleTimeZone_MONTH_LENGTH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_SimpleTimeZone_MONTH_LENGTH)->clazz)->markFunction)((jobject) SF_java_util_SimpleTimeZone_MONTH_LENGTH, mark, depth + 1);
		if (SF_java_util_SimpleTimeZone_DAYS_BEFORE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_SimpleTimeZone_DAYS_BEFORE)->clazz)->markFunction)((jobject) SF_java_util_SimpleTimeZone_DAYS_BEFORE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TimeZone(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_SimpleTimeZone *) object;
}

jint SM_java_util_SimpleTimeZone_monthLength_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:monthLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(114);
	clinit_java_util_SimpleTimeZone(ctx);
	sp[0].o = (jobject)SF_java_util_SimpleTimeZone_MONTH_LENGTH;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(ctx, (frame[0].i));
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_1;
	}
	INST_BIPUSH(12);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (sp[1].i + sp[2].i)));
	}

	popStackFrame(ctx);
}

void init_java_util_SimpleTimeZone_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	init_java_util_TimeZone(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings = (jint(3600000));
	LINE_NUMBER(137);
	((func_java_util_SimpleTimeZone_setID_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_setID_java_lang_String])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(138);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset = (frame[1].i);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:<init>", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(223);
	init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i), (jint(3600000)));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].i = param10;
	{
	LINE_NUMBER(286);
	init_java_util_SimpleTimeZone_int_java_lang_String(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(288);
	if ((frame[11].i) > 0) goto label_2;
	}
	{
	LINE_NUMBER(289);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid daylightSavings: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[11].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(291);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings = (frame[11].i);
	LINE_NUMBER(293);
	((func_java_util_SimpleTimeZone_setStartRule_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int_int])(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(294);
	((func_java_util_SimpleTimeZone_setEndRule_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int_int])(ctx, (frame[0].o), (frame[7].i), (frame[8].i), (frame[9].i), (frame[10].i));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11, jint param12) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:<init>", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].i = param9;
	frame[11].i = param10;
	frame[12].i = param11;
	frame[13].i = param12;
	{
	LINE_NUMBER(352);
	init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].i), (frame[13].i));
	LINE_NUMBER(354);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode = (frame[7].i);
	LINE_NUMBER(355);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode = (frame[12].i);
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_SimpleTimeZone)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(374);
	frame[2].o = (checkCast(ctx, &class_java_util_SimpleTimeZone, (frame[1].o)));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_java_util_SimpleTimeZone_getID_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_getID_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_SimpleTimeZone_getID_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_SimpleTimeZone_getID_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_rawOffset)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_useDaylight)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) == 0) goto label_5;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startYear) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startYear)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startMonth)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startDay)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startMode)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startDayOfWeek)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startTime)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endMonth)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endDay)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endDayOfWeek)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endTime)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endMode)) goto label_4;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_dstSavings)) goto label_4;
	}
label_5:;
	INST_ICONST(1);
	goto label_6;
label_4:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_SimpleTimeZone_getDSTSavings_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:getDSTSavings", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) != 0) goto label_1;
	}
	{
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings);
	}

	popStackFrame(ctx);
}

jint M_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:getOffset", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(398);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if ((frame[1].i) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(399);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid era: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(401);
	M_java_util_SimpleTimeZone_checkRange_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[5].i), (frame[6].i));
	LINE_NUMBER(402);
	if ((frame[3].i) != (jint(1))) goto label_4;
	}
	{
	if ((frame[4].i) != (29)) goto label_4;
	}
	{
	jint temp0 = (jint)SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(ctx, (frame[2].i));
	if (temp0 != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(403);
	M_java_util_SimpleTimeZone_checkDay_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_java_util_SimpleTimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_useDaylightTime_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	if ((frame[1].i) != (jint(1))) goto label_6;
	}
	{
	if ((frame[2].i) >= ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startYear)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_7:;
	{
	LINE_NUMBER(411);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth) >= ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth)) goto label_8;
	}
	{
	LINE_NUMBER(412);
	if ((frame[3].i) <= ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth)) goto label_10;
	}
	{
	if ((frame[3].i) >= ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth)) goto label_10;
	}
	{
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_8:;
	{
	LINE_NUMBER(416);
	if ((frame[3].i) < ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth)) goto label_12;
	}
	{
	if ((frame[3].i) <= ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth)) goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_10:;
	{
	LINE_NUMBER(421);
	frame[7].i = (jint(0));
	jint temp0 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, (frame[0].o), ((frame[5].i) - (frame[4].i)));
	frame[9].i = temp0;
	LINE_NUMBER(422);
	if ((frame[3].i) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth)) goto label_15;
	}
	{
	LINE_NUMBER(423);
	switch(((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode)) {
		case 1: goto label_17;
		case 2: goto label_18;
		case 3: goto label_19;
		case 4: goto label_20;
		default: goto label_21;
	}
	}
label_17:;
	{
	LINE_NUMBER(425);
	frame[7].i = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay);
	LINE_NUMBER(426);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(428);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) < 0) goto label_23;
	}
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, (frame[0].o), (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) - (frame[9].i)));
	frame[7].i = ((temp0 + (jint(1))) + ((((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) - (jint(1))) * (7)));
	goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(432);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInMonth;
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth)));
	LINE_NUMBER(433);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth) != (jint(1))) goto label_26;
	}
	{
	jint temp0 = (jint)SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_26;
	}
	LINE_NUMBER(435);
	INST_IINC(8, 1);
label_26:;
	{
	LINE_NUMBER(437);
	jint temp0 = (frame[8].i) + (jint(1));
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) - ((frame[9].i) + (frame[8].i));
	LINE_NUMBER(439);
	jint temp2 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, sp[0].o, temp1);
	frame[7].i = ((temp0 + temp2) + (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) * (7)));
	LINE_NUMBER(443);
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(445);
	jint temp0 = (jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay;
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) - (((frame[9].i) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay)) - (jint(1)));
	LINE_NUMBER(446);
	jint temp2 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, sp[0].o, temp1);
	frame[7].i = (temp0 + temp2);
	LINE_NUMBER(448);
	goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(450);
	jint temp0 = (jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay;
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) - (((frame[9].i) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay)) - (jint(1)));
	LINE_NUMBER(451);
	jint temp2 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, sp[0].o, temp1);
	frame[7].i = (temp0 + temp2);
	LINE_NUMBER(453);
	if ((frame[7].i) == ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay)) goto label_21;
	}
	LINE_NUMBER(454);
	INST_IINC(7, -7);
label_21:;
	{
	LINE_NUMBER(458);
	if ((frame[7].i) > (frame[4].i)) goto label_35;
	}
	{
	if ((frame[7].i) != (frame[4].i)) goto label_15;
	}
	{
	if ((frame[6].i) >= ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime)) goto label_15;
	}
label_35:;
	{
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_15:;
	{
	LINE_NUMBER(463);
	frame[10].i = (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime) - ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings));
	LINE_NUMBER(464);
	frame[11].i = (((frame[3].i) + (jint(1))) % (12));
	LINE_NUMBER(465);
	if ((frame[3].i) == ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth)) goto label_38;
	}
	INST_ILOAD(10);
	if ((--sp)->i >= 0) goto label_39;
	{
	if ((frame[11].i) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth)) goto label_39;
	}
label_38:;
	{
	LINE_NUMBER(466);
	switch(((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode)) {
		case 1: goto label_40;
		case 2: goto label_41;
		case 3: goto label_42;
		case 4: goto label_43;
		default: goto label_44;
	}
	}
label_40:;
	{
	LINE_NUMBER(468);
	frame[7].i = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay);
	LINE_NUMBER(469);
	goto label_44;
	}
label_41:;
	{
	LINE_NUMBER(471);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) < 0) goto label_46;
	}
	{
	LINE_NUMBER(472);
	jint temp0 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, (frame[0].o), (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) - (frame[9].i)));
	frame[7].i = ((temp0 + (jint(1))) + ((((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) - (jint(1))) * (7)));
	goto label_44;
	}
label_46:;
	{
	LINE_NUMBER(475);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInMonth;
	frame[8].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth)));
	LINE_NUMBER(476);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth) != (jint(1))) goto label_49;
	}
	{
	jint temp0 = (jint)SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_49;
	}
	LINE_NUMBER(477);
	INST_IINC(8, 1);
label_49:;
	{
	LINE_NUMBER(479);
	jint temp0 = (frame[8].i) + (jint(1));
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) - ((frame[9].i) + (frame[8].i));
	LINE_NUMBER(481);
	jint temp2 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, sp[0].o, temp1);
	frame[7].i = ((temp0 + temp2) + (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) * (7)));
	LINE_NUMBER(485);
	goto label_44;
	}
label_42:;
	{
	LINE_NUMBER(487);
	jint temp0 = (jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay;
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) - (((frame[9].i) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay)) - (jint(1)));
	LINE_NUMBER(488);
	jint temp2 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, sp[0].o, temp1);
	frame[7].i = (temp0 + temp2);
	LINE_NUMBER(490);
	goto label_44;
	}
label_43:;
	{
	LINE_NUMBER(492);
	jint temp0 = (jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay;
	sp[0].o = frame[0].o;
	jint temp1 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) - (((frame[9].i) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay)) - (jint(1)));
	LINE_NUMBER(493);
	jint temp2 = (jint)M_java_util_SimpleTimeZone_mod7_int_R_int(ctx, sp[0].o, temp1);
	frame[7].i = (temp0 + temp2);
	LINE_NUMBER(495);
	if ((frame[7].i) == ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay)) goto label_44;
	}
	LINE_NUMBER(496);
	INST_IINC(7, -7);
label_44:;
	{
	LINE_NUMBER(501);
	frame[12].i = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth);
	LINE_NUMBER(502);
	if ((frame[10].i) >= 0) goto label_59;
	}
	{
	LINE_NUMBER(503);
	frame[13].i = ((jint(1)) - ((frame[10].i) / (jint(86400000))));
	LINE_NUMBER(504);
	frame[10].i = (((frame[10].i) % (jint(86400000))) + (jint(86400000)));
	LINE_NUMBER(505);
	frame[7].i = ((frame[7].i) - (frame[13].i));
	LINE_NUMBER(506);
	if ((frame[7].i) > 0) goto label_59;
	}
	{
	LINE_NUMBER(507);
	INST_IINC(12, -1);
	if ((frame[12].i) >= 0) goto label_65;
	}
	{
	LINE_NUMBER(508);
	frame[12].i = (11);
	}
label_65:;
	{
	LINE_NUMBER(510);
	jint temp0 = frame[7].i;
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInMonth;
	frame[7].i = (temp0 + ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[12].i))));
	LINE_NUMBER(511);
	if ((frame[12].i) != (jint(1))) goto label_59;
	}
	{
	jint temp0 = (jint)SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_59;
	}
	LINE_NUMBER(512);
	INST_IINC(7, 1);
label_59:;
	{
	LINE_NUMBER(517);
	if ((frame[3].i) != (frame[12].i)) goto label_69;
	}
	{
	LINE_NUMBER(518);
	if ((frame[7].i) < (frame[4].i)) goto label_71;
	}
	{
	if ((frame[7].i) != (frame[4].i)) goto label_39;
	}
	{
	if ((frame[6].i) < (frame[10].i)) goto label_39;
	}
label_71:;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_69:;
	{
	LINE_NUMBER(521);
	if ((frame[11].i) == (frame[12].i)) goto label_39;
	}
	{
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_39:;
	{
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings));
	}

	popStackFrame(ctx);
}

jint M_java_util_SimpleTimeZone_getOffset_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:getOffset", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(531);
	jint temp0 = (jint)((func_java_util_SimpleTimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_useDaylightTime_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}
label_1:;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)SM_java_util_SimpleTimeZone_timeToFields_long_Array1_int_R_Array1_int(ctx, ((frame[1].l) + (jlong(((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset)))), (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(535);
	jint temp0 = (jint)((func_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int])(ctx, (frame[0].o), (jint(1)), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(1)))), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(2)))), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(3)))), ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(5)))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_SimpleTimeZone_timeToFields_long_Array1_int_R_Array1_int(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:timeToFields", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(541);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) >= (6)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(542);
	sp[0].o = (jobject) createArray(ctx, &class_int, (6));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(545);
	jlong temp0 = (jlong)SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(ctx, (frame[0].l), (jlong(86400000ll)), (frame[3].o));
	frame[4].l = temp0;
	LINE_NUMBER(546);
	sp[0].o = (jobject)SM_java_util_SimpleTimeZone_dayToFields_long_Array1_int_R_Array1_int(ctx, (frame[4].l), (frame[2].o));
	LINE_NUMBER(547);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(5))) = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0))))));
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jlong SM_java_util_SimpleTimeZone_floorDivide_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:floorDivide", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(554);
	if ((longCompare((frame[0].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(555);
	jlong temp0 = (frame[0].l) / (frame[2].l);
	sp[0].l = temp0;
	sp += 1;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(556);
	jlong temp0 = (((frame[0].l) + (jlong(1))) / (frame[2].l)) - (jlong(1));
	sp[0].l = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(554);
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(jcontext ctx, jlong param0, jlong param1, jobject param2) {
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:floorDivide", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(560);
	if ((longCompare((frame[0].l), (jlong(0)))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(561);
	ARRAY_ACCESS(jlong, (frame[4].o), (jint(0))) = ((frame[0].l) % (frame[2].l));
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return ((frame[0].l) / (frame[2].l));
	}
label_1:;
	{
	LINE_NUMBER(564);
	frame[5].l = ((((frame[0].l) + (jlong(1))) / (frame[2].l)) - (jlong(1)));
	LINE_NUMBER(565);
	ARRAY_ACCESS(jlong, (frame[4].o), (jint(0))) = ((frame[0].l) - ((frame[5].l) * (frame[2].l)));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return (frame[5].l);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_SimpleTimeZone_dayToFields_long_Array1_int_R_Array1_int(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[26];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:dayToFields", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(570);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) >= (jint(5))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(574);
	frame[0].l = ((frame[0].l) + (jlong(719162ll)));
	LINE_NUMBER(576);
	sp[0].o = (jobject) createArray(ctx, &class_long, (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(577);
	jlong temp0 = (jlong)SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(ctx, (frame[0].l), (jlong(146097ll)), (frame[3].o));
	frame[4].l = temp0;
	LINE_NUMBER(578);
	jlong temp1 = (jlong)SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(ctx, ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0)))), (jlong(36524ll)), (frame[3].o));
	frame[6].l = temp1;
	LINE_NUMBER(579);
	jlong temp2 = (jlong)SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(ctx, ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0)))), (jlong(1461ll)), (frame[3].o));
	frame[8].l = temp2;
	LINE_NUMBER(580);
	jlong temp3 = (jlong)SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long(ctx, ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0)))), (jlong(365ll)), (frame[3].o));
	frame[10].l = temp3;
	LINE_NUMBER(582);
	frame[12].i = (jint((((((jlong(400ll)) * (frame[4].l)) + ((jlong(100ll)) * (frame[6].l))) + ((jlong(4ll)) * (frame[8].l))) + (frame[10].l))));
	LINE_NUMBER(583);
	frame[13].i = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (jint(0))))));
	LINE_NUMBER(584);
	if ((longCompare((frame[6].l), (jlong(4ll)))) == 0) goto label_11;
	}
	{
	if ((longCompare((frame[10].l), (jlong(4ll)))) != 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(585);
	frame[13].i = (365);
	goto label_13;
	}
label_12:;
	LINE_NUMBER(588);
	INST_IINC(12, 1);
label_13:;
	{
	LINE_NUMBER(591);
	jint temp0 = (jint)SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(ctx, (frame[12].i));
	frame[14].i = temp0;
	LINE_NUMBER(592);
	frame[15].i = (jint(0));
	LINE_NUMBER(593);
	if ((frame[14].i) == 0) goto label_16;
	}
	INST_BIPUSH(60);
	goto label_17;
label_16:;
	INST_BIPUSH(59);
label_17:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(594);
	if ((frame[13].i) < (frame[16].i)) goto label_19;
	}
	{
	LINE_NUMBER(595);
	if ((frame[14].i) == 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(2);
label_22:;
	INST_ISTORE(15);
label_19:;
	{
	LINE_NUMBER(597);
	frame[17].i = ((((12) * ((frame[13].i) + (frame[15].i))) + (6)) / (367));
	LINE_NUMBER(598);
	jint temp0 = frame[13].i;
	clinit_java_util_SimpleTimeZone(ctx);
	sp[0].o = (jobject)SF_java_util_SimpleTimeZone_DAYS_BEFORE;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp[1].o = temp1;
	sp += 2;
	if ((frame[14].i) == 0) goto label_24;
	}
	{
	jint temp0 = (frame[17].i) + (12);
	sp[0].i = temp0;
	sp += 1;
	goto label_25;
	}
label_24:;
	INST_ILOAD(17);
label_25:;
	{
	sp -= 3;
	frame[18].i = ((sp[0].i - ((jint)ARRAY_ACCESS(jint, sp[1].o, sp[2].i))) + (jint(1)));
	LINE_NUMBER(599);
	frame[19].i = (jint((((frame[0].l) + (jlong(2ll))) % (jlong(7ll)))));
	LINE_NUMBER(600);
	if ((frame[19].i) >= (jint(1))) goto label_28;
	}
	LINE_NUMBER(601);
	INST_IINC(19, 7);
label_28:;
	{
	LINE_NUMBER(603);
	INST_IINC(13, 1);
	LINE_NUMBER(605);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (frame[12].i);
	LINE_NUMBER(606);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(1))) = (frame[17].i);
	LINE_NUMBER(607);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(2))) = (frame[18].i);
	LINE_NUMBER(608);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(3))) = (frame[19].i);
	LINE_NUMBER(609);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(4))) = (frame[13].i);
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_java_util_SimpleTimeZone_getRawOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:getRawOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset);
	}

	popStackFrame(ctx);
}

jint M_java_util_SimpleTimeZone_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_java_util_SimpleTimeZone_getID_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_getID_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset));
	LINE_NUMBER(629);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) == 0) goto label_2;
	}
	{
	LINE_NUMBER(630);
	frame[1].i = ((frame[1].i) + (((((((((((((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startYear) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode)) + ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings)));
	}
label_2:;
	{
	LINE_NUMBER(634);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:hasSameRules", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_SimpleTimeZone)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(641);
	frame[2].o = (checkCast(ctx, &class_java_util_SimpleTimeZone, (frame[1].o)));
	LINE_NUMBER(642);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) == ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_useDaylight)) goto label_4;
	}
	{
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(645);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) != 0) goto label_6;
	}
	{
	LINE_NUMBER(646);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_rawOffset)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(648);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_rawOffset)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_dstSavings)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startYear) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startYear)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startMonth)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startDay)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startMode)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startDayOfWeek)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_startTime)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endMonth)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endDay)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endDayOfWeek)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endTime)) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode) != ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[2].o)))->F_endMode)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:inDaylightTime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(660);
	jint temp0 = (jint)((func_java_util_SimpleTimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_SimpleTimeZone_useDaylightTime_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_util_SimpleTimeZone_getOffset_long_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_SimpleTimeZone_getOffset_long_R_int])(ctx, sp[0].o, temp0);
	if (temp1 == ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset)) goto label_1;
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

jbool SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:isLeapYear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(665);
	if ((frame[0].i) <= (1582)) goto label_1;
	}
	{
	LINE_NUMBER(666);
	if (((frame[0].i) % (jint(4))) != 0) goto label_3;
	}
	{
	if (((frame[0].i) % (100)) != 0) goto label_4;
	}
	{
	if (((frame[0].i) % (400)) != 0) goto label_3;
	}
label_4:;
	INST_ICONST(1);
	goto label_5;
label_3:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(668);
	if (((frame[0].i) % (jint(4))) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_SimpleTimeZone_mod7_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:mod7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(673);
	frame[2].i = ((frame[1].i) % (7));
	LINE_NUMBER(674);
	if ((frame[1].i) >= 0) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i >= 0) goto label_2;
	{
	jint temp0 = (7) + (frame[2].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ILOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setDSTSavings_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setDSTSavings", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(685);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(686);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings = (frame[1].i);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(688);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_checkRange_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:checkRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(693);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) <= (11)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(694);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid month: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(696);
	if ((frame[2].i) < (jint(1))) goto label_3;
	}
	{
	if ((frame[2].i) <= (7)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(697);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid day of week: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(699);
	if ((frame[3].i) < 0) goto label_5;
	}
	{
	if ((frame[3].i) < (jint(86400000))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(700);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid time: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(702);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_checkDay_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:checkDay", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(705);
	if ((frame[2].i) <= 0) goto label_1;
	}
	{
	jint temp0 = frame[2].i;
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInMonth;
	if (temp0 <= ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)))) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(706);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid day of month: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(708);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setEndMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setEndMode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(711);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) != 0) goto label_1;
	}
	{
	LINE_NUMBER(712);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode = (jint(1));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(713);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(714);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek = (-((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek));
	LINE_NUMBER(715);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(716);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay = (-((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay));
	LINE_NUMBER(717);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode = (jint(4));
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(719);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode = (jint(3));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(722);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(724);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) == 0) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_useDaylight = sp[1].i;
	LINE_NUMBER(725);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) == 0) goto label_13;
	}
	{
	LINE_NUMBER(726);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode) != (jint(1))) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_SimpleTimeZone *) NULL_CHECK(sp[-1].o))->F_endDayOfWeek;
label_16:;
	{
	sp -= 3;
	M_java_util_SimpleTimeZone_checkRange_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime));
	LINE_NUMBER(728);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode) == (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(729);
	M_java_util_SimpleTimeZone_checkDay_int_int(ctx, (frame[0].o), ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth), ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay));
	goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(731);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) < (-5)) goto label_20;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) <= (jint(5))) goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(732);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Day of week in month: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(736);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode) == (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_endDayOfWeek = (((jint)((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_endDayOfWeek) - (jint(1)));
	}
label_21:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setEndRule_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setEndRule", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(754);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth = (frame[1].i);
	LINE_NUMBER(755);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay = (frame[2].i);
	LINE_NUMBER(756);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek = (jint(0));
	LINE_NUMBER(757);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime = (frame[3].i);
	LINE_NUMBER(758);
	M_java_util_SimpleTimeZone_setEndMode(ctx, (frame[0].o));
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setEndRule_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setEndRule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(783);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth = (frame[1].i);
	LINE_NUMBER(784);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay = (frame[2].i);
	LINE_NUMBER(785);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek = (frame[3].i);
	LINE_NUMBER(786);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime = (frame[4].i);
	LINE_NUMBER(787);
	M_java_util_SimpleTimeZone_setEndMode(ctx, (frame[0].o));
	LINE_NUMBER(794);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setEndRule", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(814);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth = (frame[1].i);
	LINE_NUMBER(815);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	goto label_3;
label_2:;
	INST_ILOAD(2);
	INST_INEG();
label_3:;
	{
	sp -= 2;
	((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_endDay = sp[1].i;
	LINE_NUMBER(816);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek = (-(frame[3].i));
	LINE_NUMBER(817);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime = (frame[4].i);
	LINE_NUMBER(818);
	M_java_util_SimpleTimeZone_setEndMode(ctx, (frame[0].o));
	LINE_NUMBER(825);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setRawOffset_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setRawOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(834);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset = (frame[1].i);
	LINE_NUMBER(838);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setStartMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setStartMode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(841);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) != 0) goto label_1;
	}
	{
	LINE_NUMBER(842);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode = (jint(1));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(843);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(844);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek = (-((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek));
	LINE_NUMBER(845);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(846);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay = (-((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay));
	LINE_NUMBER(847);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode = (jint(4));
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(849);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode = (jint(3));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(852);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(854);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) == 0) goto label_10;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay) == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_useDaylight = sp[1].i;
	LINE_NUMBER(855);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) == 0) goto label_13;
	}
	{
	LINE_NUMBER(856);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode) != (jint(1))) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ALOAD(0);
	sp[-1].i = ((java_util_SimpleTimeZone *) NULL_CHECK(sp[-1].o))->F_startDayOfWeek;
label_16:;
	{
	sp -= 3;
	M_java_util_SimpleTimeZone_checkRange_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime));
	LINE_NUMBER(858);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode) == (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(859);
	M_java_util_SimpleTimeZone_checkDay_int_int(ctx, (frame[0].o), ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth), ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay));
	goto label_13;
	}
label_18:;
	{
	LINE_NUMBER(861);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) < (-5)) goto label_20;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay) <= (jint(5))) goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(862);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Day of week in month: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(866);
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode) == (jint(1))) goto label_21;
	}
	{
	LINE_NUMBER(867);
	sp[0].o = frame[0].o;
	((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_startDayOfWeek = (((jint)((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_startDayOfWeek) - (jint(1)));
	}
label_21:;
	LINE_NUMBER(869);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setStartRule_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setStartRule", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(884);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth = (frame[1].i);
	LINE_NUMBER(885);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay = (frame[2].i);
	LINE_NUMBER(886);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek = (jint(0));
	LINE_NUMBER(887);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime = (frame[3].i);
	LINE_NUMBER(888);
	M_java_util_SimpleTimeZone_setStartMode(ctx, (frame[0].o));
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setStartRule_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setStartRule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(913);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth = (frame[1].i);
	LINE_NUMBER(914);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay = (frame[2].i);
	LINE_NUMBER(915);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek = (frame[3].i);
	LINE_NUMBER(916);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime = (frame[4].i);
	LINE_NUMBER(917);
	M_java_util_SimpleTimeZone_setStartMode(ctx, (frame[0].o));
	LINE_NUMBER(924);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setStartRule", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(944);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth = (frame[1].i);
	LINE_NUMBER(945);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	goto label_3;
label_2:;
	INST_ILOAD(2);
	INST_INEG();
label_3:;
	{
	sp -= 2;
	((java_util_SimpleTimeZone *) NULL_CHECK(sp[0].o))->F_startDay = sp[1].i;
	LINE_NUMBER(946);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek = (-(frame[3].i));
	LINE_NUMBER(947);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime = (frame[4].i);
	LINE_NUMBER(948);
	M_java_util_SimpleTimeZone_setStartMode(ctx, (frame[0].o));
	LINE_NUMBER(955);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_SimpleTimeZone_setStartYear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:setStartYear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(965);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startYear = (frame[1].i);
	LINE_NUMBER(966);
	((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight = (jint(1));
	LINE_NUMBER(967);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_SimpleTimeZone_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(976);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[id="_j))));
	sp[1].o = frame[0].o;
	LINE_NUMBER(978);
	sp[1].o = (jobject)((func_java_util_SimpleTimeZone_getID_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_SimpleTimeZone_getID_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",offset="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_rawOffset));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",dstSavings="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_dstSavings));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",useDaylight="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",startYear="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startYear));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",startMode="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",startMonth="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMonth));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",startDay="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDay));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",startDayOfWeek="_j))));
	LINE_NUMBER(994);
	sp += 1;
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) == 0) goto label_3;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startMode) == (jint(1))) goto label_3;
	}
	{
	jint temp0 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startDayOfWeek) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	LINE_NUMBER(995);
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",startTime="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_startTime));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",endMode="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",endMonth="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMonth));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",endDay="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDay));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",endDayOfWeek="_j))));
	LINE_NUMBER(998);
	sp += 1;
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight) == 0) goto label_6;
	}
	{
	if (((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endMode) == (jint(1))) goto label_6;
	}
	{
	jint temp0 = ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endDayOfWeek) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8",endTime="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_endTime));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(976);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_SimpleTimeZone_useDaylightTime_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:useDaylightTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1004);
	popStackFrame(ctx);
	return ((jint)((java_util_SimpleTimeZone *) NULL_CHECK((frame[0].o)))->F_useDaylight);
	}

	popStackFrame(ctx);
}

void clinit_java_util_SimpleTimeZone(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TimeZone(ctx);
	SF_java_util_SimpleTimeZone_DOM_MODE = jint(1);
	SF_java_util_SimpleTimeZone_DOW_IN_MONTH_MODE = jint(2);
	SF_java_util_SimpleTimeZone_DOW_GE_DOM_MODE = jint(3);
	SF_java_util_SimpleTimeZone_DOW_LE_DOM_MODE = jint(4);
	SF_java_util_SimpleTimeZone_UTC_TIME = jint(2);
	SF_java_util_SimpleTimeZone_STANDARD_TIME = jint(1);
	SF_java_util_SimpleTimeZone_WALL_TIME = jint(0);
	SF_java_util_SimpleTimeZone_MILLIS_PER_SECOND = jint(1000);
	SF_java_util_SimpleTimeZone_MILLIS_PER_MINUTE = jint(60000);
	SF_java_util_SimpleTimeZone_MILLIS_PER_HOUR = jint(3600000);
	SF_java_util_SimpleTimeZone_JULIAN_1_CE = jint(1721426);
	SF_java_util_SimpleTimeZone_JULIAN_1970_CE = jint(2440588);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/SimpleTimeZone:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_SimpleTimeZone(ctx);
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject) createArray(ctx, &class_int, (24));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (29);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (30);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (31);
	clinit_java_util_SimpleTimeZone(ctx);
	SF_java_util_SimpleTimeZone_MONTH_LENGTH = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = (jobject) createArray(ctx, &class_int, (24));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (59);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (90);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (120);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (151);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (181);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (212);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (243);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (273);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (304);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (334);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (60);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (91);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (121);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (152);
	ARRAY_ACCESS(jint, sp[0].o, (18)) = (182);
	ARRAY_ACCESS(jint, sp[0].o, (19)) = (213);
	ARRAY_ACCESS(jint, sp[0].o, (20)) = (244);
	ARRAY_ACCESS(jint, sp[0].o, (21)) = (274);
	ARRAY_ACCESS(jint, sp[0].o, (22)) = (305);
	ARRAY_ACCESS(jint, sp[0].o, (23)) = (335);
	clinit_java_util_SimpleTimeZone(ctx);
	SF_java_util_SimpleTimeZone_DAYS_BEFORE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_SimpleTimeZone[] {
	(void *) M_java_util_SimpleTimeZone_hashCode_R_int,
	(void *) M_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_SimpleTimeZone_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_TimeZone_setID_java_lang_String,
	(void *) M_java_util_SimpleTimeZone_getDSTSavings_R_int,
	(void *) M_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean,
	(void *) M_java_util_TimeZone_getID_R_java_lang_String,
	(void *) M_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int,
	(void *) M_java_util_SimpleTimeZone_getRawOffset_R_int,
	(void *) M_java_util_SimpleTimeZone_useDaylightTime_R_boolean,
	(void *) M_java_util_SimpleTimeZone_getOffset_long_R_int,
	(void *) M_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean,
	(void *) M_java_util_SimpleTimeZone_mod7_int_R_int,
	(void *) M_java_util_SimpleTimeZone_setDSTSavings_int,
	(void *) M_java_util_SimpleTimeZone_checkRange_int_int_int,
	(void *) M_java_util_SimpleTimeZone_checkDay_int_int,
	(void *) M_java_util_SimpleTimeZone_setEndMode,
	(void *) M_java_util_SimpleTimeZone_setEndRule_int_int_int,
	(void *) M_java_util_SimpleTimeZone_setEndRule_int_int_int_int,
	(void *) M_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean,
	(void *) M_java_util_SimpleTimeZone_setRawOffset_int,
	(void *) M_java_util_SimpleTimeZone_setStartMode,
	(void *) M_java_util_SimpleTimeZone_setStartRule_int_int_int,
	(void *) M_java_util_SimpleTimeZone_setStartRule_int_int_int_int,
	(void *) M_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean,
	(void *) M_java_util_SimpleTimeZone_setStartYear_int,
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
	{ "setID", "(Ljava/lang/String;)V" },
	{ "getDSTSavings", "()I" },
	{ "inDaylightTime", "(Ljava/util/Date;)Z" },
	{ "getID", "()Ljava/lang/String;" },
	{ "getOffset", "(IIIIII)I" },
	{ "getRawOffset", "()I" },
	{ "useDaylightTime", "()Z" },
	{ "getOffset", "(J)I" },
	{ "hasSameRules", "(Ljava/util/TimeZone;)Z" },
	{ "mod7", "(I)I" },
	{ "setDSTSavings", "(I)V" },
	{ "checkRange", "(III)V" },
	{ "checkDay", "(II)V" },
	{ "setEndMode", "()V" },
	{ "setEndRule", "(III)V" },
	{ "setEndRule", "(IIII)V" },
	{ "setEndRule", "(IIIIZ)V" },
	{ "setRawOffset", "(I)V" },
	{ "setStartMode", "()V" },
	{ "setStartRule", "(III)V" },
	{ "setStartRule", "(IIII)V" },
	{ "setStartRule", "(IIIIZ)V" },
	{ "setStartYear", "(I)V" },
};

static FieldMetadata fields[] {
	{ "rawOffset", &class_int, offsetof(java_util_SimpleTimeZone, F_rawOffset), "I", 2 },
	{ "startYear", &class_int, offsetof(java_util_SimpleTimeZone, F_startYear), "I", 2 },
	{ "startMonth", &class_int, offsetof(java_util_SimpleTimeZone, F_startMonth), "I", 2 },
	{ "startDay", &class_int, offsetof(java_util_SimpleTimeZone, F_startDay), "I", 2 },
	{ "startDayOfWeek", &class_int, offsetof(java_util_SimpleTimeZone, F_startDayOfWeek), "I", 2 },
	{ "startTime", &class_int, offsetof(java_util_SimpleTimeZone, F_startTime), "I", 2 },
	{ "endMonth", &class_int, offsetof(java_util_SimpleTimeZone, F_endMonth), "I", 2 },
	{ "endDay", &class_int, offsetof(java_util_SimpleTimeZone, F_endDay), "I", 2 },
	{ "endDayOfWeek", &class_int, offsetof(java_util_SimpleTimeZone, F_endDayOfWeek), "I", 2 },
	{ "endTime", &class_int, offsetof(java_util_SimpleTimeZone, F_endTime), "I", 2 },
	{ "startMode", &class_int, offsetof(java_util_SimpleTimeZone, F_startMode), "I", 2 },
	{ "endMode", &class_int, offsetof(java_util_SimpleTimeZone, F_endMode), "I", 2 },
	{ "DOM_MODE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_DOM_MODE, "I", 26 },
	{ "DOW_IN_MONTH_MODE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_DOW_IN_MONTH_MODE, "I", 26 },
	{ "DOW_GE_DOM_MODE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_DOW_GE_DOM_MODE, "I", 26 },
	{ "DOW_LE_DOM_MODE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_DOW_LE_DOM_MODE, "I", 26 },
	{ "UTC_TIME", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_UTC_TIME, "I", 25 },
	{ "STANDARD_TIME", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_STANDARD_TIME, "I", 25 },
	{ "WALL_TIME", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_WALL_TIME, "I", 25 },
	{ "useDaylight", &class_boolean, offsetof(java_util_SimpleTimeZone, F_useDaylight), "Z", 2 },
	{ "dstSavings", &class_int, offsetof(java_util_SimpleTimeZone, F_dstSavings), "I", 2 },
	{ "MILLIS_PER_SECOND", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_MILLIS_PER_SECOND, "I", 26 },
	{ "MILLIS_PER_MINUTE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_MILLIS_PER_MINUTE, "I", 26 },
	{ "MILLIS_PER_HOUR", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_MILLIS_PER_HOUR, "I", 26 },
	{ "JULIAN_1_CE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_JULIAN_1_CE, "I", 26 },
	{ "JULIAN_1970_CE", &class_int, (intptr_t) &SF_java_util_SimpleTimeZone_JULIAN_1970_CE, "I", 26 },
	{ "MONTH_LENGTH", getArrayClass(&class_int, 1), (intptr_t) &SF_java_util_SimpleTimeZone_MONTH_LENGTH, "[I", 26 },
	{ "DAYS_BEFORE", getArrayClass(&class_int, 1), (intptr_t) &SF_java_util_SimpleTimeZone_DAYS_BEFORE, "[I", 26 },
};

static MethodMetadata methods[] {
	{ "monthLength", (intptr_t) SM_java_util_SimpleTimeZone_monthLength_int_int_R_int, 0, "(II)I", 26 },
	{ "<init>", (intptr_t) init_java_util_SimpleTimeZone_int_java_lang_String, 0, "(ILjava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int, 0, "(ILjava/lang/String;IIIIIIII)V", 1 },
	{ "<init>", (intptr_t) init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int, 0, "(ILjava/lang/String;IIIIIIIII)V", 1 },
	{ "<init>", (intptr_t) init_java_util_SimpleTimeZone_int_java_lang_String_int_int_int_int_int_int_int_int_int_int_int, 0, "(ILjava/lang/String;IIIIIIIIIII)V", 1 },
	{ "equals", (intptr_t) M_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean, VTABLE_java_util_SimpleTimeZone_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getDSTSavings", (intptr_t) M_java_util_SimpleTimeZone_getDSTSavings_R_int, VTABLE_java_util_SimpleTimeZone_getDSTSavings_R_int, "()I", 1 },
	{ "getOffset", (intptr_t) M_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int, VTABLE_java_util_SimpleTimeZone_getOffset_int_int_int_int_int_int_R_int, "(IIIIII)I", 1 },
	{ "getOffset", (intptr_t) M_java_util_SimpleTimeZone_getOffset_long_R_int, VTABLE_java_util_SimpleTimeZone_getOffset_long_R_int, "(J)I", 1 },
	{ "timeToFields", (intptr_t) SM_java_util_SimpleTimeZone_timeToFields_long_Array1_int_R_Array1_int, 0, "(J[I)[I", 10 },
	{ "floorDivide", (intptr_t) SM_java_util_SimpleTimeZone_floorDivide_long_long_R_long, 0, "(JJ)J", 10 },
	{ "floorDivide", (intptr_t) SM_java_util_SimpleTimeZone_floorDivide_long_long_Array1_long_R_long, 0, "(JJ[J)J", 10 },
	{ "dayToFields", (intptr_t) SM_java_util_SimpleTimeZone_dayToFields_long_Array1_int_R_Array1_int, 0, "(J[I)[I", 9 },
	{ "getRawOffset", (intptr_t) M_java_util_SimpleTimeZone_getRawOffset_R_int, VTABLE_java_util_SimpleTimeZone_getRawOffset_R_int, "()I", 1 },
	{ "hashCode", (intptr_t) M_java_util_SimpleTimeZone_hashCode_R_int, VTABLE_java_util_SimpleTimeZone_hashCode_R_int, "()I", 33 },
	{ "hasSameRules", (intptr_t) M_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean, VTABLE_java_util_SimpleTimeZone_hasSameRules_java_util_TimeZone_R_boolean, "(Ljava/util/TimeZone;)Z", 1 },
	{ "inDaylightTime", (intptr_t) M_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean, VTABLE_java_util_SimpleTimeZone_inDaylightTime_java_util_Date_R_boolean, "(Ljava/util/Date;)Z", 1 },
	{ "isLeapYear", (intptr_t) SM_java_util_SimpleTimeZone_isLeapYear_int_R_boolean, 0, "(I)Z", 10 },
	{ "mod7", (intptr_t) M_java_util_SimpleTimeZone_mod7_int_R_int, VTABLE_java_util_SimpleTimeZone_mod7_int_R_int, "(I)I", 2 },
	{ "setDSTSavings", (intptr_t) M_java_util_SimpleTimeZone_setDSTSavings_int, VTABLE_java_util_SimpleTimeZone_setDSTSavings_int, "(I)V", 1 },
	{ "checkRange", (intptr_t) M_java_util_SimpleTimeZone_checkRange_int_int_int, VTABLE_java_util_SimpleTimeZone_checkRange_int_int_int, "(III)V", 2 },
	{ "checkDay", (intptr_t) M_java_util_SimpleTimeZone_checkDay_int_int, VTABLE_java_util_SimpleTimeZone_checkDay_int_int, "(II)V", 2 },
	{ "setEndMode", (intptr_t) M_java_util_SimpleTimeZone_setEndMode, VTABLE_java_util_SimpleTimeZone_setEndMode, "()V", 2 },
	{ "setEndRule", (intptr_t) M_java_util_SimpleTimeZone_setEndRule_int_int_int, VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int, "(III)V", 1 },
	{ "setEndRule", (intptr_t) M_java_util_SimpleTimeZone_setEndRule_int_int_int_int, VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int_int, "(IIII)V", 1 },
	{ "setEndRule", (intptr_t) M_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean, VTABLE_java_util_SimpleTimeZone_setEndRule_int_int_int_int_boolean, "(IIIIZ)V", 1 },
	{ "setRawOffset", (intptr_t) M_java_util_SimpleTimeZone_setRawOffset_int, VTABLE_java_util_SimpleTimeZone_setRawOffset_int, "(I)V", 1 },
	{ "setStartMode", (intptr_t) M_java_util_SimpleTimeZone_setStartMode, VTABLE_java_util_SimpleTimeZone_setStartMode, "()V", 2 },
	{ "setStartRule", (intptr_t) M_java_util_SimpleTimeZone_setStartRule_int_int_int, VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int, "(III)V", 1 },
	{ "setStartRule", (intptr_t) M_java_util_SimpleTimeZone_setStartRule_int_int_int_int, VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int_int, "(IIII)V", 1 },
	{ "setStartRule", (intptr_t) M_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean, VTABLE_java_util_SimpleTimeZone_setStartRule_int_int_int_int_boolean, "(IIIIZ)V", 1 },
	{ "setStartYear", (intptr_t) M_java_util_SimpleTimeZone_setStartYear_int, VTABLE_java_util_SimpleTimeZone_setStartYear_int, "(I)V", 1 },
	{ "toString", (intptr_t) M_java_util_SimpleTimeZone_toString_R_java_lang_String, VTABLE_java_util_SimpleTimeZone_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "useDaylightTime", (intptr_t) M_java_util_SimpleTimeZone_useDaylightTime_R_boolean, VTABLE_java_util_SimpleTimeZone_useDaylightTime_R_boolean, "()Z", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_SimpleTimeZone, 0, "()V", 8 },
};

Class class_java_util_SimpleTimeZone{
		.nativeName = (intptr_t) "java/util/SimpleTimeZone",
		.parentClass = (intptr_t) &class_java_util_TimeZone,
		.size = sizeof(java_util_SimpleTimeZone),
		.classVtable = (intptr_t) vtable_java_util_SimpleTimeZone,
		.staticInitializer = (intptr_t) clinit_java_util_SimpleTimeZone,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_SimpleTimeZone,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_SimpleTimeZone = registerClass(&class_java_util_SimpleTimeZone);

}
