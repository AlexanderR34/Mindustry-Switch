#include "java/util/GregorianCalendar.h"
#include "java/util/Calendar.h"
#include "java/lang/Object.h"
#include "java/util/GregorianCalendar.h"
#include "java/util/TimeZone.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Date.h"
#include "java/util/SimpleTimeZone.h"

extern "C" {

jint SF_java_util_GregorianCalendar_BC;
jint SF_java_util_GregorianCalendar_AD;
jlong SF_java_util_GregorianCalendar_defaultGregorianCutover;
jobject SF_java_util_GregorianCalendar_DaysInMonth;
jobject SF_java_util_GregorianCalendar_DaysInYear;
jobject SF_java_util_GregorianCalendar_maximums;
jobject SF_java_util_GregorianCalendar_minimums;
jobject SF_java_util_GregorianCalendar_leastMaximums;

void mark_java_util_GregorianCalendar(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_GregorianCalendar_DaysInMonth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_GregorianCalendar_DaysInMonth)->clazz)->markFunction)((jobject) SF_java_util_GregorianCalendar_DaysInMonth, mark, depth + 1);
		if (SF_java_util_GregorianCalendar_DaysInYear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_GregorianCalendar_DaysInYear)->clazz)->markFunction)((jobject) SF_java_util_GregorianCalendar_DaysInYear, mark, depth + 1);
		if (SF_java_util_GregorianCalendar_maximums)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_GregorianCalendar_maximums)->clazz)->markFunction)((jobject) SF_java_util_GregorianCalendar_maximums, mark, depth + 1);
		if (SF_java_util_GregorianCalendar_minimums)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_GregorianCalendar_minimums)->clazz)->markFunction)((jobject) SF_java_util_GregorianCalendar_minimums, mark, depth + 1);
		if (SF_java_util_GregorianCalendar_leastMaximums)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_GregorianCalendar_leastMaximums)->clazz)->markFunction)((jobject) SF_java_util_GregorianCalendar_leastMaximums, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Calendar(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_GregorianCalendar *) object;
	if (self->F_cachedFields)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cachedFields)->clazz)->markFunction)((jobject) self->F_cachedFields, mark, depth + 1);
}

void init_java_util_GregorianCalendar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_GregorianCalendar(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(67);
	init_java_util_Calendar(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover = (jlong(-12219292800000ll));
	LINE_NUMBER(35);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear = (1582);
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	jint temp0 = (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) - (2000)) / (400);
	sp[1].o = frame[0].o;
	LINE_NUMBER(38);
	jint temp1 = (jint)M_java_util_GregorianCalendar_julianError_R_int(ctx, sp[1].o);
	((java_util_GregorianCalendar *) NULL_CHECK(sp[0].o))->F_julianSkew = ((temp0 + temp1) - ((((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) - (2000)) / (100)));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	((java_util_GregorianCalendar *) NULL_CHECK(sp[0].o))->F_cachedFields = (jref) sp[1].o;
	LINE_NUMBER(59);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_nextMidnightMillis = (jlong(0));
	LINE_NUMBER(61);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastMidnightMillis = (jlong(0));
	LINE_NUMBER(63);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_currentYearSkew = (10);
	LINE_NUMBER(65);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastYearSkew = (jint(0));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(ctx);
	((func_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_GregorianCalendar_java_util_TimeZone(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_GregorianCalendar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	init_java_util_Calendar(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover = (jlong(-12219292800000ll));
	LINE_NUMBER(35);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear = (1582);
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	jint temp0 = (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) - (2000)) / (400);
	sp[1].o = frame[0].o;
	LINE_NUMBER(38);
	jint temp1 = (jint)M_java_util_GregorianCalendar_julianError_R_int(ctx, sp[1].o);
	((java_util_GregorianCalendar *) NULL_CHECK(sp[0].o))->F_julianSkew = ((temp0 + temp1) - ((((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) - (2000)) / (100)));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (10));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	((java_util_GregorianCalendar *) NULL_CHECK(sp[0].o))->F_cachedFields = (jref) sp[1].o;
	LINE_NUMBER(59);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_nextMidnightMillis = (jlong(0));
	LINE_NUMBER(61);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastMidnightMillis = (jlong(0));
	LINE_NUMBER(63);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_currentYearSkew = (10);
	LINE_NUMBER(65);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastYearSkew = (jint(0));
	LINE_NUMBER(71);
	((func_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_GregorianCalendar_computeFields(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:computeFields", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(76);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	((func_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_setTimeZone_java_util_TimeZone])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[1].o, ((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time));
	jint temp0 = (jint)((func_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_util_TimeZone_getDSTSavings_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TimeZone_getDSTSavings_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(82);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (frame[2].i);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (frame[3].i);
	LINE_NUMBER(85);
	frame[4].i = (jint((((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time) % (jlong(86400000ll)))));
	LINE_NUMBER(86);
	frame[5].i = (frame[4].i);
	LINE_NUMBER(88);
	frame[6].i = ((frame[3].i) + (frame[2].i));
	LINE_NUMBER(89);
	frame[7].l = (((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time) + (jlong((frame[6].i))));
	LINE_NUMBER(91);
	if ((longCompare(((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time), (jlong(0)))) <= 0) goto label_15;
	}
	{
	if ((longCompare((frame[7].l), (jlong(0)))) >= 0) goto label_15;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_15;
	{
	LINE_NUMBER(92);
	frame[7].l = (jlong(9223372036854775807ll));
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(93);
	if ((longCompare(((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time), (jlong(0)))) >= 0) goto label_17;
	}
	{
	if ((longCompare((frame[7].l), (jlong(0)))) <= 0) goto label_17;
	}
	INST_ILOAD(6);
	if ((--sp)->i >= 0) goto label_17;
	{
	LINE_NUMBER(94);
	frame[7].l = (bit_cast<jlong>(0x8000000000000000ll));
	}
label_17:;
	{
	LINE_NUMBER(99);
	if (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_isCached) == 0) goto label_19;
	}
	{
	LINE_NUMBER(100);
	if ((frame[4].i) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(101);
	frame[4].i = ((frame[4].i) + (jint(86400000)));
	}
label_21:;
	{
	LINE_NUMBER(105);
	frame[4].i = ((frame[4].i) + (frame[3].i));
	LINE_NUMBER(106);
	frame[4].i = ((frame[4].i) + (frame[2].i));
	LINE_NUMBER(108);
	if ((frame[4].i) >= 0) goto label_25;
	}
	{
	LINE_NUMBER(109);
	frame[4].i = ((frame[4].i) + (jint(86400000)));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(110);
	if ((frame[4].i) < (jint(86400000))) goto label_27;
	}
	{
	LINE_NUMBER(111);
	frame[4].i = ((frame[4].i) - (jint(86400000)));
	}
label_27:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (14)) = ((frame[4].i) % (1000));
	LINE_NUMBER(115);
	frame[4].i = ((frame[4].i) / (1000));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (13)) = ((frame[4].i) % (60));
	LINE_NUMBER(117);
	frame[4].i = ((frame[4].i) / (60));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (12)) = ((frame[4].i) % (60));
	LINE_NUMBER(119);
	frame[4].i = ((frame[4].i) / (60));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (11)) = ((frame[4].i) % (24));
	LINE_NUMBER(121);
	frame[4].i = ((frame[4].i) / (24));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = 9;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)ARRAY_ACCESS(jint, temp1, (11))) <= (11)) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 3;
	ARRAY_ACCESS(jint, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = 10;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (11))) % (12));
	LINE_NUMBER(126);
	frame[9].l = (frame[7].l);
	LINE_NUMBER(127);
	jint temp1 = (jint)((func_java_util_TimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TimeZone_useDaylightTime_R_boolean])(ctx, (frame[1].o));
	if (temp1 == 0) goto label_42;
	}
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_java_util_TimeZone_getDSTSavings_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_TimeZone_getDSTSavings_R_int])(ctx, (frame[1].o));
	frame[11].i = temp0;
	LINE_NUMBER(131);
	jlong temp1 = frame[9].l;
	sp[0].l = temp1;
	sp += 1;
	if ((frame[2].i) != 0) goto label_45;
	}
	{
	jlong temp0 = jlong((frame[11].i));
	sp[0].l = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jlong temp0 = jlong((-(frame[11].i)));
	sp[0].l = temp0;
	sp += 1;
	}
label_46:;
	INST_LADD();
	INST_LSTORE(9);
label_42:;
	{
	LINE_NUMBER(134);
	if ((longCompare((frame[7].l), (jlong(0)))) <= 0) goto label_47;
	}
	{
	if ((longCompare((frame[9].l), (jlong(0)))) >= 0) goto label_47;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_47;
	{
	LINE_NUMBER(135);
	frame[9].l = (jlong(9223372036854775807ll));
	goto label_49;
	}
label_47:;
	{
	LINE_NUMBER(136);
	if ((longCompare((frame[7].l), (jlong(0)))) >= 0) goto label_49;
	}
	{
	if ((longCompare((frame[9].l), (jlong(0)))) <= 0) goto label_49;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_49;
	{
	LINE_NUMBER(137);
	frame[9].l = (bit_cast<jlong>(0x8000000000000000ll));
	}
label_49:;
	{
	LINE_NUMBER(140);
	M_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int(ctx, (frame[0].o), ((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time), (frame[7].l), (frame[9].l), (frame[5].i), (frame[3].i));
	LINE_NUMBER(142);
	goto label_52;
	}
label_19:;
	{
	LINE_NUMBER(143);
	M_java_util_GregorianCalendar_fullFieldsCalc_long_int_int(ctx, (frame[0].o), ((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time), (frame[5].i), (frame[3].i));
	}
label_52:;
	{
	LINE_NUMBER(146);
	frame[9].i = (jint(0));
	}
label_53:;
	{
	if ((frame[9].i) >= (17)) goto label_54;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[9].i)) = (jint(1));
	LINE_NUMBER(146);
	INST_IINC(9, 1);
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(151);
	if (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_isCached) != 0) goto label_57;
	}
	{
	if ((longCompare((frame[7].l), (jlong(9223372036854775807ll)))) == 0) goto label_57;
	}
	{
	if ((longCompare((frame[7].l), (bit_cast<jlong>(0x8000000000000000ll)))) == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	if (sp[0].o == nullptr) goto label_57;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_java_util_TimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_useDaylightTime_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_59;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_util_SimpleTimeZone)) == 0) goto label_57;
	}
