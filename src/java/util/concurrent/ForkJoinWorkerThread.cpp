#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/util/concurrent/ForkJoinPool_WorkQueue.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ForkJoinWorkerThread_InnocuousForkJoinWorkerThread.h"
#include "java/lang/ThreadGroup.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_java_util_concurrent_ForkJoinWorkerThread(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Thread(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ForkJoinWorkerThread *) object;
	if (self->F_pool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pool)->clazz)->markFunction)((jobject) self->F_pool, mark, depth + 1);
	if (self->F_workQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workQueue)->clazz)->markFunction)((jobject) self->F_workQueue, mark, depth + 1);
}

void clinit_java_util_concurrent_ForkJoinWorkerThread(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Thread(ctx);
}

void init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinWorkerThread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	init_java_lang_Thread_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"aForkJoinWorkerThread"_j))));
	LINE_NUMBER(83);
	((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (frame[1].o);
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue])(ctx, (frame[1].o), (frame[0].o));
	((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_workQueue = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinWorkerThread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(93);
	init_java_lang_Thread_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"aForkJoinWorkerThread"_j))));
	LINE_NUMBER(94);
	M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(95);
	((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (frame[1].o);
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue])(ctx, (frame[1].o), (frame[0].o));
	((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_workQueue = (jref) sp[1].o;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool_java_lang_ClassLoader_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinWorkerThread(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(105);
	init_java_lang_Thread_java_lang_Runnable_java_lang_String(ctx, (frame[0].o), (jobject(nullptr)), (((jobject) createStringLiteral(ctx, u8"aForkJoinWorkerThread"_j))));
	LINE_NUMBER(106);
	M_java_lang_Thread_setContextClassLoader_java_lang_ClassLoader(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(109);
	((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (frame[1].o);
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue])(ctx, (frame[1].o), (frame[0].o));
	((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_workQueue = (jref) sp[1].o;
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinWorkerThread_getPool_R_java_util_concurrent_ForkJoinPool(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:getPool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinWorkerThread_getPoolIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:getPoolIndex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_workQueue;
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_getPoolIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_getPoolIndex_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread_onStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:onStart", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:onTermination", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_workQueue;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_array;
	if (sp[0].o != nullptr) goto label_36;
	}
	{
	LINE_NUMBER(166);
	frame[1].o = (jobject(nullptr));
	}
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_9; }
	}
	{
	LINE_NUMBER(168);
	((func_java_util_concurrent_ForkJoinWorkerThread_onStart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_onStart])(ctx, (frame[0].o));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_workQueue;
	((func_java_util_concurrent_ForkJoinPool_runWorker_java_util_concurrent_ForkJoinPool$WorkQueue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_runWorker_java_util_concurrent_ForkJoinPool$WorkQueue])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(174);
	((func_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	goto label_40;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(175);
	frame[2].o = sp[0].o;
	LINE_NUMBER(176);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(177);
	frame[1].o = (frame[2].o);
	}
label_6:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	goto label_40;
	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(179);
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	throwException(ctx, (frame[3].o));	}
label_40:;
	LINE_NUMBER(181);
	goto label_36;
label_9:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
	{
	sp -= 1;
	LINE_NUMBER(170);
	frame[2].o = sp[0].o;
	LINE_NUMBER(171);
	frame[1].o = (frame[2].o);
	}
	popExceptionFrame(frameRef);
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_15; }
	}
	{
	LINE_NUMBER(174);
	((func_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	goto label_47;
	}
label_13:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	{
	sp -= 1;
	LINE_NUMBER(175);
	frame[2].o = sp[0].o;
	LINE_NUMBER(176);
	if ((frame[1].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(177);
	frame[1].o = (frame[2].o);
	}
label_17:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	goto label_47;
	}
label_15:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_15; }
	}
	LINE_NUMBER(179);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	throwException(ctx, (frame[4].o));	}
label_47:;
	LINE_NUMBER(181);
	goto label_36;
label_21:;
label_34: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_21; }
	}
	LINE_NUMBER(173);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_26; }
	}
