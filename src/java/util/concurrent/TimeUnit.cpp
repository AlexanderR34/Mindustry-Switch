#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/Enum.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/TimeUnit_2.h"
#include "java/util/concurrent/TimeUnit_1.h"
#include "java/util/concurrent/TimeUnit_4.h"
#include "java/util/concurrent/TimeUnit_3.h"
#include "java/util/concurrent/TimeUnit_6.h"
#include "java/util/concurrent/TimeUnit_5.h"
#include "java/lang/Class.h"
#include "java/lang/AbstractMethodError.h"
#include "java/util/concurrent/TimeUnit_7.h"
#include "java/lang/Thread.h"

extern "C" {

jobject SF_java_util_concurrent_TimeUnit_NANOSECONDS;
jobject SF_java_util_concurrent_TimeUnit_MICROSECONDS;
jobject SF_java_util_concurrent_TimeUnit_MILLISECONDS;
jobject SF_java_util_concurrent_TimeUnit_SECONDS;
jobject SF_java_util_concurrent_TimeUnit_MINUTES;
jobject SF_java_util_concurrent_TimeUnit_HOURS;
jobject SF_java_util_concurrent_TimeUnit_DAYS;
jlong SF_java_util_concurrent_TimeUnit_C0;
jlong SF_java_util_concurrent_TimeUnit_C1;
jlong SF_java_util_concurrent_TimeUnit_C2;
jlong SF_java_util_concurrent_TimeUnit_C3;
jlong SF_java_util_concurrent_TimeUnit_C4;
jlong SF_java_util_concurrent_TimeUnit_C5;
jlong SF_java_util_concurrent_TimeUnit_C6;
jlong SF_java_util_concurrent_TimeUnit_MAX;
jobject SF_java_util_concurrent_TimeUnit_$VALUES;

void mark_java_util_concurrent_TimeUnit(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_TimeUnit_NANOSECONDS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_NANOSECONDS)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_NANOSECONDS, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_MICROSECONDS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_MICROSECONDS)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_MICROSECONDS, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_MILLISECONDS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_MILLISECONDS)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_MILLISECONDS, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_SECONDS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_SECONDS)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_SECONDS, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_MINUTES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_MINUTES)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_MINUTES, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_HOURS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_HOURS)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_HOURS, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_DAYS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_DAYS)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_DAYS, mark, depth + 1);
		if (SF_java_util_concurrent_TimeUnit_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_TimeUnit_$VALUES)->clazz)->markFunction)((jobject) SF_java_util_concurrent_TimeUnit_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_TimeUnit *) object;
}

jobject SM_java_util_concurrent_TimeUnit_values_R_Array1_java_util_concurrent_TimeUnit(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	{
	LINE_NUMBER(71);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_TimeUnit_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_util_concurrent_TimeUnit, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_TimeUnit_valueOf_java_lang_String_R_java_util_concurrent_TimeUnit(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_util_concurrent_TimeUnit)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_concurrent_TimeUnit, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_TimeUnit_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(71);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:x", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	frame[4].l = param2;
	{
	LINE_NUMBER(193);
	if ((longCompare((frame[0].l), (frame[4].l))) <= 0) goto label_1;
	}
	(sp++)->l = jlong(9223372036854775807ll);
	popStackFrame(ctx);
	INST_LRETURN();
label_1:;
	{
	LINE_NUMBER(194);
	if ((longCompare((frame[0].l), (-(frame[4].l)))) >= 0) goto label_2;
	}
	(sp++)->l = jlong(-9223372036854775807ll);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return ((frame[0].l) * (frame[2].l));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:convert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(222);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toNanos_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toNanos", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(234);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toMicros_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toMicros", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(246);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toMillis_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toMillis", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(258);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toSeconds_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toSeconds", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(270);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toMinutes_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toMinutes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(283);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toHours_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toHours", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(296);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_TimeUnit_toDays_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:toDays", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(307);
	clinit_java_lang_AbstractMethodError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AbstractMethodError);
	init_java_lang_AbstractMethodError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:timedWait", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(345);
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(346);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, (frame[0].o), (frame[2].l));
	frame[4].l = temp0;
	LINE_NUMBER(347);
	jint temp1 = (jint)((func_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int])(ctx, (frame[0].o), (frame[2].l), (frame[4].l));
	frame[6].i = temp1;
	LINE_NUMBER(348);
	((func_java_lang_Object_wait_long_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_wait_long_int])(ctx, (frame[1].o), (frame[4].l), (frame[6].i));
	}
label_1:;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:timedJoin", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(365);
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(366);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, (frame[0].o), (frame[2].l));
	frame[4].l = temp0;
	LINE_NUMBER(367);
	jint temp1 = (jint)((func_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int])(ctx, (frame[0].o), (frame[2].l), (frame[4].l));
	frame[6].i = temp1;
	LINE_NUMBER(368);
	((func_java_lang_Thread_join_long_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Thread_join_long_int])(ctx, (frame[1].o), (frame[4].l), (frame[6].i));
	}
