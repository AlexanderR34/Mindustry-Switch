#include "java/lang/Thread.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Thread_State.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/ArrayList.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/lang/Runnable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Thread.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jint SF_java_lang_Thread_MAX_PRIORITY;
jint SF_java_lang_Thread_MIN_PRIORITY;
jint SF_java_lang_Thread_NORM_PRIORITY;
jlong SF_java_lang_Thread_currentId;
volatile jint SF_java_lang_Thread_activeThreads;
volatile jobject SF_java_lang_Thread_defaultUncaughtExceptionHandler;
jobject SF_java_lang_Thread_threads;

void mark_java_lang_Thread(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Thread_defaultUncaughtExceptionHandler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread_defaultUncaughtExceptionHandler)->clazz)->markFunction)((jobject) SF_java_lang_Thread_defaultUncaughtExceptionHandler, mark, depth + 1);
		if (SF_java_lang_Thread_threads)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread_threads)->clazz)->markFunction)((jobject) SF_java_lang_Thread_threads, mark, depth + 1);
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
	auto self = (java_lang_Thread *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_uncaughtExceptionHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uncaughtExceptionHandler)->clazz)->markFunction)((jobject) self->F_uncaughtExceptionHandler, mark, depth + 1);
}

void init_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(74);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Thread_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(81);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)), (((jobject) createStringLiteral(ctx, u8"main"_j))));
	LINE_NUMBER(82);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_entrypoint = (frame[1].l);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Thread_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_Thread_java_lang_Runnable_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(98);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(99);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(100);
	sp[0].o = ((jobject) &class_java_lang_Thread);
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_java_lang_Thread(ctx);
	jlong temp0 = (jlong)SF_java_lang_Thread_currentId;
	clinit_java_lang_Thread(ctx);
	SF_java_lang_Thread_currentId = (temp0 + (jlong(1)));
	((java_lang_Thread *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(102);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unnamed "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jlong)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_id));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((java_lang_Thread *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_12:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_lang_Thread_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(112);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Thread_activeCount_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:activeCount", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (clinit_java_lang_Thread(ctx), (jint)SF_java_lang_Thread_activeThreads);
	}

	popStackFrame(ctx);
}

jlong M_java_lang_Thread_getId_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return ((jlong)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Thread_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_Thread_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Thread_getPriority_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Thread_isAlive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:isAlive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return ((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_alive);
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_Thread_interrupted_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:interrupted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(163);
	frame[1].i = ((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_interrupted);
	LINE_NUMBER(164);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_interrupted = (jint(0));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Thread_isInterrupted_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:isInterrupted", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return ((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_interrupted);
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Thread_isDaemon_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:isDaemon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_lang_Thread_setDaemon_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:setDaemon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_join(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:join", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(184);
	if (((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_alive) == 0) goto label_1;
	}
	{
	LINE_NUMBER(185);
	((func_java_lang_Object_wait) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait])(ctx, (frame[0].o));
	goto label_0;
	}
label_1:;
	LINE_NUMBER(186);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_join_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:join", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(189);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(190);
	((func_java_lang_Thread_join) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Thread_join])(ctx, (frame[0].o));
	LINE_NUMBER(191);
	popStackFrame(ctx, self);
	return;
	}
label_1:;
	{
	LINE_NUMBER(193);
	frame[3].l = (frame[1].l);
	LINE_NUMBER(194);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[5].l = temp0;
	}
label_5:;
	{
	LINE_NUMBER(196);
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, (frame[0].o), (frame[3].l));
	LINE_NUMBER(197);
	if (((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_alive) == 0) goto label_7;
	}
	{
	jlong temp0 = frame[1].l;
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	jlong temp2 = temp0 - (temp1 - (frame[5].l));
	frame[3].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) > 0) goto label_5;
	}
