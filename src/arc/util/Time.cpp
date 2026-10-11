#include "arc/util/Time.h"
#include "java/lang/Math.h"
#include "arc/func/Prov.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/struct/LongSeq.h"
#include "arc/util/Time_invoke_arc_func_Prov_0.h"
#include "arc/util/Time.h"
#include "arc/util/Timer_Task.h"
#include "arc/util/Time_invoke_arc_func_Floatp_0.h"
#include "java/lang/Runnable.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/util/Time_DelayRun.h"
#include "arc/util/Timer.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/func/Floatp.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jfloat SF_arc_util_Time_toSeconds;
jfloat SF_arc_util_Time_toMinutes;
jfloat SF_arc_util_Time_toHours;
jfloat SF_arc_util_Time_delta;
jfloat SF_arc_util_Time_time;
jfloat SF_arc_util_Time_globalTime;
jlong SF_arc_util_Time_nanosPerMilli;
jdouble SF_arc_util_Time_timeRaw;
jdouble SF_arc_util_Time_globalTimeRaw;
jobject SF_arc_util_Time_runs;
jobject SF_arc_util_Time_removal;
jobject SF_arc_util_Time_marks;
jobject SF_arc_util_Time_deltaimpl;

void mark_arc_util_Time(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Time_runs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Time_runs)->clazz)->markFunction)((jobject) SF_arc_util_Time_runs, mark, depth + 1);
		if (SF_arc_util_Time_removal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Time_removal)->clazz)->markFunction)((jobject) SF_arc_util_Time_removal, mark, depth + 1);
		if (SF_arc_util_Time_marks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Time_marks)->clazz)->markFunction)((jobject) SF_arc_util_Time_marks, mark, depth + 1);
		if (SF_arc_util_Time_deltaimpl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Time_deltaimpl)->clazz)->markFunction)((jobject) SF_arc_util_Time_deltaimpl, mark, depth + 1);
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
	auto self = (arc_util_Time *) object;
}

void init_arc_util_Time(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Time_getRuns_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:getRuns", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(29);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_runs;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_setRuns_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:setRuns", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_runs = (frame[0].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_run_float_java_lang_Runnable(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(38);
	sp[0].o = ((jobject) &class_arc_util_Time$DelayRun);
	{ /* InvokeDynamic */
		clinit_arc_util_Time_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_util_Time_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_util_Time_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_util_Time$DelayRun, sp[0].o));
	LINE_NUMBER(39);
	((arc_util_Time$DelayRun *) NULL_CHECK((frame[2].o)))->F_finish = (jref) (frame[1].o);
	LINE_NUMBER(40);
	((arc_util_Time$DelayRun *) NULL_CHECK((frame[2].o)))->F_delay = (frame[0].f);
	LINE_NUMBER(41);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:runTask", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_arc_util_Timer_schedule_java_lang_Runnable_float_R_arc_util_Timer$Task(ctx, (frame[1].o), ((frame[0].f) / (jfloat(60.0f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_mark(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:mark", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(50);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_marks;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_Time_elapsed_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:elapsed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(55);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_marks;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}
label_1:;
	{
	LINE_NUMBER(58);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_marks;
	jlong temp0 = (jlong)((func_arc_struct_LongSeq_pop_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_pop_R_long])(ctx, sp[0].o);
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, temp0);
	popStackFrame(ctx);
	return ((jfloat(temp1)) / (jfloat(1000000.0f)));
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_updateGlobal(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:updateGlobal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(63);
	clinit_arc_util_Time(ctx);
	jdouble temp0 = (jdouble)SF_arc_util_Time_globalTimeRaw;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jfloat temp1 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[0].o);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_globalTimeRaw = (temp0 + (jdouble((temp1 * (jfloat(60.0f))))));
	LINE_NUMBER(64);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_deltaimpl;
	jfloat temp2 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[0].o))(ctx, sp[0].o);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = temp2;
	LINE_NUMBER(66);
	jint temp3 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw));
	if (temp3 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(67);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_timeRaw = (jdouble(0));
	}
