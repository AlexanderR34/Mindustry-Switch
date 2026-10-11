#include "arc/util/Timer.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "arc/Files.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Timer_Task.h"
#include "arc/util/Timer_TimerThread.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "arc/util/Timer.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/util/Timer_3.h"
#include "java/lang/Throwable.h"
#include "arc/util/Timer_1.h"
#include "java/lang/System.h"
#include "arc/util/Timer_2.h"

extern "C" {

jobject SF_arc_util_Timer_threadLock;
jobject SF_arc_util_Timer_thread;

void mark_arc_util_Timer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Timer_threadLock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Timer_threadLock)->clazz)->markFunction)((jobject) SF_arc_util_Timer_threadLock, mark, depth + 1);
		if (SF_arc_util_Timer_thread)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Timer_thread)->clazz)->markFunction)((jobject) SF_arc_util_Timer_thread, mark, depth + 1);
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
	auto self = (arc_util_Timer *) object;
	if (self->F_tasks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tasks)->clazz)->markFunction)((jobject) self->F_tasks, mark, depth + 1);
}

void init_arc_util_Timer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, (jint(0)), (8));
	((arc_util_Timer *) NULL_CHECK(sp[0].o))->F_tasks = (jref) sp[1].o;
	LINE_NUMBER(23);
	((func_arc_util_Timer_start) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timer_start])(ctx, (frame[0].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_instance_R_arc_util_Timer(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:instance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	{
	LINE_NUMBER(31);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[0].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_arc_util_Timer_thread_R_arc_util_Timer$TimerThread(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[1].o)))->F_instance;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	clinit_arc_util_Timer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Timer);
	init_arc_util_Timer(ctx, sp[1].o);
	((arc_util_Timer$TimerThread *) NULL_CHECK(sp[0].o))->F_instance = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[1].o)))->F_instance;
	monitorExit(ctx, (frame[0].o));
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
	LINE_NUMBER(35);
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_thread_R_arc_util_Timer$TimerThread(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:thread", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	{
	LINE_NUMBER(39);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[0].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(40);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK(sp[0].o))->F_files;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	if (sp[0].o == sp[1].o) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(41);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	if (sp[0].o == nullptr) goto label_9;
	}
	clinit_arc_util_Timer(ctx);
	(sp++)->o = SF_arc_util_Timer_thread;
	POP_N(1); // Pop method args
	((func_arc_util_Timer$TimerThread_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer$TimerThread_dispose])(ctx, sp[0].o);