label_1:;
	LINE_NUMBER(370);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_TimeUnit_sleep_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:sleep", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(383);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(384);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, (frame[0].o), (frame[1].l));
	frame[3].l = temp0;
	LINE_NUMBER(385);
	jint temp1 = (jint)((func_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int])(ctx, (frame[0].o), (frame[1].l), (frame[3].l));
	frame[5].i = temp1;
	LINE_NUMBER(386);
	SM_java_lang_Thread_sleep_long_int(ctx, (frame[3].l), (frame[5].i));
	}
label_1:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_TimeUnit_$values_R_Array1_java_util_concurrent_TimeUnit(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_concurrent_TimeUnit, (7));
	jint temp0 = jint(0);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MICROSECONDS;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_SECONDS;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_MINUTES;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_HOURS;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_DAYS;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_TimeUnit_java_lang_String_int_java_util_concurrent_TimeUnit$1(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(71);
	init_java_util_concurrent_TimeUnit_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_TimeUnit(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	SF_java_util_concurrent_TimeUnit_C0 = jlong(1ll);
	SF_java_util_concurrent_TimeUnit_C1 = jlong(1000ll);
	SF_java_util_concurrent_TimeUnit_C2 = jlong(1000000ll);
	SF_java_util_concurrent_TimeUnit_C3 = jlong(1000000000ll);
	SF_java_util_concurrent_TimeUnit_C4 = jlong(60000000000ll);
	SF_java_util_concurrent_TimeUnit_C5 = jlong(3600000000000ll);
	SF_java_util_concurrent_TimeUnit_C6 = jlong(86400000000000ll);
	SF_java_util_concurrent_TimeUnit_MAX = jlong(9223372036854775807ll);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/TimeUnit:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_TimeUnit(ctx);
	{
	LINE_NUMBER(75);
	clinit_java_util_concurrent_TimeUnit$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$1);
	init_java_util_concurrent_TimeUnit$1_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NANOSECONDS"_j))), (jint(0)));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_NANOSECONDS = sp[0].o;
	LINE_NUMBER(90);
	clinit_java_util_concurrent_TimeUnit$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$2);
	init_java_util_concurrent_TimeUnit$2_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MICROSECONDS"_j))), (jint(1)));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_MICROSECONDS = sp[0].o;
	LINE_NUMBER(105);
	clinit_java_util_concurrent_TimeUnit$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$3);
	init_java_util_concurrent_TimeUnit$3_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MILLISECONDS"_j))), (jint(2)));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_MILLISECONDS = sp[0].o;
	LINE_NUMBER(120);
	clinit_java_util_concurrent_TimeUnit$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$4);
	init_java_util_concurrent_TimeUnit$4_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SECONDS"_j))), (jint(3)));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_SECONDS = sp[0].o;
	LINE_NUMBER(135);
	clinit_java_util_concurrent_TimeUnit$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$5);
	init_java_util_concurrent_TimeUnit$5_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MINUTES"_j))), (jint(4)));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_MINUTES = sp[0].o;
	LINE_NUMBER(150);
	clinit_java_util_concurrent_TimeUnit$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$6);
	init_java_util_concurrent_TimeUnit$6_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HOURS"_j))), (jint(5)));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_HOURS = sp[0].o;
	LINE_NUMBER(165);
	clinit_java_util_concurrent_TimeUnit$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_TimeUnit$7);
	init_java_util_concurrent_TimeUnit$7_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DAYS"_j))), (6));
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_DAYS = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)SM_java_util_concurrent_TimeUnit_$values_R_Array1_java_util_concurrent_TimeUnit(ctx);
	clinit_java_util_concurrent_TimeUnit(ctx);
	SF_java_util_concurrent_TimeUnit_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_TimeUnit[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toNanos_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toMicros_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toMillis_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toSeconds_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toMinutes_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toHours_long_R_long,
	(void *) M_java_util_concurrent_TimeUnit_toDays_long_R_long,
	(void *) nullptr,
	(void *) M_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long,
	(void *) M_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long,
	(void *) M_java_util_concurrent_TimeUnit_sleep_long,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "convert", "(JLjava/util/concurrent/TimeUnit;)J" },
	{ "toNanos", "(J)J" },
	{ "toMicros", "(J)J" },
	{ "toMillis", "(J)J" },
	{ "toSeconds", "(J)J" },
	{ "toMinutes", "(J)J" },
	{ "toHours", "(J)J" },
	{ "toDays", "(J)J" },
	{ "excessNanos", "(JJ)I" },
	{ "timedWait", "(Ljava/lang/Object;J)V" },
	{ "timedJoin", "(Ljava/lang/Thread;J)V" },
	{ "sleep", "(J)V" },
};

