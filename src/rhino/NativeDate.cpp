#include "rhino/NativeDate.h"
#include "java/text/DateFormat.h"
#include "java/lang/StringBuilder.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"
#include "java/util/Date.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/util/TimeZone.h"
#include "java/text/SimpleDateFormat.h"
#include "java/lang/Throwable.h"
#include "java/lang/Math.h"
#include "java/lang/Number.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdFunctionObject.h"
#include "java/lang/CharSequence.h"
#include "rhino/NativeDate.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/Object.h"
#include "java/lang/AssertionError.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_rhino_NativeDate_DATE_TAG;
jobject SF_rhino_NativeDate_js_NaN_date_str;
jdouble SF_rhino_NativeDate_HalfTimeDomain;
jdouble SF_rhino_NativeDate_HoursPerDay;
jdouble SF_rhino_NativeDate_MinutesPerHour;
jdouble SF_rhino_NativeDate_SecondsPerMinute;
jdouble SF_rhino_NativeDate_msPerSecond;
jdouble SF_rhino_NativeDate_MinutesPerDay;
jdouble SF_rhino_NativeDate_SecondsPerDay;
jdouble SF_rhino_NativeDate_SecondsPerHour;
jdouble SF_rhino_NativeDate_msPerDay;
jdouble SF_rhino_NativeDate_msPerHour;
jdouble SF_rhino_NativeDate_msPerMinute;
jint SF_rhino_NativeDate_MAXARGS;
jint SF_rhino_NativeDate_ConstructorId_now;
jint SF_rhino_NativeDate_ConstructorId_parse;
jint SF_rhino_NativeDate_ConstructorId_UTC;
jint SF_rhino_NativeDate_Id_constructor;
jint SF_rhino_NativeDate_Id_toString;
jint SF_rhino_NativeDate_Id_toTimeString;
jint SF_rhino_NativeDate_Id_toDateString;
jint SF_rhino_NativeDate_Id_toLocaleString;
jint SF_rhino_NativeDate_Id_toLocaleTimeString;
jint SF_rhino_NativeDate_Id_toLocaleDateString;
jint SF_rhino_NativeDate_Id_toUTCString;
jint SF_rhino_NativeDate_Id_toSource;
jint SF_rhino_NativeDate_Id_valueOf;
jint SF_rhino_NativeDate_Id_getTime;
jint SF_rhino_NativeDate_Id_getYear;
jint SF_rhino_NativeDate_Id_getFullYear;
jint SF_rhino_NativeDate_Id_getUTCFullYear;
jint SF_rhino_NativeDate_Id_getMonth;
jint SF_rhino_NativeDate_Id_getUTCMonth;
jint SF_rhino_NativeDate_Id_getDate;
jint SF_rhino_NativeDate_Id_getUTCDate;
jint SF_rhino_NativeDate_Id_getDay;
jint SF_rhino_NativeDate_Id_getUTCDay;
jint SF_rhino_NativeDate_Id_getHours;
jint SF_rhino_NativeDate_Id_getUTCHours;
jint SF_rhino_NativeDate_Id_getMinutes;
jint SF_rhino_NativeDate_Id_getUTCMinutes;
jint SF_rhino_NativeDate_Id_getSeconds;
jint SF_rhino_NativeDate_Id_getUTCSeconds;
jint SF_rhino_NativeDate_Id_getMilliseconds;
jint SF_rhino_NativeDate_Id_getUTCMilliseconds;
jint SF_rhino_NativeDate_Id_getTimezoneOffset;
jint SF_rhino_NativeDate_Id_setTime;
jint SF_rhino_NativeDate_Id_setMilliseconds;
jint SF_rhino_NativeDate_Id_setUTCMilliseconds;
jint SF_rhino_NativeDate_Id_setSeconds;
jint SF_rhino_NativeDate_Id_setUTCSeconds;
jint SF_rhino_NativeDate_Id_setMinutes;
jint SF_rhino_NativeDate_Id_setUTCMinutes;
jint SF_rhino_NativeDate_Id_setHours;
jint SF_rhino_NativeDate_Id_setUTCHours;
jint SF_rhino_NativeDate_Id_setDate;
jint SF_rhino_NativeDate_Id_setUTCDate;
jint SF_rhino_NativeDate_Id_setMonth;
jint SF_rhino_NativeDate_Id_setUTCMonth;
jint SF_rhino_NativeDate_Id_setFullYear;
jint SF_rhino_NativeDate_Id_setUTCFullYear;
jint SF_rhino_NativeDate_Id_setYear;
jint SF_rhino_NativeDate_Id_toISOString;
jint SF_rhino_NativeDate_Id_toJSON;
jint SF_rhino_NativeDate_MAX_PROTOTYPE_ID;
jint SF_rhino_NativeDate_Id_toGMTString;
jobject SF_rhino_NativeDate_thisTimeZone;
jdouble SF_rhino_NativeDate_LocalTZA;
jobject SF_rhino_NativeDate_timeZoneFormatter;
jobject SF_rhino_NativeDate_localeDateTimeFormatter;
jobject SF_rhino_NativeDate_localeDateFormatter;
jobject SF_rhino_NativeDate_localeTimeFormatter;
jbool SF_rhino_NativeDate_$assertionsDisabled;

void mark_rhino_NativeDate(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeDate_DATE_TAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_DATE_TAG)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_DATE_TAG, mark, depth + 1);
		if (SF_rhino_NativeDate_js_NaN_date_str)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_js_NaN_date_str)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_js_NaN_date_str, mark, depth + 1);
		if (SF_rhino_NativeDate_thisTimeZone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_thisTimeZone)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_thisTimeZone, mark, depth + 1);
		if (SF_rhino_NativeDate_timeZoneFormatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_timeZoneFormatter)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_timeZoneFormatter, mark, depth + 1);
		if (SF_rhino_NativeDate_localeDateTimeFormatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_localeDateTimeFormatter)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_localeDateTimeFormatter, mark, depth + 1);
		if (SF_rhino_NativeDate_localeDateFormatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_localeDateFormatter)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_localeDateFormatter, mark, depth + 1);
		if (SF_rhino_NativeDate_localeTimeFormatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeDate_localeTimeFormatter)->clazz)->markFunction)((jobject) SF_rhino_NativeDate_localeTimeFormatter, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeDate *) object;
}

void SM_rhino_NativeDate_init_rhino_Scriptable_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(20);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeDate);
	init_rhino_NativeDate(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(22);
	((rhino_NativeDate *) NULL_CHECK((frame[2].o)))->F_date = (jdouble(std::numeric_limits<double>::quiet_NaN()));
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_rhino_NativeDate_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_NativeDate_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject])(ctx, (frame[2].o), (47), (frame[0].o), (frame[1].i));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeDate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeDate_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Date"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:getDefaultValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(37);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_rhino_NativeDate_getJSTimeValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:getJSTimeValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jdouble)((rhino_NativeDate *) NULL_CHECK((frame[0].o)))->F_date);
	}

	popStackFrame(ctx);
}

void M_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:fillConstructorProperties", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeDate(ctx);
	sp[2].o = (jobject)SF_rhino_NativeDate_DATE_TAG;
	((func_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-3), (((jobject) createStringLiteral(ctx, u8"now"_j))), (jint(0)));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeDate(ctx);
	sp[2].o = (jobject)SF_rhino_NativeDate_DATE_TAG;
	((func_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (-2), (((jobject) createStringLiteral(ctx, u8"parse"_j))), (jint(1)));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_rhino_NativeDate(ctx);
	sp[2].o = (jobject)SF_rhino_NativeDate_DATE_TAG;
	((func_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeDate_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)), (((jobject) createStringLiteral(ctx, u8"UTC"_j))), (7));
	LINE_NUMBER(53);
	M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeDate_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:initPrototypeId", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(60);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		case 7: goto label_7;
		case 8: goto label_8;
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		case 14: goto label_14;
		case 15: goto label_15;
		case 16: goto label_16;
		case 17: goto label_17;
		case 18: goto label_18;
		case 19: goto label_19;
		case 20: goto label_20;
		case 21: goto label_21;
		case 22: goto label_22;
		case 23: goto label_23;
		case 24: goto label_24;
		case 25: goto label_25;
		case 26: goto label_26;
		case 27: goto label_27;
		case 28: goto label_28;
		case 29: goto label_29;
		case 30: goto label_30;
		case 31: goto label_31;
		case 32: goto label_32;
		case 33: goto label_33;
		case 34: goto label_34;
		case 35: goto label_35;
		case 36: goto label_36;
		case 37: goto label_37;
		case 38: goto label_38;
		case 39: goto label_39;
		case 40: goto label_40;
		case 41: goto label_41;
		case 42: goto label_42;
		case 43: goto label_43;
		case 44: goto label_44;
		case 45: goto label_45;
		case 46: goto label_46;
		case 47: goto label_47;
		default: goto label_48;
	}
	}
label_1:;
	{
	LINE_NUMBER(62);
	frame[3].i = (7);
	LINE_NUMBER(63);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(64);
	goto label_51;
	}
label_2:;
	{
	LINE_NUMBER(66);
	frame[3].i = (jint(0));
	LINE_NUMBER(67);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(68);
	goto label_51;
	}
label_3:;
	{
	LINE_NUMBER(70);
	frame[3].i = (jint(0));
	LINE_NUMBER(71);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toTimeString"_j)));
	LINE_NUMBER(72);
	goto label_51;
	}
label_4:;
	{
	LINE_NUMBER(74);
	frame[3].i = (jint(0));
	LINE_NUMBER(75);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toDateString"_j)));
	LINE_NUMBER(76);
	goto label_51;
	}
label_5:;
	{
	LINE_NUMBER(78);
	frame[3].i = (jint(0));
	LINE_NUMBER(79);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(80);
	goto label_51;
	}
label_6:;
	{
	LINE_NUMBER(82);
	frame[3].i = (jint(0));
	LINE_NUMBER(83);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleTimeString"_j)));
	LINE_NUMBER(84);
	goto label_51;
	}
label_7:;
	{
	LINE_NUMBER(86);
	frame[3].i = (jint(0));
	LINE_NUMBER(87);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toLocaleDateString"_j)));
	LINE_NUMBER(88);
	goto label_51;
	}
label_8:;
	{
	LINE_NUMBER(90);
	frame[3].i = (jint(0));
	LINE_NUMBER(91);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toUTCString"_j)));
	LINE_NUMBER(92);
	goto label_51;
	}
label_9:;
	{
	LINE_NUMBER(94);
	frame[3].i = (jint(0));
	LINE_NUMBER(95);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(96);
	goto label_51;
	}
label_10:;
	{
	LINE_NUMBER(98);
	frame[3].i = (jint(0));
	LINE_NUMBER(99);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(100);
	goto label_51;
	}
label_11:;
	{
	LINE_NUMBER(102);
	frame[3].i = (jint(0));
	LINE_NUMBER(103);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getTime"_j)));
	LINE_NUMBER(104);
	goto label_51;
	}
label_12:;
	{
	LINE_NUMBER(106);
	frame[3].i = (jint(0));
	LINE_NUMBER(107);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getYear"_j)));
	LINE_NUMBER(108);
	goto label_51;
	}
label_13:;
	{
	LINE_NUMBER(110);
	frame[3].i = (jint(0));
	LINE_NUMBER(111);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getFullYear"_j)));
	LINE_NUMBER(112);
	goto label_51;
	}
label_14:;
	{
	LINE_NUMBER(114);
	frame[3].i = (jint(0));
	LINE_NUMBER(115);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCFullYear"_j)));
	LINE_NUMBER(116);
	goto label_51;
	}
label_15:;
	{
	LINE_NUMBER(118);
	frame[3].i = (jint(0));
	LINE_NUMBER(119);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getMonth"_j)));
	LINE_NUMBER(120);
	goto label_51;
	}
label_16:;
	{
	LINE_NUMBER(122);
	frame[3].i = (jint(0));
	LINE_NUMBER(123);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCMonth"_j)));
	LINE_NUMBER(124);
	goto label_51;
	}
label_17:;
	{
	LINE_NUMBER(126);
	frame[3].i = (jint(0));
	LINE_NUMBER(127);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getDate"_j)));
	LINE_NUMBER(128);
	goto label_51;
	}
label_18:;
	{
	LINE_NUMBER(130);
	frame[3].i = (jint(0));
	LINE_NUMBER(131);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCDate"_j)));
	LINE_NUMBER(132);
	goto label_51;
	}
label_19:;
	{
	LINE_NUMBER(134);
	frame[3].i = (jint(0));
	LINE_NUMBER(135);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getDay"_j)));
	LINE_NUMBER(136);
	goto label_51;
	}
label_20:;
	{
	LINE_NUMBER(138);
	frame[3].i = (jint(0));
	LINE_NUMBER(139);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCDay"_j)));
	LINE_NUMBER(140);
	goto label_51;
	}
label_21:;
	{
	LINE_NUMBER(142);
	frame[3].i = (jint(0));
	LINE_NUMBER(143);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getHours"_j)));
	LINE_NUMBER(144);
	goto label_51;
	}
label_22:;
	{
	LINE_NUMBER(146);
	frame[3].i = (jint(0));
	LINE_NUMBER(147);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCHours"_j)));
	LINE_NUMBER(148);
	goto label_51;
	}
label_23:;
	{
	LINE_NUMBER(150);
	frame[3].i = (jint(0));
	LINE_NUMBER(151);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getMinutes"_j)));
	LINE_NUMBER(152);
	goto label_51;
	}
label_24:;
	{
	LINE_NUMBER(154);
	frame[3].i = (jint(0));
	LINE_NUMBER(155);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCMinutes"_j)));
	LINE_NUMBER(156);
	goto label_51;
	}
label_25:;
	{
	LINE_NUMBER(158);
	frame[3].i = (jint(0));
	LINE_NUMBER(159);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getSeconds"_j)));
	LINE_NUMBER(160);
	goto label_51;
	}
label_26:;
	{
	LINE_NUMBER(162);
	frame[3].i = (jint(0));
	LINE_NUMBER(163);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCSeconds"_j)));
	LINE_NUMBER(164);
	goto label_51;
	}
label_27:;
	{
	LINE_NUMBER(166);
	frame[3].i = (jint(0));
	LINE_NUMBER(167);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getMilliseconds"_j)));
	LINE_NUMBER(168);
	goto label_51;
	}
label_28:;
	{
	LINE_NUMBER(170);
	frame[3].i = (jint(0));
	LINE_NUMBER(171);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getUTCMilliseconds"_j)));
	LINE_NUMBER(172);
	goto label_51;
	}
label_29:;
	{
	LINE_NUMBER(174);
	frame[3].i = (jint(0));
	LINE_NUMBER(175);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"getTimezoneOffset"_j)));
	LINE_NUMBER(176);
	goto label_51;
	}
label_30:;
	{
	LINE_NUMBER(178);
	frame[3].i = (jint(1));
	LINE_NUMBER(179);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setTime"_j)));
	LINE_NUMBER(180);
	goto label_51;
	}
label_31:;
	{
	LINE_NUMBER(182);
	frame[3].i = (jint(1));
	LINE_NUMBER(183);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setMilliseconds"_j)));
	LINE_NUMBER(184);
	goto label_51;
	}
label_32:;
	{
	LINE_NUMBER(186);
	frame[3].i = (jint(1));
	LINE_NUMBER(187);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCMilliseconds"_j)));
	LINE_NUMBER(188);
	goto label_51;
	}
label_33:;
	{
	LINE_NUMBER(190);
	frame[3].i = (jint(2));
	LINE_NUMBER(191);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setSeconds"_j)));
	LINE_NUMBER(192);
	goto label_51;
	}
label_34:;
	{
	LINE_NUMBER(194);
	frame[3].i = (jint(2));
	LINE_NUMBER(195);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCSeconds"_j)));
	LINE_NUMBER(196);
	goto label_51;
	}
label_35:;
	{
	LINE_NUMBER(198);
	frame[3].i = (jint(3));
	LINE_NUMBER(199);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setMinutes"_j)));
	LINE_NUMBER(200);
	goto label_51;
	}
label_36:;
	{
	LINE_NUMBER(202);
	frame[3].i = (jint(3));
	LINE_NUMBER(203);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCMinutes"_j)));
	LINE_NUMBER(204);
	goto label_51;
	}
label_37:;
	{
	LINE_NUMBER(206);
	frame[3].i = (jint(4));
	LINE_NUMBER(207);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setHours"_j)));
	LINE_NUMBER(208);
	goto label_51;
	}
label_38:;
	{
	LINE_NUMBER(210);
	frame[3].i = (jint(4));
	LINE_NUMBER(211);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCHours"_j)));
	LINE_NUMBER(212);
	goto label_51;
	}
label_39:;
	{
	LINE_NUMBER(214);
	frame[3].i = (jint(1));
	LINE_NUMBER(215);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setDate"_j)));
	LINE_NUMBER(216);
	goto label_51;
	}
label_40:;
	{
	LINE_NUMBER(218);
	frame[3].i = (jint(1));
	LINE_NUMBER(219);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCDate"_j)));
	LINE_NUMBER(220);
	goto label_51;
	}
label_41:;
	{
	LINE_NUMBER(222);
	frame[3].i = (jint(2));
	LINE_NUMBER(223);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setMonth"_j)));
	LINE_NUMBER(224);
	goto label_51;
	}
label_42:;
	{
	LINE_NUMBER(226);
	frame[3].i = (jint(2));
	LINE_NUMBER(227);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCMonth"_j)));
	LINE_NUMBER(228);
	goto label_51;
	}
label_43:;
	{
	LINE_NUMBER(230);
	frame[3].i = (jint(3));
	LINE_NUMBER(231);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setFullYear"_j)));
	LINE_NUMBER(232);
	goto label_51;
	}
label_44:;
	{
	LINE_NUMBER(234);
	frame[3].i = (jint(3));
	LINE_NUMBER(235);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setUTCFullYear"_j)));
	LINE_NUMBER(236);
	goto label_51;
	}