label_59:;
	{
	LINE_NUMBER(157);
	frame[9].i = (jint(0));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(5))));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp3 = jint(3);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (7)));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (frame[3].i);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp4 = jint(5);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp5 = 6;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp5) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp6 = 7;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(4))));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp7 = 8;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp7) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (6)));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	jint temp8 = 9;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp8) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (8)));
	LINE_NUMBER(170);
	jint temp9 = frame[9].i;
	jint temp10 = 23;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = (temp9 + ((((temp10 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (11)))) * (60)) * (60)) * (1000)));
	LINE_NUMBER(171);
	jint temp11 = frame[9].i;
	jint temp12 = 59;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = (temp11 + (((temp12 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (12)))) * (60)) * (1000)));
	LINE_NUMBER(172);
	jint temp13 = frame[9].i;
	jint temp14 = 59;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = (temp13 + ((temp14 - ((jint)ARRAY_ACCESS(jint, sp[0].o, (13)))) * (1000)));
	LINE_NUMBER(173);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_nextMidnightMillis = ((frame[7].l) + (jlong((frame[9].i))));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = (((((jint)ARRAY_ACCESS(jint, sp[0].o, (11))) * (60)) * (60)) * (1000));
	LINE_NUMBER(176);
	jint temp15 = frame[9].i;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = (temp15 + ((((jint)ARRAY_ACCESS(jint, sp[0].o, (12))) * (60)) * (1000)));
	LINE_NUMBER(177);
	jint temp16 = frame[9].i;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = (temp16 + (((jint)ARRAY_ACCESS(jint, sp[0].o, (13))) * (1000)));
	LINE_NUMBER(178);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastMidnightMillis = ((frame[7].l) - (jlong((frame[9].i))));
	LINE_NUMBER(180);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_isCached = (jint(1));
	}
label_57:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_GregorianCalendar_computeTime(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:computeTime", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLenient_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLenient_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (11))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (11))) < 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (11))) <= (23)) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(189);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (10))) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (10))) < 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (10))) <= (11)) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(192);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (12))) < 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (12))) <= (59)) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(195);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (13))) < 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (13))) <= (59)) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(198);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (14))) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (14))) < 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (14))) <= (999)) goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(202);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) < (jint(1))) goto label_15;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) <= (53)) goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(206);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (7))) < (jint(1))) goto label_17;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (7))) <= (7)) goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(210);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (8))) < (jint(1))) goto label_19;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (8))) <= (6)) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(214);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) < (jint(1))) goto label_21;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) <= (6)) goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(218);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (9))) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (9))) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (9))) == (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(221);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (10))) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (10))) < 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (10))) <= (11)) goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(224);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) != 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) < (jint(1))) goto label_29;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) <= (jint(292269054))) goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(229);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) < (jint(1))) goto label_30;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) <= (jint(292278994))) goto label_26;
	}
label_30:;
	{
	LINE_NUMBER(231);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))) < 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))) <= (11)) goto label_1;
	}
label_31:;
	{
	LINE_NUMBER(235);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(240);
	frame[3].l = (jlong(0));
	LINE_NUMBER(241);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (11))) == 0) goto label_33;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastTimeFieldSet) == (10)) goto label_33;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[3].l = (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (11)))));
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (10))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (9))) * (12);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[3].l = (jlong((temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (10))))));
	}
label_35:;
	{
	LINE_NUMBER(246);
	frame[1].l = ((frame[3].l) * (jlong(3600000ll)));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) == 0) goto label_38;
	}
	{
	LINE_NUMBER(249);
	jlong temp0 = frame[1].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[1].l = (temp0 + ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (12))))) * (jlong(60000ll))));
	}
label_38:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) == 0) goto label_40;
	}
	{
	LINE_NUMBER(252);
	jlong temp0 = frame[1].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[1].l = (temp0 + ((jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (13))))) * (jlong(1000ll))));
	}
label_40:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (14))) == 0) goto label_42;
	}
	{
	LINE_NUMBER(255);
	jlong temp0 = frame[1].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[1].l = (temp0 + (jlong(((jint)ARRAY_ACCESS(jint, sp[0].o, (14))))));
	}
label_42:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(1)))) == 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_45;
	}
label_44:;
	INST_SIPUSH(1970);
label_45:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(260);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0)))) == 0) goto label_47;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == (jint(1))) goto label_49;
	}
	{
	LINE_NUMBER(263);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_49:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) != 0) goto label_47;
	}
	{
	LINE_NUMBER(266);
	frame[7].i = ((jint(1)) - (frame[7].i));
	}
label_47:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) != 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_53;
	}
label_52:;
	INST_ICONST(1);
	goto label_54;
label_53:;
	INST_ICONST(0);
label_54:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) != 0) goto label_56;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) != 0) goto label_56;
	}
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_57;
label_56:;
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (6)) goto label_57;
	}
	INST_ICONST(1);
	goto label_58;
label_57:;
	INST_ICONST(0);
label_58:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(274);
	if ((frame[9].i) == 0) goto label_60;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (7)) goto label_61;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) != (jint(3))) goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) == 0) goto label_62;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_62;
	}
	{
	LINE_NUMBER(277);
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (jint(3))) goto label_64;
	}
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_64;
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_64;
	}
	INST_ICONST(1);
	goto label_65;
label_64:;
	INST_ICONST(0);
label_65:;
	INST_ISTORE(9);
	goto label_60;
label_62:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_60;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) == 0) goto label_67;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(2)))) == 0) goto label_67;
	}
	INST_ICONST(1);
	goto label_68;
label_67:;
	INST_ICONST(0);
label_68:;
	INST_ISTORE(9);
label_60:;
	{
	LINE_NUMBER(284);
	if ((frame[9].i) == 0) goto label_69;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2))));
	LINE_NUMBER(286);
	frame[7].i = ((frame[7].i) + ((frame[10].i) / (12)));
	LINE_NUMBER(287);
	frame[10].i = ((frame[10].i) % (12));
	LINE_NUMBER(288);
	if ((frame[10].i) >= 0) goto label_74;
	}
	{
	LINE_NUMBER(289);
	INST_IINC(7, -1);
	LINE_NUMBER(290);
	INST_IINC(10, 12);
	}
