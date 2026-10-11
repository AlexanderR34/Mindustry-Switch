#include "arc/util/PerformanceCounter.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "arc/math/FloatCounter.h"
#include "arc/util/PerformanceCounter.h"
#include "arc/util/Time.h"
#include "java/lang/CharSequence.h"

extern "C" {

jfloat SF_arc_util_PerformanceCounter_nano2seconds;

void mark_arc_util_PerformanceCounter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_PerformanceCounter *) object;
	if (self->F_time)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_time)->clazz)->markFunction)((jobject) self->F_time, mark, depth + 1);
	if (self->F_load)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_load)->clazz)->markFunction)((jobject) self->F_load, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_arc_util_PerformanceCounter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_PerformanceCounter_nano2seconds = jfloat(1,000000e-09f);
}

void init_arc_util_PerformanceCounter_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_PerformanceCounter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	init_arc_util_PerformanceCounter_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (jint(5)));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_PerformanceCounter_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_PerformanceCounter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_current = (jfloat(0));
	LINE_NUMBER(26);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_valid = (jint(0));
	LINE_NUMBER(27);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_startTime = (jlong(0));
	LINE_NUMBER(28);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_lastTick = (jlong(0));
	LINE_NUMBER(35);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_math_FloatCounter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_FloatCounter);
	init_arc_math_FloatCounter_int(ctx, sp[1].o, (frame[2].i));
	((arc_util_PerformanceCounter *) NULL_CHECK(sp[0].o))->F_time = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_math_FloatCounter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_FloatCounter);
	init_arc_math_FloatCounter_int(ctx, sp[1].o, (jint(1)));
	((arc_util_PerformanceCounter *) NULL_CHECK(sp[0].o))->F_load = (jref) sp[1].o;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounter_tick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:tick", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(46);
	if ((longCompare(((jlong)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_lastTick), (jlong(0)))) <= 0) goto label_2;
	}
	{
	((func_arc_util_PerformanceCounter_tick_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_PerformanceCounter_tick_float])(ctx, (frame[0].o), ((jfloat(((frame[1].l) - ((jlong)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_lastTick)))) * (jfloat(1,000000e-09f))));
	}
label_2:;
	{
	LINE_NUMBER(47);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_lastTick = (frame[1].l);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounter_tick_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:tick", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(55);
	if (((jint)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_1;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[PerformanceCounter] Invalid data, check if you called PerformanceCounter#stop()"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_time;
	((func_arc_math_FloatCounter_put_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_FloatCounter_put_float])(ctx, sp[0].o, (((jfloat)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_current) / (jfloat(1,000000e-09f))));
	LINE_NUMBER(62);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	{
	jfloat temp0 = ((jfloat)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_current) / (frame[1].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_load;
	sp += 1;
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) <= 0) goto label_8;
	}
	INST_FLOAD(2);
	goto label_9;
label_8:;
	{
	jfloat temp0 = (frame[1].f) * (frame[2].f);
	jfloat temp1 = (jfloat(1)) - (frame[1].f);
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_load;
	jfloat temp2 = temp0 + (temp1 * ((jfloat)((arc_math_FloatCounter *) NULL_CHECK(sp[0].o))->F_latest));
	sp[0].f = temp2;
	sp += 1;
	}
label_9:;
	{
	sp -= 2;
	((func_arc_math_FloatCounter_put_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_FloatCounter_put_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(65);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_current = (jfloat(0));
	LINE_NUMBER(66);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_valid = (jint(0));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounter_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:start", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((arc_util_PerformanceCounter *) NULL_CHECK(sp[0].o))->F_startTime = temp0;
	LINE_NUMBER(72);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_valid = (jint(0));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounter_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:stop", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	if ((longCompare(((jlong)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_startTime), (jlong(0)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_util_PerformanceCounter *) NULL_CHECK(sp[0].o))->F_current;
	jlong temp1 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((arc_util_PerformanceCounter *) NULL_CHECK(sp[0].o))->F_current = (temp0 + ((jfloat((temp1 - ((jlong)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_startTime)))) * (jfloat(1,000000e-09f))));
	LINE_NUMBER(82);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_startTime = (jlong(0));
	LINE_NUMBER(83);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	}
label_1:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounter_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_time;
	((func_arc_math_FloatCounter_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_FloatCounter_reset])(ctx, sp[0].o);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_load;
	((func_arc_math_FloatCounter_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_FloatCounter_reset])(ctx, sp[0].o);
	LINE_NUMBER(91);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_startTime = (jlong(0));
	LINE_NUMBER(92);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_lastTick = (jlong(0));
	LINE_NUMBER(93);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_current = (jfloat(0));
	LINE_NUMBER(94);
	((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_valid = (jint(0));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_PerformanceCounter_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":\n  time: "_j))));
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_time;
	M_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int(ctx, sp[0].o, sp[1].o, (jint(((jfloat)((arc_math_FloatCounter *) NULL_CHECK(sp[2].o))->F_value))));
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n  load: "_j))));
	sp[1].o = (jobject)((arc_util_PerformanceCounter *) NULL_CHECK((frame[0].o)))->F_load;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint((((jfloat)((arc_math_FloatCounter *) NULL_CHECK(sp[1].o))->F_value) * (jfloat(100.0f))))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (37));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/PerformanceCounter:commas", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(114);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(115);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(116);
	if ((frame[2].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(117);
	frame[5].i = ((frame[2].i) % (10));
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].i));
	LINE_NUMBER(119);
	frame[2].i = ((frame[2].i) / (10));
	LINE_NUMBER(120);
	INST_IINC(4, 1);
	if (((frame[4].i) % (jint(3))) != 0) goto label_8;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_8;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (44));
	}