label_45:;
	{
	LINE_NUMBER(238);
	frame[3].i = (jint(1));
	LINE_NUMBER(239);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"setYear"_j)));
	LINE_NUMBER(240);
	goto label_51;
	}
label_46:;
	{
	LINE_NUMBER(242);
	frame[3].i = (jint(0));
	LINE_NUMBER(243);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toISOString"_j)));
	LINE_NUMBER(244);
	goto label_51;
	}
label_47:;
	{
	LINE_NUMBER(246);
	frame[3].i = (jint(1));
	LINE_NUMBER(247);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"toJSON"_j)));
	LINE_NUMBER(248);
	goto label_51;
	}
label_48:;
	{
	LINE_NUMBER(250);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_51:;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	clinit_rhino_NativeDate(ctx);
	sp[1].o = (jobject)SF_rhino_NativeDate_DATE_TAG;
	sp[0].o = (jobject)((func_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeDate_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:execIdCall", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[1].o;
	clinit_rhino_NativeDate(ctx);
	sp[1].o = (jobject)SF_rhino_NativeDate_DATE_TAG;
	jint temp0 = (jint)((func_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_hasTag_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(261);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(262);
	switch((frame[6].i)) {
		case -3: goto label_4;
		case -2: goto label_5;
		case -1: goto label_6;
		case 1: goto label_7;
		case 47: goto label_8;
		default: goto label_9;
	}
	}
label_4:;
	{
	LINE_NUMBER(264);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_now_R_double(ctx);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_Array1_java_lang_Object_int_R_java_lang_String(ctx, (frame[5].o), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(268);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_parseString_java_lang_String_R_double(ctx, (frame[7].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(272);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_jsStaticFunction_UTC_Array1_java_lang_Object_R_double(ctx, (frame[5].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(277);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(278);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_now_R_double(ctx);
	sp[0].o = (jobject)SM_rhino_NativeDate_date_format_double_int_R_java_lang_String(ctx, temp0, (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)SM_rhino_NativeDate_jsConstructor_Array1_java_lang_Object_R_java_lang_Object(ctx, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(283);
	frame[7].o = (((jobject) createStringLiteral(ctx, u8"toISOString"_j)));
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(ctx, (frame[2].o), (frame[3].o), (frame[4].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(286);
	sp[0].o = frame[8].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toPrimitive_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(287);
	if ((isInstance(ctx, (frame[9].o), &class_java_lang_Number)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(288);
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[9].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[9].o))));
	frame[10].d = temp0;
	LINE_NUMBER(289);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[10].d));
	if (temp1 != 0) goto label_19;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[10].d));
	if (temp0 == 0) goto label_16;
	}
label_19:;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_16:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"toISOString"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(294);
	sp[0].o = frame[10].o;
	clinit_rhino_NativeDate(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.function.not.found.in"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"toISOString"_j));
	sp[2].o = frame[8].o;
	LINE_NUMBER(297);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	LINE_NUMBER(295);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(299);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_Callable)) != 0) goto label_25;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.isnt.function.in"_j));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"toISOString"_j));
	sp[2].o = frame[8].o;
	LINE_NUMBER(302);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = frame[10].o;
	LINE_NUMBER(303);
	sp[3].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	LINE_NUMBER(300);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError3_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(305);
	sp[0].o = checkCast(ctx, &class_rhino_Callable, (frame[10].o));
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = frame[8].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[4].o = (jobject)SF_rhino_ScriptRuntime_emptyArgs;
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(307);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isPrimitive_java_lang_Object_R_boolean(ctx, (frame[11].o));
	if (temp0 != 0) goto label_31;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.toisostring.must.return.primitive"_j));
	sp[1].o = frame[11].o;
	LINE_NUMBER(309);
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	LINE_NUMBER(308);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_31:;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[11].o);
	}
label_9:;
	{
	LINE_NUMBER(318);
	if ((isInstance(ctx, (frame[4].o), &class_rhino_NativeDate)) != 0) goto label_35;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(320);
	frame[7].o = (checkCast(ctx, &class_rhino_NativeDate, (frame[4].o)));
	LINE_NUMBER(321);
	frame[8].d = ((jdouble)((rhino_NativeDate *) NULL_CHECK((frame[7].o)))->F_date);
	LINE_NUMBER(323);
	switch((frame[6].i)) {
		case 2: goto label_39;
		case 3: goto label_39;
		case 4: goto label_39;
		case 5: goto label_40;
		case 6: goto label_40;
		case 7: goto label_40;
		case 8: goto label_41;
		case 9: goto label_42;
		case 10: goto label_43;
		case 11: goto label_43;
		case 12: goto label_44;
		case 13: goto label_44;
		case 14: goto label_44;
		case 15: goto label_45;
		case 16: goto label_45;
		case 17: goto label_46;
		case 18: goto label_46;
		case 19: goto label_47;
		case 20: goto label_47;
		case 21: goto label_48;
		case 22: goto label_48;
		case 23: goto label_49;
		case 24: goto label_49;
		case 25: goto label_50;
		case 26: goto label_50;
		case 27: goto label_51;
		case 28: goto label_51;
		case 29: goto label_52;
		case 30: goto label_53;
		case 31: goto label_54;
		case 32: goto label_54;
		case 33: goto label_54;
		case 34: goto label_54;
		case 35: goto label_54;
		case 36: goto label_54;
		case 37: goto label_54;
		case 38: goto label_54;
		case 39: goto label_55;
		case 40: goto label_55;
		case 41: goto label_55;
		case 42: goto label_55;
		case 43: goto label_55;
		case 44: goto label_55;
		case 45: goto label_56;
		case 46: goto label_57;
		default: goto label_58;
	}
	}
label_39:;
	{
	LINE_NUMBER(328);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_59;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)SM_rhino_NativeDate_date_format_double_int_R_java_lang_String(ctx, (frame[8].d), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Invalid Date"_j)));
	}
label_40:;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_61;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)SM_rhino_NativeDate_toLocale_helper_double_int_R_java_lang_String(ctx, (frame[8].d), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_61:;
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Invalid Date"_j)));
	}
label_41:;
	{
	LINE_NUMBER(342);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_63;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)SM_rhino_NativeDate_js_toUTCString_double_R_java_lang_String(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_63:;
	{
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Invalid Date"_j)));
	}
label_42:;
	{
	LINE_NUMBER(348);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"(new Date("_j))));
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_double_R_java_lang_String(ctx, (frame[8].d));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"))"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(357);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_65;
	}
	{
	LINE_NUMBER(358);
	if ((frame[6].i) == (14)) goto label_67;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_67:;
	{
	LINE_NUMBER(359);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	LINE_NUMBER(360);
	if ((frame[6].i) != (12)) goto label_65;
	}
	{
	LINE_NUMBER(361);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[2].o), (jint(1)));
	if (temp0 == 0) goto label_70;
	}
	{
	LINE_NUMBER(362);
	if ((doubleCompare((jdouble(1900.0)), (frame[8].d), 1)) > 0) goto label_65;
	}
	{
	if ((doubleCompare((frame[8].d), (jdouble(2000.0)), 1)) >= 0) goto label_65;
	}
	{
	LINE_NUMBER(363);
	frame[8].d = ((frame[8].d) - (jdouble(1900.0)));
	goto label_65;
	}
label_70:;
	{
	LINE_NUMBER(366);
	frame[8].d = ((frame[8].d) - (jdouble(1900.0)));
	}
label_65:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_73;
	}
	{
	LINE_NUMBER(375);
	if ((frame[6].i) != (15)) goto label_75;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_75:;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_73:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_76;
	}
	{
	LINE_NUMBER(383);
	if ((frame[6].i) != (17)) goto label_78;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_78:;
	{
	LINE_NUMBER(384);
	jint temp0 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_76:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(390);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_79;
	}
	{
	LINE_NUMBER(391);
	if ((frame[6].i) != (19)) goto label_81;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_81:;
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)SM_rhino_NativeDate_WeekDay_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_79:;
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_48:;
	{
	LINE_NUMBER(398);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_82;
	}
	{
	LINE_NUMBER(399);
	if ((frame[6].i) != (21)) goto label_84;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_84:;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)SM_rhino_NativeDate_HourFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_82:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_49:;
	{
	LINE_NUMBER(406);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_85;
	}
	{
	LINE_NUMBER(407);
	if ((frame[6].i) != (23)) goto label_87;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_87:;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)SM_rhino_NativeDate_MinFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_85:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_50:;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_88;
	}
	{
	LINE_NUMBER(415);
	if ((frame[6].i) != (25)) goto label_90;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_90:;
	{
	LINE_NUMBER(416);
	jint temp0 = (jint)SM_rhino_NativeDate_SecFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_88:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_51:;
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_91;
	}
	{
	LINE_NUMBER(423);
	if ((frame[6].i) != (27)) goto label_93;
	}
	{
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_93:;
	{
	LINE_NUMBER(424);
	jint temp0 = (jint)SM_rhino_NativeDate_msFromTime_double_R_int(ctx, (frame[8].d));
	frame[8].d = (jdouble(temp0));
	}
label_91:;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_94;
	}
	{
	LINE_NUMBER(430);
	jdouble temp0 = frame[8].d;
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = ((temp0 - temp1) / (jdouble(60000.0)));
	}
label_94:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_53:;
	{
	LINE_NUMBER(435);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, temp0);
	frame[8].d = temp1;
	LINE_NUMBER(436);
	((rhino_NativeDate *) NULL_CHECK((frame[7].o)))->F_date = (frame[8].d);
	LINE_NUMBER(437);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_54:;
	{
	LINE_NUMBER(447);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_makeTime_double_Array1_java_lang_Object_int_R_double(ctx, (frame[8].d), (frame[5].o), (frame[6].i));
	frame[8].d = temp0;
	LINE_NUMBER(448);
	((rhino_NativeDate *) NULL_CHECK((frame[7].o)))->F_date = (frame[8].d);
	LINE_NUMBER(449);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_55:;
	{
	LINE_NUMBER(457);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_makeDate_double_Array1_java_lang_Object_int_R_double(ctx, (frame[8].d), (frame[5].o), (frame[6].i));
	frame[8].d = temp0;
	LINE_NUMBER(458);
	((rhino_NativeDate *) NULL_CHECK((frame[7].o)))->F_date = (frame[8].d);
	LINE_NUMBER(459);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_56:;
	{
	LINE_NUMBER(462);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_Array1_java_lang_Object_int_R_double(ctx, (frame[5].o), (jint(0)));
	frame[10].d = temp0;
	LINE_NUMBER(464);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[10].d));
	if (temp1 != 0) goto label_103;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[10].d));
	if (temp0 == 0) goto label_104;
	}
label_103:;
	{
	LINE_NUMBER(465);
	frame[8].d = (jdouble(std::numeric_limits<double>::quiet_NaN()));
	goto label_105;
	}
label_104:;
	{
	LINE_NUMBER(467);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 == 0) goto label_106;
	}
	{
	LINE_NUMBER(468);
	frame[8].d = (jdouble(0));
	goto label_108;
	}
label_106:;
	{
	LINE_NUMBER(470);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp0;
	}
label_108:;
	{
	LINE_NUMBER(473);
	if ((doubleCompare((frame[10].d), (jdouble(0)), -1)) < 0) goto label_109;
	}
	{
	if ((doubleCompare((frame[10].d), (jdouble(99.0)), 1)) > 0) goto label_109;
	}
	{
	LINE_NUMBER(474);
	frame[10].d = ((frame[10].d) + (jdouble(1900.0)));
	}
label_109:;
	{
	LINE_NUMBER(476);
	jdouble temp0 = frame[10].d;
	jint temp1 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[8].d));
	jdouble temp2 = jdouble(temp1);
	jdouble temp3 = frame[8].d;
	LINE_NUMBER(477);
	jint temp4 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, temp3);
	jdouble temp5 = jdouble(temp4);
	LINE_NUMBER(476);
	jdouble temp6 = (jdouble)SM_rhino_NativeDate_MakeDay_double_double_double_R_double(ctx, temp0, temp2, temp5);
	frame[12].d = temp6;
	LINE_NUMBER(478);
	jdouble temp7 = frame[12].d;
	jdouble temp8 = (jdouble)SM_rhino_NativeDate_TimeWithinDay_double_R_double(ctx, (frame[8].d));
	jdouble temp9 = (jdouble)SM_rhino_NativeDate_MakeDate_double_double_R_double(ctx, temp7, temp8);
	frame[8].d = temp9;
	LINE_NUMBER(479);
	jdouble temp10 = (jdouble)SM_rhino_NativeDate_internalUTC_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp10;
	LINE_NUMBER(480);
	jdouble temp11 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, (frame[8].d));
	frame[8].d = temp11;
	}
label_105:;
	{
	LINE_NUMBER(483);
	((rhino_NativeDate *) NULL_CHECK((frame[7].o)))->F_date = (frame[8].d);
	LINE_NUMBER(484);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_wrapNumber_double_R_java_lang_Number(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_57:;
	{
	LINE_NUMBER(487);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[8].d));
	if (temp0 != 0) goto label_117;
	}
	{
	LINE_NUMBER(488);
	sp[0].o = (jobject)SM_rhino_NativeDate_js_toISOString_double_R_java_lang_String(ctx, (frame[8].d));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_117:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getMessage0_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"msg.invalid.date"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(491);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (frame[10].o));
	throwException(ctx, sp[0].o);	}
label_58:;
	{
	LINE_NUMBER(494);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[6].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_Day_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:Day", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(514);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) / (jdouble(8.64E7))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_TimeWithinDay_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:TimeWithinDay", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(519);
	frame[2].d = (fmod((frame[0].d), (jdouble(8.64E7))));
	LINE_NUMBER(520);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(521);
	frame[2].d = ((frame[2].d) + (jdouble(8.64E7)));
	}