label_74:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, (frame[0].o), (frame[7].i));
	frame[11].i = temp0;
	LINE_NUMBER(293);
	jlong temp1 = (jlong)M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long(ctx, (frame[0].o), (frame[7].i));
	jint temp2 = (jint)M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int(ctx, (frame[0].o), (frame[11].i), (frame[10].i));
	frame[5].l = (temp1 + (jlong(temp2)));
	LINE_NUMBER(294);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	frame[12].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))));
	LINE_NUMBER(295);
	if ((frame[12].i) == 0) goto label_80;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (7)) goto label_81;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (jint(4))) goto label_81;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) != (8)) goto label_80;
	}
label_81:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_82;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_83;
label_82:;
	INST_ICONST(1);
	goto label_84;
label_83:;
	INST_ICONST(0);
label_84:;
	INST_ISTORE(12);
label_80:;
	{
	LINE_NUMBER(300);
	if ((frame[12].i) == 0) goto label_85;
	}
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLenient_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLenient_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_87;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))) < (jint(1))) goto label_88;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)));
	sp[0].o = frame[0].o;
	jint temp1 = frame[11].i;
	jint temp2 = frame[10].i;
	LINE_NUMBER(302);
	jint temp3 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, sp[0].o, temp1, temp2);
	if (temp0 <= temp3) goto label_87;
	}
label_88:;
	{
	LINE_NUMBER(304);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_87:;
	{
	LINE_NUMBER(306);
	jlong temp0 = frame[5].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[5].l = (temp0 + (jlong((((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))) - (jint(1))))));
	goto label_90;
	}
label_85:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_91;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[13].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (7))) - (jint(1)));
	goto label_94;
	}
label_91:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, (frame[0].o));
	frame[13].i = (temp0 - (jint(1)));
	}
label_94:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(4)))) == 0) goto label_95;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (8)) goto label_95;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	jlong temp0 = (frame[5].l) - (jlong(3ll));
	jint temp1 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, (temp0 - (jlong((temp1 - (jint(1)))))));
	frame[14].i = temp2;
	LINE_NUMBER(317);
	jlong temp3 = frame[5].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp4 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) - (jint(1))) * (7);
	sp[0].o = frame[0].o;
	jlong temp5 = (jlong(((frame[14].i) + (frame[13].i)))) - ((frame[5].l) - (jlong(3ll)));
	LINE_NUMBER(318);
	jint temp6 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, temp5);
	frame[5].l = (temp3 + (jlong(((temp4 + temp6) - (frame[14].i)))));
	LINE_NUMBER(319);
	goto label_90;
	}
label_95:;
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (8))) == 0) goto label_100;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (8))) < 0) goto label_102;
	}
	{
	LINE_NUMBER(321);
	jlong temp0 = frame[5].l;
	jint temp1 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, (frame[0].o), ((jlong((frame[13].i))) - ((frame[5].l) - (jlong(3ll)))));
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[5].l = (temp0 + (jlong((temp1 + ((((jint)ARRAY_ACCESS(jint, sp[0].o, (8))) - (jint(1))) * (7))))));
	goto label_90;
	}
label_102:;
	{
	LINE_NUMBER(324);
	jlong temp0 = frame[5].l;
	jint temp1 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[11].i), (frame[10].i));
	sp[0].o = frame[0].o;
	jlong temp2 = jlong((frame[13].i));
	jlong temp3 = frame[5].l;
	sp[1].o = frame[0].o;
	jint temp4 = frame[11].i;
	jint temp5 = frame[10].i;
	LINE_NUMBER(326);
	jint temp6 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, sp[1].o, temp4, temp5);
	jlong temp7 = temp2 - ((temp3 + (jlong(temp6))) - (jlong(3ll)));
	LINE_NUMBER(325);
	jint temp8 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, temp7);
	jint temp9 = temp1 + temp8;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[5].l = (temp0 + (jlong((temp9 + (((jint)ARRAY_ACCESS(jint, sp[0].o, (8))) * (7))))));
	goto label_90;
	}
label_100:;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_90;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[0].o;
	jlong temp0 = (frame[5].l) - (jlong(3ll));
	jint temp1 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, (temp0 - (jlong((temp1 - (jint(1)))))));
	frame[14].i = temp2;
	LINE_NUMBER(331);
	jlong temp3 = frame[5].l;
	sp[0].o = frame[0].o;
	jint temp4 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, (frame[0].o), ((jlong(((frame[14].i) + (frame[13].i)))) - ((frame[5].l) - (jlong(3ll)))));
	jint temp5 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, (jlong((temp4 - (frame[14].i)))));
	frame[5].l = (temp3 + (jlong(temp5)));
	}
label_90:;
	LINE_NUMBER(334);
	goto label_108;
label_69:;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(3)))) == 0) goto label_109;
	}
	{
	if (((jint)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet) == (6)) goto label_109;
	}
	INST_ICONST(1);
	goto label_110;
label_109:;
	INST_ICONST(0);
label_110:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(337);
	if ((frame[10].i) == 0) goto label_112;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_112;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	frame[10].i = ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7)));
	}
label_112:;
	{
	LINE_NUMBER(340);
	jlong temp0 = (jlong)M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long(ctx, (frame[0].o), (frame[7].i));
	frame[5].l = temp0;
	LINE_NUMBER(341);
	if ((frame[10].i) == 0) goto label_115;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_117;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[11].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (7))) - (jint(1)));
	goto label_120;
	}
label_117:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, (frame[0].o));
	frame[11].i = (temp0 - (jint(1)));
	}
label_120:;
	{
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	jlong temp0 = (frame[5].l) - (jlong(3ll));
	jint temp1 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, (temp0 - (jlong((temp1 - (jint(1)))))));
	frame[12].i = temp2;
	LINE_NUMBER(349);
	jlong temp3 = frame[5].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp4 = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(3)))) - (jint(1))) * (7);
	sp[0].o = frame[0].o;
	jlong temp5 = (jlong(((frame[12].i) + (frame[11].i)))) - ((frame[5].l) - (jlong(3ll)));
	LINE_NUMBER(350);
	jint temp6 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, temp5);
	frame[5].l = (temp3 + (jlong(((temp4 + temp6) - (frame[12].i)))));
	LINE_NUMBER(351);
	jint temp7 = (7) - (frame[12].i);
	jint temp8 = (jint)((func_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int])(ctx, (frame[0].o));
	if (temp7 >= temp8) goto label_124;
	}
	{
	LINE_NUMBER(352);
	frame[5].l = ((frame[5].l) + (jlong(7ll)));
	}
label_124:;
	LINE_NUMBER(354);
	goto label_108;
label_115:;
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (6))) == 0) goto label_126;
	}
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLenient_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLenient_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_128;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (6))) < (jint(1))) goto label_129;
	}
	{
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (6));
	jint temp1 = 365;
	LINE_NUMBER(356);
	jint temp2 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, (frame[0].o), (frame[7].i));
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (temp2 == 0) goto label_131;
	}
	INST_ICONST(1);
	goto label_132;
label_131:;
	LINE_NUMBER(357);
	INST_ICONST(0);
label_132:;
	INST_IADD();
	sp -= 2; if (sp[0].i <= sp[1].i) goto label_128;
label_129:;
	{
	LINE_NUMBER(358);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_128:;
	{
	LINE_NUMBER(360);
	jlong temp0 = frame[5].l;
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[5].l = (temp0 + (jlong((((jint)ARRAY_ACCESS(jint, sp[0].o, (6))) - (jint(1))))));
	goto label_108;
	}
label_126:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_isSet;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (7))) == 0) goto label_108;
	}
	{
	LINE_NUMBER(362);
	jlong temp0 = frame[5].l;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp1 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, ((jlong((((jint)ARRAY_ACCESS(jint, sp[1].o, (7))) - (jint(1))))) - ((frame[5].l) - (jlong(3ll)))));
	frame[5].l = (temp0 + (jlong(temp1)));
	}