label_4:;
	{
	LINE_NUMBER(70);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_time = (jfloat((clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw)));
	LINE_NUMBER(71);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_globalTime = (jfloat((clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_globalTimeRaw)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_update(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(75);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_timeRaw = ((clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw) + (jdouble((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta))));
	LINE_NUMBER(76);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_removal;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(78);
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(79);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_timeRaw = (jdouble(0));
	}
label_4:;
	{
	LINE_NUMBER(82);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_time = (jfloat((clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw)));
	LINE_NUMBER(83);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_globalTime = (jfloat((clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_globalTimeRaw)));
	LINE_NUMBER(85);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_util_Time$DelayRun, sp[0].o));
	LINE_NUMBER(86);
	sp[0].o = frame[1].o;
	((arc_util_Time$DelayRun *) NULL_CHECK(sp[0].o))->F_delay = (((jfloat)((arc_util_Time$DelayRun *) NULL_CHECK(sp[0].o))->F_delay) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(88);
	if ((floatCompare(((jfloat)((arc_util_Time$DelayRun *) NULL_CHECK((frame[1].o)))->F_delay), (jfloat(0)), 1)) > 0) goto label_11;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_util_Time$DelayRun *) NULL_CHECK((frame[1].o)))->F_finish;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(90);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_removal;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(91);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[1].o));
	}