label_2:;
	{
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return (frame[2].d);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_NativeDate_IsLeapYear_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:IsLeapYear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(526);
	if (((frame[0].i) % (jint(4))) != 0) goto label_1;
	}
	{
	if (((frame[0].i) % (100)) != 0) goto label_2;
	}
	{
	if (((frame[0].i) % (400)) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_DayFromYear_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:DayFromYear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(533);
	jdouble temp0 = (jdouble(365.0)) * ((frame[0].d) - (jdouble(1970.0)));
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (((frame[0].d) - (jdouble(1969.0))) / (jdouble(4.0))));
	jdouble temp2 = temp0 + temp1;
	jdouble temp3 = ((frame[0].d) - (jdouble(1901.0))) / (jdouble(100.0));
	LINE_NUMBER(534);
	jdouble temp4 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, temp3);
	jdouble temp5 = temp2 - temp4;
	jdouble temp6 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (((frame[0].d) - (jdouble(1601.0))) / (jdouble(400.0))));
	jdouble temp7 = temp5 + temp6;
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return temp7;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_TimeFromYear_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:TimeFromYear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(538);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_DayFromYear_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return (temp0 * (jdouble(8.64E7)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_YearFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:YearFromTime", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(542);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[0].d));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(546);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) / (jdouble(3,155695e+10))));
	frame[2].d = (temp0 + (jdouble(1970.0)));
	LINE_NUMBER(547);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_TimeFromYear_double_R_double(ctx, (frame[2].d));
	frame[4].d = temp1;
	LINE_NUMBER(554);
	if ((doubleCompare((frame[4].d), (frame[0].d), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(555);
	frame[2].d = ((frame[2].d) - (jdouble(1)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(557);
	jdouble temp0 = frame[4].d;
	jdouble temp1 = jdouble(8.64E7);
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_DaysInYear_double_R_double(ctx, (frame[2].d));
	if ((doubleCompare((temp0 + (temp1 * temp2)), (frame[0].d), 1)) > 0) goto label_7;
	}
	{
	LINE_NUMBER(558);
	frame[2].d = ((frame[2].d) + (jdouble(1)));
	}
label_7:;
	{
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return (jint((frame[2].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_DayFromMonth_int_int_R_double(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:DayFromMonth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(564);
	frame[2].i = ((frame[0].i) * (30));
	LINE_NUMBER(566);
	if ((frame[0].i) < (7)) goto label_2;
	}
	{
	LINE_NUMBER(567);
	frame[2].i = ((frame[2].i) + (((frame[0].i) / (jint(2))) - (jint(1))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(568);
	if ((frame[0].i) < (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(569);
	frame[2].i = ((frame[2].i) + ((((frame[0].i) - (jint(1))) / (jint(2))) - (jint(1))));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(571);
	frame[2].i = ((frame[2].i) + (frame[0].i));
	}
label_4:;
	{
	LINE_NUMBER(574);
	if ((frame[0].i) < (jint(2))) goto label_7;
	}
	{
	jint temp0 = (jint)SM_rhino_NativeDate_IsLeapYear_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_7;
	}
	LINE_NUMBER(575);
	INST_IINC(2, 1);
label_7:;
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (jdouble((frame[2].i)));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_DaysInYear_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:DaysInYear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(582);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[0].d));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_2:;
	{
	LINE_NUMBER(585);
	jint temp0 = (jint)SM_rhino_NativeDate_IsLeapYear_int_R_boolean(ctx, (jint((frame[0].d))));
	if (temp0 == 0) goto label_3;
	}
	(sp++)->d = jdouble(366.0);
	goto label_4;
label_3:;
	(sp++)->d = jdouble(365.0);
label_4:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_DaysInMonth_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:DaysInMonth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(590);
	if ((frame[1].i) != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(591);
	jint temp0 = (jint)SM_rhino_NativeDate_IsLeapYear_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_3;
	}
	INST_BIPUSH(29);
	goto label_4;
label_3:;
	INST_BIPUSH(28);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(592);
	if ((frame[1].i) < (8)) goto label_5;
	}
	{
	jint temp0 = (31) - ((frame[1].i) & (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	jint temp0 = (30) + ((frame[1].i) & (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_MonthFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:MonthFromTime", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(598);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[0].d));
	frame[2].i = temp0;
	LINE_NUMBER(599);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_Day_double_R_double(ctx, (frame[0].d));
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_DayFromYear_double_R_double(ctx, (jdouble((frame[2].i))));
	frame[3].i = (jint((temp1 - temp2)));
	LINE_NUMBER(601);
	INST_IINC(3, -59);
	LINE_NUMBER(602);
	if ((frame[3].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(603);
	if ((frame[3].i) >= (-28)) goto label_6;
	}
	INST_ICONST(0);
	goto label_7;
label_6:;
	INST_ICONST(1);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(606);
	jint temp0 = (jint)SM_rhino_NativeDate_IsLeapYear_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(607);
	if ((frame[3].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	LINE_NUMBER(609);
	INST_IINC(3, -1);
label_8:;
	{
	LINE_NUMBER(613);
	frame[4].i = ((frame[3].i) / (30));
	LINE_NUMBER(615);
	switch((frame[4].i)) {
		case 0: goto label_13;
		case 1: goto label_14;
		case 2: goto label_15;
		case 3: goto label_16;
		case 4: goto label_17;
		case 5: goto label_18;
		case 6: goto label_19;
		case 7: goto label_20;
		case 8: goto label_21;
		case 9: goto label_22;
		case 10: goto label_23;
		default: goto label_24;
	}
	}
label_13:;
	{
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (jint(2));
	}
label_14:;
	{
	LINE_NUMBER(619);
	frame[5].i = (31);
	LINE_NUMBER(620);
	goto label_26;
	}
label_15:;
	{
	LINE_NUMBER(622);
	frame[5].i = (61);
	LINE_NUMBER(623);
	goto label_26;
	}
label_16:;
	{
	LINE_NUMBER(625);
	frame[5].i = (92);
	LINE_NUMBER(626);
	goto label_26;
	}
label_17:;
	{
	LINE_NUMBER(628);
	frame[5].i = (122);
	LINE_NUMBER(629);
	goto label_26;
	}
label_18:;
	{
	LINE_NUMBER(631);
	frame[5].i = (153);
	LINE_NUMBER(632);
	goto label_26;
	}
label_19:;
	{
	LINE_NUMBER(634);
	frame[5].i = (184);
	LINE_NUMBER(635);
	goto label_26;
	}
label_20:;
	{
	LINE_NUMBER(637);
	frame[5].i = (214);
	LINE_NUMBER(638);
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(640);
	frame[5].i = (245);
	LINE_NUMBER(641);
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(643);
	frame[5].i = (275);
	LINE_NUMBER(644);
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (11);
	}
label_24:;
	{
	LINE_NUMBER(648);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(651);
	if ((frame[3].i) < (frame[5].i)) goto label_35;
	}
	{
	jint temp0 = (frame[4].i) + (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_36;
	}
label_35:;
	{
	jint temp0 = (frame[4].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_36:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_DateFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:DateFromTime", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(655);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[0].d));
	frame[2].i = temp0;
	LINE_NUMBER(656);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_Day_double_R_double(ctx, (frame[0].d));
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_DayFromYear_double_R_double(ctx, (jdouble((frame[2].i))));
	frame[3].i = (jint((temp1 - temp2)));
	LINE_NUMBER(658);
	INST_IINC(3, -59);
	LINE_NUMBER(659);
	if ((frame[3].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(660);
	if ((frame[3].i) >= (-28)) goto label_6;
	}
	{
	jint temp0 = (((frame[3].i) + (31)) + (28)) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	jint temp0 = ((frame[3].i) + (28)) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(663);
	jint temp0 = (jint)SM_rhino_NativeDate_IsLeapYear_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(664);
	if ((frame[3].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(665);
	popStackFrame(ctx);
	return (29);
	}
label_10:;
	LINE_NUMBER(666);
	INST_IINC(3, -1);
label_8:;
	{
	LINE_NUMBER(671);
	switch(((frame[3].i) / (30))) {
		case 0: goto label_12;
		case 1: goto label_13;
		case 2: goto label_14;
		case 3: goto label_15;
		case 4: goto label_16;
		case 5: goto label_17;
		case 6: goto label_18;
		case 7: goto label_19;
		case 8: goto label_20;
		case 9: goto label_21;
		case 10: goto label_22;
		default: goto label_23;
	}
	}
label_12:;
	{
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return ((frame[3].i) + (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(675);
	frame[4].i = (31);
	LINE_NUMBER(676);
	frame[5].i = (31);
	LINE_NUMBER(677);
	goto label_26;
	}
label_14:;
	{
	LINE_NUMBER(679);
	frame[4].i = (30);
	LINE_NUMBER(680);
	frame[5].i = (61);
	LINE_NUMBER(681);
	goto label_26;
	}
label_15:;
	{
	LINE_NUMBER(683);
	frame[4].i = (31);
	LINE_NUMBER(684);
	frame[5].i = (92);
	LINE_NUMBER(685);
	goto label_26;
	}
label_16:;
	{
	LINE_NUMBER(687);
	frame[4].i = (30);
	LINE_NUMBER(688);
	frame[5].i = (122);
	LINE_NUMBER(689);
	goto label_26;
	}
label_17:;
	{
	LINE_NUMBER(691);
	frame[4].i = (31);
	LINE_NUMBER(692);
	frame[5].i = (153);
	LINE_NUMBER(693);
	goto label_26;
	}
label_18:;
	{
	LINE_NUMBER(695);
	frame[4].i = (31);
	LINE_NUMBER(696);
	frame[5].i = (184);
	LINE_NUMBER(697);
	goto label_26;
	}
label_19:;
	{
	LINE_NUMBER(699);
	frame[4].i = (30);
	LINE_NUMBER(700);
	frame[5].i = (214);
	LINE_NUMBER(701);
	goto label_26;
	}
label_20:;
	{
	LINE_NUMBER(703);
	frame[4].i = (31);
	LINE_NUMBER(704);
	frame[5].i = (245);
	LINE_NUMBER(705);
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(707);
	frame[4].i = (30);
	LINE_NUMBER(708);
	frame[5].i = (275);
	LINE_NUMBER(709);
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(711);
	popStackFrame(ctx);
	return (((frame[3].i) - (275)) + (jint(1)));
	}
label_23:;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(715);
	frame[3].i = ((frame[3].i) - (frame[5].i));
	LINE_NUMBER(716);
	if ((frame[3].i) >= 0) goto label_44;
	}
	{
	LINE_NUMBER(718);
	frame[3].i = ((frame[3].i) + (frame[4].i));
	}
label_44:;
	{
	LINE_NUMBER(720);
	popStackFrame(ctx);
	return ((frame[3].i) + (jint(1)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_WeekDay_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:WeekDay", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(725);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_Day_double_R_double(ctx, (frame[0].d));
	frame[2].d = (temp0 + (jdouble(4.0)));
	LINE_NUMBER(726);
	frame[2].d = (fmod((frame[2].d), (jdouble(7.0))));
	LINE_NUMBER(727);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(728);
	frame[2].d = ((frame[2].d) + (jdouble(7.0)));
	}
label_3:;
	{
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return (jint((frame[2].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_now_R_double(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:now", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	{
	LINE_NUMBER(733);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	popStackFrame(ctx);
	return (jdouble(temp0));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_DaylightSavingTA_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:DaylightSavingTA", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(741);
	if ((doubleCompare((frame[0].d), (jdouble(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(742);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[0].d));
	jint temp1 = (jint)SM_rhino_NativeDate_EquivalentYear_int_R_int(ctx, temp0);
	frame[2].i = temp1;
	LINE_NUMBER(743);
	jdouble temp2 = jdouble((frame[2].i));
	jint temp3 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[0].d));
	jdouble temp4 = jdouble(temp3);
	jint temp5 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[0].d));
	jdouble temp6 = (jdouble)SM_rhino_NativeDate_MakeDay_double_double_double_R_double(ctx, temp2, temp4, (jdouble(temp5)));
	frame[3].d = temp6;
	LINE_NUMBER(744);
	jdouble temp7 = frame[3].d;
	jdouble temp8 = (jdouble)SM_rhino_NativeDate_TimeWithinDay_double_R_double(ctx, (frame[0].d));
	jdouble temp9 = (jdouble)SM_rhino_NativeDate_MakeDate_double_double_R_double(ctx, temp7, temp8);
	frame[0].d = temp9;
	}
label_1:;
	{
	LINE_NUMBER(746);
	clinit_java_util_Date(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[0].o, (jlong((frame[0].d))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(747);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = (jobject)SF_rhino_NativeDate_thisTimeZone;
	jint temp0 = (jint)((func_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(748);
	popStackFrame(ctx);
	return (jdouble(3600000.0));
	}
label_6:;
	{
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return (jdouble(0));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_EquivalentYear_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:EquivalentYear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(760);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_DayFromYear_double_R_double(ctx, (jdouble((frame[0].i))));
	frame[1].i = ((jint(temp0)) + (jint(4)));
	LINE_NUMBER(761);
	frame[1].i = ((frame[1].i) % (7));
	LINE_NUMBER(762);
	if ((frame[1].i) >= 0) goto label_3;
	}
	LINE_NUMBER(763);
	INST_IINC(1, 7);
label_3:;
	{
	LINE_NUMBER(765);
	jint temp0 = (jint)SM_rhino_NativeDate_IsLeapYear_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(766);
	switch((frame[1].i)) {
		case 0: goto label_7;
		case 1: goto label_8;
		case 2: goto label_9;
		case 3: goto label_10;
		case 4: goto label_11;
		case 5: goto label_12;
		case 6: goto label_13;
		default: goto label_14;
	}
	}
label_7:;
	{
	LINE_NUMBER(768);
	popStackFrame(ctx);
	return (1984);
	}
label_8:;
	{
	LINE_NUMBER(770);
	popStackFrame(ctx);
	return (1996);
	}
label_9:;
	{
	LINE_NUMBER(772);
	popStackFrame(ctx);
	return (1980);
	}
label_10:;
	{
	LINE_NUMBER(774);
	popStackFrame(ctx);
	return (1992);
	}
label_11:;
	{
	LINE_NUMBER(776);
	popStackFrame(ctx);
	return (1976);
	}
label_12:;
	{
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return (1988);
	}
label_13:;
	{
	LINE_NUMBER(780);
	popStackFrame(ctx);
	return (1972);
	}
label_14:;
	goto label_15;
label_5:;
	{
	LINE_NUMBER(783);
	switch((frame[1].i)) {
		case 0: goto label_16;
		case 1: goto label_17;
		case 2: goto label_18;
		case 3: goto label_19;
		case 4: goto label_20;
		case 5: goto label_21;
		case 6: goto label_22;
		default: goto label_15;
	}
	}
label_16:;
	{
	LINE_NUMBER(785);
	popStackFrame(ctx);
	return (1978);
	}
label_17:;
	{
	LINE_NUMBER(787);
	popStackFrame(ctx);
	return (1973);
	}
label_18:;
	{
	LINE_NUMBER(789);
	popStackFrame(ctx);
	return (1985);
	}
label_19:;
	{
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return (1986);
	}
label_20:;
	{
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (1981);
	}
label_21:;
	{
	LINE_NUMBER(795);
	popStackFrame(ctx);
	return (1971);
	}
label_22:;
	{
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return (1977);
	}
label_15:;
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_LocalTime_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:LocalTime", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(805);
	jdouble temp0 = (frame[0].d) + (clinit_rhino_NativeDate(ctx), (jdouble)SF_rhino_NativeDate_LocalTZA);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_DaylightSavingTA_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_internalUTC_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:internalUTC", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(809);
	jdouble temp0 = (frame[0].d) - (clinit_rhino_NativeDate(ctx), (jdouble)SF_rhino_NativeDate_LocalTZA);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_DaylightSavingTA_double_R_double(ctx, ((frame[0].d) - (clinit_rhino_NativeDate(ctx), (jdouble)SF_rhino_NativeDate_LocalTZA)));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_HourFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:HourFromTime", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(814);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) / (jdouble(3600000.0))));
	frame[2].d = (fmod(temp0, (jdouble(24.0))));
	LINE_NUMBER(815);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(816);
	frame[2].d = ((frame[2].d) + (jdouble(24.0)));
	}
label_2:;
	{
	LINE_NUMBER(817);
	popStackFrame(ctx);
	return (jint((frame[2].d)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_MinFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:MinFromTime", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(822);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) / (jdouble(60000.0))));
	frame[2].d = (fmod(temp0, (jdouble(60.0))));
	LINE_NUMBER(823);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(824);
	frame[2].d = ((frame[2].d) + (jdouble(60.0)));
	}
label_2:;
	{
	LINE_NUMBER(825);
	popStackFrame(ctx);
	return (jint((frame[2].d)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_SecFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:SecFromTime", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(830);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) / (jdouble(1000.0))));
	frame[2].d = (fmod(temp0, (jdouble(60.0))));
	LINE_NUMBER(831);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(832);
	frame[2].d = ((frame[2].d) + (jdouble(60.0)));
	}
label_2:;
	{
	LINE_NUMBER(833);
	popStackFrame(ctx);
	return (jint((frame[2].d)));
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeDate_msFromTime_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:msFromTime", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(838);
	frame[2].d = (fmod((frame[0].d), (jdouble(1000.0))));
	LINE_NUMBER(839);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(840);
	frame[2].d = ((frame[2].d) + (jdouble(1000.0)));
	}
label_2:;
	{
	LINE_NUMBER(841);
	popStackFrame(ctx);
	return (jint((frame[2].d)));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_MakeTime_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:MakeTime", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (((((((frame[0].d) * (jdouble(60.0))) + (frame[2].d)) * (jdouble(60.0))) + (frame[4].d)) * (jdouble(1000.0))) + (frame[6].d));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_MakeDay_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:MakeDay", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(851);
	jdouble temp0 = frame[0].d;
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[2].d) / (jdouble(12.0))));
	frame[0].d = (temp0 + temp1);
	LINE_NUMBER(853);
	frame[2].d = (fmod((frame[2].d), (jdouble(12.0))));
	LINE_NUMBER(854);
	if ((doubleCompare((frame[2].d), (jdouble(0)), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(855);
	frame[2].d = ((frame[2].d) + (jdouble(12.0)));
	}
label_3:;
	{
	LINE_NUMBER(857);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_TimeFromYear_double_R_double(ctx, (frame[0].d));
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (temp0 / (jdouble(8.64E7))));
	frame[6].d = temp1;
	LINE_NUMBER(858);
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_DayFromMonth_int_int_R_double(ctx, (jint((frame[2].d))), (jint((frame[0].d))));
	frame[8].d = temp2;
	LINE_NUMBER(860);
	popStackFrame(ctx);
	return ((((frame[6].d) + (frame[8].d)) + (frame[4].d)) - (jdouble(1)));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_MakeDate_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:MakeDate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(864);
	popStackFrame(ctx);
	return (((frame[0].d) * (jdouble(8.64E7))) + (frame[2].d));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_TimeClip_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:TimeClip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(868);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) == 0) goto label_1;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) == 0) goto label_1;
	}
	{
	jdouble temp0 = frame[0].d;
	LINE_NUMBER(871);
	jdouble temp1 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, temp0);
	if ((doubleCompare(temp1, (jdouble(8,640000e+15)), -1)) <= 0) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_3:;
	{
	LINE_NUMBER(874);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(875);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) + (jdouble(0))));
	popStackFrame(ctx);
	return temp0;
	}
label_4:;
	{
	LINE_NUMBER(876);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, ((frame[0].d) + (jdouble(0))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_date_msecFromDate_double_double_double_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6) {
	jtype frame[28];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:date_msecFromDate", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	frame[8].d = param4;
	frame[10].d = param5;
	frame[12].d = param6;
	{
	LINE_NUMBER(890);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_MakeDay_double_double_double_R_double(ctx, (frame[0].d), (frame[2].d), (frame[4].d));
	frame[14].d = temp0;
	LINE_NUMBER(891);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_MakeTime_double_double_double_double_R_double(ctx, (frame[6].d), (frame[8].d), (frame[10].d), (frame[12].d));
	frame[16].d = temp1;
	LINE_NUMBER(892);
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_MakeDate_double_double_R_double(ctx, (frame[14].d), (frame[16].d));
	frame[18].d = temp2;
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return (frame[18].d);
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_date_msecFromArgs_Array1_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[19];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:date_msecFromArgs", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject) createArray(ctx, &class_double, (7));
	frame[1].o = sp[0].o;
	LINE_NUMBER(904);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (7)) goto label_3;
	}
	{
	LINE_NUMBER(905);
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(906);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	frame[3].d = temp0;
	LINE_NUMBER(907);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp1 != 0) goto label_8;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[3].d));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(908);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_9:;
	{
	LINE_NUMBER(910);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toInteger_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = temp1;
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(912);
	if ((frame[2].i) != (jint(2))) goto label_11;
	}
	{
	LINE_NUMBER(913);
	ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)) = (jdouble(1));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(915);
	ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i)) = (jdouble(0));
	}
label_10:;
	{
	LINE_NUMBER(904);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(921);
	if ((doubleCompare(((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(0)))), (jdouble(0)), -1)) < 0) goto label_13;
	}
	{
	if ((doubleCompare(((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(0)))), (jdouble(99.0)), 1)) > 0) goto label_13;
	}
	{
	LINE_NUMBER(922);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = (((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0)) + (jdouble(1900.0)));
	}
label_13:;
	{
	LINE_NUMBER(924);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_msecFromDate_double_double_double_double_double_double_double_R_double(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(0)))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(1)))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(2)))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(3)))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(4)))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (jint(5)))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (6))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_jsStaticFunction_UTC_Array1_java_lang_Object_R_double(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:jsStaticFunction_UTC", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(929);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(930);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_1:;
	{
	LINE_NUMBER(932);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_msecFromArgs_Array1_java_lang_Object_R_double(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_parseISOString_java_lang_String_R_double(jcontext ctx, jobject param0) {
	jtype frame[43];
	auto stack = &frame[29];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:parseISOString", 43 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(945);
	frame[1].i = (jint(-1));
	LINE_NUMBER(946);
	frame[2].i = (jint(0));
	frame[3].i = (jint(1));
	frame[4].i = (jint(2));
	LINE_NUMBER(947);
	frame[5].i = (jint(3));
	frame[6].i = (jint(4));
	frame[7].i = (jint(5));
	frame[8].i = (6);
	LINE_NUMBER(948);
	frame[9].i = (7);
	frame[10].i = (8);
	LINE_NUMBER(949);
	frame[11].i = (jint(0));
	LINE_NUMBER(951);
	sp[0].o = (jobject) createArray(ctx, &class_int, (9));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (1970);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(-1));
	frame[12].o = sp[0].o;
	LINE_NUMBER(952);
	frame[13].i = (jint(4));
	frame[14].i = (jint(1));
	frame[15].i = (jint(1));
	LINE_NUMBER(953);
	frame[16].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[17].i = temp0;
	LINE_NUMBER(954);
	if ((frame[17].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(955);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	frame[18].i = temp0;
	LINE_NUMBER(956);
	if ((frame[18].i) == (43)) goto label_21;
	}
	{
	if ((frame[18].i) != (45)) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(958);
	INST_IINC(16, 1);
	LINE_NUMBER(959);
	frame[13].i = (6);
	LINE_NUMBER(960);
	if ((frame[18].i) != (45)) goto label_25;
	}
	INST_ICONST(-1);
	goto label_26;
label_25:;
	INST_ICONST(1);
label_26:;
	INST_ISTORE(14);
	goto label_18;
label_22:;
	{
	LINE_NUMBER(961);
	if ((frame[18].i) != (84)) goto label_18;
	}
	{
	LINE_NUMBER(963);
	INST_IINC(16, 1);
	LINE_NUMBER(964);
	frame[11].i = (jint(3));
	}
label_18:;
	{
	LINE_NUMBER(968);
	if ((frame[11].i) == (jint(-1))) goto label_29;
	}
	{
	LINE_NUMBER(969);
	jint temp0 = frame[16].i;
	sp[0].i = temp0;
	sp += 1;
	if ((frame[11].i) != 0) goto label_31;
	}
	INST_ILOAD(13);
	goto label_32;
label_31:;
	{
	if ((frame[11].i) != (6)) goto label_33;
	}
	INST_ICONST(3);
	goto label_32;
label_33:;
	INST_ICONST(2);
label_32:;
	{
	sp -= 2;
	frame[18].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(970);
	if ((frame[18].i) <= (frame[17].i)) goto label_35;
	}
	{
	LINE_NUMBER(971);
	frame[11].i = (jint(-1));
	LINE_NUMBER(972);
	goto label_29;
	}
label_35:;
	{
	LINE_NUMBER(975);
	frame[19].i = (jint(0));
	}
label_38:;
	{
	LINE_NUMBER(976);
	if ((frame[16].i) >= (frame[18].i)) goto label_39;
	}
	{
	LINE_NUMBER(977);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[16].i));
	frame[20].i = temp0;
	LINE_NUMBER(978);
	if ((frame[20].i) < (48)) goto label_42;
	}
	{
	if ((frame[20].i) <= (57)) goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(979);
	frame[11].i = (jint(-1));
	LINE_NUMBER(980);
	goto label_29;
	}
label_43:;
	{
	LINE_NUMBER(982);
	frame[19].i = (((10) * (frame[19].i)) + ((frame[20].i) - (48)));
	LINE_NUMBER(976);
	INST_IINC(16, 1);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(984);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[11].i)) = (frame[19].i);
	LINE_NUMBER(986);
	if ((frame[16].i) != (frame[17].i)) goto label_47;
	}
	{
	LINE_NUMBER(988);
	switch((frame[11].i)) {
		case 3: goto label_49;
		case 7: goto label_49;
		default: goto label_50;
	}
	}
label_49:;
	{
	LINE_NUMBER(991);
	frame[11].i = (jint(-1));
	}
label_50:;
	LINE_NUMBER(993);
	goto label_29;
label_47:;
	{
	LINE_NUMBER(996);
	sp[0].o = frame[0].o;
	jint temp0 = frame[16].i;
	INST_IINC(16, 1);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[20].i = temp1;
	LINE_NUMBER(997);
	if ((frame[20].i) != (90)) goto label_52;
	}
	{
	LINE_NUMBER(999);
	ARRAY_ACCESS(jint, (frame[12].o), (7)) = (jint(0));
	LINE_NUMBER(1000);
	ARRAY_ACCESS(jint, (frame[12].o), (8)) = (jint(0));
	LINE_NUMBER(1001);
	switch((frame[11].i)) {
		case 4: goto label_56;
		case 5: goto label_56;
		case 6: goto label_56;
		default: goto label_57;
	}
	}
label_56:;
	LINE_NUMBER(1005);
	goto label_29;
label_57:;
	{
	LINE_NUMBER(1007);
	frame[11].i = (jint(-1));
	LINE_NUMBER(1009);
	goto label_29;
	}
label_52:;
	{
	LINE_NUMBER(1013);
	switch((frame[11].i)) {
		case 0: goto label_59;
		case 1: goto label_59;
		case 2: goto label_60;
		case 3: goto label_61;
		case 4: goto label_62;
		case 5: goto label_63;
		case 6: goto label_64;
		case 7: goto label_65;
		case 8: goto label_66;
		default: goto label_67;
	}
	}
label_59:;
	{
	LINE_NUMBER(1016);
	if ((frame[20].i) != (45)) goto label_68;
	}
	{
	jint temp0 = (frame[11].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_69;
	}
label_68:;
	{
	if ((frame[20].i) != (84)) goto label_70;
	}
	INST_ICONST(3);
	goto label_69;
label_70:;
	INST_ICONST(-1);
label_69:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1017);
	goto label_67;
	}
label_60:;
	{
	LINE_NUMBER(1019);
	if ((frame[20].i) != (84)) goto label_72;
	}
	INST_ICONST(3);
	goto label_73;
label_72:;
	INST_ICONST(-1);
label_73:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1020);
	goto label_67;
	}
label_61:;
	{
	LINE_NUMBER(1022);
	if ((frame[20].i) != (58)) goto label_75;
	}
	INST_ICONST(4);
	goto label_76;
label_75:;
	INST_ICONST(-1);
label_76:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1023);
	goto label_67;
	}
label_65:;
	{
	LINE_NUMBER(1027);
	if ((frame[20].i) == (58)) goto label_78;
	}
	LINE_NUMBER(1029);
	INST_IINC(16, -1);
label_78:;
	{
	LINE_NUMBER(1031);
	frame[11].i = (8);
	LINE_NUMBER(1032);
	goto label_67;
	}
label_62:;
	{
	LINE_NUMBER(1034);
	if ((frame[20].i) != (58)) goto label_81;
	}
	INST_ICONST(5);
	goto label_82;
label_81:;
	{
	if ((frame[20].i) == (43)) goto label_83;
	}
	{
	if ((frame[20].i) != (45)) goto label_84;
	}
label_83:;
	INST_BIPUSH(7);
	goto label_82;
label_84:;
	INST_ICONST(-1);
label_82:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1035);
	goto label_67;
	}
label_63:;
	{
	LINE_NUMBER(1037);
	if ((frame[20].i) != (46)) goto label_86;
	}
	INST_BIPUSH(6);
	goto label_87;
label_86:;
	{
	if ((frame[20].i) == (43)) goto label_88;
	}
	{
	if ((frame[20].i) != (45)) goto label_89;
	}
label_88:;
	INST_BIPUSH(7);
	goto label_87;
label_89:;
	INST_ICONST(-1);
label_87:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1038);
	goto label_67;
	}
label_64:;
	{
	LINE_NUMBER(1040);
	if ((frame[20].i) == (43)) goto label_91;
	}
	{
	if ((frame[20].i) != (45)) goto label_92;
	}
label_91:;
	INST_BIPUSH(7);
	goto label_93;
label_92:;
	INST_ICONST(-1);
label_93:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(1041);
	goto label_67;
	}
label_66:;
	{
	LINE_NUMBER(1043);
	frame[11].i = (jint(-1));
	}
label_67:;
	{
	LINE_NUMBER(1046);
	if ((frame[11].i) != (7)) goto label_95;
	}
	{
	LINE_NUMBER(1048);
	if ((frame[20].i) != (45)) goto label_97;
	}
	INST_ICONST(-1);
	goto label_98;
label_97:;
	INST_ICONST(1);
label_98:;
	INST_ISTORE(15);
label_95:;
	LINE_NUMBER(1050);
	goto label_18;
label_29:;
	{
	LINE_NUMBER(1055);
	if ((frame[11].i) == (jint(-1))) goto label_99;
	}
	{
	if ((frame[16].i) == (frame[17].i)) goto label_100;
	}
	goto label_99;
label_100:;
	{
	LINE_NUMBER(1058);
	frame[18].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(0))));
	frame[19].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(1))));
	frame[20].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(2))));
	LINE_NUMBER(1059);
	frame[21].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(3))));
	frame[22].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(4))));
	frame[23].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(5))));
	frame[24].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (6)));
	LINE_NUMBER(1060);
	frame[25].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (7)));
	frame[26].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (8)));
	LINE_NUMBER(1061);
	if ((frame[18].i) > (jint(275943))) goto label_99;
	}
	{
	if ((frame[19].i) < (jint(1))) goto label_99;
	}
	{
	if ((frame[19].i) > (12)) goto label_99;
	}
	{
	if ((frame[20].i) < (jint(1))) goto label_99;
	}
	{
	jint temp0 = frame[20].i;
	jint temp1 = frame[18].i;
	jint temp2 = frame[19].i;
	LINE_NUMBER(1063);
	jint temp3 = (jint)SM_rhino_NativeDate_DaysInMonth_int_int_R_int(ctx, temp1, temp2);
	if (temp0 > temp3) goto label_99;
	}
	{
	if ((frame[21].i) > (24)) goto label_99;
	}
	{
	if ((frame[21].i) != (24)) goto label_111;
	}
	INST_ILOAD(22);
	if ((--sp)->i > 0) goto label_99;
	INST_ILOAD(23);
	if ((--sp)->i > 0) goto label_99;
	INST_ILOAD(24);
	if ((--sp)->i > 0) goto label_99;