label_108:;
	{
	LINE_NUMBER(365);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_lastDateFieldSet = (jint(0));
	LINE_NUMBER(367);
	frame[1].l = ((frame[1].l) + ((frame[5].l) * (jlong(86400000ll))));
	LINE_NUMBER(369);
	if ((frame[7].i) != ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear)) goto label_136;
	}
	{
	jlong temp0 = frame[1].l;
	jlong temp1 = (jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover;
	sp[0].o = frame[0].o;
	LINE_NUMBER(370);
	jint temp2 = (jint)M_java_util_GregorianCalendar_julianError_R_int(ctx, sp[0].o);
	if ((longCompare(temp0, (temp1 + ((jlong(temp2)) * (jlong(86400000ll)))))) < 0) goto label_136;
	}
	{
	LINE_NUMBER(371);
	jlong temp0 = frame[1].l;
	jint temp1 = (jint)M_java_util_GregorianCalendar_julianError_R_int(ctx, (frame[0].o));
	frame[1].l = (temp0 - ((jlong(temp1)) * (jlong(86400000ll))));
	}
label_136:;
	{
	LINE_NUMBER(380);
	jlong temp0 = frame[1].l;
	jint temp1 = (jint)M_java_util_GregorianCalendar_getOffset_long_R_int(ctx, (frame[0].o), (frame[1].l));
	jlong temp2 = temp0 - (jlong(temp1));
	sp[0].o = frame[0].o;
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone])(ctx, sp[0].o);
	jint temp3 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, sp[0].o);
	frame[10].l = (temp2 + (jlong(temp3)));
	LINE_NUMBER(382);
	jlong temp4 = frame[1].l;
	jint temp5 = (jint)M_java_util_GregorianCalendar_getOffset_long_R_int(ctx, (frame[0].o), (frame[10].l));
	frame[1].l = (temp4 - (jlong(temp5)));
	LINE_NUMBER(385);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].l);
	LINE_NUMBER(386);
	if ((longCompare((frame[10].l), (frame[1].l))) == 0) goto label_143;
	}
	{
	LINE_NUMBER(387);
	((func_java_util_GregorianCalendar_computeFields) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_computeFields])(ctx, (frame[0].o));
	LINE_NUMBER(388);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet = (jint(1));
	}
label_143:;
	LINE_NUMBER(390);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_GregorianCalendar_addImpl_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:addImpl", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(394);
	if ((frame[2].i) != 0) goto label_1;
	}
	LINE_NUMBER(395);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(397);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) < (15)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(398);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(401);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_isCached = (jint(0));
	LINE_NUMBER(403);
	if ((frame[1].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(404);
	((func_java_util_GregorianCalendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_complete])(ctx, (frame[0].o));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(406);
	if ((frame[2].i) < 0) goto label_11;
	}
	LINE_NUMBER(407);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(409);
	((func_java_util_GregorianCalendar_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_set_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	goto label_13;
	}
label_9:;
	{
	LINE_NUMBER(411);
	if ((frame[2].i) > 0) goto label_14;
	}
	LINE_NUMBER(412);
	popStackFrame(ctx);
	INST_RETURN();
label_14:;
	{
	LINE_NUMBER(414);
	((func_java_util_GregorianCalendar_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_set_int_int])(ctx, (frame[0].o), (jint(0)), (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(416);
	((func_java_util_GregorianCalendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_complete])(ctx, (frame[0].o));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(420);
	if ((frame[1].i) == (jint(1))) goto label_17;
	}
	{
	if ((frame[1].i) != (jint(2))) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(421);
	((func_java_util_GregorianCalendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_complete])(ctx, (frame[0].o));
	LINE_NUMBER(422);
	if ((frame[1].i) != (jint(2))) goto label_20;
	}
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[3].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2)))) + (frame[2].i));
	LINE_NUMBER(424);
	if ((frame[3].i) >= 0) goto label_23;
	}
	{
	LINE_NUMBER(425);
	frame[2].i = (((frame[3].i) - (11)) / (12));
	LINE_NUMBER(426);
	frame[3].i = ((12) + ((frame[3].i) % (12)));
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(428);
	frame[2].i = ((frame[3].i) / (12));
	}
label_26:;
	{
	LINE_NUMBER(430);
	((func_java_util_GregorianCalendar_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_set_int_int])(ctx, (frame[0].o), (jint(2)), ((frame[3].i) % (12)));
	}
label_20:;
	{
	LINE_NUMBER(432);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	((func_java_util_GregorianCalendar_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_GregorianCalendar_set_int_int])(ctx, sp[0].o, temp0, (((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))) + (frame[2].i)));
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp1 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)))));
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp2 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, sp[0].o, temp1, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	frame[3].i = temp2;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(5)))) <= (frame[3].i)) goto label_29;
	}
	{
	LINE_NUMBER(435);
	((func_java_util_GregorianCalendar_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_set_int_int])(ctx, (frame[0].o), (jint(5)), (frame[3].i));
	}
label_29:;
	{
	LINE_NUMBER(437);
	((func_java_util_GregorianCalendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_complete])(ctx, (frame[0].o));
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(441);
	frame[3].l = (jlong(0));
	LINE_NUMBER(442);
	jlong temp0 = (jlong)((func_java_util_GregorianCalendar_getTimeInMillis_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getTimeInMillis_R_long])(ctx, (frame[0].o));
	LINE_NUMBER(443);
	switch((frame[1].i)) {
		case 3: goto label_34;
		case 4: goto label_34;
		case 5: goto label_35;
		case 6: goto label_35;
		case 7: goto label_35;
		case 8: goto label_34;
		case 9: goto label_36;
		case 10: goto label_37;
		case 11: goto label_37;
		case 12: goto label_38;
		case 13: goto label_39;
		case 14: goto label_40;
		default: goto label_41;
	}
	}
label_40:;
	{
	LINE_NUMBER(445);
	sp[0].o = frame[0].o;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time) + (jlong((frame[2].i))));
	LINE_NUMBER(446);
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time) + ((jlong((frame[2].i))) * (jlong(1000ll))));
	LINE_NUMBER(449);
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time) + ((jlong((frame[2].i))) * (jlong(60000ll))));
	LINE_NUMBER(452);
	goto label_41;
	}
label_37:;
	{
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time) + ((jlong((frame[2].i))) * (jlong(3600000ll))));
	LINE_NUMBER(456);
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(458);
	frame[3].l = (jlong(43200000ll));
	LINE_NUMBER(459);
	goto label_41;
	}
label_35:;
	{
	LINE_NUMBER(463);
	frame[3].l = (jlong(86400000ll));
	LINE_NUMBER(464);
	goto label_41;
	}
label_34:;
	{
	LINE_NUMBER(468);
	frame[3].l = (jlong(604800000ll));
	}
label_41:;
	{
	LINE_NUMBER(471);
	if ((longCompare((frame[3].l), (jlong(0)))) <= 0) goto label_48;
	}
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(473);
	jint temp1 = (jint)M_java_util_GregorianCalendar_getOffset_long_R_int(ctx, (frame[0].o), (((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time) + (jlong((frame[5].i)))));
	frame[6].i = temp1;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time) + ((jlong((frame[2].i))) * (frame[3].l)));
	LINE_NUMBER(475);
	jint temp2 = (jint)M_java_util_GregorianCalendar_getOffset_long_R_int(ctx, (frame[0].o), (((jlong)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_time) + (jlong((frame[5].i)))));
	frame[7].i = temp2;
	LINE_NUMBER(477);
	if ((frame[7].i) == (frame[6].i)) goto label_48;
	}
	{
	LINE_NUMBER(478);
	sp[0].o = frame[0].o;
	((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time = (((jlong)((java_util_Calendar *) NULL_CHECK(sp[0].o))->F_time) + (jlong(((frame[6].i) - (frame[7].i)))));
	}
label_48:;
	{
	LINE_NUMBER(481);
	((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_areFieldsSet = (jint(0));
	LINE_NUMBER(482);
	((func_java_util_GregorianCalendar_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_complete])(ctx, (frame[0].o));
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_julianError_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:julianError", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (((((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) / (100)) - (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) / (400))) - (jint(2)));
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_daysInMonth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:daysInMonth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (jint(1)))));
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp1 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:daysInMonth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(494);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if ((frame[2].i) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(495);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInMonth;
	popStackFrame(ctx);
	return (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(498);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInMonth;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)));
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_daysInYear_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:daysInYear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(502);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_SIPUSH(366);
	goto label_2;
label_1:;
	INST_SIPUSH(365);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(503);
	if ((frame[1].i) != ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear)) goto label_4;
	}
	{
	LINE_NUMBER(504);
	frame[2].i = ((frame[2].i) - ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_currentYearSkew));
	}
label_4:;
	{
	LINE_NUMBER(506);
	if ((frame[1].i) != (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) - (jint(1)))) goto label_6;
	}
	{
	LINE_NUMBER(507);
	frame[2].i = ((frame[2].i) - ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastYearSkew));
	}
