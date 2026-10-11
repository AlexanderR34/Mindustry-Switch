#include "java/text/DateFormatSymbols.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Hashtable.h"
#include "java/lang/String.h"
#include "java/lang/Cloneable.h"
#include "java/text/DateFormatSymbols.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/TimeZone.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_java_text_DateFormatSymbols_ZONE_ID;
jint SF_java_text_DateFormatSymbols_ZONE_LONGNAME;
jint SF_java_text_DateFormatSymbols_ZONE_SHORTNAME;
jint SF_java_text_DateFormatSymbols_ZONE_LONGNAME_DST;
jint SF_java_text_DateFormatSymbols_ZONE_SHORTNAME_DST;
jobject SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME;
jobject SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME;
jobject SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME_DST;
jobject SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME_DST;
jobject SF_java_text_DateFormatSymbols_L10N_WEEKDAY_LONGNAME;
jobject SF_java_text_DateFormatSymbols_L10N_WEEKDAY_SHORTNAME;
jobject SF_java_text_DateFormatSymbols_L10N_MONTH_LONGNAME;
jobject SF_java_text_DateFormatSymbols_L10N_MONTH_SHORTNAME;
jobject SF_java_text_DateFormatSymbols_L10N_AMPM;
jobject SF_java_text_DateFormatSymbols_L10N_ERA;
jobject SF_java_text_DateFormatSymbols_MONTHS;
jobject SF_java_text_DateFormatSymbols_WEEKDAYS;
jobject SF_java_text_DateFormatSymbols_AMPMS;
jobject SF_java_text_DateFormatSymbols_ERAS;

void mark_java_text_DateFormatSymbols(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME_DST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME_DST)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME_DST, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME_DST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME_DST)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME_DST, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_WEEKDAY_LONGNAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_WEEKDAY_LONGNAME)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_WEEKDAY_LONGNAME, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_WEEKDAY_SHORTNAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_WEEKDAY_SHORTNAME)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_WEEKDAY_SHORTNAME, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_MONTH_LONGNAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_MONTH_LONGNAME)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_MONTH_LONGNAME, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_MONTH_SHORTNAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_MONTH_SHORTNAME)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_MONTH_SHORTNAME, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_AMPM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_AMPM)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_AMPM, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_L10N_ERA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_L10N_ERA)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_L10N_ERA, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_MONTHS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_MONTHS)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_MONTHS, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_WEEKDAYS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_WEEKDAYS)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_WEEKDAYS, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_AMPMS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_AMPMS)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_AMPMS, mark, depth + 1);
		if (SF_java_text_DateFormatSymbols_ERAS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_text_DateFormatSymbols_ERAS)->clazz)->markFunction)((jobject) SF_java_text_DateFormatSymbols_ERAS, mark, depth + 1);
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
	auto self = (java_text_DateFormatSymbols *) object;
	if (self->F_resourceBundle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resourceBundle)->clazz)->markFunction)((jobject) self->F_resourceBundle, mark, depth + 1);
	if (self->F_ampms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ampms)->clazz)->markFunction)((jobject) self->F_ampms, mark, depth + 1);
	if (self->F_months)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_months)->clazz)->markFunction)((jobject) self->F_months, mark, depth + 1);
	if (self->F_zoneStrings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_zoneStrings)->clazz)->markFunction)((jobject) self->F_zoneStrings, mark, depth + 1);
	if (self->F_shortMonths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shortMonths)->clazz)->markFunction)((jobject) self->F_shortMonths, mark, depth + 1);
	if (self->F_weekdays)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weekdays)->clazz)->markFunction)((jobject) self->F_weekdays, mark, depth + 1);
	if (self->F_shortWeekdays)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shortWeekdays)->clazz)->markFunction)((jobject) self->F_shortWeekdays, mark, depth + 1);
	if (self->F_eras)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eras)->clazz)->markFunction)((jobject) self->F_eras, mark, depth + 1);
}