label_111:;
	{
	if ((frame[22].i) > (59)) goto label_99;
	}
	{
	if ((frame[23].i) > (59)) goto label_99;
	}
	{
	if ((frame[25].i) > (23)) goto label_99;
	}
	{
	if ((frame[26].i) <= (59)) goto label_112;
	}
	LINE_NUMBER(1071);
	goto label_99;
label_112:;
	{
	LINE_NUMBER(1074);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_msecFromDate_double_double_double_double_double_double_double_R_double(ctx, (jdouble(((frame[18].i) * (frame[14].i)))), (jdouble(((frame[19].i) - (jint(1))))), (jdouble((frame[20].i))), (jdouble((frame[21].i))), (jdouble((frame[22].i))), (jdouble((frame[23].i))), (jdouble((frame[24].i))));
	frame[27].d = temp0;
	LINE_NUMBER(1076);
	if ((frame[25].i) != (jint(-1))) goto label_115;
	}
	goto label_116;
label_115:;
	{
	LINE_NUMBER(1082);
	frame[27].d = ((frame[27].d) - (((jdouble((((frame[25].i) * (60)) + (frame[26].i)))) * (jdouble(60000.0))) * (jdouble((frame[15].i)))));
	}
label_116:;
	{
	LINE_NUMBER(1085);
	if ((doubleCompare((frame[27].d), (jdouble(-8,640000e+15)), 1)) < 0) goto label_99;
	}
	{
	if ((doubleCompare((frame[27].d), (jdouble(8,640000e+15)), -1)) <= 0) goto label_117;
	}
	goto label_99;
label_117:;
	{
	LINE_NUMBER(1086);
	popStackFrame(ctx);
	return (frame[27].d);
	}
label_99:;
	{
	LINE_NUMBER(1090);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_date_parseString_java_lang_String_R_double(jcontext ctx, jobject param0) {
	jtype frame[38];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:date_parseString", 38 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1094);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_parseISOString_java_lang_String_R_double(ctx, (frame[0].o));
	frame[1].d = temp0;
	LINE_NUMBER(1095);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[1].d));
	if (temp1 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1096);
	popStackFrame(ctx);
	return (frame[1].d);
	}
label_2:;
	{
	LINE_NUMBER(1099);
	frame[3].i = (jint(-1));
	LINE_NUMBER(1100);
	frame[4].i = (jint(-1));
	LINE_NUMBER(1101);
	frame[5].i = (jint(-1));
	LINE_NUMBER(1102);
	frame[6].i = (jint(-1));
	LINE_NUMBER(1103);
	frame[7].i = (jint(-1));
	LINE_NUMBER(1104);
	frame[8].i = (jint(-1));
	LINE_NUMBER(1107);
	frame[11].i = (jint(0));
	LINE_NUMBER(1109);
	frame[13].d = (jdouble(-1.0));
	LINE_NUMBER(1110);
	frame[15].i = (jint(0));
	LINE_NUMBER(1112);
	frame[17].i = (jint(0));
	LINE_NUMBER(1114);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[16].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(1115);
	if ((frame[11].i) >= (frame[16].i)) goto label_15;
	}
	{
	LINE_NUMBER(1116);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[11].i));
	frame[9].i = temp0;
	LINE_NUMBER(1117);
	INST_IINC(11, 1);
	LINE_NUMBER(1118);
	if ((frame[9].i) <= (32)) goto label_19;
	}
	{
	if ((frame[9].i) == (44)) goto label_19;
	}
	{
	if ((frame[9].i) != (45)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(1119);
	if ((frame[11].i) >= (frame[16].i)) goto label_14;
	}
	{
	LINE_NUMBER(1120);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[11].i));
	frame[10].i = temp0;
	LINE_NUMBER(1121);
	if ((frame[9].i) != (45)) goto label_14;
	}
	{
	if ((48) > (frame[10].i)) goto label_14;
	}
	{
	if ((frame[10].i) > (57)) goto label_14;
	}
	{
	LINE_NUMBER(1122);
	frame[15].i = (frame[9].i);
	goto label_14;
	}
label_20:;
	{
	LINE_NUMBER(1127);
	if ((frame[9].i) != (40)) goto label_24;
	}
	{
	LINE_NUMBER(1128);
	frame[18].i = (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(1129);
	if ((frame[11].i) >= (frame[16].i)) goto label_14;
	}
	{
	LINE_NUMBER(1130);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[11].i));
	frame[9].i = temp0;
	LINE_NUMBER(1131);
	INST_IINC(11, 1);
	LINE_NUMBER(1132);
	if ((frame[9].i) != (40)) goto label_30;
	}
	{
	LINE_NUMBER(1133);
	INST_IINC(18, 1);
	goto label_26;
	}
label_30:;
	{
	LINE_NUMBER(1134);
	if ((frame[9].i) != (41)) goto label_26;
	}
	{
	LINE_NUMBER(1135);
	INST_IINC(18, -1);
	if ((frame[18].i) > 0) goto label_26;
	}
	LINE_NUMBER(1136);
	goto label_14;
label_24:;
	{
	LINE_NUMBER(1140);
	if ((48) > (frame[9].i)) goto label_34;
	}
	{
	if ((frame[9].i) > (57)) goto label_34;
	}
	{
	LINE_NUMBER(1141);
	frame[12].i = ((frame[9].i) - (48));
	}