label_29: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_28; }
	}
	{
	LINE_NUMBER(174);
	((func_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable])(ctx, (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	goto label_53;
	}
label_26:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	{
	sp -= 1;
	LINE_NUMBER(175);
	frame[6].o = sp[0].o;
	LINE_NUMBER(176);
	if ((frame[1].o) != nullptr) goto label_30;
	}
	{
	LINE_NUMBER(177);
	frame[1].o = (frame[6].o);
	}
label_30:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	goto label_53;
	}
label_28:;
label_33: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_28; }
	}
	LINE_NUMBER(179);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	throwException(ctx, (frame[7].o));	}
label_53:;
	{
	LINE_NUMBER(181);
	throwException(ctx, (frame[5].o));	}
label_36:;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinWorkerThread_afterTopLevelExec(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinWorkerThread:afterTopLevelExec", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinWorkerThread[] {
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
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_run,
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
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_getPool_R_java_util_concurrent_ForkJoinPool,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_getPoolIndex_R_int,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_onStart,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinWorkerThread_afterTopLevelExec,
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
	{ "getPool", "()Ljava/util/concurrent/ForkJoinPool;" },
	{ "getPoolIndex", "()I" },
	{ "onStart", "()V" },
	{ "onTermination", "(Ljava/lang/Throwable;)V" },
	{ "afterTopLevelExec", "()V" },
};

static jclass innerClasses[] {
	&class_java_util_concurrent_ForkJoinWorkerThread$InnocuousForkJoinWorkerThread,
};

static FieldMetadata fields[] {
	{ "pool", &class_java_util_concurrent_ForkJoinPool, offsetof(java_util_concurrent_ForkJoinWorkerThread, F_pool), "Ljava/util/concurrent/ForkJoinPool;", 16 },
	{ "workQueue", &class_java_util_concurrent_ForkJoinPool$WorkQueue, offsetof(java_util_concurrent_ForkJoinWorkerThread, F_workQueue), "Ljava/util/concurrent/ForkJoinPool$WorkQueue;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool, 0, "(Ljava/util/concurrent/ForkJoinPool;)V", 4 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool_java_lang_ClassLoader, 0, "(Ljava/util/concurrent/ForkJoinPool;Ljava/lang/ClassLoader;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinWorkerThread_java_util_concurrent_ForkJoinPool_java_lang_ClassLoader_java_lang_ThreadGroup, 0, "(Ljava/util/concurrent/ForkJoinPool;Ljava/lang/ClassLoader;Ljava/lang/ThreadGroup;)V", 0 },
	{ "getPool", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread_getPool_R_java_util_concurrent_ForkJoinPool, VTABLE_java_util_concurrent_ForkJoinWorkerThread_getPool_R_java_util_concurrent_ForkJoinPool, "()Ljava/util/concurrent/ForkJoinPool;", 1 },
	{ "getPoolIndex", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread_getPoolIndex_R_int, VTABLE_java_util_concurrent_ForkJoinWorkerThread_getPoolIndex_R_int, "()I", 1 },
	{ "onStart", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread_onStart, VTABLE_java_util_concurrent_ForkJoinWorkerThread_onStart, "()V", 4 },
	{ "onTermination", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable, VTABLE_java_util_concurrent_ForkJoinWorkerThread_onTermination_java_lang_Throwable, "(Ljava/lang/Throwable;)V", 4 },
	{ "run", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread_run, VTABLE_java_util_concurrent_ForkJoinWorkerThread_run, "()V", 1 },
	{ "afterTopLevelExec", (intptr_t) M_java_util_concurrent_ForkJoinWorkerThread_afterTopLevelExec, VTABLE_java_util_concurrent_ForkJoinWorkerThread_afterTopLevelExec, "()V", 0 },
};

Class class_java_util_concurrent_ForkJoinWorkerThread{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinWorkerThread",
		.parentClass = (intptr_t) &class_java_lang_Thread,
		.size = sizeof(java_util_concurrent_ForkJoinWorkerThread),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinWorkerThread,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinWorkerThread,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinWorkerThread,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinWorkerThread = registerClass(&class_java_util_concurrent_ForkJoinWorkerThread);

}