label_6:;
	{
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:daysInYear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(513);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if ((frame[2].i) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(514);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInYear;
	popStackFrame(ctx);
	return (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(517);
	clinit_java_util_GregorianCalendar(ctx);
	sp[0].o = (jobject)SF_java_util_GregorianCalendar_DaysInYear;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	}

	popStackFrame(ctx);
}

jbool M_java_util_GregorianCalendar_isLeapYear_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:isLeapYear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(529);
	if ((frame[1].i) <= ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear)) goto label_1;
	}
	{
	LINE_NUMBER(530);
	if (((frame[1].i) % (jint(4))) != 0) goto label_3;
	}
	{
	if (((frame[1].i) % (100)) != 0) goto label_4;
	}
	{
	if (((frame[1].i) % (400)) != 0) goto label_3;
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
	LINE_NUMBER(533);
	if (((frame[1].i) % (jint(4))) != 0) goto label_6;
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

void M_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:cachedFieldsCheckAndGet", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	frame[5].l = param2;
	frame[7].i = param3;
	frame[8].i = param4;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	frame[9].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (16)));
	LINE_NUMBER(540);
	if (((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_isCached) == 0) goto label_2;
	}
	{
	if ((longCompare((frame[3].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_nextMidnightMillis))) >= 0) goto label_2;
	}
	{
	if ((longCompare((frame[3].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastMidnightMillis))) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(4)))) != (frame[8].i)) goto label_2;
	}
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_3;
	{
	if ((longCompare((frame[5].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_nextMidnightMillis))) >= 0) goto label_2;
	}
label_3:;
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_4;
	{
	if ((longCompare((frame[5].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastMidnightMillis))) > 0) goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(546);
	M_java_util_GregorianCalendar_fullFieldsCalc_long_int_int(ctx, (frame[0].o), (frame[1].l), (frame[7].i), (frame[8].i));
	LINE_NUMBER(547);
	((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_isCached = (jint(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp1 = jint(2);
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp2 = jint(5);
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2))));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp3 = 7;
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3))));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp4 = jint(0);
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(5))));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp5 = jint(3);
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp5) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (6)));
	LINE_NUMBER(555);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp6 = jint(4);
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp6) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (7)));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp7 = 6;
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp7) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (8)));
	LINE_NUMBER(557);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp8 = 8;
	sp[1].o = (jobject)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_cachedFields;
	ARRAY_ACCESS(jint, sp[0].o, temp8) = ((jint)ARRAY_ACCESS(jint, sp[1].o, (9)));
	}
label_6:;
	LINE_NUMBER(559);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_GregorianCalendar_fullFieldsCalc_long_int_int(jcontext ctx, jobject self, jlong param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:fullFieldsCalc", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(562);
	frame[5].l = ((frame[1].l) / (jlong(86400000ll)));
	LINE_NUMBER(564);
	if ((frame[3].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(565);
	frame[3].i = ((frame[3].i) + (jint(86400000)));
	LINE_NUMBER(566);
	frame[5].l = ((frame[5].l) - (jlong(1)));
	}
label_2:;
	{
	LINE_NUMBER(569);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	}
label_5:;
	{
	LINE_NUMBER(570);
	if ((frame[3].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(571);
	frame[3].i = ((frame[3].i) + (jint(86400000)));
	LINE_NUMBER(572);
	frame[5].l = ((frame[5].l) - (jlong(1)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(574);
	if ((frame[3].i) < (jint(86400000))) goto label_9;
	}
	{
	LINE_NUMBER(575);
	frame[3].i = ((frame[3].i) - (jint(86400000)));
	LINE_NUMBER(576);
	frame[5].l = ((frame[5].l) + (jlong(1)));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(579);
	jint temp0 = (jint)M_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int(ctx, (frame[0].o), (frame[5].l), ((frame[1].l) + (jlong((frame[4].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(580);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (frame[7].i);
	LINE_NUMBER(581);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) != ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear)) goto label_14;
	}
	{
	if ((longCompare(((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover), ((frame[1].l) + (jlong((frame[4].i)))))) > 0) goto label_14;
	}
	{
	LINE_NUMBER(582);
	frame[7].i = ((frame[7].i) + ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_currentYearSkew));
	}
label_14:;
	{
	LINE_NUMBER(584);
	frame[8].i = ((frame[7].i) / (32));
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	frame[9].i = temp0;
	LINE_NUMBER(586);
	jint temp1 = frame[7].i;
	jint temp2 = (jint)M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	frame[10].i = (temp1 - temp2);
	LINE_NUMBER(587);
	jint temp3 = frame[10].i;
	jint temp4 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	if (temp3 <= temp4) goto label_19;
	}
	{
	LINE_NUMBER(588);
	jint temp0 = frame[10].i;
	jint temp1 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	frame[10].i = (temp0 - temp1);
	LINE_NUMBER(589);
	INST_IINC(8, 1);
	}
label_19:;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = 7;
	jint temp1 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, (frame[0].o), ((frame[5].l) - (jlong(3ll))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + (jint(1)));
	LINE_NUMBER(598);
	frame[11].i = (jint(0));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[0].o));
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[1].o, (frame[1].l));
	jint temp2 = (jint)((func_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_24;
	}
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_TimeZone_getDSTSavings_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_getDSTSavings_R_int])(ctx, sp[0].o);
	frame[11].i = temp0;
	}
label_24:;
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (frame[11].i);
	LINE_NUMBER(604);
	if ((frame[11].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(605);
	frame[12].l = (frame[5].l);
	LINE_NUMBER(606);
	frame[3].i = ((frame[3].i) + (frame[11].i));
	LINE_NUMBER(607);
	if ((frame[3].i) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(608);
	frame[3].i = ((frame[3].i) + (jint(86400000)));
	LINE_NUMBER(609);
	frame[5].l = ((frame[5].l) - (jlong(1)));
	goto label_34;
	}
label_31:;
	{
	LINE_NUMBER(610);
	if ((frame[3].i) < (jint(86400000))) goto label_34;
	}
	{
	LINE_NUMBER(611);
	frame[3].i = ((frame[3].i) - (jint(86400000)));
	LINE_NUMBER(612);
	frame[5].l = ((frame[5].l) + (jlong(1)));
	}
label_34:;
	{
	LINE_NUMBER(614);
	if ((longCompare((frame[12].l), (frame[5].l))) == 0) goto label_27;
	}
	{
	LINE_NUMBER(615);
	jint temp0 = (jint)M_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int(ctx, (frame[0].o), (frame[5].l), (((frame[1].l) - (jlong((frame[4].i)))) + (jlong((frame[11].i)))));
	frame[7].i = temp0;
	LINE_NUMBER(617);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (frame[7].i);
	LINE_NUMBER(618);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) != ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear)) goto label_40;
	}
	{
	if ((longCompare(((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover), (((frame[1].l) - (jlong((frame[4].i)))) + (jlong((frame[11].i)))))) > 0) goto label_40;
	}
	{
	LINE_NUMBER(619);
	frame[7].i = ((frame[7].i) + ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_currentYearSkew));
	}
label_40:;
	{
	LINE_NUMBER(621);
	frame[8].i = ((frame[7].i) / (32));
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1)))));
	frame[9].i = temp0;
	LINE_NUMBER(623);
	jint temp1 = frame[7].i;
	jint temp2 = (jint)M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	frame[10].i = (temp1 - temp2);
	LINE_NUMBER(624);
	jint temp3 = frame[10].i;
	jint temp4 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	if (temp3 <= temp4) goto label_45;
	}
	{
	LINE_NUMBER(625);
	jint temp0 = frame[10].i;
	jint temp1 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[9].i), (frame[8].i));
	frame[10].i = (temp0 - temp1);
	LINE_NUMBER(626);
	INST_IINC(8, 1);
	}
label_45:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = 7;
	jint temp1 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, (frame[0].o), ((frame[5].l) - (jlong(3ll))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 + (jint(1)));
	}