label_36:;
	{
	LINE_NUMBER(1142);
	if ((frame[11].i) >= (frame[16].i)) goto label_37;
	}
	{
	jint temp0 = 48;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[11].i));
	frame[9].i = temp1;
	if (temp0 > temp1) goto label_37;
	}
	{
	if ((frame[9].i) > (57)) goto label_37;
	}
	{
	LINE_NUMBER(1143);
	frame[12].i = ((((frame[12].i) * (10)) + (frame[9].i)) - (48));
	LINE_NUMBER(1144);
	INST_IINC(11, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(1154);
	if ((frame[15].i) == (43)) goto label_40;
	}
	{
	if ((frame[15].i) != (45)) goto label_41;
	}
label_40:;
	{
	LINE_NUMBER(1156);
	frame[17].i = (jint(1));
	LINE_NUMBER(1159);
	if ((frame[12].i) >= (24)) goto label_43;
	}
	{
	LINE_NUMBER(1160);
	frame[12].i = ((frame[12].i) * (60));
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(1162);
	frame[12].i = (((frame[12].i) % (100)) + (((frame[12].i) / (100)) * (60)));
	}
label_45:;
	{
	LINE_NUMBER(1163);
	if ((frame[15].i) != (43)) goto label_46;
	}
	{
	LINE_NUMBER(1164);
	frame[12].i = (-(frame[12].i));
	}
label_46:;
	{
	LINE_NUMBER(1165);
	if ((doubleCompare((frame[13].d), (jdouble(0)), -1)) == 0) goto label_48;
	}
	{
	if ((doubleCompare((frame[13].d), (jdouble(-1.0)), -1)) == 0) goto label_48;
	}
	{
	LINE_NUMBER(1166);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_48:;
	{
	LINE_NUMBER(1167);
	frame[13].d = (jdouble((frame[12].i)));
	goto label_50;
	}
label_41:;
	{
	LINE_NUMBER(1168);
	if ((frame[12].i) >= (70)) goto label_51;
	}
	{
	if ((frame[15].i) != (47)) goto label_52;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_52;
	INST_ILOAD(5);
	if ((--sp)->i < 0) goto label_52;
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_52;
label_51:;
	{
	LINE_NUMBER(1171);
	if ((frame[3].i) < 0) goto label_53;
	}
	{
	LINE_NUMBER(1172);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_53:;
	{
	LINE_NUMBER(1173);
	if ((frame[9].i) <= (32)) goto label_55;
	}
	{
	if ((frame[9].i) == (44)) goto label_55;
	}
	{
	if ((frame[9].i) == (47)) goto label_55;
	}
	{
	if ((frame[11].i) < (frame[16].i)) goto label_56;
	}
label_55:;
	{
	LINE_NUMBER(1174);
	if ((frame[12].i) >= (100)) goto label_57;
	}
	{
	jint temp0 = (frame[12].i) + (1900);
	sp[0].i = temp0;
	sp += 1;
	goto label_58;
	}
label_57:;
	INST_ILOAD(12);
label_58:;
	INST_ISTORE(3);
	goto label_50;
label_56:;
	{
	LINE_NUMBER(1176);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_52:;
	{
	LINE_NUMBER(1177);
	if ((frame[9].i) != (58)) goto label_59;
	}
	{
	LINE_NUMBER(1178);
	if ((frame[6].i) >= 0) goto label_61;
	}
	{
	LINE_NUMBER(1179);
	frame[6].i = (frame[12].i);
	goto label_50;
	}
label_61:;
	{
	LINE_NUMBER(1180);
	if ((frame[7].i) >= 0) goto label_63;
	}
	{
	LINE_NUMBER(1181);
	frame[7].i = (frame[12].i);
	goto label_50;
	}
label_63:;
	{
	LINE_NUMBER(1183);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_59:;
	{
	LINE_NUMBER(1184);
	if ((frame[9].i) != (47)) goto label_65;
	}
	{
	LINE_NUMBER(1185);
	if ((frame[4].i) >= 0) goto label_67;
	}
	{
	LINE_NUMBER(1186);
	frame[4].i = ((frame[12].i) - (jint(1)));
	goto label_50;
	}
label_67:;
	{
	LINE_NUMBER(1187);
	if ((frame[5].i) >= 0) goto label_69;
	}
	{
	LINE_NUMBER(1188);
	frame[5].i = (frame[12].i);
	goto label_50;
	}
label_69:;
	{
	LINE_NUMBER(1190);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_65:;
	{
	LINE_NUMBER(1191);
	if ((frame[11].i) >= (frame[16].i)) goto label_71;
	}
	{
	if ((frame[9].i) == (44)) goto label_71;
	}
	{
	if ((frame[9].i) <= (32)) goto label_71;
	}
	{
	if ((frame[9].i) == (45)) goto label_71;
	}
	{
	LINE_NUMBER(1192);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_71:;
	{
	LINE_NUMBER(1193);
	if ((frame[17].i) == 0) goto label_73;
	}
	{
	if ((frame[12].i) >= (60)) goto label_73;
	}
	{
	LINE_NUMBER(1194);
	if ((doubleCompare((frame[13].d), (jdouble(0)), 1)) >= 0) goto label_75;
	}
	{
	LINE_NUMBER(1195);
	frame[13].d = ((frame[13].d) - (jdouble((frame[12].i))));
	goto label_50;
	}
label_75:;
	{
	LINE_NUMBER(1197);
	frame[13].d = ((frame[13].d) + (jdouble((frame[12].i))));
	goto label_50;
	}
label_73:;
	{
	LINE_NUMBER(1198);
	if ((frame[6].i) < 0) goto label_77;
	}
	INST_ILOAD(7);
	if ((--sp)->i >= 0) goto label_77;
	{
	LINE_NUMBER(1199);
	frame[7].i = (frame[12].i);
	goto label_50;
	}
label_77:;
	{
	LINE_NUMBER(1200);
	if ((frame[7].i) < 0) goto label_79;
	}
	INST_ILOAD(8);
	if ((--sp)->i >= 0) goto label_79;
	{
	LINE_NUMBER(1201);
	frame[8].i = (frame[12].i);
	goto label_50;
	}
label_79:;
	{
	LINE_NUMBER(1202);
	if ((frame[5].i) >= 0) goto label_81;
	}
	{
	LINE_NUMBER(1203);
	frame[5].i = (frame[12].i);
	goto label_50;
	}
label_81:;
	{
	LINE_NUMBER(1205);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_50:;
	{
	LINE_NUMBER(1207);
	frame[15].i = (jint(0));
	goto label_14;
	}
label_34:;
	{
	LINE_NUMBER(1208);
	if ((frame[9].i) == (47)) goto label_83;
	}
	{
	if ((frame[9].i) == (58)) goto label_83;
	}
	{
	if ((frame[9].i) == (43)) goto label_83;
	}
	{
	if ((frame[9].i) != (45)) goto label_84;
	}
label_83:;
	{
	LINE_NUMBER(1209);
	frame[15].i = (frame[9].i);
	goto label_14;
	}
label_84:;
	{
	LINE_NUMBER(1211);
	frame[18].i = ((frame[11].i) - (jint(1)));
	}
label_85:;
	{
	LINE_NUMBER(1212);
	if ((frame[11].i) >= (frame[16].i)) goto label_86;
	}
	{
	LINE_NUMBER(1213);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[11].i));
	frame[9].i = temp0;
	LINE_NUMBER(1214);
	if ((65) > (frame[9].i)) goto label_89;
	}
	{
	if ((frame[9].i) <= (90)) goto label_90;
	}
label_89:;
	{
	if ((97) > (frame[9].i)) goto label_86;
	}
	{
	if ((frame[9].i) <= (122)) goto label_90;
	}
	LINE_NUMBER(1215);
	goto label_86;
label_90:;
	{
	LINE_NUMBER(1216);
	INST_IINC(11, 1);
	goto label_85;
	}
label_86:;
	{
	LINE_NUMBER(1218);
	frame[19].i = ((frame[11].i) - (frame[18].i));
	LINE_NUMBER(1219);
	if ((frame[19].i) >= (jint(2))) goto label_93;
	}
	{
	LINE_NUMBER(1220);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_93:;
	{
	LINE_NUMBER(1226);
	frame[20].o = (((jobject) createStringLiteral(ctx, u8"am;pm;monday;tuesday;wednesday;thursday;friday;saturday;sunday;january;february;march;april;may;june;july;august;september;october;november;december;gmt;ut;utc;est;edt;cst;cdt;mst;mdt;pst;pdt;"_j)));
	LINE_NUMBER(1232);
	frame[21].i = (jint(0));
	LINE_NUMBER(1233);
	frame[22].i = (jint(0));
	}
label_97:;
	{
	LINE_NUMBER(1234);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[20].o), (59), (frame[22].i));
	frame[23].i = temp0;
	LINE_NUMBER(1235);
	if ((frame[23].i) >= 0) goto label_99;
	}
	{
	LINE_NUMBER(1236);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_99:;
	{
	LINE_NUMBER(1237);
	jint temp0 = (jint)((func_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean])(ctx, (frame[20].o), (jint(1)), (frame[22].i), (frame[0].o), (frame[18].i), (frame[19].i));
	if (temp0 == 0) goto label_101;
	}
	LINE_NUMBER(1238);
	goto label_103;
label_101:;
	{
	LINE_NUMBER(1239);
	frame[22].i = ((frame[23].i) + (jint(1)));
	LINE_NUMBER(1240);
	INST_IINC(21, 1);
	LINE_NUMBER(1241);
	goto label_97;
	}
label_103:;
	{
	LINE_NUMBER(1242);
	if ((frame[21].i) >= (jint(2))) goto label_106;
	}
	{
	LINE_NUMBER(1247);
	if ((frame[6].i) > (12)) goto label_108;
	}
	INST_ILOAD(6);
	if ((--sp)->i >= 0) goto label_109;
label_108:;
	{
	LINE_NUMBER(1248);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_109:;
	{
	LINE_NUMBER(1249);
	if ((frame[21].i) != 0) goto label_110;
	}
	{
	LINE_NUMBER(1251);
	if ((frame[6].i) != (12)) goto label_112;
	}
	{
	LINE_NUMBER(1252);
	frame[6].i = (jint(0));
	goto label_112;
	}
label_110:;
	{
	LINE_NUMBER(1255);
	if ((frame[6].i) == (12)) goto label_112;
	}
	{
	LINE_NUMBER(1256);
	INST_IINC(6, 12);
	goto label_112;
	}
label_106:;
	{
	LINE_NUMBER(1258);
	INST_IINC(21, -2);
	if ((frame[21].i) >= (7)) goto label_115;
	}
	goto label_112;
label_115:;
	{
	LINE_NUMBER(1260);
	INST_IINC(21, -7);
	if ((frame[21].i) >= (12)) goto label_116;
	}
	{
	LINE_NUMBER(1262);
	if ((frame[4].i) >= 0) goto label_118;
	}
	{
	LINE_NUMBER(1263);
	frame[4].i = (frame[21].i);
	goto label_112;
	}
label_118:;
	{
	LINE_NUMBER(1265);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_116:;
	{
	LINE_NUMBER(1268);
	INST_IINC(21, -12);
	LINE_NUMBER(1270);
	switch((frame[21].i)) {
		case 0: goto label_121;
		case 1: goto label_121;
		case 2: goto label_121;
		case 3: goto label_122;
		case 4: goto label_123;
		case 5: goto label_124;
		case 6: goto label_122;
		case 7: goto label_125;
		case 8: goto label_124;
		case 9: goto label_126;
		case 10: goto label_125;
		default: goto label_127;
	}
	}
label_121:;
	{
	LINE_NUMBER(1274);
	frame[13].d = (jdouble(0));
	LINE_NUMBER(1275);
	goto label_112;
	}
label_122:;
	{
	LINE_NUMBER(1278);
	frame[13].d = (jdouble(300.0));
	LINE_NUMBER(1279);
	goto label_112;
	}
label_123:;
	{
	LINE_NUMBER(1281);
	frame[13].d = (jdouble(240.0));
	LINE_NUMBER(1282);
	goto label_112;
	}
label_124:;
	{
	LINE_NUMBER(1285);
	frame[13].d = (jdouble(360.0));
	LINE_NUMBER(1286);
	goto label_112;
	}
label_125:;
	{
	LINE_NUMBER(1289);
	frame[13].d = (jdouble(420.0));
	LINE_NUMBER(1290);
	goto label_112;
	}
label_126:;
	{
	LINE_NUMBER(1292);
	frame[13].d = (jdouble(480.0));
	LINE_NUMBER(1293);
	goto label_112;
	}
label_127:;
	{
	LINE_NUMBER(1295);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_112:;
	LINE_NUMBER(1298);
	goto label_14;
label_15:;
	{
	LINE_NUMBER(1300);
	if ((frame[3].i) < 0) goto label_134;
	}
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_134;
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_135;
label_134:;
	{
	LINE_NUMBER(1301);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_135:;
	{
	LINE_NUMBER(1302);
	if ((frame[8].i) >= 0) goto label_136;
	}
	{
	LINE_NUMBER(1303);
	frame[8].i = (jint(0));
	}
label_136:;
	{
	LINE_NUMBER(1304);
	if ((frame[7].i) >= 0) goto label_138;
	}
	{
	LINE_NUMBER(1305);
	frame[7].i = (jint(0));
	}
label_138:;
	{
	LINE_NUMBER(1306);
	if ((frame[6].i) >= 0) goto label_140;
	}
	{
	LINE_NUMBER(1307);
	frame[6].i = (jint(0));
	}
label_140:;
	{
	LINE_NUMBER(1309);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_msecFromDate_double_double_double_double_double_double_double_R_double(ctx, (jdouble((frame[3].i))), (jdouble((frame[4].i))), (jdouble((frame[5].i))), (jdouble((frame[6].i))), (jdouble((frame[7].i))), (jdouble((frame[8].i))), (jdouble(0)));
	frame[18].d = temp0;
	LINE_NUMBER(1310);
	if ((doubleCompare((frame[13].d), (jdouble(-1.0)), -1)) != 0) goto label_143;
	}
	{
	LINE_NUMBER(1311);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_internalUTC_double_R_double(ctx, (frame[18].d));
	popStackFrame(ctx);
	return temp0;
	}
label_143:;
	{
	LINE_NUMBER(1313);
	popStackFrame(ctx);
	return ((frame[18].d) + ((frame[13].d) * (jdouble(60000.0))));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeDate_date_format_double_int_R_java_lang_String(jcontext ctx, jdouble param0, jint param1) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:date_format", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1317);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (60));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1318);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[0].d));
	frame[4].d = temp0;
	LINE_NUMBER(1324);
	if ((frame[2].i) == (jint(3))) goto label_9;
	}
	{
	LINE_NUMBER(1325);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_rhino_NativeDate_WeekDay_double_R_int(ctx, (frame[4].d));
	SM_rhino_NativeDate_appendWeekDayName_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(1326);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (32));
	LINE_NUMBER(1327);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[4].d));
	SM_rhino_NativeDate_appendMonthName_java_lang_StringBuilder_int(ctx, sp[0].o, temp1);
	LINE_NUMBER(1328);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (32));
	LINE_NUMBER(1329);
	sp[0].o = frame[3].o;
	jint temp2 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[4].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp2, (jint(2)));
	LINE_NUMBER(1330);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (32));
	LINE_NUMBER(1331);
	jint temp3 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[4].d));
	frame[6].i = temp3;
	LINE_NUMBER(1332);
	if ((frame[6].i) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(1333);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (45));
	LINE_NUMBER(1334);
	frame[6].i = (-(frame[6].i));
	}
label_18:;
	{
	LINE_NUMBER(1336);
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, (frame[3].o), (frame[6].i), (jint(4)));
	LINE_NUMBER(1337);
	if ((frame[2].i) == (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(1338);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (32));
	}
label_9:;
	{
	LINE_NUMBER(1341);
	if ((frame[2].i) == (jint(4))) goto label_23;
	}
	{
	LINE_NUMBER(1342);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_rhino_NativeDate_HourFromTime_double_R_int(ctx, (frame[4].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp0, (jint(2)));
	LINE_NUMBER(1343);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (58));
	LINE_NUMBER(1344);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)SM_rhino_NativeDate_MinFromTime_double_R_int(ctx, (frame[4].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp1, (jint(2)));
	LINE_NUMBER(1345);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (58));
	LINE_NUMBER(1346);
	sp[0].o = frame[3].o;
	jint temp2 = (jint)SM_rhino_NativeDate_SecFromTime_double_R_int(ctx, (frame[4].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp2, (jint(2)));
	LINE_NUMBER(1350);
	clinit_rhino_NativeDate(ctx);
	jdouble temp3 = (jdouble)SF_rhino_NativeDate_LocalTZA;
	jdouble temp4 = (jdouble)SM_rhino_NativeDate_DaylightSavingTA_double_R_double(ctx, (frame[0].d));
	jdouble temp5 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((temp3 + temp4) / (jdouble(60000.0))));
	frame[6].i = (jint(temp5));
	LINE_NUMBER(1353);
	frame[7].i = ((((frame[6].i) / (60)) * (100)) + ((frame[6].i) % (60)));
	LINE_NUMBER(1354);
	if ((frame[7].i) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(1355);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" GMT+"_j))));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(1357);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" GMT-"_j))));
	LINE_NUMBER(1358);
	frame[7].i = (-(frame[7].i));
	}
label_34:;
	{
	LINE_NUMBER(1360);
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, (frame[3].o), (frame[7].i), (jint(4)));
	LINE_NUMBER(1364);
	if ((doubleCompare((frame[0].d), (jdouble(0)), 1)) >= 0) goto label_37;
	}
	{
	LINE_NUMBER(1365);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[4].d));
	jint temp1 = (jint)SM_rhino_NativeDate_EquivalentYear_int_R_int(ctx, temp0);
	frame[8].i = temp1;
	LINE_NUMBER(1366);
	jdouble temp2 = jdouble((frame[8].i));
	jint temp3 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[0].d));
	jdouble temp4 = jdouble(temp3);
	jint temp5 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[0].d));
	jdouble temp6 = (jdouble)SM_rhino_NativeDate_MakeDay_double_double_double_R_double(ctx, temp2, temp4, (jdouble(temp5)));
	frame[9].d = temp6;
	LINE_NUMBER(1367);
	jdouble temp7 = frame[9].d;
	jdouble temp8 = (jdouble)SM_rhino_NativeDate_TimeWithinDay_double_R_double(ctx, (frame[0].d));
	jdouble temp9 = (jdouble)SM_rhino_NativeDate_MakeDate_double_double_R_double(ctx, temp7, temp8);
	frame[0].d = temp9;
	}
label_37:;
	{
	LINE_NUMBER(1369);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" ("_j))));
	LINE_NUMBER(1370);
	clinit_java_util_Date(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[0].o, (jlong((frame[0].d))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1371);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = (jobject)SF_rhino_NativeDate_timeZoneFormatter;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1372);
	sp[0].o = frame[3].o;
	clinit_rhino_NativeDate(ctx);
	sp[1].o = (jobject)SF_rhino_NativeDate_timeZoneFormatter;
	sp[1].o = (jobject)((func_java_text_DateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_text_DateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[1].o, (frame[8].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1373);
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	goto label_44;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_44:;
	{
	LINE_NUMBER(1374);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (41));
	}
label_23:;
	{
	LINE_NUMBER(1376);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeDate_jsConstructor_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:jsConstructor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1381);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeDate);
	init_rhino_NativeDate(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1385);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1386);
	sp[0].o = frame[1].o;
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_now_R_double(ctx);
	((rhino_NativeDate *) NULL_CHECK(sp[0].o))->F_date = temp0;
	LINE_NUMBER(1387);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(1391);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(1392);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0))));
	LINE_NUMBER(1393);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_NativeDate)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1394);
	((rhino_NativeDate *) NULL_CHECK((frame[1].o)))->F_date = ((jdouble)((rhino_NativeDate *) NULL_CHECK((checkCast(ctx, &class_rhino_NativeDate, (frame[2].o)))))->F_date);
	LINE_NUMBER(1395);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_8:;
	{
	LINE_NUMBER(1397);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((func_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getDefaultValue_java_lang_Class_R_java_lang_Object, (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_Scriptable, (frame[2].o))), (jobject(nullptr)));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(1401);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_CharSequence)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1403);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_parseString_java_lang_String_R_double(ctx, sp[0].o);
	frame[3].d = temp0;
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(1406);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	frame[3].d = temp0;
	}
label_16:;
	{
	LINE_NUMBER(1408);
	sp[0].o = frame[1].o;
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, (frame[3].d));
	((rhino_NativeDate *) NULL_CHECK(sp[0].o))->F_date = temp0;
	LINE_NUMBER(1409);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_5:;
	{
	LINE_NUMBER(1412);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_date_msecFromArgs_Array1_java_lang_Object_R_double(ctx, (frame[0].o));
	frame[2].d = temp0;
	LINE_NUMBER(1414);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp1 != 0) goto label_19;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(1415);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_internalUTC_double_R_double(ctx, (frame[2].d));
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, temp0);
	frame[2].d = temp1;
	}