label_9:;
	{
	LINE_NUMBER(42);
	clinit_arc_util_Timer$TimerThread(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Timer$TimerThread);
	init_arc_util_Timer$TimerThread(ctx, sp[0].o);
	clinit_arc_util_Timer(ctx);
	SF_arc_util_Timer_thread = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(44);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_thread;
	monitorExit(ctx, (frame[0].o));
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
	LINE_NUMBER(45);
	frame[1].o = sp[0].o;
	monitorExit(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(1);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_post_arc_util_Timer$Task_R_arc_util_Timer$Task(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:post", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	sp[0].o = (jobject)((func_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:schedule", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task])(ctx, sp[0].o, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:schedule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:schedule", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_schedule_java_lang_Runnable_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:schedule", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	clinit_arc_util_Timer$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Timer$1);
	init_arc_util_Timer$1_java_lang_Runnable(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task])(ctx, sp[0].o, sp[1].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:schedule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	clinit_arc_util_Timer$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Timer$2);
	init_arc_util_Timer$2_java_lang_Runnable(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_int_R_arc_util_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:schedule", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_arc_util_Timer_instance_R_arc_util_Timer(ctx);
	clinit_arc_util_Timer$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Timer$3);
	init_arc_util_Timer$3_java_lang_Runnable(ctx, sp[1].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:postTask", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task])(ctx, (frame[0].o), (frame[1].o), (jfloat(0)), (jfloat(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:scheduleTask", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jfloat(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:scheduleTask", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:scheduleTask", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(140);
	sp[0].o = frame[1].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_util_Timer$Task *) NULL_CHECK((frame[1].o)))->F_timer;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The same task may not be scheduled twice."_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(142);
	((arc_util_Timer$Task *) NULL_CHECK((frame[1].o)))->F_timer = (jref) (frame[0].o);
	LINE_NUMBER(143);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	((arc_util_Timer$Task *) NULL_CHECK(sp[0].o))->F_executeTimeMillis = ((temp0 / (jlong(1000000ll))) + (jlong(((frame[2].f) * (jfloat(1000.0f))))));
	LINE_NUMBER(144);
	((arc_util_Timer$Task *) NULL_CHECK((frame[1].o)))->F_intervalMillis = (jlong(((frame[3].f) * (jfloat(1000.0f)))));
	LINE_NUMBER(145);
	((arc_util_Timer$Task *) NULL_CHECK((frame[1].o)))->F_repeatCount = (frame[4].i);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(147);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_25;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_25:;
	{
	LINE_NUMBER(148);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_26;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	label_26:;
	{
	LINE_NUMBER(149);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[5].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(150);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(151);
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	goto label_28;
label_14:;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_28:;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_Timer_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:stop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_arc_util_Timer_thread_R_arc_util_Timer$TimerThread(ctx);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK(sp[0].o))->F_instances;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	LINE_NUMBER(159);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_Timer_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:start", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_arc_util_Timer_thread_R_arc_util_Timer$TimerThread(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_util_Timer$TimerThread *) NULL_CHECK((frame[2].o)))->F_instances;
	frame[3].o = sp[0].o;
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[3].o), (frame[0].o), (jint(1)));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ALOAD(1);
	INST_MONITOREXIT();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(169);
	clinit_arc_util_Timer(ctx);
	sp[0].o = (jobject)SF_arc_util_Timer_threadLock;
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, sp[0].o);
	LINE_NUMBER(170);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_14:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_Timer_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:clear", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_8:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_arc_util_Timer$Task, sp[0].o));
	LINE_NUMBER(177);
	sp[0].o = frame[3].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(178);
	((arc_util_Timer$Task *) NULL_CHECK((frame[3].o)))->F_executeTimeMillis = (jlong(0));
	LINE_NUMBER(179);
	((arc_util_Timer$Task *) NULL_CHECK((frame[3].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(180);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(175);
	INST_IINC(1, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(183);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_util_Timer_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong M_arc_util_Timer_update_long_long_R_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:update", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(194);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[7].o = (checkCast(ctx, &class_arc_util_Timer$Task, sp[0].o));
	LINE_NUMBER(196);
	sp[0].o = frame[7].o;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(197);
	if ((longCompare(((jlong)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_executeTimeMillis), (frame[1].l))) <= 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(198);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[3].l), (((jlong)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_executeTimeMillis) - (frame[1].l)));
	frame[3].l = temp0;
	LINE_NUMBER(199);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(201);
	if (((jint)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_repeatCount) != 0) goto label_18;
	}
	{
	LINE_NUMBER(202);
	((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(204);
	INST_IINC(5, -1);
	LINE_NUMBER(205);
	INST_IINC(6, -1);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(207);
	((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_executeTimeMillis = ((frame[1].l) + ((jlong)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_intervalMillis));
	LINE_NUMBER(208);
	jlong temp0 = (jlong)SM_java_lang_Math_min_long_long_R_long(ctx, (frame[3].l), ((jlong)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_intervalMillis));
	frame[3].l = temp0;
	LINE_NUMBER(209);
	if (((jint)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_repeatCount) <= 0) goto label_23;
	}
	{
	sp[0].o = frame[7].o;
	((arc_util_Timer$Task *) NULL_CHECK(sp[0].o))->F_repeatCount = (((jint)((arc_util_Timer$Task *) NULL_CHECK(sp[0].o))->F_repeatCount) - (jint(1)));
	}
label_23:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((arc_util_Timer$Task *) NULL_CHECK((frame[7].o)))->F_app;
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(212);
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	goto label_17;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_17:;
	{
	LINE_NUMBER(194);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx, self);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

void M_arc_util_Timer_delay_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:delay", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(219);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_util_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_util_Timer$Task, sp[0].o));
	LINE_NUMBER(221);
	sp[0].o = frame[5].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(222);
	sp[0].o = frame[5].o;
	((arc_util_Timer$Task *) NULL_CHECK(sp[0].o))->F_executeTimeMillis = (((jlong)((arc_util_Timer$Task *) NULL_CHECK(sp[0].o))->F_executeTimeMillis) + (frame[1].l));
	LINE_NUMBER(223);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_13;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_13:;
	{
	LINE_NUMBER(219);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(225);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_util_Timer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer(ctx);
	{
	LINE_NUMBER(17);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_arc_util_Timer(ctx);
	SF_arc_util_Timer_threadLock = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Timer[] {
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
	(void *) M_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task,
	(void *) M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task,
	(void *) M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task,
	(void *) M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task,
	(void *) M_arc_util_Timer_stop,
	(void *) M_arc_util_Timer_start,
	(void *) M_arc_util_Timer_clear,
	(void *) M_arc_util_Timer_isEmpty_R_boolean,
	(void *) M_arc_util_Timer_update_long_long_R_long,
	(void *) M_arc_util_Timer_delay_long,
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
	{ "postTask", "(Larc/util/Timer$Task;)Larc/util/Timer$Task;" },
	{ "scheduleTask", "(Larc/util/Timer$Task;F)Larc/util/Timer$Task;" },
	{ "scheduleTask", "(Larc/util/Timer$Task;FF)Larc/util/Timer$Task;" },
	{ "scheduleTask", "(Larc/util/Timer$Task;FFI)Larc/util/Timer$Task;" },
	{ "stop", "()V" },
	{ "start", "()V" },
	{ "clear", "()V" },
	{ "isEmpty", "()Z" },
	{ "update", "(JJ)J" },
	{ "delay", "(J)V" },
};

static jclass innerClasses[] {
	&class_arc_util_Timer$TimerThread,
	&class_arc_util_Timer$Task,
};

static FieldMetadata fields[] {
	{ "threadLock", &class_java_lang_Object, (intptr_t) &SF_arc_util_Timer_threadLock, "Ljava/lang/Object;", 24 },
	{ "thread", &class_arc_util_Timer$TimerThread, (intptr_t) &SF_arc_util_Timer_thread, "Larc/util/Timer$TimerThread;", 8 },
	{ "tasks", &class_arc_struct_Seq, offsetof(arc_util_Timer, F_tasks), "Larc/struct/Seq;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Timer, 0, "()V", 1 },
	{ "instance", (intptr_t) SM_arc_util_Timer_instance_R_arc_util_Timer, 0, "()Larc/util/Timer;", 9 },
	{ "thread", (intptr_t) SM_arc_util_Timer_thread_R_arc_util_Timer$TimerThread, 0, "()Larc/util/Timer$TimerThread;", 10 },
	{ "post", (intptr_t) SM_arc_util_Timer_post_arc_util_Timer$Task_R_arc_util_Timer$Task, 0, "(Larc/util/Timer$Task;)Larc/util/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_R_arc_util_Timer$Task, 0, "(Larc/util/Timer$Task;F)Larc/util/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task, 0, "(Larc/util/Timer$Task;FF)Larc/util/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_arc_util_Timer_schedule_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task, 0, "(Larc/util/Timer$Task;FFI)Larc/util/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_arc_util_Timer_schedule_java_lang_Runnable_float_R_arc_util_Timer$Task, 0, "(Ljava/lang/Runnable;F)Larc/util/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_R_arc_util_Timer$Task, 0, "(Ljava/lang/Runnable;FF)Larc/util/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_arc_util_Timer_schedule_java_lang_Runnable_float_float_int_R_arc_util_Timer$Task, 0, "(Ljava/lang/Runnable;FFI)Larc/util/Timer$Task;", 9 },
	{ "postTask", (intptr_t) M_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task, VTABLE_arc_util_Timer_postTask_arc_util_Timer$Task_R_arc_util_Timer$Task, "(Larc/util/Timer$Task;)Larc/util/Timer$Task;", 1 },
	{ "scheduleTask", (intptr_t) M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task, VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_R_arc_util_Timer$Task, "(Larc/util/Timer$Task;F)Larc/util/Timer$Task;", 1 },
	{ "scheduleTask", (intptr_t) M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task, VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_R_arc_util_Timer$Task, "(Larc/util/Timer$Task;FF)Larc/util/Timer$Task;", 1 },
	{ "scheduleTask", (intptr_t) M_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task, VTABLE_arc_util_Timer_scheduleTask_arc_util_Timer$Task_float_float_int_R_arc_util_Timer$Task, "(Larc/util/Timer$Task;FFI)Larc/util/Timer$Task;", 1 },
	{ "stop", (intptr_t) M_arc_util_Timer_stop, VTABLE_arc_util_Timer_stop, "()V", 1 },
	{ "start", (intptr_t) M_arc_util_Timer_start, VTABLE_arc_util_Timer_start, "()V", 1 },
	{ "clear", (intptr_t) M_arc_util_Timer_clear, VTABLE_arc_util_Timer_clear, "()V", 33 },
	{ "isEmpty", (intptr_t) M_arc_util_Timer_isEmpty_R_boolean, VTABLE_arc_util_Timer_isEmpty_R_boolean, "()Z", 33 },
	{ "update", (intptr_t) M_arc_util_Timer_update_long_long_R_long, VTABLE_arc_util_Timer_update_long_long_R_long, "(JJ)J", 32 },
	{ "delay", (intptr_t) M_arc_util_Timer_delay_long, VTABLE_arc_util_Timer_delay_long, "(J)V", 33 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Timer, 0, "()V", 8 },
};

Class class_arc_util_Timer{
		.nativeName = (intptr_t) "arc/util/Timer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Timer),
		.classVtable = (intptr_t) vtable_arc_util_Timer,
		.staticInitializer = (intptr_t) clinit_arc_util_Timer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Timer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Timer = registerClass(&class_arc_util_Timer);

}