label_27:;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (14)) = ((frame[3].i) % (1000));
	LINE_NUMBER(633);
	frame[3].i = ((frame[3].i) / (1000));
	LINE_NUMBER(634);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (13)) = ((frame[3].i) % (60));
	LINE_NUMBER(635);
	frame[3].i = ((frame[3].i) / (60));
	LINE_NUMBER(636);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (12)) = ((frame[3].i) % (60));
	LINE_NUMBER(637);
	frame[3].i = ((frame[3].i) / (60));
	LINE_NUMBER(638);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (11)) = ((frame[3].i) % (24));
	LINE_NUMBER(639);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = 9;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)ARRAY_ACCESS(jint, temp1, (11))) <= (11)) goto label_55;
	}
	INST_ICONST(1);
	goto label_56;
label_55:;
	INST_ICONST(0);
label_56:;
	{
	sp -= 3;
	ARRAY_ACCESS(jint, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(640);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = 10;
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[1].o, (11))) % (12));
	LINE_NUMBER(642);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1)))) > 0) goto label_59;
	}
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((-((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))))) + (jint(1)));
	goto label_62;
	}
label_59:;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	}
label_62:;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (frame[8].i);
	LINE_NUMBER(649);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (frame[10].i);
	LINE_NUMBER(650);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (8)) = ((((frame[10].i) - (jint(1))) / (7)) + (jint(1)));
	LINE_NUMBER(651);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = jint(4);
	jint temp1 = (frame[10].i) - (jint(1));
	sp[1].o = frame[0].o;
	jlong temp2 = ((frame[5].l) - (jlong((frame[10].i)))) - (jlong(2ll));
	sp[2].o = frame[0].o;
	LINE_NUMBER(652);
	jint temp3 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, sp[2].o);
	jlong temp4 = temp2 - (jlong((temp3 - (jint(1)))));
	LINE_NUMBER(651);
	jint temp5 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[1].o, temp4);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((temp1 + temp5) / (7)) + (jint(1)));
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	jlong temp6 = (frame[5].l) - (jlong(3ll));
	sp[1].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jlong temp7 = temp6 - (jlong((((jint)ARRAY_ACCESS(jint, sp[1].o, (6))) - (jint(1)))));
	sp[1].o = frame[0].o;
	LINE_NUMBER(654);
	jint temp8 = (jint)((func_java_util_GregorianCalendar_getFirstDayOfWeek_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_GregorianCalendar_getFirstDayOfWeek_R_int])(ctx, sp[1].o);
	jlong temp9 = temp7 - (jlong((temp8 - (jint(1)))));
	LINE_NUMBER(653);
	jint temp10 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[0].o, temp9);
	frame[12].i = temp10;
	LINE_NUMBER(655);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp11 = ((((jint)ARRAY_ACCESS(jint, sp[0].o, (6))) - (jint(1))) + (frame[12].i)) / (7);
	LINE_NUMBER(656);
	jint temp12 = (7) - (frame[12].i);
	jint temp13 = (jint)((func_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int])(ctx, (frame[0].o));
	sp[0].i = temp11;
	sp += 1;
	if (temp12 < temp13) goto label_73;
	}
	INST_ICONST(1);
	goto label_74;
label_73:;
	INST_ICONST(0);
label_74:;
	{
	sp -= 2;
	frame[13].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(657);
	if ((frame[13].i) != 0) goto label_76;
	}
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = jint(3);
	LINE_NUMBER(659);
	jint temp1 = 7;
	sp[1].o = frame[0].o;
	jint temp2 = frame[12].i;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp3 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, sp[2].o, (((jint)ARRAY_ACCESS(jint, sp[3].o, (jint(1)))) - (jint(1))));
	jobject temp4 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].o = temp4;
	sp[4].i = temp2;
	sp += 5;
	if (temp3 == 0) goto label_79;
	}
	INST_ICONST(2);
	goto label_80;
label_79:;
	INST_ICONST(1);
label_80:;
	{
	sp -= 4;
	jlong temp0 = jlong((sp[2].i - sp[3].i));
	LINE_NUMBER(658);
	jint temp1 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[1].o, temp0);
	jint temp2 = sp[0].i - temp1;
	sp[0].o = frame[0].o;
	LINE_NUMBER(659);
	jint temp3 = (jint)((func_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int])(ctx, sp[0].o);
	if (temp2 < temp3) goto label_83;
	}
	INST_BIPUSH(53);
	goto label_84;
label_83:;
	LINE_NUMBER(660);
	INST_BIPUSH(52);
label_84:;
	INST_IASTORE();
	goto label_85;
label_76:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (6));
	sp[0].i = temp0;
	sp += 1;
	if ((frame[9].i) == 0) goto label_86;
	}
	INST_SIPUSH(367);
	goto label_87;
label_86:;
	INST_SIPUSH(366);
label_87:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[12].i;
	LINE_NUMBER(662);
	sp[1].i = temp0;
	sp += 2;
	if ((frame[9].i) == 0) goto label_89;
	}
	INST_ICONST(2);
	goto label_90;
label_89:;
	INST_ICONST(1);
label_90:;
	{
	sp -= 5;
	jint temp0 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[2].o, (jlong((sp[3].i + sp[4].i))));
	if (sp[0].i < (sp[1].i - temp0)) goto label_91;
	}
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	jint temp0 = jint(3);
	jint temp1 = 7;
	sp[1].o = frame[0].o;
	jint temp2 = frame[12].i;
	jobject temp3 = sp[1].o;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].o = temp3;
	sp[4].i = temp2;
	sp += 5;
	if ((frame[9].i) == 0) goto label_93;
	}
	INST_ICONST(2);
	goto label_94;
label_93:;
	INST_ICONST(1);
label_94:;
	{
	sp -= 4;
	jint temp0 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, sp[1].o, (jlong((sp[2].i + sp[3].i))));
	jint temp1 = sp[0].i - temp0;
	jint temp2 = (jint)((func_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getMinimalDaysInFirstWeek_R_int])(ctx, (frame[0].o));
	if (temp1 < temp2) goto label_95;
	}
	INST_ICONST(1);
	goto label_96;
label_95:;
	LINE_NUMBER(664);
	INST_ILOAD(13);
label_96:;
	INST_IASTORE();
	goto label_85;
label_91:;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (frame[13].i);
	}
label_85:;
	LINE_NUMBER(668);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_GregorianCalendar_isLenient_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:isLenient", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(671);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jlong M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:daysFromBaseYear", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(675);
	frame[2].l = (jlong((frame[1].i)));
	LINE_NUMBER(677);
	if ((longCompare((frame[2].l), (jlong(1970ll)))) < 0) goto label_2;
	}
	{
	LINE_NUMBER(678);
	frame[4].l = ((((frame[2].l) - (jlong(1970ll))) * (jlong(365ll))) + (((frame[2].l) - (jlong(1969ll))) / (jlong(4ll))));
	LINE_NUMBER(679);
	if ((longCompare((frame[2].l), (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear))))) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(680);
	frame[4].l = ((frame[4].l) - ((((frame[2].l) - (jlong(1901ll))) / (jlong(100ll))) - (((frame[2].l) - (jlong(1601ll))) / (jlong(400ll)))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(682);
	if ((longCompare((frame[2].l), (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear))))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(683);
	frame[4].l = ((frame[4].l) + (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_currentYearSkew))));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(684);
	if ((longCompare((frame[2].l), (jlong((((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear) - (jint(1))))))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(685);
	frame[4].l = ((frame[4].l) + (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_lastYearSkew))));
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(687);
	frame[4].l = ((frame[4].l) + (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_julianSkew))));
	}
label_7:;
	{
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (frame[4].l);
	}
label_2:;
	{
	LINE_NUMBER(691);
	if ((longCompare((frame[2].l), (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear))))) > 0) goto label_12;
	}
	{
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return (((((frame[2].l) - (jlong(1970ll))) * (jlong(365ll))) + (((frame[2].l) - (jlong(1972ll))) / (jlong(4ll)))) + (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_julianSkew))));
	}