label_19:;
	{
	LINE_NUMBER(1417);
	((rhino_NativeDate *) NULL_CHECK((frame[1].o)))->F_date = (frame[2].d);
	LINE_NUMBER(1419);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeDate_toLocale_helper_double_int_R_java_lang_String(jcontext ctx, jdouble param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:toLocale_helper", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1424);
	switch((frame[2].i)) {
		case 5: goto label_7;
		case 6: goto label_8;
		case 7: goto label_9;
		default: goto label_10;
	}
	}
label_7:;
	{
	LINE_NUMBER(1426);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = (jobject)SF_rhino_NativeDate_localeDateTimeFormatter;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1427);
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(1429);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = (jobject)SF_rhino_NativeDate_localeTimeFormatter;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1430);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(1432);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = (jobject)SF_rhino_NativeDate_localeDateFormatter;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1433);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(1435);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(1438);
	sp[0].o = frame[3].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1439);
	sp[0].o = frame[3].o;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[1].o, (jlong((frame[0].d))));
	sp[0].o = (jobject)((func_java_text_DateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_DateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	monitorExit(ctx, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(1440);
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_rhino_NativeDate_js_toUTCString_double_R_java_lang_String(jcontext ctx, jdouble param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:js_toUTCString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1444);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (60));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1446);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)SM_rhino_NativeDate_WeekDay_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_appendWeekDayName_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(1447);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(1448);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp1, (jint(2)));
	LINE_NUMBER(1449);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (32));
	LINE_NUMBER(1450);
	sp[0].o = frame[2].o;
	jint temp2 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_appendMonthName_java_lang_StringBuilder_int(ctx, sp[0].o, temp2);
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (32));
	LINE_NUMBER(1452);
	jint temp3 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[0].d));
	frame[3].i = temp3;
	LINE_NUMBER(1453);
	if ((frame[3].i) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (45));
	LINE_NUMBER(1455);
	frame[3].i = (-(frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(1457);
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, (frame[2].o), (frame[3].i), (jint(4)));
	LINE_NUMBER(1458);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (32));
	LINE_NUMBER(1459);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)SM_rhino_NativeDate_HourFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp0, (jint(2)));
	LINE_NUMBER(1460);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (58));
	LINE_NUMBER(1461);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)SM_rhino_NativeDate_MinFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp1, (jint(2)));
	LINE_NUMBER(1462);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (58));
	LINE_NUMBER(1463);
	sp[0].o = frame[2].o;
	jint temp2 = (jint)SM_rhino_NativeDate_SecFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp2, (jint(2)));
	LINE_NUMBER(1464);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" GMT"_j))));
	LINE_NUMBER(1465);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeDate_js_toISOString_double_R_java_lang_String(jcontext ctx, jdouble param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:js_toISOString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(1469);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (27));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1471);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[0].d));
	frame[3].i = temp0;
	LINE_NUMBER(1472);
	if ((frame[3].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (45));
	LINE_NUMBER(1474);
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, (frame[2].o), (-(frame[3].i)), (6));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(1475);
	if ((frame[3].i) <= (9999)) goto label_7;
	}
	{
	LINE_NUMBER(1476);
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, (frame[2].o), (frame[3].i), (6));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1478);
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, (frame[2].o), (frame[3].i), (jint(4)));
	}
label_6:;
	{
	LINE_NUMBER(1480);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (45));
	LINE_NUMBER(1481);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, (temp0 + (jint(1))), (jint(2)));
	LINE_NUMBER(1482);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (45));
	LINE_NUMBER(1483);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp1, (jint(2)));
	LINE_NUMBER(1484);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (84));
	LINE_NUMBER(1485);
	sp[0].o = frame[2].o;
	jint temp2 = (jint)SM_rhino_NativeDate_HourFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp2, (jint(2)));
	LINE_NUMBER(1486);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (58));
	LINE_NUMBER(1487);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)SM_rhino_NativeDate_MinFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp3, (jint(2)));
	LINE_NUMBER(1488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (58));
	LINE_NUMBER(1489);
	sp[0].o = frame[2].o;
	jint temp4 = (jint)SM_rhino_NativeDate_SecFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp4, (jint(2)));
	LINE_NUMBER(1490);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (46));
	LINE_NUMBER(1491);
	sp[0].o = frame[2].o;
	jint temp5 = (jint)SM_rhino_NativeDate_msFromTime_double_R_int(ctx, (frame[0].d));
	SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(ctx, sp[0].o, temp5, (jint(3)));
	LINE_NUMBER(1492);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (90));
	LINE_NUMBER(1493);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:append0PaddedUint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1497);
	if ((frame[1].i) >= 0) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(1498);
	frame[3].i = (jint(1));
	LINE_NUMBER(1499);
	INST_IINC(2, -1);
	LINE_NUMBER(1500);
	if ((frame[1].i) < (10)) goto label_4;
	}
	{
	LINE_NUMBER(1501);
	if ((frame[1].i) >= (jint(1000000000))) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1503);
	frame[4].i = ((frame[3].i) * (10));
	LINE_NUMBER(1504);
	if ((frame[1].i) >= (frame[4].i)) goto label_9;
	}
	LINE_NUMBER(1505);
	goto label_4;
label_9:;
	{
	LINE_NUMBER(1507);
	INST_IINC(2, -1);
	LINE_NUMBER(1508);
	frame[3].i = (frame[4].i);
	LINE_NUMBER(1509);
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(1512);
	INST_IINC(2, -9);
	LINE_NUMBER(1513);
	frame[3].i = (jint(1000000000));
	}
label_4:;
	{
	LINE_NUMBER(1516);
	if ((frame[2].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(1517);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (48));
	LINE_NUMBER(1518);
	INST_IINC(2, -1);
	goto label_4;
	}
label_14:;
	{
	LINE_NUMBER(1520);
	if ((frame[3].i) == (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(1521);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (jchar(((48) + ((frame[1].i) / (frame[3].i))))));
	LINE_NUMBER(1522);
	frame[1].i = ((frame[1].i) % (frame[3].i));
	LINE_NUMBER(1523);
	frame[3].i = ((frame[3].i) / (10));
	goto label_14;
	}
label_17:;
	{
	LINE_NUMBER(1525);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (jchar(((48) + (frame[1].i)))));
	LINE_NUMBER(1526);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeDate_appendMonthName_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:appendMonthName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1532);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"JanFebMarAprMayJunJulAugSepOctNovDec"_j)));
	LINE_NUMBER(1534);
	frame[1].i = ((frame[1].i) * (jint(3)));
	LINE_NUMBER(1535);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) == (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(1536);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[1].i) + (frame[3].i)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1535);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1538);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_rhino_NativeDate_appendWeekDayName_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:appendWeekDayName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1541);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"SunMonTueWedThuFriSat"_j)));
	LINE_NUMBER(1542);
	frame[1].i = ((frame[1].i) * (jint(3)));
	LINE_NUMBER(1543);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) == (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(1544);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[1].i) + (frame[3].i)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1543);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_makeTime_double_Array1_java_lang_Object_int_R_double(jcontext ctx, jdouble param0, jobject param1, jint param2) {
	jtype frame[33];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:makeTime", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1549);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1559);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_1:;
	{
	LINE_NUMBER(1563);
	frame[5].i = (jint(1));
	LINE_NUMBER(1564);
	switch((frame[3].i)) {
		case 31: goto label_4;
		case 32: goto label_5;
		case 33: goto label_6;
		case 34: goto label_5;
		case 35: goto label_7;
		case 36: goto label_5;
		case 37: goto label_8;
		case 38: goto label_5;
		default: goto label_9;
	}
	}
label_5:;
	{
	LINE_NUMBER(1572);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1575);
	frame[4].i = (jint(1));
	LINE_NUMBER(1576);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(1579);
	frame[4].i = (jint(2));
	LINE_NUMBER(1580);
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(1583);
	frame[4].i = (jint(3));
	LINE_NUMBER(1584);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1587);
	frame[4].i = (jint(4));
	LINE_NUMBER(1588);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1591);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(1594);
	frame[6].i = (jint(0));
	LINE_NUMBER(1595);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[2].o)))->length), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(1596);
	if ((clinit_rhino_NativeDate(ctx), (jint)SF_rhino_NativeDate_$assertionsDisabled) != 0) goto label_17;
	}
	{
	if ((frame[7].i) <= (jint(4))) goto label_17;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(1597);
	sp[0].o = (jobject) createArray(ctx, &class_double, (jint(4)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1598);
	frame[9].i = (jint(0));
	}
label_19:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_20;
	}
	{
	LINE_NUMBER(1599);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[9].i))));
	frame[10].d = temp0;
	LINE_NUMBER(1600);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[10].d));
	if (temp1 != 0) goto label_23;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[10].d));
	if (temp0 == 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(1601);
	frame[6].i = (jint(1));
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(1603);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toInteger_double_R_double(ctx, (frame[10].d));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = temp1;
	}
label_25:;
	{
	LINE_NUMBER(1598);
	INST_IINC(9, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(1609);
	if ((frame[6].i) != 0) goto label_26;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(1610);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_27:;
	{
	LINE_NUMBER(1613);
	frame[9].i = (jint(0));
	frame[10].i = (frame[7].i);
	LINE_NUMBER(1617);
	if ((frame[5].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(1618);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[0].d));
	frame[19].d = temp0;
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(1620);
	frame[19].d = (frame[0].d);
	}
label_33:;
	{
	LINE_NUMBER(1622);
	if ((frame[4].i) < (jint(4))) goto label_34;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_34;
	}
	{
	LINE_NUMBER(1623);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[11].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_37;
	}
label_34:;
	{
	LINE_NUMBER(1625);
	jint temp0 = (jint)SM_rhino_NativeDate_HourFromTime_double_R_int(ctx, (frame[19].d));
	frame[11].d = (jdouble(temp0));
	}
label_37:;
	{
	LINE_NUMBER(1627);
	if ((frame[4].i) < (jint(3))) goto label_38;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_38;
	}
	{
	LINE_NUMBER(1628);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[13].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(1630);
	jint temp0 = (jint)SM_rhino_NativeDate_MinFromTime_double_R_int(ctx, (frame[19].d));
	frame[13].d = (jdouble(temp0));
	}
label_41:;
	{
	LINE_NUMBER(1632);
	if ((frame[4].i) < (jint(2))) goto label_42;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_42;
	}
	{
	LINE_NUMBER(1633);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[15].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(1635);
	jint temp0 = (jint)SM_rhino_NativeDate_SecFromTime_double_R_int(ctx, (frame[19].d));
	frame[15].d = (jdouble(temp0));
	}
label_45:;
	{
	LINE_NUMBER(1637);
	if ((frame[4].i) < (jint(1))) goto label_46;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_46;
	}
	{
	LINE_NUMBER(1638);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[17].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_49;
	}
label_46:;
	{
	LINE_NUMBER(1640);
	jint temp0 = (jint)SM_rhino_NativeDate_msFromTime_double_R_int(ctx, (frame[19].d));
	frame[17].d = (jdouble(temp0));
	}
label_49:;
	{
	LINE_NUMBER(1642);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_MakeTime_double_double_double_double_R_double(ctx, (frame[11].d), (frame[13].d), (frame[15].d), (frame[17].d));
	frame[21].d = temp0;
	LINE_NUMBER(1643);
	jdouble temp1 = (jdouble)SM_rhino_NativeDate_Day_double_R_double(ctx, (frame[19].d));
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_MakeDate_double_double_R_double(ctx, temp1, (frame[21].d));
	frame[23].d = temp2;
	LINE_NUMBER(1645);
	if ((frame[5].i) == 0) goto label_52;
	}
	{
	LINE_NUMBER(1646);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_internalUTC_double_R_double(ctx, (frame[23].d));
	frame[23].d = temp0;
	}
label_52:;
	{
	LINE_NUMBER(1648);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, (frame[23].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_rhino_NativeDate_makeDate_double_Array1_java_lang_Object_int_R_double(jcontext ctx, jdouble param0, jobject param1, jint param2) {
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:makeDate", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	frame[0].d = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1653);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(1654);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_1:;
	{
	LINE_NUMBER(1658);
	frame[5].i = (jint(1));
	LINE_NUMBER(1659);
	switch((frame[3].i)) {
		case 39: goto label_4;
		case 40: goto label_5;
		case 41: goto label_6;
		case 42: goto label_5;
		case 43: goto label_7;
		case 44: goto label_5;
		default: goto label_8;
	}
	}
label_5:;
	{
	LINE_NUMBER(1665);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1668);
	frame[4].i = (jint(1));
	LINE_NUMBER(1669);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(1672);
	frame[4].i = (jint(2));
	LINE_NUMBER(1673);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1676);
	frame[4].i = (jint(3));
	LINE_NUMBER(1677);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(1680);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(1683);
	frame[6].i = (jint(0));
	LINE_NUMBER(1684);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[2].o)))->length), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(1685);
	if ((clinit_rhino_NativeDate(ctx), (jint)SF_rhino_NativeDate_$assertionsDisabled) != 0) goto label_15;
	}
	{
	if ((jint(1)) > (frame[7].i)) goto label_16;
	}
	{
	if ((frame[7].i) <= (jint(3))) goto label_15;
	}
label_16:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(1686);
	sp[0].o = (jobject) createArray(ctx, &class_double, (jint(3)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1687);
	frame[9].i = (jint(0));
	}
label_18:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_19;
	}
	{
	LINE_NUMBER(1688);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[9].i))));
	frame[10].d = temp0;
	LINE_NUMBER(1689);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[10].d));
	if (temp1 != 0) goto label_22;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[10].d));
	if (temp0 == 0) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(1690);
	frame[6].i = (jint(1));
	goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(1692);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jdouble temp1 = (jdouble)SM_rhino_ScriptRuntime_toInteger_double_R_double(ctx, (frame[10].d));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = temp1;
	}
label_24:;
	{
	LINE_NUMBER(1687);
	INST_IINC(9, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(1697);
	if ((frame[6].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(1698);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_25:;
	{
	LINE_NUMBER(1701);
	frame[9].i = (jint(0));
	frame[10].i = (frame[7].i);
	LINE_NUMBER(1707);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1708);
	if ((frame[4].i) >= (jint(3))) goto label_31;
	}
	{
	LINE_NUMBER(1709);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}
label_31:;
	{
	LINE_NUMBER(1711);
	frame[17].d = (jdouble(0));
	goto label_34;
	}
label_29:;
	{
	LINE_NUMBER(1713);
	if ((frame[5].i) == 0) goto label_35;
	}
	{
	LINE_NUMBER(1714);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_LocalTime_double_R_double(ctx, (frame[0].d));
	frame[17].d = temp0;
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1716);
	frame[17].d = (frame[0].d);
	}
label_34:;
	{
	LINE_NUMBER(1719);
	if ((frame[4].i) < (jint(3))) goto label_38;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_38;
	}
	{
	LINE_NUMBER(1720);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[11].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(1722);
	jint temp0 = (jint)SM_rhino_NativeDate_YearFromTime_double_R_int(ctx, (frame[17].d));
	frame[11].d = (jdouble(temp0));
	}
label_41:;
	{
	LINE_NUMBER(1724);
	if ((frame[4].i) < (jint(2))) goto label_42;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_42;
	}
	{
	LINE_NUMBER(1725);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[13].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(1727);
	jint temp0 = (jint)SM_rhino_NativeDate_MonthFromTime_double_R_int(ctx, (frame[17].d));
	frame[13].d = (jdouble(temp0));
	}
label_45:;
	{
	LINE_NUMBER(1729);
	if ((frame[4].i) < (jint(1))) goto label_46;
	}
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_46;
	}
	{
	LINE_NUMBER(1730);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	frame[15].d = ((jdouble)ARRAY_ACCESS(jdouble, sp[0].o, temp0));
	goto label_49;
	}
label_46:;
	{
	LINE_NUMBER(1732);
	jint temp0 = (jint)SM_rhino_NativeDate_DateFromTime_double_R_int(ctx, (frame[17].d));
	frame[15].d = (jdouble(temp0));
	}
label_49:;
	{
	LINE_NUMBER(1734);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_MakeDay_double_double_double_R_double(ctx, (frame[11].d), (frame[13].d), (frame[15].d));
	frame[15].d = temp0;
	LINE_NUMBER(1735);
	jdouble temp1 = frame[15].d;
	jdouble temp2 = (jdouble)SM_rhino_NativeDate_TimeWithinDay_double_R_double(ctx, (frame[17].d));
	jdouble temp3 = (jdouble)SM_rhino_NativeDate_MakeDate_double_double_R_double(ctx, temp1, temp2);
	frame[19].d = temp3;
	LINE_NUMBER(1737);
	if ((frame[5].i) == 0) goto label_52;
	}
	{
	LINE_NUMBER(1738);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_internalUTC_double_R_double(ctx, (frame[19].d));
	frame[19].d = temp0;
	}
label_52:;
	{
	LINE_NUMBER(1740);
	jdouble temp0 = (jdouble)SM_rhino_NativeDate_TimeClip_double_R_double(ctx, (frame[19].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeDate_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:findPrototypeId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1751);
	frame[2].i = (jint(0));
	LINE_NUMBER(1752);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1755);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	switch(temp0) {
		case 6: goto label_3;
		case 7: goto label_4;
		case 8: goto label_5;
		case 9: goto label_6;
		case 10: goto label_7;
		case 11: goto label_8;
		case 12: goto label_9;
		case 13: goto label_10;
		case 14: goto label_11;
		case 15: goto label_12;
		case 16: goto label_13;
		case 17: goto label_14;
		case 18: goto label_15;
		default: goto label_13;
	}
	}
label_3:;
	{
	LINE_NUMBER(1757);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1758);
	if ((frame[4].i) != (103)) goto label_17;
	}
	{
	LINE_NUMBER(1759);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getDay"_j)));
	LINE_NUMBER(1760);
	frame[2].i = (19);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(1761);
	if ((frame[4].i) != (116)) goto label_13;
	}
	{
	LINE_NUMBER(1762);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toJSON"_j)));
	LINE_NUMBER(1763);
	frame[2].i = (47);
	goto label_13;
	}
