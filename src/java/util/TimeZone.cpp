#include "java/util/TimeZone.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/TimeZone.h"
#include "java/util/TimeZone_1.h"
#include "java/util/TimeZone_2.h"
#include "java/lang/System.h"
#include "java/util/Date.h"
#include "java/util/SimpleTimeZone.h"

extern "C" {

jint SF_java_util_TimeZone_SHORT;
jint SF_java_util_TimeZone_LONG;
jobject SF_java_util_TimeZone_GMT;
jobject SF_java_util_TimeZone_defaultTimeZone;

void mark_java_util_TimeZone(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_TimeZone_GMT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_TimeZone_GMT)->clazz)->markFunction)((jobject) SF_java_util_TimeZone_GMT, mark, depth + 1);
		if (SF_java_util_TimeZone_defaultTimeZone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_TimeZone_defaultTimeZone)->clazz)->markFunction)((jobject) SF_java_util_TimeZone_defaultTimeZone, mark, depth + 1);
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
	auto self = (java_util_TimeZone *) object;
	if (self->F_ID)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ID)->clazz)->markFunction)((jobject) self->F_ID, mark, depth + 1);
}

void init_java_util_TimeZone(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_TimeZone_setID_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:setID", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((java_util_TimeZone *) NULL_CHECK((frame[0].o)))->F_ID = (jref) (frame[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TimeZone_getAvailableIDs_R_Array1_java_lang_String(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getAvailableIDs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_java_util_TimeZone_getTimezoneId_R_java_lang_String(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(59);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"GMT"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"GMT"_j)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"GMT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TimeZone_getTimezoneId_R_java_lang_String(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getTimezoneId", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"GMT"_j)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_TimeZone_getTimezoneOffset_java_lang_String_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getTimezoneOffset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_java_util_TimeZone_getTimezoneRawOffset_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getTimezoneRawOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_TimeZone_isTimezoneDST_java_lang_String_long_R_boolean(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:isTimezoneDST", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong SM_java_util_TimeZone_getJuly1_R_long(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getJuly1", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(83);
	frame[0].l = (jlong(1498867200000ll));
	LINE_NUMBER(84);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[2].l = temp0;
	LINE_NUMBER(85);
	frame[4].l = (frame[0].l);
	LINE_NUMBER(86);
	frame[6].i = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(87);
	if ((longCompare((frame[4].l), (frame[2].l))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(88);
	frame[4].l = ((frame[4].l) + (jlong(31536000000ll)));
	LINE_NUMBER(89);
	if (((frame[6].i) % (jint(4))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(90);
	frame[4].l = ((frame[4].l) + (jlong(86400000ll)));
	}
label_8:;
	{
	LINE_NUMBER(92);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jlong SM_java_util_TimeZone_getDec30_R_long(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getDec30", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(98);
	frame[0].l = (jlong(1483056000000ll));
	LINE_NUMBER(99);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[2].l = temp0;
	LINE_NUMBER(100);
	frame[4].l = (frame[0].l);
	LINE_NUMBER(101);
	frame[6].i = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(102);
	if ((longCompare((frame[4].l), (frame[2].l))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(103);
	frame[4].l = ((frame[4].l) + (jlong(31536000000ll)));
	LINE_NUMBER(104);
	if (((frame[6].i) % (jint(4))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(105);
	frame[4].l = ((frame[4].l) + (jlong(86400000ll)));
	}
label_8:;
	{
	LINE_NUMBER(107);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getDefault", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(116);
	clinit_java_util_TimeZone(ctx);
	sp[0].o = (jobject)SF_java_util_TimeZone_defaultTimeZone;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_java_util_TimeZone_getTimezoneId_R_java_lang_String(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(118);
	clinit_java_util_TimeZone$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TimeZone$1);
	init_java_util_TimeZone$1_java_lang_String(ctx, sp[0].o, (frame[0].o));
	clinit_java_util_TimeZone(ctx);
	SF_java_util_TimeZone_defaultTimeZone = sp[0].o;
	LINE_NUMBER(138);
	clinit_java_util_TimeZone(ctx);
	sp[0].o = (jobject)SF_java_util_TimeZone_defaultTimeZone;
	((java_util_TimeZone *) NULL_CHECK(sp[0].o))->F_ID = (jref) (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(140);
	clinit_java_util_TimeZone(ctx);
	sp[0].o = (jobject)SF_java_util_TimeZone_defaultTimeZone;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_TimeZone_getDSTSavings_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getDSTSavings", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	jint temp0 = (jint)((func_java_util_TimeZone_useDaylightTime_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_TimeZone_useDaylightTime_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->i = jint(3600000);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:inDaylightTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_TimeZone_getID_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getID", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_util_TimeZone *) NULL_CHECK((frame[0].o)))->F_ID;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TimeZone_getTimeZone_java_lang_String_R_java_util_TimeZone(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:getTimeZone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(175);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"gmt"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(176);
	clinit_java_util_TimeZone(ctx);
	sp[0].o = (jobject)SF_java_util_TimeZone_GMT;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_util_TimeZone_getTimezoneId_R_java_lang_String(ctx);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)SM_java_util_TimeZone_getDefault_R_java_util_TimeZone(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(180);
	clinit_java_util_TimeZone$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_TimeZone$2);
	init_java_util_TimeZone$2_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(209);
	((java_util_TimeZone *) NULL_CHECK((frame[1].o)))->F_ID = (jref) (frame[0].o);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint SM_java_util_TimeZone_access$000_java_lang_String_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:access$000", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)SM_java_util_TimeZone_getTimezoneOffset_java_lang_String_int_int_int_int_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_TimeZone_access$100_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)SM_java_util_TimeZone_getTimezoneRawOffset_java_lang_String_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_TimeZone_access$200_java_lang_String_long_R_boolean(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:access$200", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)SM_java_util_TimeZone_isTimezoneDST_java_lang_String_long_R_boolean(ctx, (frame[0].o), (frame[1].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_TimeZone_access$300_R_long(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(28);
	jlong temp0 = (jlong)SM_java_util_TimeZone_getDec30_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_TimeZone_access$400_R_long(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(28);
	jlong temp0 = (jlong)SM_java_util_TimeZone_getJuly1_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_TimeZone_access$500_java_util_TimeZone_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((java_util_TimeZone *) NULL_CHECK((frame[0].o)))->F_ID;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_TimeZone(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_TimeZone_SHORT = jint(0);
	SF_java_util_TimeZone_LONG = jint(1);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone(ctx);
	{
	LINE_NUMBER(41);
	clinit_java_util_SimpleTimeZone(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_SimpleTimeZone);
	init_java_util_SimpleTimeZone_int_java_lang_String(ctx, sp[0].o, (jint(0)), (((jobject) createStringLiteral(ctx, u8"GMT"_j))));
	clinit_java_util_TimeZone(ctx);
	SF_java_util_TimeZone_GMT = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_TimeZone[] {
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
	(void *) M_java_util_TimeZone_setID_java_lang_String,
	(void *) M_java_util_TimeZone_getDSTSavings_R_int,
	(void *) M_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean,
	(void *) M_java_util_TimeZone_getID_R_java_lang_String,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
};

static FieldMetadata fields[] {
	{ "SHORT", &class_int, (intptr_t) &SF_java_util_TimeZone_SHORT, "I", 25 },
	{ "LONG", &class_int, (intptr_t) &SF_java_util_TimeZone_LONG, "I", 25 },
	{ "GMT", &class_java_util_TimeZone, (intptr_t) &SF_java_util_TimeZone_GMT, "Ljava/util/TimeZone;", 24 },
	{ "defaultTimeZone", &class_java_util_TimeZone, (intptr_t) &SF_java_util_TimeZone_defaultTimeZone, "Ljava/util/TimeZone;", 10 },
	{ "ID", &class_java_lang_String, offsetof(java_util_TimeZone, F_ID), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TimeZone, 0, "()V", 1 },
	{ "setID", (intptr_t) M_java_util_TimeZone_setID_java_lang_String, VTABLE_java_util_TimeZone_setID_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "getAvailableIDs", (intptr_t) SM_java_util_TimeZone_getAvailableIDs_R_Array1_java_lang_String, 0, "()[Ljava/lang/String;", 9 },
	{ "getTimezoneId", (intptr_t) SM_java_util_TimeZone_getTimezoneId_R_java_lang_String, 0, "()Ljava/lang/String;", 10 },
	{ "getTimezoneOffset", (intptr_t) SM_java_util_TimeZone_getTimezoneOffset_java_lang_String_int_int_int_int_R_int, 0, "(Ljava/lang/String;IIII)I", 10 },
	{ "getTimezoneRawOffset", (intptr_t) SM_java_util_TimeZone_getTimezoneRawOffset_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "isTimezoneDST", (intptr_t) SM_java_util_TimeZone_isTimezoneDST_java_lang_String_long_R_boolean, 0, "(Ljava/lang/String;J)Z", 10 },
	{ "getJuly1", (intptr_t) SM_java_util_TimeZone_getJuly1_R_long, 0, "()J", 10 },
	{ "getDec30", (intptr_t) SM_java_util_TimeZone_getDec30_R_long, 0, "()J", 10 },
	{ "getDefault", (intptr_t) SM_java_util_TimeZone_getDefault_R_java_util_TimeZone, 0, "()Ljava/util/TimeZone;", 9 },
	{ "getDSTSavings", (intptr_t) M_java_util_TimeZone_getDSTSavings_R_int, VTABLE_java_util_TimeZone_getDSTSavings_R_int, "()I", 0 },
	{ "inDaylightTime", (intptr_t) M_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean, VTABLE_java_util_TimeZone_inDaylightTime_java_util_Date_R_boolean, "(Ljava/util/Date;)Z", 0 },
	{ "getID", (intptr_t) M_java_util_TimeZone_getID_R_java_lang_String, VTABLE_java_util_TimeZone_getID_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getOffset", 0, VTABLE_java_util_TimeZone_getOffset_int_int_int_int_int_int_R_int, "(IIIIII)I", 1025 },
	{ "getRawOffset", 0, VTABLE_java_util_TimeZone_getRawOffset_R_int, "()I", 1025 },
	{ "getTimeZone", (intptr_t) SM_java_util_TimeZone_getTimeZone_java_lang_String_R_java_util_TimeZone, 0, "(Ljava/lang/String;)Ljava/util/TimeZone;", 9 },
	{ "useDaylightTime", 0, VTABLE_java_util_TimeZone_useDaylightTime_R_boolean, "()Z", 1025 },
	{ "access$000", (intptr_t) SM_java_util_TimeZone_access$000_java_lang_String_int_int_int_int_R_int, 0, "(Ljava/lang/String;IIII)I", 4104 },
	{ "access$100", (intptr_t) SM_java_util_TimeZone_access$100_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 4104 },
	{ "access$200", (intptr_t) SM_java_util_TimeZone_access$200_java_lang_String_long_R_boolean, 0, "(Ljava/lang/String;J)Z", 4104 },
	{ "access$300", (intptr_t) SM_java_util_TimeZone_access$300_R_long, 0, "()J", 4104 },
	{ "access$400", (intptr_t) SM_java_util_TimeZone_access$400_R_long, 0, "()J", 4104 },
	{ "access$500", (intptr_t) SM_java_util_TimeZone_access$500_java_util_TimeZone_R_java_lang_String, 0, "(Ljava/util/TimeZone;)Ljava/lang/String;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_util_TimeZone, 0, "()V", 8 },
};

Class class_java_util_TimeZone{
		.nativeName = (intptr_t) "java/util/TimeZone",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_TimeZone),
		.classVtable = (intptr_t) vtable_java_util_TimeZone,
		.staticInitializer = (intptr_t) clinit_java_util_TimeZone,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TimeZone,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_TimeZone = registerClass(&class_java_util_TimeZone);

}
