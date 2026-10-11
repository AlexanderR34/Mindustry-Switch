#include "java/util/Calendar.h"
#include "java/util/Calendar.h"
#include "java/lang/Object.h"
#include "java/util/GregorianCalendar.h"
#include "java/util/TimeZone.h"
#include "java/lang/System.h"
#include "java/util/Date.h"

extern "C" {

jint SF_java_util_Calendar_FIELD_COUNT;
jint SF_java_util_Calendar_DAY_OF_WEEK_IN_MONTH;
jint SF_java_util_Calendar_DAY_OF_YEAR;
jint SF_java_util_Calendar_WEEK_OF_MONTH;
jint SF_java_util_Calendar_WEEK_OF_YEAR;
jint SF_java_util_Calendar_ERA;
jint SF_java_util_Calendar_ZONE_OFFSET;
jint SF_java_util_Calendar_DST_OFFSET;
jint SF_java_util_Calendar_AM;
jint SF_java_util_Calendar_AM_PM;
jint SF_java_util_Calendar_APRIL;
jint SF_java_util_Calendar_AUGUST;
jint SF_java_util_Calendar_DATE;
jint SF_java_util_Calendar_DAY_OF_MONTH;
jint SF_java_util_Calendar_DAY_OF_WEEK;
jint SF_java_util_Calendar_DECEMBER;
jint SF_java_util_Calendar_FEBRUARY;
jint SF_java_util_Calendar_FRIDAY;
jint SF_java_util_Calendar_HOUR;
jint SF_java_util_Calendar_HOUR_OF_DAY;
jint SF_java_util_Calendar_JANUARY;
jint SF_java_util_Calendar_JULY;
jint SF_java_util_Calendar_JUNE;
jint SF_java_util_Calendar_MARCH;
jint SF_java_util_Calendar_MAY;
jint SF_java_util_Calendar_MILLISECOND;
jint SF_java_util_Calendar_MINUTE;
jint SF_java_util_Calendar_MONDAY;
jint SF_java_util_Calendar_MONTH;
jint SF_java_util_Calendar_NOVEMBER;
jint SF_java_util_Calendar_OCTOBER;
jint SF_java_util_Calendar_PM;
jint SF_java_util_Calendar_SATURDAY;
jint SF_java_util_Calendar_SECOND;
jint SF_java_util_Calendar_SEPTEMBER;
jint SF_java_util_Calendar_SUNDAY;
jint SF_java_util_Calendar_THURSDAY;
jint SF_java_util_Calendar_TUESDAY;
jint SF_java_util_Calendar_WEDNESDAY;
jint SF_java_util_Calendar_YEAR;

void mark_java_util_Calendar(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Calendar *) object;
	if (self->F_fields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fields)->clazz)->markFunction)((jobject) self->F_fields, mark, depth + 1);
	if (self->F_isSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_isSet)->clazz)->markFunction)((jobject) self->F_isSet, mark, depth + 1);
	if (self->F_zone)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_zone)->clazz)->markFunction)((jobject) self->F_zone, mark, depth + 1);
}