label_4:;
	{
	LINE_NUMBER(1767);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	switch(temp0) {
		case 68: goto label_22;
		case 84: goto label_23;
		case 89: goto label_24;
		case 117: goto label_25;
		default: goto label_26;
	}
	}
label_22:;
	{
	LINE_NUMBER(1769);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1770);
	if ((frame[4].i) != (103)) goto label_28;
	}
	{
	LINE_NUMBER(1771);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getDate"_j)));
	LINE_NUMBER(1772);
	frame[2].i = (17);
	goto label_13;
	}
label_28:;
	{
	LINE_NUMBER(1773);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1774);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setDate"_j)));
	LINE_NUMBER(1775);
	frame[2].i = (39);
	goto label_13;
	}
label_23:;
	{
	LINE_NUMBER(1779);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1780);
	if ((frame[4].i) != (103)) goto label_34;
	}
	{
	LINE_NUMBER(1781);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getTime"_j)));
	LINE_NUMBER(1782);
	frame[2].i = (11);
	goto label_13;
	}
label_34:;
	{
	LINE_NUMBER(1783);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1784);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setTime"_j)));
	LINE_NUMBER(1785);
	frame[2].i = (30);
	goto label_13;
	}
label_24:;
	{
	LINE_NUMBER(1789);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1790);
	if ((frame[4].i) != (103)) goto label_40;
	}
	{
	LINE_NUMBER(1791);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getYear"_j)));
	LINE_NUMBER(1792);
	frame[2].i = (12);
	goto label_13;
	}
label_40:;
	{
	LINE_NUMBER(1793);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1794);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setYear"_j)));
	LINE_NUMBER(1795);
	frame[2].i = (45);
	goto label_13;
	}
label_25:;
	{
	LINE_NUMBER(1799);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"valueOf"_j)));
	LINE_NUMBER(1800);
	frame[2].i = (10);
	LINE_NUMBER(1801);
	goto label_13;
	}
label_26:;
	LINE_NUMBER(1803);
	goto label_13;
label_5:;
	{
	LINE_NUMBER(1805);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	switch(temp0) {
		case 72: goto label_47;
		case 77: goto label_48;
		case 111: goto label_49;
		case 116: goto label_50;
		default: goto label_51;
	}
	}
label_47:;
	{
	LINE_NUMBER(1807);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1808);
	if ((frame[4].i) != (103)) goto label_53;
	}
	{
	LINE_NUMBER(1809);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getHours"_j)));
	LINE_NUMBER(1810);
	frame[2].i = (21);
	goto label_13;
	}
label_53:;
	{
	LINE_NUMBER(1811);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1812);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setHours"_j)));
	LINE_NUMBER(1813);
	frame[2].i = (37);
	goto label_13;
	}
label_48:;
	{
	LINE_NUMBER(1817);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1818);
	if ((frame[4].i) != (103)) goto label_59;
	}
	{
	LINE_NUMBER(1819);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getMonth"_j)));
	LINE_NUMBER(1820);
	frame[2].i = (15);
	goto label_13;
	}
label_59:;
	{
	LINE_NUMBER(1821);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1822);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setMonth"_j)));
	LINE_NUMBER(1823);
	frame[2].i = (41);
	goto label_13;
	}
label_49:;
	{
	LINE_NUMBER(1827);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toSource"_j)));
	LINE_NUMBER(1828);
	frame[2].i = (9);
	LINE_NUMBER(1829);
	goto label_13;
	}
label_50:;
	{
	LINE_NUMBER(1831);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toString"_j)));
	LINE_NUMBER(1832);
	frame[2].i = (jint(2));
	LINE_NUMBER(1833);
	goto label_13;
	}
label_51:;
	LINE_NUMBER(1835);
	goto label_13;
label_6:;
	{
	LINE_NUMBER(1837);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCDay"_j)));
	LINE_NUMBER(1838);
	frame[2].i = (20);
	LINE_NUMBER(1839);
	goto label_13;
	}
label_7:;
	{
	LINE_NUMBER(1841);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	frame[4].i = temp0;
	LINE_NUMBER(1842);
	if ((frame[4].i) != (77)) goto label_71;
	}
	{
	LINE_NUMBER(1843);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1844);
	if ((frame[4].i) != (103)) goto label_74;
	}
	{
	LINE_NUMBER(1845);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getMinutes"_j)));
	LINE_NUMBER(1846);
	frame[2].i = (23);
	goto label_13;
	}
label_74:;
	{
	LINE_NUMBER(1847);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1848);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setMinutes"_j)));
	LINE_NUMBER(1849);
	frame[2].i = (35);
	goto label_13;
	}
label_71:;
	{
	LINE_NUMBER(1851);
	if ((frame[4].i) != (83)) goto label_79;
	}
	{
	LINE_NUMBER(1852);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1853);
	if ((frame[4].i) != (103)) goto label_82;
	}
	{
	LINE_NUMBER(1854);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getSeconds"_j)));
	LINE_NUMBER(1855);
	frame[2].i = (25);
	goto label_13;
	}
label_82:;
	{
	LINE_NUMBER(1856);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1857);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setSeconds"_j)));
	LINE_NUMBER(1858);
	frame[2].i = (33);
	goto label_13;
	}
label_79:;
	{
	LINE_NUMBER(1860);
	if ((frame[4].i) != (85)) goto label_13;
	}
	{
	LINE_NUMBER(1861);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1862);
	if ((frame[4].i) != (103)) goto label_89;
	}
	{
	LINE_NUMBER(1863);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCDate"_j)));
	LINE_NUMBER(1864);
	frame[2].i = (18);
	goto label_13;
	}
label_89:;
	{
	LINE_NUMBER(1865);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1866);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCDate"_j)));
	LINE_NUMBER(1867);
	frame[2].i = (40);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(1872);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(3)));
	switch(temp0) {
		case 70: goto label_94;
		case 77: goto label_95;
		case 83: goto label_96;
		case 84: goto label_97;
		case 85: goto label_98;
		case 115: goto label_99;
		default: goto label_100;
	}
	}
label_94:;
	{
	LINE_NUMBER(1874);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1875);
	if ((frame[4].i) != (103)) goto label_102;
	}
	{
	LINE_NUMBER(1876);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getFullYear"_j)));
	LINE_NUMBER(1877);
	frame[2].i = (13);
	goto label_13;
	}
label_102:;
	{
	LINE_NUMBER(1878);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1879);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setFullYear"_j)));
	LINE_NUMBER(1880);
	frame[2].i = (43);
	goto label_13;
	}
label_95:;
	{
	LINE_NUMBER(1884);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toGMTString"_j)));
	LINE_NUMBER(1885);
	frame[2].i = (8);
	LINE_NUMBER(1886);
	goto label_13;
	}
label_96:;
	{
	LINE_NUMBER(1888);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toISOString"_j)));
	LINE_NUMBER(1889);
	frame[2].i = (46);
	LINE_NUMBER(1890);
	goto label_13;
	}
label_97:;
	{
	LINE_NUMBER(1892);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toUTCString"_j)));
	LINE_NUMBER(1893);
	frame[2].i = (8);
	LINE_NUMBER(1894);
	goto label_13;
	}
label_98:;
	{
	LINE_NUMBER(1896);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1897);
	if ((frame[4].i) != (103)) goto label_114;
	}
	{
	LINE_NUMBER(1898);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (9));
	frame[4].i = temp0;
	LINE_NUMBER(1899);
	if ((frame[4].i) != (114)) goto label_117;
	}
	{
	LINE_NUMBER(1900);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCHours"_j)));
	LINE_NUMBER(1901);
	frame[2].i = (22);
	goto label_13;
	}
label_117:;
	{
	LINE_NUMBER(1902);
	if ((frame[4].i) != (116)) goto label_13;
	}
	{
	LINE_NUMBER(1903);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCMonth"_j)));
	LINE_NUMBER(1904);
	frame[2].i = (16);
	goto label_13;
	}
label_114:;
	{
	LINE_NUMBER(1906);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1907);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (9));
	frame[4].i = temp0;
	LINE_NUMBER(1908);
	if ((frame[4].i) != (114)) goto label_124;
	}
	{
	LINE_NUMBER(1909);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCHours"_j)));
	LINE_NUMBER(1910);
	frame[2].i = (38);
	goto label_13;
	}
label_124:;
	{
	LINE_NUMBER(1911);
	if ((frame[4].i) != (116)) goto label_13;
	}
	{
	LINE_NUMBER(1912);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCMonth"_j)));
	LINE_NUMBER(1913);
	frame[2].i = (42);
	goto label_13;
	}
label_99:;
	{
	LINE_NUMBER(1918);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"constructor"_j)));
	LINE_NUMBER(1919);
	frame[2].i = (jint(1));
	LINE_NUMBER(1920);
	goto label_13;
	}
label_100:;
	LINE_NUMBER(1922);
	goto label_13;
label_9:;
	{
	LINE_NUMBER(1924);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(2)));
	frame[4].i = temp0;
	LINE_NUMBER(1925);
	if ((frame[4].i) != (68)) goto label_132;
	}
	{
	LINE_NUMBER(1926);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toDateString"_j)));
	LINE_NUMBER(1927);
	frame[2].i = (jint(4));
	goto label_13;
	}
label_132:;
	{
	LINE_NUMBER(1928);
	if ((frame[4].i) != (84)) goto label_13;
	}
	{
	LINE_NUMBER(1929);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toTimeString"_j)));
	LINE_NUMBER(1930);
	frame[2].i = (jint(3));
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(1934);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1935);
	if ((frame[4].i) != (103)) goto label_138;
	}
	{
	LINE_NUMBER(1936);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (6));
	frame[4].i = temp0;
	LINE_NUMBER(1937);
	if ((frame[4].i) != (77)) goto label_141;
	}
	{
	LINE_NUMBER(1938);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCMinutes"_j)));
	LINE_NUMBER(1939);
	frame[2].i = (24);
	goto label_13;
	}
label_141:;
	{
	LINE_NUMBER(1940);
	if ((frame[4].i) != (83)) goto label_13;
	}
	{
	LINE_NUMBER(1941);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCSeconds"_j)));
	LINE_NUMBER(1942);
	frame[2].i = (26);
	goto label_13;
	}
label_138:;
	{
	LINE_NUMBER(1944);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1945);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (6));
	frame[4].i = temp0;
	LINE_NUMBER(1946);
	if ((frame[4].i) != (77)) goto label_148;
	}
	{
	LINE_NUMBER(1947);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCMinutes"_j)));
	LINE_NUMBER(1948);
	frame[2].i = (36);
	goto label_13;
	}
label_148:;
	{
	LINE_NUMBER(1949);
	if ((frame[4].i) != (83)) goto label_13;
	}
	{
	LINE_NUMBER(1950);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCSeconds"_j)));
	LINE_NUMBER(1951);
	frame[2].i = (34);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(1956);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1957);
	if ((frame[4].i) != (103)) goto label_154;
	}
	{
	LINE_NUMBER(1958);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCFullYear"_j)));
	LINE_NUMBER(1959);
	frame[2].i = (14);
	goto label_13;
	}
label_154:;
	{
	LINE_NUMBER(1960);
	if ((frame[4].i) != (115)) goto label_157;
	}
	{
	LINE_NUMBER(1961);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCFullYear"_j)));
	LINE_NUMBER(1962);
	frame[2].i = (44);
	goto label_13;
	}
label_157:;
	{
	LINE_NUMBER(1963);
	if ((frame[4].i) != (116)) goto label_13;
	}
	{
	LINE_NUMBER(1964);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleString"_j)));
	LINE_NUMBER(1965);
	frame[2].i = (jint(5));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(1969);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1970);
	if ((frame[4].i) != (103)) goto label_163;
	}
	{
	LINE_NUMBER(1971);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getMilliseconds"_j)));
	LINE_NUMBER(1972);
	frame[2].i = (27);
	goto label_13;
	}
label_163:;
	{
	LINE_NUMBER(1973);
	if ((frame[4].i) != (115)) goto label_13;
	}
	{
	LINE_NUMBER(1974);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setMilliseconds"_j)));
	LINE_NUMBER(1975);
	frame[2].i = (31);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(1979);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getTimezoneOffset"_j)));
	LINE_NUMBER(1980);
	frame[2].i = (29);
	LINE_NUMBER(1981);
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(1983);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(1984);
	if ((frame[4].i) != (103)) goto label_171;
	}
	{
	LINE_NUMBER(1985);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"getUTCMilliseconds"_j)));
	LINE_NUMBER(1986);
	frame[2].i = (28);
	goto label_13;
	}
label_171:;
	{
	LINE_NUMBER(1987);
	if ((frame[4].i) != (115)) goto label_174;
	}
	{
	LINE_NUMBER(1988);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"setUTCMilliseconds"_j)));
	LINE_NUMBER(1989);
	frame[2].i = (32);
	goto label_13;
	}
label_174:;
	{
	LINE_NUMBER(1990);
	if ((frame[4].i) != (116)) goto label_13;
	}
	{
	LINE_NUMBER(1991);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (8));
	frame[4].i = temp0;
	LINE_NUMBER(1992);
	if ((frame[4].i) != (68)) goto label_179;
	}
	{
	LINE_NUMBER(1993);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleDateString"_j)));
	LINE_NUMBER(1994);
	frame[2].i = (7);
	goto label_13;
	}
label_179:;
	{
	LINE_NUMBER(1995);
	if ((frame[4].i) != (84)) goto label_13;
	}
	{
	LINE_NUMBER(1996);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"toLocaleTimeString"_j)));
	LINE_NUMBER(1997);
	frame[2].i = (6);
	}