label_8:;
	LINE_NUMBER(123);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_PerformanceCounter[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_util_PerformanceCounter_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_util_PerformanceCounter_tick,
	(void *) M_arc_util_PerformanceCounter_tick_float,
	(void *) M_arc_util_PerformanceCounter_start,
	(void *) M_arc_util_PerformanceCounter_stop,
	(void *) M_arc_util_PerformanceCounter_reset,
	(void *) M_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder,
	(void *) M_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int,
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
	{ "tick", "()V" },
	{ "tick", "(F)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "reset", "()V" },
	{ "toString", "(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;" },
	{ "commas", "(Ljava/lang/StringBuilder;I)V" },
};

static FieldMetadata fields[] {
	{ "nano2seconds", &class_float, (intptr_t) &SF_arc_util_PerformanceCounter_nano2seconds, "F", 26 },
	{ "time", &class_arc_math_FloatCounter, offsetof(arc_util_PerformanceCounter, F_time), "Larc/math/FloatCounter;", 17 },
	{ "load", &class_arc_math_FloatCounter, offsetof(arc_util_PerformanceCounter, F_load), "Larc/math/FloatCounter;", 17 },
	{ "name", &class_java_lang_String, offsetof(arc_util_PerformanceCounter, F_name), "Ljava/lang/String;", 17 },
	{ "current", &class_float, offsetof(arc_util_PerformanceCounter, F_current), "F", 1 },
	{ "valid", &class_boolean, offsetof(arc_util_PerformanceCounter, F_valid), "Z", 1 },
	{ "startTime", &class_long, offsetof(arc_util_PerformanceCounter, F_startTime), "J", 2 },
	{ "lastTick", &class_long, offsetof(arc_util_PerformanceCounter, F_lastTick), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_PerformanceCounter_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_PerformanceCounter_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "tick", (intptr_t) M_arc_util_PerformanceCounter_tick, VTABLE_arc_util_PerformanceCounter_tick, "()V", 1 },
	{ "tick", (intptr_t) M_arc_util_PerformanceCounter_tick_float, VTABLE_arc_util_PerformanceCounter_tick_float, "(F)V", 1 },
	{ "start", (intptr_t) M_arc_util_PerformanceCounter_start, VTABLE_arc_util_PerformanceCounter_start, "()V", 1 },
	{ "stop", (intptr_t) M_arc_util_PerformanceCounter_stop, VTABLE_arc_util_PerformanceCounter_stop, "()V", 1 },
	{ "reset", (intptr_t) M_arc_util_PerformanceCounter_reset, VTABLE_arc_util_PerformanceCounter_reset, "()V", 1 },
	{ "toString", (intptr_t) M_arc_util_PerformanceCounter_toString_R_java_lang_String, VTABLE_arc_util_PerformanceCounter_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder, VTABLE_arc_util_PerformanceCounter_toString_java_lang_StringBuilder_R_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;", 1 },
	{ "commas", (intptr_t) M_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int, VTABLE_arc_util_PerformanceCounter_commas_java_lang_StringBuilder_int, "(Ljava/lang/StringBuilder;I)V", 2 },
};

Class class_arc_util_PerformanceCounter{
		.nativeName = (intptr_t) "arc/util/PerformanceCounter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_PerformanceCounter),
		.classVtable = (intptr_t) vtable_arc_util_PerformanceCounter,
		.staticInitializer = (intptr_t) clinit_arc_util_PerformanceCounter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_PerformanceCounter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_PerformanceCounter = registerClass(&class_arc_util_PerformanceCounter);

}