void clinit_java_util_Calendar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Calendar_FIELD_COUNT = jint(17);
	SF_java_util_Calendar_DAY_OF_WEEK_IN_MONTH = jint(8);
	SF_java_util_Calendar_DAY_OF_YEAR = jint(6);
	SF_java_util_Calendar_WEEK_OF_MONTH = jint(4);
	SF_java_util_Calendar_WEEK_OF_YEAR = jint(3);
	SF_java_util_Calendar_ERA = jint(0);
	SF_java_util_Calendar_ZONE_OFFSET = jint(15);
	SF_java_util_Calendar_DST_OFFSET = jint(16);
	SF_java_util_Calendar_AM = jint(0);
	SF_java_util_Calendar_AM_PM = jint(9);
	SF_java_util_Calendar_APRIL = jint(3);
	SF_java_util_Calendar_AUGUST = jint(7);
	SF_java_util_Calendar_DATE = jint(5);
	SF_java_util_Calendar_DAY_OF_MONTH = jint(5);
	SF_java_util_Calendar_DAY_OF_WEEK = jint(7);
	SF_java_util_Calendar_DECEMBER = jint(11);
	SF_java_util_Calendar_FEBRUARY = jint(1);
	SF_java_util_Calendar_FRIDAY = jint(6);
	SF_java_util_Calendar_HOUR = jint(10);
	SF_java_util_Calendar_HOUR_OF_DAY = jint(11);
	SF_java_util_Calendar_JANUARY = jint(0);
	SF_java_util_Calendar_JULY = jint(6);
	SF_java_util_Calendar_JUNE = jint(5);
	SF_java_util_Calendar_MARCH = jint(2);
	SF_java_util_Calendar_MAY = jint(4);
	SF_java_util_Calendar_MILLISECOND = jint(14);
	SF_java_util_Calendar_MINUTE = jint(12);
	SF_java_util_Calendar_MONDAY = jint(2);
	SF_java_util_Calendar_MONTH = jint(2);
	SF_java_util_Calendar_NOVEMBER = jint(10);
	SF_java_util_Calendar_OCTOBER = jint(9);
	SF_java_util_Calendar_PM = jint(1);
	SF_java_util_Calendar_SATURDAY = jint(7);
	SF_java_util_Calendar_SECOND = jint(13);
	SF_java_util_Calendar_SEPTEMBER = jint(8);
	SF_java_util_Calendar_SUNDAY = jint(1);
	SF_java_util_Calendar_THURSDAY = jint(5);
	SF_java_util_Calendar_TUESDAY = jint(3);
	SF_java_util_Calendar_WEDNESDAY = jint(4);
	SF_java_util_Calendar_YEAR = jint(1);
}

void init_java_util_Calendar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Calendar(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(339);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(309);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_minimalDaysInFirstWeek = (jint(5));
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(ctx);
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_zone = (jref) sp[1].o;
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (17));
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_fields = (jref) sp[1].o;
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (17));
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_isSet = (jref) sp[1].o;
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_Calendar *) NULL_CHECK(sp[1].o))->F_isTimeSet = temp0;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_areFieldsSet = temp0;
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	jlong temp3 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((func_java_util_Calendar_setTimeInMillis_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_setTimeInMillis_long])(ctx, sp[0].o, temp3);
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Calendar_after_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:after", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Calendar)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(355);
	jlong temp0 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_Calendar, (frame[1].o))))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (checkCast(ctx, &class_java_util_Calendar, (frame[1].o))));
	if ((longCompare(temp0, temp1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Calendar_before_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:before", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(362);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Calendar)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(365);
	jlong temp0 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_Calendar, (frame[1].o))))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (checkCast(ctx, &class_java_util_Calendar, (frame[1].o))));
	if ((longCompare(temp0, temp1)) >= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_Calendar_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(385);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Calendar)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(388);
	frame[2].o = (checkCast(ctx, &class_java_util_Calendar, (frame[1].o)));
	LINE_NUMBER(389);
	jlong temp0 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (frame[0].o));
	jlong temp1 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (frame[2].o));
	if ((longCompare(temp0, temp1)) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_util_Calendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
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

jint M_java_util_Calendar_get_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(396);
	((func_java_util_Calendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_complete])(ctx, (frame[0].o));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_java_util_Calendar_complete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:complete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isTimeSet) != 0) goto label_1;
	}
	{
	LINE_NUMBER(402);
	((func_java_util_Calendar_computeTime) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_computeTime])(ctx, (frame[0].o));
	LINE_NUMBER(403);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isTimeSet = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(405);
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet) != 0) goto label_4;
	}
	{
	LINE_NUMBER(406);
	((func_java_util_Calendar_computeFields) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_computeFields])(ctx, (frame[0].o));
	LINE_NUMBER(407);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet = (jint(1));
	}