label_13:;
	{
	LINE_NUMBER(2002);
	if ((frame[3].o) == nullptr) goto label_184;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_184;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_184;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_184:;
	{
	LINE_NUMBER(2005);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeDate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_NativeDate_js_NaN_date_str = ((jobject) createStringLiteral(ctx, u8"Invalid Date"_j));
	SF_rhino_NativeDate_HalfTimeDomain = jdouble(8,640000e+15);
	SF_rhino_NativeDate_HoursPerDay = jdouble(24.0);
	SF_rhino_NativeDate_MinutesPerHour = jdouble(60.0);
	SF_rhino_NativeDate_SecondsPerMinute = jdouble(60.0);
	SF_rhino_NativeDate_msPerSecond = jdouble(1000.0);
	SF_rhino_NativeDate_MinutesPerDay = jdouble(1440.0);
	SF_rhino_NativeDate_SecondsPerDay = jdouble(86400.0);
	SF_rhino_NativeDate_SecondsPerHour = jdouble(3600.0);
	SF_rhino_NativeDate_msPerDay = jdouble(8.64E7);
	SF_rhino_NativeDate_msPerHour = jdouble(3600000.0);
	SF_rhino_NativeDate_msPerMinute = jdouble(60000.0);
	SF_rhino_NativeDate_MAXARGS = jint(7);
	SF_rhino_NativeDate_ConstructorId_now = jint(-3);
	SF_rhino_NativeDate_ConstructorId_parse = jint(-2);
	SF_rhino_NativeDate_ConstructorId_UTC = jint(-1);
	SF_rhino_NativeDate_Id_constructor = jint(1);
	SF_rhino_NativeDate_Id_toString = jint(2);
	SF_rhino_NativeDate_Id_toTimeString = jint(3);
	SF_rhino_NativeDate_Id_toDateString = jint(4);
	SF_rhino_NativeDate_Id_toLocaleString = jint(5);
	SF_rhino_NativeDate_Id_toLocaleTimeString = jint(6);
	SF_rhino_NativeDate_Id_toLocaleDateString = jint(7);
	SF_rhino_NativeDate_Id_toUTCString = jint(8);
	SF_rhino_NativeDate_Id_toSource = jint(9);
	SF_rhino_NativeDate_Id_valueOf = jint(10);
	SF_rhino_NativeDate_Id_getTime = jint(11);
	SF_rhino_NativeDate_Id_getYear = jint(12);
	SF_rhino_NativeDate_Id_getFullYear = jint(13);
	SF_rhino_NativeDate_Id_getUTCFullYear = jint(14);
	SF_rhino_NativeDate_Id_getMonth = jint(15);
	SF_rhino_NativeDate_Id_getUTCMonth = jint(16);
	SF_rhino_NativeDate_Id_getDate = jint(17);
	SF_rhino_NativeDate_Id_getUTCDate = jint(18);
	SF_rhino_NativeDate_Id_getDay = jint(19);
	SF_rhino_NativeDate_Id_getUTCDay = jint(20);
	SF_rhino_NativeDate_Id_getHours = jint(21);
	SF_rhino_NativeDate_Id_getUTCHours = jint(22);
	SF_rhino_NativeDate_Id_getMinutes = jint(23);
	SF_rhino_NativeDate_Id_getUTCMinutes = jint(24);
	SF_rhino_NativeDate_Id_getSeconds = jint(25);
	SF_rhino_NativeDate_Id_getUTCSeconds = jint(26);
	SF_rhino_NativeDate_Id_getMilliseconds = jint(27);
	SF_rhino_NativeDate_Id_getUTCMilliseconds = jint(28);
	SF_rhino_NativeDate_Id_getTimezoneOffset = jint(29);
	SF_rhino_NativeDate_Id_setTime = jint(30);
	SF_rhino_NativeDate_Id_setMilliseconds = jint(31);
	SF_rhino_NativeDate_Id_setUTCMilliseconds = jint(32);
	SF_rhino_NativeDate_Id_setSeconds = jint(33);
	SF_rhino_NativeDate_Id_setUTCSeconds = jint(34);
	SF_rhino_NativeDate_Id_setMinutes = jint(35);
	SF_rhino_NativeDate_Id_setUTCMinutes = jint(36);
	SF_rhino_NativeDate_Id_setHours = jint(37);
	SF_rhino_NativeDate_Id_setUTCHours = jint(38);
	SF_rhino_NativeDate_Id_setDate = jint(39);
	SF_rhino_NativeDate_Id_setUTCDate = jint(40);
	SF_rhino_NativeDate_Id_setMonth = jint(41);
	SF_rhino_NativeDate_Id_setUTCMonth = jint(42);
	SF_rhino_NativeDate_Id_setFullYear = jint(43);
	SF_rhino_NativeDate_Id_setUTCFullYear = jint(44);
	SF_rhino_NativeDate_Id_setYear = jint(45);
	SF_rhino_NativeDate_Id_toISOString = jint(46);
	SF_rhino_NativeDate_Id_toJSON = jint(47);
	SF_rhino_NativeDate_MAX_PROTOTYPE_ID = jint(47);
	SF_rhino_NativeDate_Id_toGMTString = jint(8);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeDate:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeDate(ctx);
	{
	LINE_NUMBER(14);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_NativeDate)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_NativeDate)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(15);
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_DATE_TAG = (((jobject) createStringLiteral(ctx, u8"Date"_j)));
	LINE_NUMBER(2068);
	sp[0].o = (jobject)SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(ctx);
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_thisTimeZone = sp[0].o;
	LINE_NUMBER(2069);
	clinit_rhino_NativeDate(ctx);
	sp[0].o = (jobject)SF_rhino_NativeDate_thisTimeZone;
	jint temp0 = (jint)((func_java_util_TimeZone_getRawOffset_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_TimeZone_getRawOffset_R_int])(ctx, sp[0].o);
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_LocalTZA = (jdouble(temp0));
	LINE_NUMBER(2070);
	clinit_java_text_SimpleDateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	init_java_text_SimpleDateFormat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zzz"_j))));
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_timeZoneFormatter = sp[0].o;
	LINE_NUMBER(2071);
	jint temp1 = jint(1);
	jint temp2 = jint(1);
	LINE_NUMBER(2072);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateTimeInstance_int_int_R_java_text_DateFormat(ctx, temp1, temp2);
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_localeDateTimeFormatter = sp[0].o;
	LINE_NUMBER(2073);
	jint temp3 = jint(1);
	LINE_NUMBER(2074);
	sp[0].o = (jobject)SM_java_text_DateFormat_getDateInstance_int_R_java_text_DateFormat(ctx, temp3);
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_localeDateFormatter = sp[0].o;
	LINE_NUMBER(2075);
	jint temp4 = jint(1);
	LINE_NUMBER(2076);
	sp[0].o = (jobject)SM_java_text_DateFormat_getTimeInstance_int_R_java_text_DateFormat(ctx, temp4);
	clinit_rhino_NativeDate(ctx);
	SF_rhino_NativeDate_localeTimeFormatter = sp[0].o;
	LINE_NUMBER(2075);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeDate[] {
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
	(void *) M_rhino_NativeDate_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getMaxInstanceId_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_NativeDate_initPrototypeId_int,
	(void *) M_rhino_NativeDate_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeDate_getJSTimeValue_R_double,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
	{ "getJSTimeValue", "()D" },
};

static FieldMetadata fields[] {
	{ "DATE_TAG", &class_java_lang_Object, (intptr_t) &SF_rhino_NativeDate_DATE_TAG, "Ljava/lang/Object;", 26 },
	{ "js_NaN_date_str", &class_java_lang_String, (intptr_t) &SF_rhino_NativeDate_js_NaN_date_str, "Ljava/lang/String;", 26 },
	{ "HalfTimeDomain", &class_double, (intptr_t) &SF_rhino_NativeDate_HalfTimeDomain, "D", 26 },
	{ "HoursPerDay", &class_double, (intptr_t) &SF_rhino_NativeDate_HoursPerDay, "D", 26 },
	{ "MinutesPerHour", &class_double, (intptr_t) &SF_rhino_NativeDate_MinutesPerHour, "D", 26 },
	{ "SecondsPerMinute", &class_double, (intptr_t) &SF_rhino_NativeDate_SecondsPerMinute, "D", 26 },
	{ "msPerSecond", &class_double, (intptr_t) &SF_rhino_NativeDate_msPerSecond, "D", 26 },
	{ "MinutesPerDay", &class_double, (intptr_t) &SF_rhino_NativeDate_MinutesPerDay, "D", 26 },
	{ "SecondsPerDay", &class_double, (intptr_t) &SF_rhino_NativeDate_SecondsPerDay, "D", 26 },
	{ "SecondsPerHour", &class_double, (intptr_t) &SF_rhino_NativeDate_SecondsPerHour, "D", 26 },
	{ "msPerDay", &class_double, (intptr_t) &SF_rhino_NativeDate_msPerDay, "D", 26 },
	{ "msPerHour", &class_double, (intptr_t) &SF_rhino_NativeDate_msPerHour, "D", 26 },
	{ "msPerMinute", &class_double, (intptr_t) &SF_rhino_NativeDate_msPerMinute, "D", 26 },
	{ "MAXARGS", &class_int, (intptr_t) &SF_rhino_NativeDate_MAXARGS, "I", 26 },
	{ "ConstructorId_now", &class_int, (intptr_t) &SF_rhino_NativeDate_ConstructorId_now, "I", 26 },
	{ "ConstructorId_parse", &class_int, (intptr_t) &SF_rhino_NativeDate_ConstructorId_parse, "I", 26 },
	{ "ConstructorId_UTC", &class_int, (intptr_t) &SF_rhino_NativeDate_ConstructorId_UTC, "I", 26 },
	{ "Id_constructor", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_constructor, "I", 26 },
	{ "Id_toString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toString, "I", 26 },
	{ "Id_toTimeString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toTimeString, "I", 26 },
	{ "Id_toDateString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toDateString, "I", 26 },
	{ "Id_toLocaleString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toLocaleString, "I", 26 },
	{ "Id_toLocaleTimeString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toLocaleTimeString, "I", 26 },
	{ "Id_toLocaleDateString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toLocaleDateString, "I", 26 },
	{ "Id_toUTCString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toUTCString, "I", 26 },
	{ "Id_toSource", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toSource, "I", 26 },
	{ "Id_valueOf", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_valueOf, "I", 26 },
	{ "Id_getTime", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getTime, "I", 26 },
	{ "Id_getYear", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getYear, "I", 26 },
	{ "Id_getFullYear", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getFullYear, "I", 26 },
	{ "Id_getUTCFullYear", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCFullYear, "I", 26 },
	{ "Id_getMonth", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getMonth, "I", 26 },
	{ "Id_getUTCMonth", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCMonth, "I", 26 },
	{ "Id_getDate", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getDate, "I", 26 },
	{ "Id_getUTCDate", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCDate, "I", 26 },
	{ "Id_getDay", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getDay, "I", 26 },
	{ "Id_getUTCDay", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCDay, "I", 26 },
	{ "Id_getHours", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getHours, "I", 26 },
	{ "Id_getUTCHours", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCHours, "I", 26 },
	{ "Id_getMinutes", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getMinutes, "I", 26 },
	{ "Id_getUTCMinutes", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCMinutes, "I", 26 },
	{ "Id_getSeconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getSeconds, "I", 26 },
	{ "Id_getUTCSeconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCSeconds, "I", 26 },
	{ "Id_getMilliseconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getMilliseconds, "I", 26 },
	{ "Id_getUTCMilliseconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getUTCMilliseconds, "I", 26 },
	{ "Id_getTimezoneOffset", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_getTimezoneOffset, "I", 26 },
	{ "Id_setTime", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setTime, "I", 26 },
	{ "Id_setMilliseconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setMilliseconds, "I", 26 },
	{ "Id_setUTCMilliseconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCMilliseconds, "I", 26 },
	{ "Id_setSeconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setSeconds, "I", 26 },
	{ "Id_setUTCSeconds", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCSeconds, "I", 26 },
	{ "Id_setMinutes", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setMinutes, "I", 26 },
	{ "Id_setUTCMinutes", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCMinutes, "I", 26 },
	{ "Id_setHours", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setHours, "I", 26 },
	{ "Id_setUTCHours", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCHours, "I", 26 },
	{ "Id_setDate", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setDate, "I", 26 },
	{ "Id_setUTCDate", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCDate, "I", 26 },
	{ "Id_setMonth", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setMonth, "I", 26 },
	{ "Id_setUTCMonth", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCMonth, "I", 26 },
	{ "Id_setFullYear", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setFullYear, "I", 26 },
	{ "Id_setUTCFullYear", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setUTCFullYear, "I", 26 },
	{ "Id_setYear", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_setYear, "I", 26 },
	{ "Id_toISOString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toISOString, "I", 26 },
	{ "Id_toJSON", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toJSON, "I", 26 },
	{ "MAX_PROTOTYPE_ID", &class_int, (intptr_t) &SF_rhino_NativeDate_MAX_PROTOTYPE_ID, "I", 26 },
	{ "Id_toGMTString", &class_int, (intptr_t) &SF_rhino_NativeDate_Id_toGMTString, "I", 26 },
	{ "thisTimeZone", &class_java_util_TimeZone, (intptr_t) &SF_rhino_NativeDate_thisTimeZone, "Ljava/util/TimeZone;", 26 },
	{ "LocalTZA", &class_double, (intptr_t) &SF_rhino_NativeDate_LocalTZA, "D", 26 },
	{ "timeZoneFormatter", &class_java_text_DateFormat, (intptr_t) &SF_rhino_NativeDate_timeZoneFormatter, "Ljava/text/DateFormat;", 26 },
	{ "localeDateTimeFormatter", &class_java_text_DateFormat, (intptr_t) &SF_rhino_NativeDate_localeDateTimeFormatter, "Ljava/text/DateFormat;", 26 },
	{ "localeDateFormatter", &class_java_text_DateFormat, (intptr_t) &SF_rhino_NativeDate_localeDateFormatter, "Ljava/text/DateFormat;", 26 },
	{ "localeTimeFormatter", &class_java_text_DateFormat, (intptr_t) &SF_rhino_NativeDate_localeTimeFormatter, "Ljava/text/DateFormat;", 26 },
	{ "date", &class_double, offsetof(rhino_NativeDate, F_date), "D", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_NativeDate_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "init", (intptr_t) SM_rhino_NativeDate_init_rhino_Scriptable_boolean, 0, "(Lrhino/Scriptable;Z)V", 8 },
	{ "<init>", (intptr_t) init_rhino_NativeDate, 0, "()V", 2 },
	{ "getClassName", (intptr_t) M_rhino_NativeDate_getClassName_R_java_lang_String, VTABLE_rhino_NativeDate_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeDate_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "getJSTimeValue", (intptr_t) M_rhino_NativeDate_getJSTimeValue_R_double, VTABLE_rhino_NativeDate_getJSTimeValue_R_double, "()D", 0 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_NativeDate_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "initPrototypeId", (intptr_t) M_rhino_NativeDate_initPrototypeId_int, VTABLE_rhino_NativeDate_initPrototypeId_int, "(I)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeDate_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "Day", (intptr_t) SM_rhino_NativeDate_Day_double_R_double, 0, "(D)D", 10 },
	{ "TimeWithinDay", (intptr_t) SM_rhino_NativeDate_TimeWithinDay_double_R_double, 0, "(D)D", 10 },
	{ "IsLeapYear", (intptr_t) SM_rhino_NativeDate_IsLeapYear_int_R_boolean, 0, "(I)Z", 10 },
	{ "DayFromYear", (intptr_t) SM_rhino_NativeDate_DayFromYear_double_R_double, 0, "(D)D", 10 },
	{ "TimeFromYear", (intptr_t) SM_rhino_NativeDate_TimeFromYear_double_R_double, 0, "(D)D", 10 },
	{ "YearFromTime", (intptr_t) SM_rhino_NativeDate_YearFromTime_double_R_int, 0, "(D)I", 10 },
	{ "DayFromMonth", (intptr_t) SM_rhino_NativeDate_DayFromMonth_int_int_R_double, 0, "(II)D", 10 },
	{ "DaysInYear", (intptr_t) SM_rhino_NativeDate_DaysInYear_double_R_double, 0, "(D)D", 10 },
	{ "DaysInMonth", (intptr_t) SM_rhino_NativeDate_DaysInMonth_int_int_R_int, 0, "(II)I", 10 },
	{ "MonthFromTime", (intptr_t) SM_rhino_NativeDate_MonthFromTime_double_R_int, 0, "(D)I", 10 },
	{ "DateFromTime", (intptr_t) SM_rhino_NativeDate_DateFromTime_double_R_int, 0, "(D)I", 10 },
	{ "WeekDay", (intptr_t) SM_rhino_NativeDate_WeekDay_double_R_int, 0, "(D)I", 10 },
	{ "now", (intptr_t) SM_rhino_NativeDate_now_R_double, 0, "()D", 10 },
	{ "DaylightSavingTA", (intptr_t) SM_rhino_NativeDate_DaylightSavingTA_double_R_double, 0, "(D)D", 10 },
	{ "EquivalentYear", (intptr_t) SM_rhino_NativeDate_EquivalentYear_int_R_int, 0, "(I)I", 10 },
	{ "LocalTime", (intptr_t) SM_rhino_NativeDate_LocalTime_double_R_double, 0, "(D)D", 10 },
	{ "internalUTC", (intptr_t) SM_rhino_NativeDate_internalUTC_double_R_double, 0, "(D)D", 10 },
	{ "HourFromTime", (intptr_t) SM_rhino_NativeDate_HourFromTime_double_R_int, 0, "(D)I", 10 },
	{ "MinFromTime", (intptr_t) SM_rhino_NativeDate_MinFromTime_double_R_int, 0, "(D)I", 10 },
	{ "SecFromTime", (intptr_t) SM_rhino_NativeDate_SecFromTime_double_R_int, 0, "(D)I", 10 },
	{ "msFromTime", (intptr_t) SM_rhino_NativeDate_msFromTime_double_R_int, 0, "(D)I", 10 },
	{ "MakeTime", (intptr_t) SM_rhino_NativeDate_MakeTime_double_double_double_double_R_double, 0, "(DDDD)D", 10 },
	{ "MakeDay", (intptr_t) SM_rhino_NativeDate_MakeDay_double_double_double_R_double, 0, "(DDD)D", 10 },
	{ "MakeDate", (intptr_t) SM_rhino_NativeDate_MakeDate_double_double_R_double, 0, "(DD)D", 10 },
	{ "TimeClip", (intptr_t) SM_rhino_NativeDate_TimeClip_double_R_double, 0, "(D)D", 10 },
	{ "date_msecFromDate", (intptr_t) SM_rhino_NativeDate_date_msecFromDate_double_double_double_double_double_double_double_R_double, 0, "(DDDDDDD)D", 10 },
	{ "date_msecFromArgs", (intptr_t) SM_rhino_NativeDate_date_msecFromArgs_Array1_java_lang_Object_R_double, 0, "([Ljava/lang/Object;)D", 10 },
	{ "jsStaticFunction_UTC", (intptr_t) SM_rhino_NativeDate_jsStaticFunction_UTC_Array1_java_lang_Object_R_double, 0, "([Ljava/lang/Object;)D", 10 },
	{ "parseISOString", (intptr_t) SM_rhino_NativeDate_parseISOString_java_lang_String_R_double, 0, "(Ljava/lang/String;)D", 10 },
	{ "date_parseString", (intptr_t) SM_rhino_NativeDate_date_parseString_java_lang_String_R_double, 0, "(Ljava/lang/String;)D", 10 },
	{ "date_format", (intptr_t) SM_rhino_NativeDate_date_format_double_int_R_java_lang_String, 0, "(DI)Ljava/lang/String;", 10 },
	{ "jsConstructor", (intptr_t) SM_rhino_NativeDate_jsConstructor_Array1_java_lang_Object_R_java_lang_Object, 0, "([Ljava/lang/Object;)Ljava/lang/Object;", 10 },
	{ "toLocale_helper", (intptr_t) SM_rhino_NativeDate_toLocale_helper_double_int_R_java_lang_String, 0, "(DI)Ljava/lang/String;", 10 },
	{ "js_toUTCString", (intptr_t) SM_rhino_NativeDate_js_toUTCString_double_R_java_lang_String, 0, "(D)Ljava/lang/String;", 10 },
	{ "js_toISOString", (intptr_t) SM_rhino_NativeDate_js_toISOString_double_R_java_lang_String, 0, "(D)Ljava/lang/String;", 10 },
	{ "append0PaddedUint", (intptr_t) SM_rhino_NativeDate_append0PaddedUint_java_lang_StringBuilder_int_int, 0, "(Ljava/lang/StringBuilder;II)V", 10 },
	{ "appendMonthName", (intptr_t) SM_rhino_NativeDate_appendMonthName_java_lang_StringBuilder_int, 0, "(Ljava/lang/StringBuilder;I)V", 10 },
	{ "appendWeekDayName", (intptr_t) SM_rhino_NativeDate_appendWeekDayName_java_lang_StringBuilder_int, 0, "(Ljava/lang/StringBuilder;I)V", 10 },
	{ "makeTime", (intptr_t) SM_rhino_NativeDate_makeTime_double_Array1_java_lang_Object_int_R_double, 0, "(D[Ljava/lang/Object;I)D", 10 },
	{ "makeDate", (intptr_t) SM_rhino_NativeDate_makeDate_double_Array1_java_lang_Object_int_R_double, 0, "(D[Ljava/lang/Object;I)D", 10 },
	{ "findPrototypeId", (intptr_t) M_rhino_NativeDate_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_NativeDate_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeDate, 0, "()V", 8 },
};

Class class_rhino_NativeDate{
		.nativeName = (intptr_t) "rhino/NativeDate",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_NativeDate),
		.classVtable = (intptr_t) vtable_rhino_NativeDate,
		.staticInitializer = (intptr_t) clinit_rhino_NativeDate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeDate,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 74,
		.nativeFields = (intptr_t) fields,
		.methodCount = 50,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 114,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeDate = registerClass(&class_rhino_NativeDate);

}