void init_java_text_DateFormatSymbols(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormatSymbols(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getAmPmStrings", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_ampms;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_10
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(68);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_AMPMS;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"AMPM_AM"_j));
	clinit_java_text_DateFormatSymbols(ctx);
	sp[3].o = (jobject)SF_java_text_DateFormatSymbols_AMPMS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(0)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = frame[2].o;
	jint temp1 = jint(1);
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"AMPM_PM"_j));
	clinit_java_text_DateFormatSymbols(ctx);
	sp[3].o = (jobject)SF_java_text_DateFormatSymbols_AMPMS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(73);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_ampms = (jref) (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(75);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_16:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_ampms;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setAmPmStrings_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setAmPmStrings", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(81);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expecting array size of 2"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(83);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_ampms = (jref) (frame[1].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getResourceBundle_R_java_util_Hashtable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getResourceBundle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setResourceBundle_java_util_Hashtable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setResourceBundle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle = (jref) (frame[1].o);
	LINE_NUMBER(93);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_ampms = (jref) (jobject(nullptr));
	LINE_NUMBER(94);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_months = (jref) (jobject(nullptr));
	LINE_NUMBER(95);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_zoneStrings = (jref) (jobject(nullptr));
	LINE_NUMBER(96);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortMonths = (jref) (jobject(nullptr));
	LINE_NUMBER(97);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_weekdays = (jref) (jobject(nullptr));
	LINE_NUMBER(98);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortWeekdays = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_eras = (jref) (jobject(nullptr));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getLocalizedValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getResourceBundle_R_java_util_Hashtable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_DateFormatSymbols_getResourceBundle_R_java_util_Hashtable])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(104);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_util_Hashtable_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Hashtable_containsKey_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 <= 0) goto label_5;
	}
	INST_ALOAD(4);
	goto label_6;
label_5:;
	INST_ALOAD(2);
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getZoneStrings", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_zoneStrings;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)SM_java_util_TimeZone_getAvailableIDs_R_Array1_java_lang_String(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)createMultiArray(ctx, &class_java_lang_String, {(((jarray) nullCheck(ctx, (frame[2].o)))->length), (jint(5))});
	frame[3].o = sp[0].o;
	LINE_NUMBER(116);
	frame[4].i = (jint(0));
	}
label_11:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_12;
	}
	{
	LINE_NUMBER(117);
	ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (jint(0))) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	jint temp0 = jint(1);
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"ZONE_LONGNAME_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	jint temp1 = jint(2);
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"ZONE_SHORTNAME_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	jint temp2 = jint(3);
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"ZONE_LONGNAME_DST_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i));
	jint temp3 = jint(4);
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"ZONE_SHORTNAME_DST_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[5].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	LINE_NUMBER(116);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(124);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_zoneStrings = (jref) (frame[3].o);
	}