label_12:;
	{
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return ((((((frame[2].l) - (jlong(1970ll))) * (jlong(365ll))) + (((frame[2].l) - (jlong(1972ll))) / (jlong(4ll)))) - (((frame[2].l) - (jlong(2000ll))) / (jlong(100ll)))) + (((frame[2].l) - (jlong(2000ll))) / (jlong(400ll))));
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_mod_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:mod", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(699);
	frame[3].i = ((frame[1].i) % (frame[2].i));
	LINE_NUMBER(700);
	if ((frame[1].i) >= 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_2;
	{
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return ((frame[3].i) + (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_mod7_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:mod7", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(707);
	frame[3].i = (jint(((frame[1].l) % (jlong(7ll)))));
	LINE_NUMBER(708);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_2;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_2;
	{
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return ((frame[3].i) + (7));
	}
label_2:;
	{
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:computeYearAndDay", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(715);
	frame[5].i = (1970);
	LINE_NUMBER(716);
	frame[6].l = (frame[1].l);
	LINE_NUMBER(717);
	if ((longCompare((frame[3].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover))) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(718);
	frame[6].l = ((frame[6].l) - (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_julianSkew))));
	}
label_3:;
	{
	LINE_NUMBER(722);
	jint temp0 = jint(((frame[6].l) / (jlong(365ll))));
	frame[8].i = temp0;
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(723);
	frame[5].i = ((frame[5].i) + (frame[8].i));
	LINE_NUMBER(724);
	jlong temp0 = frame[1].l;
	jlong temp1 = (jlong)M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long(ctx, (frame[0].o), (frame[5].i));
	frame[6].l = (temp0 - temp1);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(726);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(727);
	frame[5].i = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(728);
	jlong temp0 = frame[6].l;
	jint temp1 = (jint)M_java_util_GregorianCalendar_daysInYear_int_R_int(ctx, (frame[0].o), (frame[5].i));
	frame[6].l = (temp0 + (jlong(temp1)));
	}
label_9:;
	{
	LINE_NUMBER(730);
	sp[0].o = (jobject)((java_util_Calendar *) NULL_CHECK((frame[0].o)))->F_fields;
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[5].i);
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return ((jint((frame[6].l))) + (jint(1)));
	}

	popStackFrame(ctx);
}

jint M_java_util_GregorianCalendar_getOffset_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:getOffset", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_getTimeZone_R_java_util_TimeZone])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(736);
	jint temp0 = (jint)((func_java_util_TimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TimeZone_useDaylightTime_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(737);
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(740);
	frame[4].l = ((frame[1].l) / (jlong(86400000ll)));
	LINE_NUMBER(741);
	frame[6].i = (jint(((frame[1].l) % (jlong(86400000ll)))));
	LINE_NUMBER(742);
	if ((frame[6].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(743);
	frame[6].i = ((frame[6].i) + (jint(86400000)));
	LINE_NUMBER(744);
	frame[4].l = ((frame[4].l) - (jlong(1)));
	}
label_6:;
	{
	LINE_NUMBER(747);
	frame[7].i = (1970);
	LINE_NUMBER(748);
	frame[8].l = (frame[4].l);
	LINE_NUMBER(749);
	if ((longCompare((frame[1].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(750);
	frame[8].l = ((frame[8].l) - (jlong(((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_julianSkew))));
	}
label_11:;
	{
	LINE_NUMBER(754);
	jint temp0 = jint(((frame[8].l) / (jlong(365ll))));
	frame[10].i = temp0;
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(755);
	frame[7].i = ((frame[7].i) + (frame[10].i));
	LINE_NUMBER(756);
	jlong temp0 = frame[4].l;
	jlong temp1 = (jlong)M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long(ctx, (frame[0].o), (frame[7].i));
	frame[8].l = (temp0 - temp1);
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(758);
	if ((longCompare((frame[8].l), (jlong(0)))) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(759);
	frame[7].i = ((frame[7].i) - (jint(1)));
	LINE_NUMBER(760);
	jlong temp0 = (frame[8].l) + (jlong(365ll));
	jint temp1 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, (frame[0].o), (frame[7].i));
	sp[0].l = temp0;
	sp += 1;
	if (temp1 == 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 2;
	frame[8].l = (sp[0].l + (jlong(sp[1].i)));
	LINE_NUMBER(761);
	if ((frame[7].i) != ((jint)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_changeYear)) goto label_17;
	}
	{
	if ((longCompare((frame[1].l), ((jlong)((java_util_GregorianCalendar *) NULL_CHECK((frame[0].o)))->F_gregorianCutover))) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(762);
	jlong temp0 = frame[8].l;
	jint temp1 = (jint)M_java_util_GregorianCalendar_julianError_R_int(ctx, (frame[0].o));
	frame[8].l = (temp0 - (jlong(temp1)));
	}
label_17:;
	{
	LINE_NUMBER(765);
	if ((frame[7].i) > 0) goto label_24;
	}
	{
	LINE_NUMBER(766);
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_24:;
	{
	LINE_NUMBER(768);
	frame[11].i = ((jint((frame[8].l))) + (jint(1)));
	LINE_NUMBER(770);
	frame[12].i = ((frame[11].i) / (32));
	LINE_NUMBER(771);
	jint temp0 = (jint)((func_java_util_GregorianCalendar_isLeapYear_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean])(ctx, (frame[0].o), (frame[7].i));
	frame[13].i = temp0;
	LINE_NUMBER(772);
	jint temp1 = frame[11].i;
	jint temp2 = (jint)M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int(ctx, (frame[0].o), (frame[13].i), (frame[12].i));
	frame[14].i = (temp1 - temp2);
	LINE_NUMBER(773);
	jint temp3 = frame[14].i;
	jint temp4 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[13].i), (frame[12].i));
	if (temp3 <= temp4) goto label_30;
	}
	{
	LINE_NUMBER(774);
	jint temp0 = frame[14].i;
	jint temp1 = (jint)M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int(ctx, (frame[0].o), (frame[13].i), (frame[12].i));
	frame[14].i = (temp0 - temp1);
	LINE_NUMBER(775);
	INST_IINC(12, 1);
	}
label_30:;
	{
	LINE_NUMBER(777);
	jint temp0 = (jint)M_java_util_GregorianCalendar_mod7_long_R_int(ctx, (frame[0].o), ((frame[4].l) - (jlong(3ll))));
	frame[15].i = (temp0 + (jint(1)));
	LINE_NUMBER(778);
	jint temp1 = (jint)((func_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int])(ctx, (frame[3].o), (jint(1)), (frame[7].i), (frame[12].i), (frame[14].i), (frame[15].i), (frame[6].i));
	frame[16].i = temp1;
	LINE_NUMBER(780);
	popStackFrame(ctx);
	return (frame[16].i);
	}

	popStackFrame(ctx);
}

void clinit_java_util_GregorianCalendar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Calendar(ctx);
	SF_java_util_GregorianCalendar_BC = jint(0);
	SF_java_util_GregorianCalendar_AD = jint(1);
	SF_java_util_GregorianCalendar_defaultGregorianCutover = jlong(-12219292800000ll);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/GregorianCalendar:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_GregorianCalendar(ctx);
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (12));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (28);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (31);
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (30);
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (31);
	clinit_java_util_GregorianCalendar(ctx);
	SF_java_util_GregorianCalendar_DaysInMonth = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject) createArray(ctx, &class_int, (12));
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
	clinit_java_util_GregorianCalendar(ctx);
	SF_java_util_GregorianCalendar_DaysInYear = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(292278994));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (53);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (31);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (366);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (23);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (59);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (59);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (999);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(50400000));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(7200000));
	clinit_java_util_GregorianCalendar(ctx);
	SF_java_util_GregorianCalendar_maximums = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(-46800000));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(0));
	clinit_java_util_GregorianCalendar(ctx);
	SF_java_util_GregorianCalendar_minimums = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(292269054));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (50);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (28);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (355);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (23);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (59);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (59);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (999);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(50400000));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(1200000));
	clinit_java_util_GregorianCalendar(ctx);
	SF_java_util_GregorianCalendar_leastMaximums = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_GregorianCalendar[] {
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
	(void *) M_java_util_GregorianCalendar_computeFields,
	(void *) M_java_util_GregorianCalendar_computeTime,
	(void *) M_java_util_Calendar_get_int_R_int,
	(void *) M_java_util_Calendar_complete,
	(void *) M_java_util_Calendar_getTime_R_java_util_Date,
	(void *) M_java_util_Calendar_getTimeInMillis_R_long,
	(void *) M_java_util_Calendar_getTimeZone_R_java_util_TimeZone,
	(void *) M_java_util_Calendar_set_int_int,
	(void *) M_java_util_Calendar_add_int_int,
	(void *) M_java_util_GregorianCalendar_addImpl_int_int,
	(void *) M_java_util_Calendar_setTime_java_util_Date,
	(void *) M_java_util_Calendar_setTimeInMillis_long,
	(void *) M_java_util_Calendar_setTimeZone_java_util_TimeZone,
	(void *) M_java_util_Calendar_getFirstDayOfWeek_R_int,
	(void *) M_java_util_Calendar_getMinimalDaysInFirstWeek_R_int,
	(void *) M_java_util_GregorianCalendar_julianError_R_int,
	(void *) M_java_util_GregorianCalendar_daysInMonth_R_int,
	(void *) M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int,
	(void *) M_java_util_GregorianCalendar_daysInYear_int_R_int,
	(void *) M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int,
	(void *) M_java_util_GregorianCalendar_isLeapYear_int_R_boolean,
	(void *) M_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int,
	(void *) M_java_util_GregorianCalendar_fullFieldsCalc_long_int_int,
	(void *) M_java_util_GregorianCalendar_isLenient_R_boolean,
	(void *) M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long,
	(void *) M_java_util_GregorianCalendar_mod_int_int_R_int,
	(void *) M_java_util_GregorianCalendar_mod7_long_R_int,
	(void *) M_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int,
	(void *) M_java_util_GregorianCalendar_getOffset_long_R_int,
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
	{ "julianError", "()I" },
	{ "daysInMonth", "()I" },
	{ "daysInMonth", "(ZI)I" },
	{ "daysInYear", "(I)I" },
	{ "daysInYear", "(ZI)I" },
	{ "isLeapYear", "(I)Z" },
	{ "cachedFieldsCheckAndGet", "(JJJII)V" },
	{ "fullFieldsCalc", "(JII)V" },
	{ "isLenient", "()Z" },
	{ "daysFromBaseYear", "(I)J" },
	{ "mod", "(II)I" },
	{ "mod7", "(J)I" },
	{ "computeYearAndDay", "(JJ)I" },
	{ "getOffset", "(J)I" },
};