label_11:;
	LINE_NUMBER(93);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(95);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_runs;
	clinit_arc_util_Time(ctx);
	sp[1].o = (jobject)SF_arc_util_Time_removal;
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_util_Time_getInternalTime_R_double(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:getInternalTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (clinit_arc_util_Time(ctx), (jdouble)SF_arc_util_Time_timeRaw);
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_setInternalTime_double(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:setInternalTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(103);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_timeRaw = (frame[0].d);
	LINE_NUMBER(104);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_time = (jfloat((frame[0].d)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_clear(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:clear", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(108);
	clinit_arc_util_Time(ctx);
	sp[0].o = (jobject)SF_arc_util_Time_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Time_setDeltaProvider_arc_func_Floatp(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:setDeltaProvider", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(112);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_deltaimpl = (frame[0].o);
	LINE_NUMBER(113);
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = temp0;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Time_nanos_R_long(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:nanos", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(118);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Time_millis_R_long(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:millis", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(123);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Time_nanosToMillis_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:nanosToMillis", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return ((frame[0].l) / (jlong(1000000ll)));
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Time_millisToNanos_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:millisToNanos", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return ((frame[0].l) * (jlong(1000000ll)));
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Time_timeSinceNanos_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:timeSinceNanos", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(150);
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	popStackFrame(ctx);
	return (temp0 - (frame[0].l));
	}

	popStackFrame(ctx);
}

jlong SM_arc_util_Time_timeSinceMillis_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:timeSinceMillis", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(159);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	popStackFrame(ctx);
	return (temp0 - (frame[0].l));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_util_Time_lambda$static$0_R_float(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 * (jfloat(60.0f))), (jfloat(3.0f)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Time(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_Time_toSeconds = jfloat(60.0f);
	SF_arc_util_Time_toMinutes = jfloat(3600.0f);
	SF_arc_util_Time_toHours = jfloat(216000.0f);
	SF_arc_util_Time_nanosPerMilli = jlong(1000000ll);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time(ctx);
	{
	LINE_NUMBER(15);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = (jfloat(1));
	LINE_NUMBER(23);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_runs = sp[0].o;
	LINE_NUMBER(24);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_removal = sp[0].o;
	LINE_NUMBER(25);
	clinit_arc_struct_LongSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[0].o);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_marks = sp[0].o;
	LINE_NUMBER(26);
	{ /* InvokeDynamic */
		clinit_arc_util_Time_invoke_arc_func_Floatp_0(ctx);
		auto proxy = (arc_util_Time_invoke_arc_func_Floatp_0 *) gcAlloc(ctx, &class_arc_util_Time_invoke_arc_func_Floatp_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_deltaimpl = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Time[] {
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
};

static jclass innerClasses[] {
	&class_arc_util_Time$DelayRun,
};

static FieldMetadata fields[] {
	{ "toSeconds", &class_float, (intptr_t) &SF_arc_util_Time_toSeconds, "F", 25 },
	{ "toMinutes", &class_float, (intptr_t) &SF_arc_util_Time_toMinutes, "F", 25 },
	{ "toHours", &class_float, (intptr_t) &SF_arc_util_Time_toHours, "F", 25 },
	{ "delta", &class_float, (intptr_t) &SF_arc_util_Time_delta, "F", 9 },
	{ "time", &class_float, (intptr_t) &SF_arc_util_Time_time, "F", 9 },
	{ "globalTime", &class_float, (intptr_t) &SF_arc_util_Time_globalTime, "F", 9 },
	{ "nanosPerMilli", &class_long, (intptr_t) &SF_arc_util_Time_nanosPerMilli, "J", 25 },
	{ "timeRaw", &class_double, (intptr_t) &SF_arc_util_Time_timeRaw, "D", 10 },
	{ "globalTimeRaw", &class_double, (intptr_t) &SF_arc_util_Time_globalTimeRaw, "D", 10 },
	{ "runs", &class_arc_struct_Seq, (intptr_t) &SF_arc_util_Time_runs, "Larc/struct/Seq;", 10 },
	{ "removal", &class_arc_struct_Seq, (intptr_t) &SF_arc_util_Time_removal, "Larc/struct/Seq;", 10 },
	{ "marks", &class_arc_struct_LongSeq, (intptr_t) &SF_arc_util_Time_marks, "Larc/struct/LongSeq;", 10 },
	{ "deltaimpl", &class_arc_func_Floatp, (intptr_t) &SF_arc_util_Time_deltaimpl, "Larc/func/Floatp;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Time, 0, "()V", 1 },
	{ "getRuns", (intptr_t) SM_arc_util_Time_getRuns_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 9 },
	{ "setRuns", (intptr_t) SM_arc_util_Time_setRuns_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 9 },
	{ "run", (intptr_t) SM_arc_util_Time_run_float_java_lang_Runnable, 0, "(FLjava/lang/Runnable;)V", 9 },
	{ "runTask", (intptr_t) SM_arc_util_Time_runTask_float_java_lang_Runnable_R_arc_util_Timer$Task, 0, "(FLjava/lang/Runnable;)Larc/util/Timer$Task;", 9 },
	{ "mark", (intptr_t) SM_arc_util_Time_mark, 0, "()V", 9 },
	{ "elapsed", (intptr_t) SM_arc_util_Time_elapsed_R_float, 0, "()F", 9 },
	{ "updateGlobal", (intptr_t) SM_arc_util_Time_updateGlobal, 0, "()V", 9 },
	{ "update", (intptr_t) SM_arc_util_Time_update, 0, "()V", 9 },
	{ "getInternalTime", (intptr_t) SM_arc_util_Time_getInternalTime_R_double, 0, "()D", 9 },
	{ "setInternalTime", (intptr_t) SM_arc_util_Time_setInternalTime_double, 0, "(D)V", 9 },
	{ "clear", (intptr_t) SM_arc_util_Time_clear, 0, "()V", 9 },
	{ "setDeltaProvider", (intptr_t) SM_arc_util_Time_setDeltaProvider_arc_func_Floatp, 0, "(Larc/func/Floatp;)V", 9 },
	{ "nanos", (intptr_t) SM_arc_util_Time_nanos_R_long, 0, "()J", 9 },
	{ "millis", (intptr_t) SM_arc_util_Time_millis_R_long, 0, "()J", 9 },
	{ "nanosToMillis", (intptr_t) SM_arc_util_Time_nanosToMillis_long_R_long, 0, "(J)J", 9 },
	{ "millisToNanos", (intptr_t) SM_arc_util_Time_millisToNanos_long_R_long, 0, "(J)J", 9 },
	{ "timeSinceNanos", (intptr_t) SM_arc_util_Time_timeSinceNanos_long_R_long, 0, "(J)J", 9 },
	{ "timeSinceMillis", (intptr_t) SM_arc_util_Time_timeSinceMillis_long_R_long, 0, "(J)J", 9 },
	{ "lambda$static$0", (intptr_t) SM_arc_util_Time_lambda$static$0_R_float, 0, "()F", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Time, 0, "()V", 8 },
};

Class class_arc_util_Time{
		.nativeName = (intptr_t) "arc/util/Time",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Time),
		.classVtable = (intptr_t) vtable_arc_util_Time,
		.staticInitializer = (intptr_t) clinit_arc_util_Time,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Time,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Time = registerClass(&class_arc_util_Time);

}
