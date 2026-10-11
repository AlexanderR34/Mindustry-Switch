#include "java/util/concurrent/CountedCompleter.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/CountedCompleter.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/ForkJoinPool.h"

extern "C" {

jlong SF_java_util_concurrent_CountedCompleter_serialVersionUID;

void mark_java_util_concurrent_CountedCompleter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_ForkJoinTask(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_CountedCompleter *) object;
	if (self->F_completer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_completer)->clazz)->markFunction)((jobject) self->F_completer, mark, depth + 1);
}

void clinit_java_util_concurrent_CountedCompleter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_ForkJoinTask(ctx);
	SF_java_util_concurrent_CountedCompleter_serialVersionUID = jlong(5232453752276485070ll);
}

void init_java_util_concurrent_CountedCompleter_java_util_concurrent_CountedCompleter_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CountedCompleter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(443);
	init_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o));
	LINE_NUMBER(444);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_completer = (jref) (frame[1].o);
	LINE_NUMBER(445);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending = (frame[2].i);
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CountedCompleter_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CountedCompleter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	init_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o));
	LINE_NUMBER(455);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_completer = (jref) (frame[1].o);
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_CountedCompleter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(462);
	init_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o));
	LINE_NUMBER(463);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_completer = (jref) (jobject(nullptr));
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:onCompletion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(484);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CountedCompleter_onExceptionalCompletion_java_lang_Throwable_java_util_concurrent_CountedCompleter_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:onExceptionalCompletion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CountedCompleter_getCompleter_R_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:getCompleter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_completer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CountedCompleter_getPendingCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:getPendingCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_setPendingCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:setPendingCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(533);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending = (frame[1].i);
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_addToPendingCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:addToPendingCount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	((java_util_concurrent_CountedCompleter *) NULL_CHECK(sp[0].o))->F_pending = (((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK(sp[0].o))->F_pending) + (frame[1].i));
	LINE_NUMBER(543);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CountedCompleter_compareAndSetPendingCount_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:compareAndSetPendingCount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(554);
	if (((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending) == (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(555);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(556);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending = (frame[2].i);
	LINE_NUMBER(557);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_CountedCompleter_decrementPendingCountUnlessZero_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:decrementPendingCountUnlessZero", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending;
	frame[1].i = temp0;
	if (temp0 == 0) goto label_2;
	}
	{
	if (((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending) != (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(569);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending = ((frame[1].i) - (jint(1)));
	goto label_0;
	}
label_2:;
	{
	LINE_NUMBER(570);
	popStackFrame(ctx, self);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CountedCompleter_getRoot_R_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:getRoot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(580);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_completer;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(582);
	frame[1].o = (frame[2].o);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_tryComplete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:tryComplete", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(593);
	frame[1].o = (frame[0].o);
	frame[2].o = (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(595);
	jint temp0 = (jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_pending;
	frame[3].i = temp0;
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(596);
	((func_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(597);
	sp[0].o = frame[1].o;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK(sp[0].o))->F_completer;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(598);
	((func_java_util_concurrent_CountedCompleter_quietlyComplete) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_quietlyComplete])(ctx, (frame[2].o));
	LINE_NUMBER(599);
	popStackFrame(ctx, self);
	return;
	}
label_4:;
	{
	LINE_NUMBER(602);
	if (((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_pending) != (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(603);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_pending = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(604);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_propagateCompletion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:propagateCompletion", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(619);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(621);
	jint temp0 = (jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_pending;
	frame[3].i = temp0;
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(622);
	sp[0].o = frame[1].o;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK(sp[0].o))->F_completer;
	frame[1].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(623);
	((func_java_util_concurrent_CountedCompleter_quietlyComplete) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_quietlyComplete])(ctx, (frame[2].o));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(627);
	if (((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_pending) != (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(628);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_pending = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(629);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_complete_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:complete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(655);
	((func_java_util_concurrent_CountedCompleter_setRawResult_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_setRawResult_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(656);
	((func_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter])(ctx, (frame[0].o), (frame[0].o));
	LINE_NUMBER(657);
	((func_java_util_concurrent_CountedCompleter_quietlyComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_quietlyComplete])(ctx, (frame[0].o));
	LINE_NUMBER(658);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_completer;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(659);
	((func_java_util_concurrent_CountedCompleter_tryComplete) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_tryComplete])(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CountedCompleter_firstComplete_R_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:firstComplete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending;
	frame[1].i = temp0;
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(673);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(674);
	if (((jint)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending) != (frame[1].i)) goto label_0;
	}
	{
	LINE_NUMBER(675);
	((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_pending = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CountedCompleter_nextComplete_R_java_util_concurrent_CountedCompleter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:nextComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[0].o)))->F_completer;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_java_util_concurrent_CountedCompleter_firstComplete_R_java_util_concurrent_CountedCompleter) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_firstComplete_R_java_util_concurrent_CountedCompleter])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(703);
	((func_java_util_concurrent_CountedCompleter_quietlyComplete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_quietlyComplete])(ctx, (frame[0].o));
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_quietlyCompleteRoot(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:quietlyCompleteRoot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(712);
	frame[1].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK((frame[1].o)))->F_completer;
	frame[2].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(714);
	((func_java_util_concurrent_CountedCompleter_quietlyComplete) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_quietlyComplete])(ctx, (frame[1].o));
	LINE_NUMBER(715);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(717);
	frame[1].o = (frame[2].o);
	goto label_1;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_helpComplete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:helpComplete", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(732);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[0].o)))->F_status) < 0) goto label_1;
	}
	{
	LINE_NUMBER(737);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int])(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	}
label_1:;
	LINE_NUMBER(739);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_internalPropagateException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:internalPropagateException", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(745);
	frame[2].o = (frame[0].o);
	frame[3].o = (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(746);
	jint temp0 = (jint)((func_java_util_concurrent_CountedCompleter_onExceptionalCompletion_java_lang_Throwable_java_util_concurrent_CountedCompleter_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_onExceptionalCompletion_java_lang_Throwable_java_util_concurrent_CountedCompleter_R_boolean])(ctx, (frame[2].o), (frame[1].o), (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_CountedCompleter *) NULL_CHECK(sp[0].o))->F_completer;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[2].o)))->F_status) < 0) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(748);
	jint temp0 = (jint)((func_java_util_concurrent_CountedCompleter_recordExceptionalCompletion_java_lang_Throwable_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CountedCompleter_recordExceptionalCompletion_java_lang_Throwable_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 != (bit_cast<jint>(0x80000000))) goto label_3;
	}
	LINE_NUMBER(749);
	goto label_2;
label_3:;
	LINE_NUMBER(750);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_CountedCompleter_exec_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:exec", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(756);
	((func_java_util_concurrent_CountedCompleter_compute) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_CountedCompleter_compute])(ctx, (frame[0].o));
	LINE_NUMBER(757);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_CountedCompleter_getRawResult_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:getRawResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_CountedCompleter_setRawResult_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/CountedCompleter:setRawResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(778);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_CountedCompleter[] {
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
	(void *) M_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isCancelled_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isDone_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_get_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doExec_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_internalWait_long,
	(void *) M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doJoin_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doInvoke_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int,
	(void *) M_java_util_concurrent_CountedCompleter_internalPropagateException_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion,
	(void *) M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_reportException_int,
	(void *) M_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_invoke_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_isCompletedAbnormally_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isCompletedNormally_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_completeExceptionally_java_lang_Throwable,
	(void *) M_java_util_concurrent_CountedCompleter_complete_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyComplete,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyJoin,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyInvoke,
	(void *) M_java_util_concurrent_ForkJoinTask_reinitialize,
	(void *) M_java_util_concurrent_ForkJoinTask_tryUnfork_R_boolean,
	(void *) M_java_util_concurrent_CountedCompleter_getRawResult_R_java_lang_Object,
	(void *) M_java_util_concurrent_CountedCompleter_setRawResult_java_lang_Object,
	(void *) M_java_util_concurrent_CountedCompleter_exec_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream,
	(void *) nullptr,
	(void *) M_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter,
	(void *) M_java_util_concurrent_CountedCompleter_onExceptionalCompletion_java_lang_Throwable_java_util_concurrent_CountedCompleter_R_boolean,
	(void *) M_java_util_concurrent_CountedCompleter_getCompleter_R_java_util_concurrent_CountedCompleter,
	(void *) M_java_util_concurrent_CountedCompleter_getPendingCount_R_int,
	(void *) M_java_util_concurrent_CountedCompleter_setPendingCount_int,
	(void *) M_java_util_concurrent_CountedCompleter_addToPendingCount_int,
	(void *) M_java_util_concurrent_CountedCompleter_compareAndSetPendingCount_int_int_R_boolean,
	(void *) M_java_util_concurrent_CountedCompleter_decrementPendingCountUnlessZero_R_int,
	(void *) M_java_util_concurrent_CountedCompleter_getRoot_R_java_util_concurrent_CountedCompleter,
	(void *) M_java_util_concurrent_CountedCompleter_tryComplete,
	(void *) M_java_util_concurrent_CountedCompleter_propagateCompletion,
	(void *) M_java_util_concurrent_CountedCompleter_firstComplete_R_java_util_concurrent_CountedCompleter,
	(void *) M_java_util_concurrent_CountedCompleter_nextComplete_R_java_util_concurrent_CountedCompleter,
	(void *) M_java_util_concurrent_CountedCompleter_quietlyCompleteRoot,
	(void *) M_java_util_concurrent_CountedCompleter_helpComplete_int,
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
	{ "cancel", "(Z)Z" },
	{ "isCancelled", "()Z" },
	{ "isDone", "()Z" },
	{ "get", "()Ljava/lang/Object;" },
	{ "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "setCompletion", "(I)I" },
	{ "doExec", "()I" },
	{ "internalWait", "(J)V" },
	{ "externalAwaitDone", "()I" },
	{ "externalInterruptibleAwaitDone", "()I" },
	{ "doJoin", "()I" },
	{ "doInvoke", "()I" },
	{ "recordExceptionalCompletion", "(Ljava/lang/Throwable;)I" },
	{ "setExceptionalCompletion", "(Ljava/lang/Throwable;)I" },
	{ "internalPropagateException", "(Ljava/lang/Throwable;)V" },
	{ "clearExceptionalCompletion", "()V" },
	{ "getThrowableException", "()Ljava/lang/Throwable;" },
	{ "reportException", "(I)V" },
	{ "fork", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "join", "()Ljava/lang/Object;" },
	{ "invoke", "()Ljava/lang/Object;" },
	{ "isCompletedAbnormally", "()Z" },
	{ "isCompletedNormally", "()Z" },
	{ "getException", "()Ljava/lang/Throwable;" },
	{ "completeExceptionally", "(Ljava/lang/Throwable;)V" },
	{ "complete", "(Ljava/lang/Object;)V" },
	{ "quietlyComplete", "()V" },
	{ "quietlyJoin", "()V" },
	{ "quietlyInvoke", "()V" },
	{ "reinitialize", "()V" },
	{ "tryUnfork", "()Z" },
	{ "getRawResult", "()Ljava/lang/Object;" },
	{ "setRawResult", "(Ljava/lang/Object;)V" },
	{ "exec", "()Z" },
	{ "getForkJoinTaskTag", "()S" },
	{ "setForkJoinTaskTag", "(S)S" },
	{ "compareAndSetForkJoinTaskTag", "(SS)Z" },
	{ "writeObject", "(Ljava/io/ObjectOutputStream;)V" },
	{ "readObject", "(Ljava/io/ObjectInputStream;)V" },
	{ "compute", "()V" },
	{ "onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V" },
	{ "onExceptionalCompletion", "(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z" },
	{ "getCompleter", "()Ljava/util/concurrent/CountedCompleter;" },
	{ "getPendingCount", "()I" },
	{ "setPendingCount", "(I)V" },
	{ "addToPendingCount", "(I)V" },
	{ "compareAndSetPendingCount", "(II)Z" },
	{ "decrementPendingCountUnlessZero", "()I" },
	{ "getRoot", "()Ljava/util/concurrent/CountedCompleter;" },
	{ "tryComplete", "()V" },
	{ "propagateCompletion", "()V" },
	{ "firstComplete", "()Ljava/util/concurrent/CountedCompleter;" },
	{ "nextComplete", "()Ljava/util/concurrent/CountedCompleter;" },
	{ "quietlyCompleteRoot", "()V" },
	{ "helpComplete", "(I)V" },
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_CountedCompleter_serialVersionUID, "J", 26 },
	{ "completer", &class_java_util_concurrent_CountedCompleter, offsetof(java_util_concurrent_CountedCompleter, F_completer), "Ljava/util/concurrent/CountedCompleter;", 16 },
	{ "pending", &class_int, offsetof(java_util_concurrent_CountedCompleter, F_pending), "I", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_CountedCompleter_java_util_concurrent_CountedCompleter_int, 0, "(Ljava/util/concurrent/CountedCompleter;I)V", 4 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CountedCompleter_java_util_concurrent_CountedCompleter, 0, "(Ljava/util/concurrent/CountedCompleter;)V", 4 },
	{ "<init>", (intptr_t) init_java_util_concurrent_CountedCompleter, 0, "()V", 4 },
	{ "compute", 0, VTABLE_java_util_concurrent_CountedCompleter_compute, "()V", 1025 },
	{ "onCompletion", (intptr_t) M_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter, VTABLE_java_util_concurrent_CountedCompleter_onCompletion_java_util_concurrent_CountedCompleter, "(Ljava/util/concurrent/CountedCompleter;)V", 1 },
	{ "onExceptionalCompletion", (intptr_t) M_java_util_concurrent_CountedCompleter_onExceptionalCompletion_java_lang_Throwable_java_util_concurrent_CountedCompleter_R_boolean, VTABLE_java_util_concurrent_CountedCompleter_onExceptionalCompletion_java_lang_Throwable_java_util_concurrent_CountedCompleter_R_boolean, "(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z", 1 },
	{ "getCompleter", (intptr_t) M_java_util_concurrent_CountedCompleter_getCompleter_R_java_util_concurrent_CountedCompleter, VTABLE_java_util_concurrent_CountedCompleter_getCompleter_R_java_util_concurrent_CountedCompleter, "()Ljava/util/concurrent/CountedCompleter;", 17 },
	{ "getPendingCount", (intptr_t) M_java_util_concurrent_CountedCompleter_getPendingCount_R_int, VTABLE_java_util_concurrent_CountedCompleter_getPendingCount_R_int, "()I", 17 },
	{ "setPendingCount", (intptr_t) M_java_util_concurrent_CountedCompleter_setPendingCount_int, VTABLE_java_util_concurrent_CountedCompleter_setPendingCount_int, "(I)V", 17 },
	{ "addToPendingCount", (intptr_t) M_java_util_concurrent_CountedCompleter_addToPendingCount_int, VTABLE_java_util_concurrent_CountedCompleter_addToPendingCount_int, "(I)V", 49 },
	{ "compareAndSetPendingCount", (intptr_t) M_java_util_concurrent_CountedCompleter_compareAndSetPendingCount_int_int_R_boolean, VTABLE_java_util_concurrent_CountedCompleter_compareAndSetPendingCount_int_int_R_boolean, "(II)Z", 49 },
	{ "decrementPendingCountUnlessZero", (intptr_t) M_java_util_concurrent_CountedCompleter_decrementPendingCountUnlessZero_R_int, VTABLE_java_util_concurrent_CountedCompleter_decrementPendingCountUnlessZero_R_int, "()I", 49 },
	{ "getRoot", (intptr_t) M_java_util_concurrent_CountedCompleter_getRoot_R_java_util_concurrent_CountedCompleter, VTABLE_java_util_concurrent_CountedCompleter_getRoot_R_java_util_concurrent_CountedCompleter, "()Ljava/util/concurrent/CountedCompleter;", 17 },
	{ "tryComplete", (intptr_t) M_java_util_concurrent_CountedCompleter_tryComplete, VTABLE_java_util_concurrent_CountedCompleter_tryComplete, "()V", 49 },
	{ "propagateCompletion", (intptr_t) M_java_util_concurrent_CountedCompleter_propagateCompletion, VTABLE_java_util_concurrent_CountedCompleter_propagateCompletion, "()V", 17 },
	{ "complete", (intptr_t) M_java_util_concurrent_CountedCompleter_complete_java_lang_Object, VTABLE_java_util_concurrent_CountedCompleter_complete_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "firstComplete", (intptr_t) M_java_util_concurrent_CountedCompleter_firstComplete_R_java_util_concurrent_CountedCompleter, VTABLE_java_util_concurrent_CountedCompleter_firstComplete_R_java_util_concurrent_CountedCompleter, "()Ljava/util/concurrent/CountedCompleter;", 17 },
	{ "nextComplete", (intptr_t) M_java_util_concurrent_CountedCompleter_nextComplete_R_java_util_concurrent_CountedCompleter, VTABLE_java_util_concurrent_CountedCompleter_nextComplete_R_java_util_concurrent_CountedCompleter, "()Ljava/util/concurrent/CountedCompleter;", 17 },
	{ "quietlyCompleteRoot", (intptr_t) M_java_util_concurrent_CountedCompleter_quietlyCompleteRoot, VTABLE_java_util_concurrent_CountedCompleter_quietlyCompleteRoot, "()V", 17 },
	{ "helpComplete", (intptr_t) M_java_util_concurrent_CountedCompleter_helpComplete_int, VTABLE_java_util_concurrent_CountedCompleter_helpComplete_int, "(I)V", 17 },
	{ "internalPropagateException", (intptr_t) M_java_util_concurrent_CountedCompleter_internalPropagateException_java_lang_Throwable, VTABLE_java_util_concurrent_CountedCompleter_internalPropagateException_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 0 },
	{ "exec", (intptr_t) M_java_util_concurrent_CountedCompleter_exec_R_boolean, VTABLE_java_util_concurrent_CountedCompleter_exec_R_boolean, "()Z", 20 },
	{ "getRawResult", (intptr_t) M_java_util_concurrent_CountedCompleter_getRawResult_R_java_lang_Object, VTABLE_java_util_concurrent_CountedCompleter_getRawResult_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setRawResult", (intptr_t) M_java_util_concurrent_CountedCompleter_setRawResult_java_lang_Object, VTABLE_java_util_concurrent_CountedCompleter_setRawResult_java_lang_Object, "(Ljava/lang/Object;)V", 4 },
};

Class class_java_util_concurrent_CountedCompleter{
		.nativeName = (intptr_t) "java/util/concurrent/CountedCompleter",
		.parentClass = (intptr_t) &class_java_util_concurrent_ForkJoinTask,
		.size = sizeof(java_util_concurrent_CountedCompleter),
		.classVtable = (intptr_t) vtable_java_util_concurrent_CountedCompleter,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_CountedCompleter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_CountedCompleter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_CountedCompleter = registerClass(&class_java_util_concurrent_CountedCompleter);

}