static FieldMetadata fields[] {
	{ "BC", &class_int, (intptr_t) &SF_java_util_GregorianCalendar_BC, "I", 25 },
	{ "AD", &class_int, (intptr_t) &SF_java_util_GregorianCalendar_AD, "I", 25 },
	{ "defaultGregorianCutover", &class_long, (intptr_t) &SF_java_util_GregorianCalendar_defaultGregorianCutover, "J", 26 },
	{ "gregorianCutover", &class_long, offsetof(java_util_GregorianCalendar, F_gregorianCutover), "J", 2 },
	{ "changeYear", &class_int, offsetof(java_util_GregorianCalendar, F_changeYear), "I", 130 },
	{ "julianSkew", &class_int, offsetof(java_util_GregorianCalendar, F_julianSkew), "I", 130 },
	{ "DaysInMonth", getArrayClass(&class_byte, 1), (intptr_t) &SF_java_util_GregorianCalendar_DaysInMonth, "[B", 8 },
	{ "DaysInYear", getArrayClass(&class_int, 1), (intptr_t) &SF_java_util_GregorianCalendar_DaysInYear, "[I", 10 },
	{ "maximums", getArrayClass(&class_int, 1), (intptr_t) &SF_java_util_GregorianCalendar_maximums, "[I", 10 },
	{ "minimums", getArrayClass(&class_int, 1), (intptr_t) &SF_java_util_GregorianCalendar_minimums, "[I", 10 },
	{ "leastMaximums", getArrayClass(&class_int, 1), (intptr_t) &SF_java_util_GregorianCalendar_leastMaximums, "[I", 10 },
	{ "isCached", &class_boolean, offsetof(java_util_GregorianCalendar, F_isCached), "Z", 2 },
	{ "cachedFields", getArrayClass(&class_int, 1), offsetof(java_util_GregorianCalendar, F_cachedFields), "[I", 2 },
	{ "nextMidnightMillis", &class_long, offsetof(java_util_GregorianCalendar, F_nextMidnightMillis), "J", 2 },
	{ "lastMidnightMillis", &class_long, offsetof(java_util_GregorianCalendar, F_lastMidnightMillis), "J", 2 },
	{ "currentYearSkew", &class_int, offsetof(java_util_GregorianCalendar, F_currentYearSkew), "I", 2 },
	{ "lastYearSkew", &class_int, offsetof(java_util_GregorianCalendar, F_lastYearSkew), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_GregorianCalendar, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_GregorianCalendar_java_util_TimeZone, 0, "(Ljava/util/TimeZone;)V", 1 },
	{ "computeFields", (intptr_t) M_java_util_GregorianCalendar_computeFields, VTABLE_java_util_GregorianCalendar_computeFields, "()V", 4 },
	{ "computeTime", (intptr_t) M_java_util_GregorianCalendar_computeTime, VTABLE_java_util_GregorianCalendar_computeTime, "()V", 4 },
	{ "addImpl", (intptr_t) M_java_util_GregorianCalendar_addImpl_int_int, VTABLE_java_util_GregorianCalendar_addImpl_int_int, "(II)V", 0 },
	{ "julianError", (intptr_t) M_java_util_GregorianCalendar_julianError_R_int, VTABLE_java_util_GregorianCalendar_julianError_R_int, "()I", 2 },
	{ "daysInMonth", (intptr_t) M_java_util_GregorianCalendar_daysInMonth_R_int, VTABLE_java_util_GregorianCalendar_daysInMonth_R_int, "()I", 2 },
	{ "daysInMonth", (intptr_t) M_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int, VTABLE_java_util_GregorianCalendar_daysInMonth_boolean_int_R_int, "(ZI)I", 2 },
	{ "daysInYear", (intptr_t) M_java_util_GregorianCalendar_daysInYear_int_R_int, VTABLE_java_util_GregorianCalendar_daysInYear_int_R_int, "(I)I", 2 },
	{ "daysInYear", (intptr_t) M_java_util_GregorianCalendar_daysInYear_boolean_int_R_int, VTABLE_java_util_GregorianCalendar_daysInYear_boolean_int_R_int, "(ZI)I", 2 },
	{ "isLeapYear", (intptr_t) M_java_util_GregorianCalendar_isLeapYear_int_R_boolean, VTABLE_java_util_GregorianCalendar_isLeapYear_int_R_boolean, "(I)Z", 1 },
	{ "cachedFieldsCheckAndGet", (intptr_t) M_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int, VTABLE_java_util_GregorianCalendar_cachedFieldsCheckAndGet_long_long_long_int_int, "(JJJII)V", 18 },
	{ "fullFieldsCalc", (intptr_t) M_java_util_GregorianCalendar_fullFieldsCalc_long_int_int, VTABLE_java_util_GregorianCalendar_fullFieldsCalc_long_int_int, "(JII)V", 18 },
	{ "isLenient", (intptr_t) M_java_util_GregorianCalendar_isLenient_R_boolean, VTABLE_java_util_GregorianCalendar_isLenient_R_boolean, "()Z", 0 },
	{ "daysFromBaseYear", (intptr_t) M_java_util_GregorianCalendar_daysFromBaseYear_int_R_long, VTABLE_java_util_GregorianCalendar_daysFromBaseYear_int_R_long, "(I)J", 2 },
	{ "mod", (intptr_t) M_java_util_GregorianCalendar_mod_int_int_R_int, VTABLE_java_util_GregorianCalendar_mod_int_int_R_int, "(II)I", 2 },
	{ "mod7", (intptr_t) M_java_util_GregorianCalendar_mod7_long_R_int, VTABLE_java_util_GregorianCalendar_mod7_long_R_int, "(J)I", 2 },
	{ "computeYearAndDay", (intptr_t) M_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int, VTABLE_java_util_GregorianCalendar_computeYearAndDay_long_long_R_int, "(JJ)I", 2 },
	{ "getOffset", (intptr_t) M_java_util_GregorianCalendar_getOffset_long_R_int, VTABLE_java_util_GregorianCalendar_getOffset_long_R_int, "(J)I", 2 },
	{ "<clinit>", (intptr_t) clinit_java_util_GregorianCalendar, 0, "()V", 8 },
};

Class class_java_util_GregorianCalendar{
		.nativeName = (intptr_t) "java/util/GregorianCalendar",
		.parentClass = (intptr_t) &class_java_util_Calendar,
		.size = sizeof(java_util_GregorianCalendar),
		.classVtable = (intptr_t) vtable_java_util_GregorianCalendar,
		.staticInitializer = (intptr_t) clinit_java_util_GregorianCalendar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_GregorianCalendar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_GregorianCalendar = registerClass(&class_java_util_GregorianCalendar);

}