label_4:;
	LINE_NUMBER(409);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Calendar_getInstance_R_java_util_Calendar(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Calendar(ctx);
	{
	LINE_NUMBER(415);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_GregorianCalendar);
	init_java_util_GregorianCalendar(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Calendar_getInstance_java_util_TimeZone_R_java_util_Calendar(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getInstance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Calendar(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(422);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_GregorianCalendar);
	init_java_util_GregorianCalendar_java_util_TimeZone(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Calendar_getTime_R_java_util_Date(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getTime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(429);
	clinit_java_util_Date(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Date);
	jlong temp0 = (jlong)((func_java_util_Calendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_getTimeInMillis_R_long])(ctx, (frame[0].o));
	init_java_util_Date_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_util_Calendar_getTimeInMillis_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getTimeInMillis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isTimeSet) != 0) goto label_1;
	}
	{
	LINE_NUMBER(437);
	((func_java_util_Calendar_computeTime) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_computeTime])(ctx, (frame[0].o));
	LINE_NUMBER(438);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isTimeSet = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return ((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Calendar_getTimeZone_R_java_util_TimeZone(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getTimeZone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_zone;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Calendar_set_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (frame[2].i);
	LINE_NUMBER(455);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)) = (jint(1));
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((java_util_Calendar *) NULL_CHECK(sp[1].o))->F_isTimeSet = temp0;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_areFieldsSet = temp0;
	LINE_NUMBER(457);
	if ((frame[1].i) <= (jint(2))) goto label_4;
	}
	{
	if ((frame[1].i) >= (9)) goto label_4;
	}
	{
	LINE_NUMBER(458);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet = (frame[1].i);
	}
label_4:;
	{
	LINE_NUMBER(460);
	if ((frame[1].i) == (10)) goto label_6;
	}
	{
	if ((frame[1].i) != (11)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(461);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastTimeFieldSet = (frame[1].i);
	}
label_7:;
	{
	LINE_NUMBER(463);
	if ((frame[1].i) != (9)) goto label_8;
	}
	{
	LINE_NUMBER(464);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastTimeFieldSet = (10);
	}
label_8:;
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Calendar_add_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(480);
	((func_java_util_Calendar_addImpl_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_addImpl_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Calendar_setTime_java_util_Date(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:setTime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	((func_java_util_Calendar_setTimeInMillis_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Calendar_setTimeInMillis_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Calendar_setTimeInMillis_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:setTimeInMillis", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(497);
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isTimeSet) == 0) goto label_1;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time), (frame[1].l))) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(498);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].l);
	LINE_NUMBER(499);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isTimeSet = (jint(1));
	LINE_NUMBER(500);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet = (jint(0));
	LINE_NUMBER(501);
	((func_java_util_Calendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Calendar_complete])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(503);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Calendar_setTimeZone_java_util_TimeZone(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:setTimeZone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_zone = (jref) (frame[1].o);
	LINE_NUMBER(510);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet = (jint(0));
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Calendar_getFirstDayOfWeek_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getFirstDayOfWeek", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_util_Calendar_getMinimalDaysInFirstWeek_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Calendar:getMinimalDaysInFirstWeek", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return ((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_minimalDaysInFirstWeek);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Calendar[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_util_Calendar_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_Calendar_after_java_lang_Object_R_boolean,
	(void *) M_java_util_Calendar_before_java_lang_Object_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_Calendar_get_int_R_int,
	(void *) M_java_util_Calendar_complete,
	(void *) M_java_util_Calendar_getTime_R_java_util_Date,
	(void *) M_java_util_Calendar_getTimeInMillis_R_long,
	(void *) M_java_util_Calendar_getTimeZone_R_java_util_TimeZone,
	(void *) M_java_util_Calendar_set_int_int,
	(void *) M_java_util_Calendar_add_int_int,
	(void *) nullptr,
	(void *) M_java_util_Calendar_setTime_java_util_Date,
	(void *) M_java_util_Calendar_setTimeInMillis_long,
	(void *) M_java_util_Calendar_setTimeZone_java_util_TimeZone,
	(void *) M_java_util_Calendar_getFirstDayOfWeek_R_int,
	(void *) M_java_util_Calendar_getMinimalDaysInFirstWeek_R_int,
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
	{ "after", "(Ljava/lang/Object;)Z" },
	{ "before", "(Ljava/lang/Object;)Z" },
	{ "computeFields", "()V" },
	{ "computeTime", "()V" },
	{ "get", "(I)I" },
	{ "complete", "()V" },
	{ "getTime", "()Ljava/util/Date;" },
	{ "getTimeInMillis", "()J" },
	{ "getTimeZone", "()Ljava/util/TimeZone;" },
	{ "set", "(II)V" },
	{ "add", "(II)V" },
	{ "addImpl", "(II)V" },
	{ "setTime", "(Ljava/util/Date;)V" },
	{ "setTimeInMillis", "(J)V" },
	{ "setTimeZone", "(Ljava/util/TimeZone;)V" },
	{ "getFirstDayOfWeek", "()I" },
	{ "getMinimalDaysInFirstWeek", "()I" },
};

static FieldMetadata fields[] {
	{ "FIELD_COUNT", &class_int, (intptr_t) &SF_java_util_Calendar_FIELD_COUNT, "I", 24 },
	{ "DAY_OF_WEEK_IN_MONTH", &class_int, (intptr_t) &SF_java_util_Calendar_DAY_OF_WEEK_IN_MONTH, "I", 24 },
	{ "DAY_OF_YEAR", &class_int, (intptr_t) &SF_java_util_Calendar_DAY_OF_YEAR, "I", 24 },
	{ "WEEK_OF_MONTH", &class_int, (intptr_t) &SF_java_util_Calendar_WEEK_OF_MONTH, "I", 24 },
	{ "WEEK_OF_YEAR", &class_int, (intptr_t) &SF_java_util_Calendar_WEEK_OF_YEAR, "I", 24 },
	{ "ERA", &class_int, (intptr_t) &SF_java_util_Calendar_ERA, "I", 24 },
	{ "ZONE_OFFSET", &class_int, (intptr_t) &SF_java_util_Calendar_ZONE_OFFSET, "I", 24 },
	{ "DST_OFFSET", &class_int, (intptr_t) &SF_java_util_Calendar_DST_OFFSET, "I", 24 },
	{ "AM", &class_int, (intptr_t) &SF_java_util_Calendar_AM, "I", 25 },
	{ "AM_PM", &class_int, (intptr_t) &SF_java_util_Calendar_AM_PM, "I", 25 },
	{ "APRIL", &class_int, (intptr_t) &SF_java_util_Calendar_APRIL, "I", 25 },
	{ "AUGUST", &class_int, (intptr_t) &SF_java_util_Calendar_AUGUST, "I", 25 },
	{ "DATE", &class_int, (intptr_t) &SF_java_util_Calendar_DATE, "I", 25 },
	{ "DAY_OF_MONTH", &class_int, (intptr_t) &SF_java_util_Calendar_DAY_OF_MONTH, "I", 25 },
	{ "DAY_OF_WEEK", &class_int, (intptr_t) &SF_java_util_Calendar_DAY_OF_WEEK, "I", 25 },
	{ "DECEMBER", &class_int, (intptr_t) &SF_java_util_Calendar_DECEMBER, "I", 25 },
	{ "FEBRUARY", &class_int, (intptr_t) &SF_java_util_Calendar_FEBRUARY, "I", 25 },
	{ "fields", getArrayClass(&class_int, 1), offsetof(java_util_Calendar, F_fields), "[I", 4 },
	{ "FRIDAY", &class_int, (intptr_t) &SF_java_util_Calendar_FRIDAY, "I", 25 },
	{ "HOUR", &class_int, (intptr_t) &SF_java_util_Calendar_HOUR, "I", 25 },
	{ "HOUR_OF_DAY", &class_int, (intptr_t) &SF_java_util_Calendar_HOUR_OF_DAY, "I", 25 },
	{ "isSet", getArrayClass(&class_boolean, 1), offsetof(java_util_Calendar, F_isSet), "[Z", 4 },
	{ "JANUARY", &class_int, (intptr_t) &SF_java_util_Calendar_JANUARY, "I", 25 },
	{ "JULY", &class_int, (intptr_t) &SF_java_util_Calendar_JULY, "I", 25 },
	{ "JUNE", &class_int, (intptr_t) &SF_java_util_Calendar_JUNE, "I", 25 },
	{ "MARCH", &class_int, (intptr_t) &SF_java_util_Calendar_MARCH, "I", 25 },
	{ "MAY", &class_int, (intptr_t) &SF_java_util_Calendar_MAY, "I", 25 },
	{ "MILLISECOND", &class_int, (intptr_t) &SF_java_util_Calendar_MILLISECOND, "I", 25 },
	{ "MINUTE", &class_int, (intptr_t) &SF_java_util_Calendar_MINUTE, "I", 25 },
	{ "MONDAY", &class_int, (intptr_t) &SF_java_util_Calendar_MONDAY, "I", 25 },
	{ "MONTH", &class_int, (intptr_t) &SF_java_util_Calendar_MONTH, "I", 25 },
	{ "NOVEMBER", &class_int, (intptr_t) &SF_java_util_Calendar_NOVEMBER, "I", 25 },
	{ "OCTOBER", &class_int, (intptr_t) &SF_java_util_Calendar_OCTOBER, "I", 25 },
	{ "PM", &class_int, (intptr_t) &SF_java_util_Calendar_PM, "I", 25 },
	{ "SATURDAY", &class_int, (intptr_t) &SF_java_util_Calendar_SATURDAY, "I", 25 },
	{ "SECOND", &class_int, (intptr_t) &SF_java_util_Calendar_SECOND, "I", 25 },
	{ "SEPTEMBER", &class_int, (intptr_t) &SF_java_util_Calendar_SEPTEMBER, "I", 25 },
	{ "SUNDAY", &class_int, (intptr_t) &SF_java_util_Calendar_SUNDAY, "I", 25 },
	{ "THURSDAY", &class_int, (intptr_t) &SF_java_util_Calendar_THURSDAY, "I", 25 },
	{ "time", &class_long, offsetof(java_util_Calendar, F_time), "J", 4 },
	{ "lastTimeFieldSet", &class_int, offsetof(java_util_Calendar, F_lastTimeFieldSet), "I", 0 },
	{ "lastDateFieldSet", &class_int, offsetof(java_util_Calendar, F_lastDateFieldSet), "I", 0 },
	{ "minimalDaysInFirstWeek", &class_int, offsetof(java_util_Calendar, F_minimalDaysInFirstWeek), "I", 2 },
	{ "TUESDAY", &class_int, (intptr_t) &SF_java_util_Calendar_TUESDAY, "I", 25 },
	{ "WEDNESDAY", &class_int, (intptr_t) &SF_java_util_Calendar_WEDNESDAY, "I", 25 },
	{ "YEAR", &class_int, (intptr_t) &SF_java_util_Calendar_YEAR, "I", 25 },
	{ "isTimeSet", &class_boolean, offsetof(java_util_Calendar, F_isTimeSet), "Z", 2 },
	{ "areFieldsSet", &class_boolean, offsetof(java_util_Calendar, F_areFieldsSet), "Z", 0 },
	{ "zone", &class_java_util_TimeZone, offsetof(java_util_Calendar, F_zone), "Ljava/util/TimeZone;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Calendar, 0, "()V", 4 },
	{ "after", (intptr_t) M_java_util_Calendar_after_java_lang_Object_R_boolean, VTABLE_java_util_Calendar_after_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "before", (intptr_t) M_java_util_Calendar_before_java_lang_Object_R_boolean, VTABLE_java_util_Calendar_before_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "computeFields", 0, VTABLE_java_util_Calendar_computeFields, "()V", 1028 },
	{ "computeTime", 0, VTABLE_java_util_Calendar_computeTime, "()V", 1028 },
	{ "equals", (intptr_t) M_java_util_Calendar_equals_java_lang_Object_R_boolean, VTABLE_java_util_Calendar_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "get", (intptr_t) M_java_util_Calendar_get_int_R_int, VTABLE_java_util_Calendar_get_int_R_int, "(I)I", 17 },
	{ "complete", (intptr_t) M_java_util_Calendar_complete, VTABLE_java_util_Calendar_complete, "()V", 0 },
	{ "getInstance", (intptr_t) SM_java_util_Calendar_getInstance_R_java_util_Calendar, 0, "()Ljava/util/Calendar;", 9 },
	{ "getInstance", (intptr_t) SM_java_util_Calendar_getInstance_java_util_TimeZone_R_java_util_Calendar, 0, "(Ljava/util/TimeZone;)Ljava/util/Calendar;", 9 },
	{ "getTime", (intptr_t) M_java_util_Calendar_getTime_R_java_util_Date, VTABLE_java_util_Calendar_getTime_R_java_util_Date, "()Ljava/util/Date;", 17 },
	{ "getTimeInMillis", (intptr_t) M_java_util_Calendar_getTimeInMillis_R_long, VTABLE_java_util_Calendar_getTimeInMillis_R_long, "()J", 4 },
	{ "getTimeZone", (intptr_t) M_java_util_Calendar_getTimeZone_R_java_util_TimeZone, VTABLE_java_util_Calendar_getTimeZone_R_java_util_TimeZone, "()Ljava/util/TimeZone;", 1 },
	{ "set", (intptr_t) M_java_util_Calendar_set_int_int, VTABLE_java_util_Calendar_set_int_int, "(II)V", 17 },
	{ "add", (intptr_t) M_java_util_Calendar_add_int_int, VTABLE_java_util_Calendar_add_int_int, "(II)V", 17 },
	{ "addImpl", 0, VTABLE_java_util_Calendar_addImpl_int_int, "(II)V", 1024 },
	{ "setTime", (intptr_t) M_java_util_Calendar_setTime_java_util_Date, VTABLE_java_util_Calendar_setTime_java_util_Date, "(Ljava/util/Date;)V", 17 },
	{ "setTimeInMillis", (intptr_t) M_java_util_Calendar_setTimeInMillis_long, VTABLE_java_util_Calendar_setTimeInMillis_long, "(J)V", 4 },
	{ "setTimeZone", (intptr_t) M_java_util_Calendar_setTimeZone_java_util_TimeZone, VTABLE_java_util_Calendar_setTimeZone_java_util_TimeZone, "(Ljava/util/TimeZone;)V", 1 },
	{ "getFirstDayOfWeek", (intptr_t) M_java_util_Calendar_getFirstDayOfWeek_R_int, VTABLE_java_util_Calendar_getFirstDayOfWeek_R_int, "()I", 0 },
	{ "getMinimalDaysInFirstWeek", (intptr_t) M_java_util_Calendar_getMinimalDaysInFirstWeek_R_int, VTABLE_java_util_Calendar_getMinimalDaysInFirstWeek_R_int, "()I", 1 },
};

Class class_java_util_Calendar{
		.nativeName = (intptr_t) "java/util/Calendar",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Calendar),
		.classVtable = (intptr_t) vtable_java_util_Calendar,
		.staticInitializer = (intptr_t) clinit_java_util_Calendar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Calendar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 49,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Calendar = registerClass(&class_java_util_Calendar);

}