label_7:;
	{
	LINE_NUMBER(126);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_20:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_zoneStrings;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setZoneStrings_Array2_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setZoneStrings", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(132);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_1;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(133);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) >= (jint(5))) goto label_5;
	}
	{
	LINE_NUMBER(134);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expecting inner array size of 5"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(132);
	INST_IINC(4, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(138);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_zoneStrings = (jref) (frame[1].o);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setShortWeekdays_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setShortWeekdays", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (7)) goto label_1;
	}
	{
	LINE_NUMBER(143);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expecting array size of 7"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(145);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortWeekdays = (jref) (frame[1].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:createShortforms", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(150);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(152);
	if ((frame[5].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(153);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = (frame[5].o);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(156);
	if ((frame[6].i) >= (jint(3))) goto label_10;
	}
	{
	LINE_NUMBER(157);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)));
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i))), (jint(0)), (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(150);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getShortWeekdays", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortWeekdays;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"WEEKDAY_SHORTNAME_"_j))));
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_shortWeekdays = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(171);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortWeekdays;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getWeekdays", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_weekdays;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_10
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(179);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_WEEKDAYS;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	LINE_NUMBER(181);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_WEEKDAYS;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(182);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[3].i;
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_WEEKDAYS;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(183);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_WEEKDAYS;
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(184);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"WEEKDAY_LONGNAME_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[4].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[3].o = (jobject)SF_java_text_DateFormatSymbols_WEEKDAYS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(182);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(186);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_weekdays = (jref) (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(188);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_19:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_weekdays;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setWeekdays_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setWeekdays", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(193);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (7)) goto label_1;
	}
	{
	LINE_NUMBER(194);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expecting array size of 7"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(196);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_weekdays = (jref) (frame[1].o);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setShortMonths_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setShortMonths", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (12)) goto label_1;
	}
	{
	LINE_NUMBER(201);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expecting array size of 12"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(203);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortMonths = (jref) (frame[1].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getShortMonths", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortMonths;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_java_text_DateFormatSymbols(ctx);
	sp[2].o = (jobject)SF_java_text_DateFormatSymbols_MONTHS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"MONTH_SHORTNAME_"_j))));
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_shortMonths = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(211);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_9;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_9:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortMonths;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setMonths_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setMonths", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (12)) goto label_1;
	}
	{
	LINE_NUMBER(217);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Expecting array size of 12"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(219);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_months = (jref) (frame[1].o);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getMonths", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_months;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_10
	}
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(226);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_MONTHS;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	LINE_NUMBER(228);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_MONTHS;
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(229);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[3].i;
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_MONTHS;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(230);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_MONTHS;
	sp[0].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(231);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"MONTH_LONGNAME_"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[4].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[3].o = (jobject)SF_java_text_DateFormatSymbols_MONTHS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(229);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(233);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_months = (jref) (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(235);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_19;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_19:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_months;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_getEras_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:getEras", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_eras;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_10
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(243);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = (jobject)SF_java_text_DateFormatSymbols_ERAS;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_10; }
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ERA_BC"_j));
	clinit_java_text_DateFormatSymbols(ctx);
	sp[3].o = (jobject)SF_java_text_DateFormatSymbols_ERAS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(0)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(247);
	sp[0].o = frame[2].o;
	jint temp1 = jint(1);
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ERA_AD"_j));
	clinit_java_text_DateFormatSymbols(ctx);
	sp[3].o = (jobject)SF_java_text_DateFormatSymbols_ERAS;
	sp[1].o = (jobject)((func_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(248);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_eras = (jref) (frame[2].o);
	}
label_10:;
	{
	LINE_NUMBER(250);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_16:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_eras;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_text_DateFormatSymbols_setEras_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:setEras", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(255);
	((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_eras = (jref) (frame[1].o);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_text_DateFormatSymbols_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	clinit_java_text_DateFormatSymbols(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_DateFormatSymbols);
	init_java_text_DateFormatSymbols(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(261);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_ampms;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_ampms = (jref) sp[1].o;
	LINE_NUMBER(262);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_eras;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_eras = (jref) sp[1].o;
	LINE_NUMBER(263);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_months;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_months = (jref) sp[1].o;
	LINE_NUMBER(264);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortMonths;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_shortMonths = (jref) sp[1].o;
	LINE_NUMBER(265);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_shortWeekdays;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_shortWeekdays = (jref) sp[1].o;
	LINE_NUMBER(266);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_weekdays;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_weekdays = (jref) sp[1].o;
	LINE_NUMBER(267);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_zoneStrings;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_zoneStrings = (jref) sp[1].o;
	LINE_NUMBER(268);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_text_DateFormatSymbols *) NULL_CHECK((frame[0].o)))->F_resourceBundle;
	((java_text_DateFormatSymbols *) NULL_CHECK(sp[0].o))->F_resourceBundle = (jref) sp[1].o;
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void clinit_java_text_DateFormatSymbols(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_text_DateFormatSymbols_ZONE_ID = jint(0);
	SF_java_text_DateFormatSymbols_ZONE_LONGNAME = jint(1);
	SF_java_text_DateFormatSymbols_ZONE_SHORTNAME = jint(2);
	SF_java_text_DateFormatSymbols_ZONE_LONGNAME_DST = jint(3);
	SF_java_text_DateFormatSymbols_ZONE_SHORTNAME_DST = jint(4);
	SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME = ((jobject) createStringLiteral(ctx, u8"ZONE_LONGNAME_"_j));
	SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME = ((jobject) createStringLiteral(ctx, u8"ZONE_SHORTNAME_"_j));
	SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME_DST = ((jobject) createStringLiteral(ctx, u8"ZONE_LONGNAME_DST_"_j));
	SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME_DST = ((jobject) createStringLiteral(ctx, u8"ZONE_SHORTNAME_DST_"_j));
	SF_java_text_DateFormatSymbols_L10N_WEEKDAY_LONGNAME = ((jobject) createStringLiteral(ctx, u8"WEEKDAY_LONGNAME_"_j));
	SF_java_text_DateFormatSymbols_L10N_WEEKDAY_SHORTNAME = ((jobject) createStringLiteral(ctx, u8"WEEKDAY_SHORTNAME_"_j));
	SF_java_text_DateFormatSymbols_L10N_MONTH_LONGNAME = ((jobject) createStringLiteral(ctx, u8"MONTH_LONGNAME_"_j));
	SF_java_text_DateFormatSymbols_L10N_MONTH_SHORTNAME = ((jobject) createStringLiteral(ctx, u8"MONTH_SHORTNAME_"_j));
	SF_java_text_DateFormatSymbols_L10N_AMPM = ((jobject) createStringLiteral(ctx, u8"AMPM_"_j));
	SF_java_text_DateFormatSymbols_L10N_ERA = ((jobject) createStringLiteral(ctx, u8"ERA_"_j));
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/text/DateFormatSymbols:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_text_DateFormatSymbols(ctx);
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (12));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"January"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"February"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"March"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"April"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"May"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"June"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"July"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"August"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"September"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"October"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"November"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"December"_j)));
	clinit_java_text_DateFormatSymbols(ctx);
	SF_java_text_DateFormatSymbols_MONTHS = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (7));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Sunday"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Monday"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Tuesday"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Wednesday"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"Thursday"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"Friday"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"Saturday"_j)));
	clinit_java_text_DateFormatSymbols(ctx);
	SF_java_text_DateFormatSymbols_WEEKDAYS = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"AM"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"PM"_j)));
	clinit_java_text_DateFormatSymbols(ctx);
	SF_java_text_DateFormatSymbols_AMPMS = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"AD"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"BC"_j)));
	clinit_java_text_DateFormatSymbols(ctx);
	SF_java_text_DateFormatSymbols_ERAS = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_text_DateFormatSymbols[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_text_DateFormatSymbols_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setAmPmStrings_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getResourceBundle_R_java_util_Hashtable,
	(void *) M_java_text_DateFormatSymbols_setResourceBundle_java_util_Hashtable,
	(void *) M_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setZoneStrings_Array2_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setShortWeekdays_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setWeekdays_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setShortMonths_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setMonths_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_getEras_R_Array1_java_lang_String,
	(void *) M_java_text_DateFormatSymbols_setEras_Array1_java_lang_String,
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
	{ "getAmPmStrings", "()[Ljava/lang/String;" },
	{ "setAmPmStrings", "([Ljava/lang/String;)V" },
	{ "getResourceBundle", "()Ljava/util/Hashtable;" },
	{ "setResourceBundle", "(Ljava/util/Hashtable;)V" },
	{ "getLocalizedValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getZoneStrings", "()[[Ljava/lang/String;" },
	{ "setZoneStrings", "([[Ljava/lang/String;)V" },
	{ "setShortWeekdays", "([Ljava/lang/String;)V" },
	{ "createShortforms", "([Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;" },
	{ "getShortWeekdays", "()[Ljava/lang/String;" },
	{ "getWeekdays", "()[Ljava/lang/String;" },
	{ "setWeekdays", "([Ljava/lang/String;)V" },
	{ "setShortMonths", "([Ljava/lang/String;)V" },
	{ "getShortMonths", "()[Ljava/lang/String;" },
	{ "setMonths", "([Ljava/lang/String;)V" },
	{ "getMonths", "()[Ljava/lang/String;" },
	{ "getEras", "()[Ljava/lang/String;" },
	{ "setEras", "([Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, };

static FieldMetadata fields[] {
	{ "ZONE_ID", &class_int, (intptr_t) &SF_java_text_DateFormatSymbols_ZONE_ID, "I", 25 },
	{ "ZONE_LONGNAME", &class_int, (intptr_t) &SF_java_text_DateFormatSymbols_ZONE_LONGNAME, "I", 25 },
	{ "ZONE_SHORTNAME", &class_int, (intptr_t) &SF_java_text_DateFormatSymbols_ZONE_SHORTNAME, "I", 25 },
	{ "ZONE_LONGNAME_DST", &class_int, (intptr_t) &SF_java_text_DateFormatSymbols_ZONE_LONGNAME_DST, "I", 25 },
	{ "ZONE_SHORTNAME_DST", &class_int, (intptr_t) &SF_java_text_DateFormatSymbols_ZONE_SHORTNAME_DST, "I", 25 },
	{ "L10N_ZONE_LONGNAME", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME, "Ljava/lang/String;", 26 },
	{ "L10N_ZONE_SHORTNAME", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME, "Ljava/lang/String;", 26 },
	{ "L10N_ZONE_LONGNAME_DST", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_ZONE_LONGNAME_DST, "Ljava/lang/String;", 26 },
	{ "L10N_ZONE_SHORTNAME_DST", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_ZONE_SHORTNAME_DST, "Ljava/lang/String;", 26 },
	{ "L10N_WEEKDAY_LONGNAME", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_WEEKDAY_LONGNAME, "Ljava/lang/String;", 26 },
	{ "L10N_WEEKDAY_SHORTNAME", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_WEEKDAY_SHORTNAME, "Ljava/lang/String;", 26 },
	{ "L10N_MONTH_LONGNAME", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_MONTH_LONGNAME, "Ljava/lang/String;", 26 },
	{ "L10N_MONTH_SHORTNAME", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_MONTH_SHORTNAME, "Ljava/lang/String;", 26 },
	{ "L10N_AMPM", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_AMPM, "Ljava/lang/String;", 26 },
	{ "L10N_ERA", &class_java_lang_String, (intptr_t) &SF_java_text_DateFormatSymbols_L10N_ERA, "Ljava/lang/String;", 26 },
	{ "MONTHS", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_text_DateFormatSymbols_MONTHS, "[Ljava/lang/String;", 26 },
	{ "WEEKDAYS", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_text_DateFormatSymbols_WEEKDAYS, "[Ljava/lang/String;", 26 },
	{ "AMPMS", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_text_DateFormatSymbols_AMPMS, "[Ljava/lang/String;", 26 },
	{ "ERAS", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_text_DateFormatSymbols_ERAS, "[Ljava/lang/String;", 26 },
	{ "resourceBundle", &class_java_util_Hashtable, offsetof(java_text_DateFormatSymbols, F_resourceBundle), "Ljava/util/Hashtable;", 2 },
	{ "ampms", getArrayClass(&class_java_lang_String, 1), offsetof(java_text_DateFormatSymbols, F_ampms), "[Ljava/lang/String;", 2 },
	{ "months", getArrayClass(&class_java_lang_String, 1), offsetof(java_text_DateFormatSymbols, F_months), "[Ljava/lang/String;", 2 },
	{ "zoneStrings", getArrayClass(&class_java_lang_String, 2), offsetof(java_text_DateFormatSymbols, F_zoneStrings), "[[Ljava/lang/String;", 2 },
	{ "shortMonths", getArrayClass(&class_java_lang_String, 1), offsetof(java_text_DateFormatSymbols, F_shortMonths), "[Ljava/lang/String;", 2 },
	{ "weekdays", getArrayClass(&class_java_lang_String, 1), offsetof(java_text_DateFormatSymbols, F_weekdays), "[Ljava/lang/String;", 2 },
	{ "shortWeekdays", getArrayClass(&class_java_lang_String, 1), offsetof(java_text_DateFormatSymbols, F_shortWeekdays), "[Ljava/lang/String;", 2 },
	{ "eras", getArrayClass(&class_java_lang_String, 1), offsetof(java_text_DateFormatSymbols, F_eras), "[Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_text_DateFormatSymbols, 0, "()V", 1 },
	{ "getAmPmStrings", (intptr_t) M_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_getAmPmStrings_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "setAmPmStrings", (intptr_t) M_java_text_DateFormatSymbols_setAmPmStrings_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_setAmPmStrings_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "getResourceBundle", (intptr_t) M_java_text_DateFormatSymbols_getResourceBundle_R_java_util_Hashtable, VTABLE_java_text_DateFormatSymbols_getResourceBundle_R_java_util_Hashtable, "()Ljava/util/Hashtable;", 1 },
	{ "setResourceBundle", (intptr_t) M_java_text_DateFormatSymbols_setResourceBundle_java_util_Hashtable, VTABLE_java_text_DateFormatSymbols_setResourceBundle_java_util_Hashtable, "(Ljava/util/Hashtable;)V", 1 },
	{ "getLocalizedValue", (intptr_t) M_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_text_DateFormatSymbols_getLocalizedValue_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 0 },
	{ "getZoneStrings", (intptr_t) M_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String, VTABLE_java_text_DateFormatSymbols_getZoneStrings_R_Array2_java_lang_String, "()[[Ljava/lang/String;", 1 },
	{ "setZoneStrings", (intptr_t) M_java_text_DateFormatSymbols_setZoneStrings_Array2_java_lang_String, VTABLE_java_text_DateFormatSymbols_setZoneStrings_Array2_java_lang_String, "([[Ljava/lang/String;)V", 1 },
	{ "setShortWeekdays", (intptr_t) M_java_text_DateFormatSymbols_setShortWeekdays_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_setShortWeekdays_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "createShortforms", (intptr_t) M_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_createShortforms_Array1_java_lang_String_java_lang_String_R_Array1_java_lang_String, "([Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", 0 },
	{ "getShortWeekdays", (intptr_t) M_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_getShortWeekdays_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getWeekdays", (intptr_t) M_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_getWeekdays_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "setWeekdays", (intptr_t) M_java_text_DateFormatSymbols_setWeekdays_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_setWeekdays_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "setShortMonths", (intptr_t) M_java_text_DateFormatSymbols_setShortMonths_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_setShortMonths_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "getShortMonths", (intptr_t) M_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_getShortMonths_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "setMonths", (intptr_t) M_java_text_DateFormatSymbols_setMonths_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_setMonths_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "getMonths", (intptr_t) M_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_getMonths_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getEras", (intptr_t) M_java_text_DateFormatSymbols_getEras_R_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_getEras_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "setEras", (intptr_t) M_java_text_DateFormatSymbols_setEras_Array1_java_lang_String, VTABLE_java_text_DateFormatSymbols_setEras_Array1_java_lang_String, "([Ljava/lang/String;)V", 1 },
	{ "clone", (intptr_t) M_java_text_DateFormatSymbols_clone_R_java_lang_Object, VTABLE_java_text_DateFormatSymbols_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_text_DateFormatSymbols, 0, "()V", 8 },
};

Class class_java_text_DateFormatSymbols{
		.nativeName = (intptr_t) "java/text/DateFormatSymbols",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_text_DateFormatSymbols),
		.classVtable = (intptr_t) vtable_java_text_DateFormatSymbols,
		.staticInitializer = (intptr_t) clinit_java_text_DateFormatSymbols,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_text_DateFormatSymbols,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 27,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_text_DateFormatSymbols = registerClass(&class_java_text_DateFormatSymbols);

}