label_7:;
	LINE_NUMBER(198);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_join_long_int(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:join", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(201);
	((func_java_lang_Thread_join_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Thread_join_long])(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_Thread_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:run", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_target;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_setPriority_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:setPriority", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_lang_Thread_sleep_long(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:sleep", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(224);
	SM_java_lang_Thread_sleep_long_int(ctx, (frame[0].l), (jint(0)));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_lang_Thread_sleep_long_int(jcontext ctx, jlong param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:sleep", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(229);
	if ((longCompare((frame[0].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(230);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"timeout value is negative"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(233);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	if ((frame[2].i) <= (jint(999999))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(234);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nanosecond timeout value out of range"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(238);
	SM_java_lang_Thread_sleepImpl_long_int(ctx, (frame[0].l), (frame[2].i));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_Thread_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:stop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_suspend(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:suspend", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:resume", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_Thread_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Thread "_j))));
	sp[1].o = (jobject)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_lang_Thread_yield(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:yield", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(269);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(270);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:setContextClassLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getContextClassLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:setUncaughtExceptionHandler", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_uncaughtExceptionHandler = (jref) (frame[1].o);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_lang_Thread_setDefaultUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:setDefaultUncaughtExceptionHandler", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(288);
	clinit_java_lang_Thread(ctx);
	SF_java_lang_Thread_defaultUncaughtExceptionHandler = (frame[0].o);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getUncaughtExceptionHandler", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_uncaughtExceptionHandler;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Thread_getDefaultUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getDefaultUncaughtExceptionHandler", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	{
	LINE_NUMBER(296);
	clinit_java_lang_Thread(ctx);
	sp[0].o = (jobject)SF_java_lang_Thread_defaultUncaughtExceptionHandler;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Thread_getState_R_java_lang_Thread$State(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(305);
	if (((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_started) != 0) goto label_1;
	}
	clinit_java_lang_Thread$State(ctx);
	(sp++)->o = SF_java_lang_Thread$State_NEW;
	goto label_2;
label_1:;
	{
	if (((jint)((java_lang_Thread *) NULL_CHECK((frame[0].o)))->F_alive) == 0) goto label_3;
	}
	clinit_java_lang_Thread$State(ctx);
	(sp++)->o = SF_java_lang_Thread$State_RUNNABLE;
	goto label_2;
label_3:;
	clinit_java_lang_Thread$State(ctx);
	(sp++)->o = SF_java_lang_Thread$State_TERMINATED;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:getThreadGroup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Thread(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_Thread_MAX_PRIORITY = jint(10);
	SF_java_lang_Thread_MIN_PRIORITY = jint(1);
	SF_java_lang_Thread_NORM_PRIORITY = jint(5);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread(ctx);
	{
	LINE_NUMBER(67);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	clinit_java_lang_Thread(ctx);
	SF_java_lang_Thread_threads = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Thread[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Thread_toString_R_java_lang_String,
	(void *) M_java_lang_Thread_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Thread_run,
	(void *) M_java_lang_Thread_getId_R_long,
	(void *) M_java_lang_Thread_getName_R_java_lang_String,
	(void *) M_java_lang_Thread_setName_java_lang_String,
	(void *) M_java_lang_Thread_getPriority_R_int,
	(void *) M_java_lang_Thread_interrupt,
	(void *) M_java_lang_Thread_isAlive_R_boolean,
	(void *) M_java_lang_Thread_isInterrupted_R_boolean,
	(void *) M_java_lang_Thread_isDaemon_R_boolean,
	(void *) M_java_lang_Thread_setDaemon_boolean,
	(void *) M_java_lang_Thread_join,
	(void *) M_java_lang_Thread_join_long,
	(void *) M_java_lang_Thread_join_long_int,
	(void *) M_java_lang_Thread_setPriority_int,
	(void *) M_java_lang_Thread_start,
	(void *) M_java_lang_Thread_stop,
	(void *) M_java_lang_Thread_suspend,
	(void *) M_java_lang_Thread_resume,
	(void *) M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement,
	(void *) M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader,
	(void *) M_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_lang_Thread_getState_R_java_lang_Thread$State,
	(void *) M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup,
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
	{ "run", "()V" },
	{ "getId", "()J" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "getPriority", "()I" },
	{ "interrupt", "()V" },
	{ "isAlive", "()Z" },
	{ "isInterrupted", "()Z" },
	{ "isDaemon", "()Z" },
	{ "setDaemon", "(Z)V" },
	{ "join", "()V" },
	{ "join", "(J)V" },
	{ "join", "(JI)V" },
	{ "setPriority", "(I)V" },
	{ "start", "()V" },
	{ "stop", "()V" },
	{ "suspend", "()V" },
	{ "resume", "()V" },
	{ "getStackTrace", "()[Ljava/lang/StackTraceElement;" },
	{ "setContextClassLoader", "(Ljava/lang/ClassLoader;)V" },
	{ "getContextClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V" },
	{ "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" },
	{ "getState", "()Ljava/lang/Thread$State;" },
	{ "getThreadGroup", "()Ljava/lang/ThreadGroup;" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static jclass innerClasses[] {
	&class_java_lang_Thread$UncaughtExceptionHandler,
	&class_java_lang_Thread$State,
};

static FieldMetadata fields[] {
	{ "MAX_PRIORITY", &class_int, (intptr_t) &SF_java_lang_Thread_MAX_PRIORITY, "I", 25 },
	{ "MIN_PRIORITY", &class_int, (intptr_t) &SF_java_lang_Thread_MIN_PRIORITY, "I", 25 },
	{ "NORM_PRIORITY", &class_int, (intptr_t) &SF_java_lang_Thread_NORM_PRIORITY, "I", 25 },
	{ "currentId", &class_long, (intptr_t) &SF_java_lang_Thread_currentId, "J", 10 },
	{ "target", &class_java_lang_Runnable, offsetof(java_lang_Thread, F_target), "Ljava/lang/Runnable;", 2 },
	{ "alive", &class_boolean, offsetof(java_lang_Thread, F_alive), "Z", 66 },
	{ "name", &class_java_lang_String, offsetof(java_lang_Thread, F_name), "Ljava/lang/String;", 2 },
	{ "entrypoint", &class_long, offsetof(java_lang_Thread, F_entrypoint), "J", 2 },
	{ "activeThreads", &class_int, (intptr_t) &SF_java_lang_Thread_activeThreads, "I", 74 },
	{ "interrupted", &class_boolean, offsetof(java_lang_Thread, F_interrupted), "Z", 66 },
	{ "id", &class_long, offsetof(java_lang_Thread, F_id), "J", 2 },
	{ "started", &class_boolean, offsetof(java_lang_Thread, F_started), "Z", 66 },
	{ "nativeContext", &class_long, offsetof(java_lang_Thread, F_nativeContext), "J", 2 },
	{ "uncaughtExceptionHandler", &class_java_lang_Thread$UncaughtExceptionHandler, offsetof(java_lang_Thread, F_uncaughtExceptionHandler), "Ljava/lang/Thread$UncaughtExceptionHandler;", 66 },
	{ "defaultUncaughtExceptionHandler", &class_java_lang_Thread$UncaughtExceptionHandler, (intptr_t) &SF_java_lang_Thread_defaultUncaughtExceptionHandler, "Ljava/lang/Thread$UncaughtExceptionHandler;", 74 },
	{ "threads", &class_java_util_List, (intptr_t) &SF_java_lang_Thread_threads, "Ljava/util/List;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Thread, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Thread_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Thread_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Thread_java_lang_Runnable_java_lang_String, 0, "(Ljava/lang/Runnable;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_Thread_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "activeCount", (intptr_t) SM_java_lang_Thread_activeCount_R_int, 0, "()I", 9 },
	{ "getId", (intptr_t) M_java_lang_Thread_getId_R_long, VTABLE_java_lang_Thread_getId_R_long, "()J", 1 },
	{ "currentThread", (intptr_t) SM_java_lang_Thread_currentThread_R_java_lang_Thread, 0, "()Ljava/lang/Thread;", 265 },
	{ "getName", (intptr_t) M_java_lang_Thread_getName_R_java_lang_String, VTABLE_java_lang_Thread_getName_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "setName", (intptr_t) M_java_lang_Thread_setName_java_lang_String, VTABLE_java_lang_Thread_setName_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "getPriority", (intptr_t) M_java_lang_Thread_getPriority_R_int, VTABLE_java_lang_Thread_getPriority_R_int, "()I", 17 },
	{ "interrupt", (intptr_t) M_java_lang_Thread_interrupt, VTABLE_java_lang_Thread_interrupt, "()V", 257 },
	{ "isAlive", (intptr_t) M_java_lang_Thread_isAlive_R_boolean, VTABLE_java_lang_Thread_isAlive_R_boolean, "()Z", 17 },
	{ "interrupted", (intptr_t) SM_java_lang_Thread_interrupted_R_boolean, 0, "()Z", 9 },
	{ "isInterrupted", (intptr_t) M_java_lang_Thread_isInterrupted_R_boolean, VTABLE_java_lang_Thread_isInterrupted_R_boolean, "()Z", 17 },
	{ "isDaemon", (intptr_t) M_java_lang_Thread_isDaemon_R_boolean, VTABLE_java_lang_Thread_isDaemon_R_boolean, "()Z", 17 },
	{ "setDaemon", (intptr_t) M_java_lang_Thread_setDaemon_boolean, VTABLE_java_lang_Thread_setDaemon_boolean, "(Z)V", 17 },
	{ "join", (intptr_t) M_java_lang_Thread_join, VTABLE_java_lang_Thread_join, "()V", 49 },
	{ "join", (intptr_t) M_java_lang_Thread_join_long, VTABLE_java_lang_Thread_join_long, "(J)V", 49 },
	{ "join", (intptr_t) M_java_lang_Thread_join_long_int, VTABLE_java_lang_Thread_join_long_int, "(JI)V", 17 },
	{ "run", (intptr_t) M_java_lang_Thread_run, VTABLE_java_lang_Thread_run, "()V", 1 },
	{ "setPriority", (intptr_t) M_java_lang_Thread_setPriority_int, VTABLE_java_lang_Thread_setPriority_int, "(I)V", 17 },
	{ "sleep", (intptr_t) SM_java_lang_Thread_sleep_long, 0, "(J)V", 9 },
	{ "sleep", (intptr_t) SM_java_lang_Thread_sleep_long_int, 0, "(JI)V", 9 },
	{ "sleepImpl", (intptr_t) SM_java_lang_Thread_sleepImpl_long_int, 0, "(JI)V", 266 },
	{ "start", (intptr_t) M_java_lang_Thread_start, VTABLE_java_lang_Thread_start, "()V", 257 },
	{ "stop", (intptr_t) M_java_lang_Thread_stop, VTABLE_java_lang_Thread_stop, "()V", 17 },
	{ "suspend", (intptr_t) M_java_lang_Thread_suspend, VTABLE_java_lang_Thread_suspend, "()V", 17 },
	{ "resume", (intptr_t) M_java_lang_Thread_resume, VTABLE_java_lang_Thread_resume, "()V", 17 },
	{ "toString", (intptr_t) M_java_lang_Thread_toString_R_java_lang_String, VTABLE_java_lang_Thread_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getStackTrace", (intptr_t) M_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement, VTABLE_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement, "()[Ljava/lang/StackTraceElement;", 257 },
	{ "yield", (intptr_t) SM_java_lang_Thread_yield, 0, "()V", 9 },
	{ "finalize", (intptr_t) M_java_lang_Thread_finalize, VTABLE_java_lang_Thread_finalize, "()V", 260 },
	{ "setContextClassLoader", (intptr_t) M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader, VTABLE_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader, "(Ljava/lang/ClassLoader;)V", 1 },
	{ "getContextClassLoader", (intptr_t) M_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader, VTABLE_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader, "()Ljava/lang/ClassLoader;", 1 },
	{ "setUncaughtExceptionHandler", (intptr_t) M_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler, VTABLE_java_lang_Thread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler, "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", 1 },
	{ "setDefaultUncaughtExceptionHandler", (intptr_t) SM_java_lang_Thread_setDefaultUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler, 0, "(Ljava/lang/Thread$UncaughtExceptionHandler;)V", 9 },
	{ "getUncaughtExceptionHandler", (intptr_t) M_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler, VTABLE_java_lang_Thread_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler, "()Ljava/lang/Thread$UncaughtExceptionHandler;", 1 },
	{ "getDefaultUncaughtExceptionHandler", (intptr_t) SM_java_lang_Thread_getDefaultUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler, 0, "()Ljava/lang/Thread$UncaughtExceptionHandler;", 9 },
	{ "getState", (intptr_t) M_java_lang_Thread_getState_R_java_lang_Thread$State, VTABLE_java_lang_Thread_getState_R_java_lang_Thread$State, "()Ljava/lang/Thread$State;", 1 },
	{ "getThreadGroup", (intptr_t) M_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup, VTABLE_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup, "()Ljava/lang/ThreadGroup;", 17 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Thread, 0, "()V", 8 },
};

Class class_java_lang_Thread{
		.nativeName = (intptr_t) "java/lang/Thread",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Thread),
		.classVtable = (intptr_t) vtable_java_lang_Thread,
		.staticInitializer = (intptr_t) clinit_java_lang_Thread,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Thread,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Thread = registerClass(&class_java_lang_Thread);

}