static FieldMetadata fields[] {
	{ "NANOSECONDS", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_NANOSECONDS, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "MICROSECONDS", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_MICROSECONDS, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "MILLISECONDS", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_MILLISECONDS, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "SECONDS", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_SECONDS, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "MINUTES", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_MINUTES, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "HOURS", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_HOURS, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "DAYS", &class_java_util_concurrent_TimeUnit, (intptr_t) &SF_java_util_concurrent_TimeUnit_DAYS, "Ljava/util/concurrent/TimeUnit;", 16409 },
	{ "C0", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C0, "J", 24 },
	{ "C1", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C1, "J", 24 },
	{ "C2", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C2, "J", 24 },
	{ "C3", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C3, "J", 24 },
	{ "C4", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C4, "J", 24 },
	{ "C5", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C5, "J", 24 },
	{ "C6", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_C6, "J", 24 },
	{ "MAX", &class_long, (intptr_t) &SF_java_util_concurrent_TimeUnit_MAX, "J", 24 },
	{ "$VALUES", getArrayClass(&class_java_util_concurrent_TimeUnit, 1), (intptr_t) &SF_java_util_concurrent_TimeUnit_$VALUES, "[Ljava/util/concurrent/TimeUnit;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_util_concurrent_TimeUnit_values_R_Array1_java_util_concurrent_TimeUnit, 0, "()[Ljava/util/concurrent/TimeUnit;", 9 },
	{ "valueOf", (intptr_t) SM_java_util_concurrent_TimeUnit_valueOf_java_lang_String_R_java_util_concurrent_TimeUnit, 0, "(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;", 9 },
	{ "<init>", (intptr_t) init_java_util_concurrent_TimeUnit_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "x", (intptr_t) SM_java_util_concurrent_TimeUnit_x_long_long_long_R_long, 0, "(JJJ)J", 8 },
	{ "convert", (intptr_t) M_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long, VTABLE_java_util_concurrent_TimeUnit_convert_long_java_util_concurrent_TimeUnit_R_long, "(JLjava/util/concurrent/TimeUnit;)J", 1 },
	{ "toNanos", (intptr_t) M_java_util_concurrent_TimeUnit_toNanos_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long, "(J)J", 1 },
	{ "toMicros", (intptr_t) M_java_util_concurrent_TimeUnit_toMicros_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toMicros_long_R_long, "(J)J", 1 },
	{ "toMillis", (intptr_t) M_java_util_concurrent_TimeUnit_toMillis_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long, "(J)J", 1 },
	{ "toSeconds", (intptr_t) M_java_util_concurrent_TimeUnit_toSeconds_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toSeconds_long_R_long, "(J)J", 1 },
	{ "toMinutes", (intptr_t) M_java_util_concurrent_TimeUnit_toMinutes_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toMinutes_long_R_long, "(J)J", 1 },
	{ "toHours", (intptr_t) M_java_util_concurrent_TimeUnit_toHours_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toHours_long_R_long, "(J)J", 1 },
	{ "toDays", (intptr_t) M_java_util_concurrent_TimeUnit_toDays_long_R_long, VTABLE_java_util_concurrent_TimeUnit_toDays_long_R_long, "(J)J", 1 },
	{ "excessNanos", 0, VTABLE_java_util_concurrent_TimeUnit_excessNanos_long_long_R_int, "(JJ)I", 1024 },
	{ "timedWait", (intptr_t) M_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long, VTABLE_java_util_concurrent_TimeUnit_timedWait_java_lang_Object_long, "(Ljava/lang/Object;J)V", 1 },
	{ "timedJoin", (intptr_t) M_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long, VTABLE_java_util_concurrent_TimeUnit_timedJoin_java_lang_Thread_long, "(Ljava/lang/Thread;J)V", 1 },
	{ "sleep", (intptr_t) M_java_util_concurrent_TimeUnit_sleep_long, VTABLE_java_util_concurrent_TimeUnit_sleep_long, "(J)V", 1 },
	{ "$values", (intptr_t) SM_java_util_concurrent_TimeUnit_$values_R_Array1_java_util_concurrent_TimeUnit, 0, "()[Ljava/util/concurrent/TimeUnit;", 4106 },
	{ "<init>", (intptr_t) init_java_util_concurrent_TimeUnit_java_lang_String_int_java_util_concurrent_TimeUnit$1, 0, "(Ljava/lang/String;ILjava/util/concurrent/TimeUnit$1;)V", 4096 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_TimeUnit, 0, "()V", 8 },
};

Class class_java_util_concurrent_TimeUnit{
		.nativeName = (intptr_t) "java/util/concurrent/TimeUnit",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_util_concurrent_TimeUnit),
		.classVtable = (intptr_t) vtable_java_util_concurrent_TimeUnit,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_TimeUnit,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_TimeUnit,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 17441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_TimeUnit = registerClass(&class_java_util_concurrent_TimeUnit);

}
