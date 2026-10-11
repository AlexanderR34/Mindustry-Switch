#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/lang/IllegalMonitorStateException.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_ConditionObject.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/ArrayList.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_Node.h"
#include "java/util/concurrent/locks/LockSupport.h"
#include "java/util/Collection.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/locks/AbstractOwnableSynchronizer.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_locks_AbstractQueuedSynchronizer_serialVersionUID;
jlong SF_java_util_concurrent_locks_AbstractQueuedSynchronizer_spinForTimeoutThreshold;

void mark_java_util_concurrent_locks_AbstractQueuedSynchronizer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_locks_AbstractOwnableSynchronizer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_locks_AbstractQueuedSynchronizer *) object;
	if (self->F_head)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_head)->clazz)->markFunction)((jobject) self->F_head, mark, depth + 1);
	if (self->F_tail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tail)->clazz)->markFunction)((jobject) self->F_tail, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_locks_AbstractOwnableSynchronizer(ctx);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer_serialVersionUID = jlong(7373984972572414691ll);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer_spinForTimeoutThreshold = jlong(1000ll);
}

void init_java_util_concurrent_locks_AbstractQueuedSynchronizer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(300);
	init_java_util_concurrent_locks_AbstractOwnableSynchronizer(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getState", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return ((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_state);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setState_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:setState", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(551);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_state = (frame[1].i);
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetState_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:compareAndSetState", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(569);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_state) == (frame[1].i)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(570);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(571);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_state = (frame[2].i);
	LINE_NUMBER(572);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(573);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:enq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	LINE_NUMBER(593);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[1].o);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK(sp[0].o))->F_tail = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(597);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (frame[2].o);
	LINE_NUMBER(598);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(599);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_next = (jref) (frame[1].o);
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	LINE_NUMBER(603);
	goto label_0;

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:addWaiter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(613);
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node);
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_lang_Thread_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o, sp[1].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(615);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[3].o = sp[0].o;
	LINE_NUMBER(616);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(617);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev = (jref) (frame[3].o);
	LINE_NUMBER(618);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(619);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:setHead", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(635);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[1].o);
	LINE_NUMBER(636);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(637);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_prev = (jref) (jobject(nullptr));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:unparkSuccessor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(651);
	frame[2].i = ((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus);
	LINE_NUMBER(652);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(653);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, (frame[1].o), (frame[2].i), (jint(0)));
	}
label_2:;
	{
	LINE_NUMBER(661);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(662);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_waitStatus) <= 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(663);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(664);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[4].o = sp[0].o;
	}
label_8:;
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_6;
	{
	if ((frame[4].o) == (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(665);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_waitStatus) > 0) goto label_10;
	}
	{
	LINE_NUMBER(666);
	frame[3].o = (frame[4].o);
	}
label_10:;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_prev;
	frame[4].o = sp[0].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(668);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_thread;
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, sp[0].o);
	}
label_12:;
	LINE_NUMBER(670);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:doReleaseShared", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[1].o = sp[0].o;
	LINE_NUMBER(691);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(692);
	frame[2].i = ((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus);
	LINE_NUMBER(693);
	if ((frame[2].i) != (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(694);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, (frame[1].o), (jint(-1)), (jint(0)));
	if (temp0 != 0) goto label_7;
	}
	LINE_NUMBER(695);
	goto label_0;
label_7:;
	{
	LINE_NUMBER(696);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(698);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = -3;
	LINE_NUMBER(699);
	jint temp2 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_2;
	}
	LINE_NUMBER(700);
	goto label_0;
label_2:;
	{
	LINE_NUMBER(702);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	LINE_NUMBER(703);
	goto label_13;
label_11:;
	LINE_NUMBER(704);
	goto label_0;
label_13:;
	LINE_NUMBER(705);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:setHeadAndPropagate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[3].o = sp[0].o;
	LINE_NUMBER(717);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(734);
	if ((frame[2].i) > 0) goto label_3;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_waitStatus) < 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_waitStatus) >= 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(737);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(738);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(740);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:cancelAcquire", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(751);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	LINE_NUMBER(752);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(754);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_thread = (jref) (jobject(nullptr));
	LINE_NUMBER(757);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(758);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_waitStatus) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(759);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[1].o;
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[3].o = sp[0].o;
	LINE_NUMBER(769);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus = (jint(1));
	LINE_NUMBER(772);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(773);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetNext_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[2].o), (frame[3].o), (jobject(nullptr)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(778);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_waitStatus;
	frame[4].i = temp0;
	if (temp0 == (jint(-1))) goto label_14;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_12;
	{
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	jint temp1 = jint(-1);
	LINE_NUMBER(780);
	jint temp2 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_12;
	}
label_14:;
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(782);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[5].o = sp[0].o;
	LINE_NUMBER(783);
	if ((frame[5].o) == nullptr) goto label_18;
	}
	{
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[5].o)))->F_waitStatus) > 0) goto label_18;
	}
	{
	LINE_NUMBER(784);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetNext_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[2].o), (frame[3].o), (frame[5].o));
	}
label_18:;
	LINE_NUMBER(785);
	goto label_20;
label_12:;
	{
	LINE_NUMBER(786);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_20:;
	{
	LINE_NUMBER(789);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next = (jref) (frame[1].o);
	}
label_11:;
	LINE_NUMBER(791);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:shouldParkAfterFailedAcquire", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(803);
	frame[2].i = ((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_waitStatus);
	LINE_NUMBER(804);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(809);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(810);
	if ((frame[2].i) <= 0) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(816);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_prev;
	frame[0].o = sp[1].o;
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK(sp[0].o))->F_prev = (jref) sp[1].o;
	LINE_NUMBER(817);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_waitStatus) > 0) goto label_5;
	}
	{
	LINE_NUMBER(818);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[1].o);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(825);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, (frame[0].o), (frame[2].i), (jint(-1)));
	}
label_8:;
	{
	LINE_NUMBER(827);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_selfInterrupt(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:selfInterrupt", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(835);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:parkAndCheckInterrupt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(843);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(844);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:acquireQueued", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(865);
	frame[3].i = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_8; }
	{
	LINE_NUMBER(867);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(870);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(871);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(872);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[5].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(873);
	frame[3].i = (jint(0));
	LINE_NUMBER(874);
	frame[6].i = (frame[4].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(881);
	if ((frame[3].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(882);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_14:;
	{
	LINE_NUMBER(874);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(876);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[5].o), (frame[1].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(877);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(878);
	frame[4].i = (jint(1));
	}
label_16:;
	LINE_NUMBER(879);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_8
label_2:;
	LINE_NUMBER(881);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_19;
	{
	LINE_NUMBER(882);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	}
label_19:;
	{
	LINE_NUMBER(883);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireInterruptibly_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:doAcquireInterruptibly", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(892);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE;
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(893);
	frame[3].i = (jint(1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(897);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(898);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(899);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(900);
	frame[3].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(908);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(909);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_13:;
	LINE_NUMBER(901);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(903);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[4].o), (frame[2].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(904);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(905);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	LINE_NUMBER(906);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_2:;
	LINE_NUMBER(908);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_18;
	{
	LINE_NUMBER(909);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_18:;
	{
	LINE_NUMBER(910);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireNanos_int_long_R_boolean(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:doAcquireNanos", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(922);
	if ((longCompare((frame[2].l), (jlong(0)))) > 0) goto label_11;
	}
	{
	LINE_NUMBER(923);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(924);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = (temp0 + (frame[2].l));
	LINE_NUMBER(925);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE;
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(926);
	frame[7].i = (jint(1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(929);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(930);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(931);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(932);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[8].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(933);
	frame[7].i = (jint(0));
	LINE_NUMBER(934);
	frame[9].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(946);
	if ((frame[7].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(947);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	}
label_20:;
	{
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return (frame[9].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(936);
	jlong temp0 = frame[4].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[2].l = (temp0 - temp1);
	LINE_NUMBER(937);
	if ((longCompare((frame[2].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(938);
	frame[9].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(946);
	if ((frame[7].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(947);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	}
label_24:;
	{
	LINE_NUMBER(938);
	popStackFrame(ctx);
	return (frame[9].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	{
	LINE_NUMBER(939);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[8].o), (frame[6].o));
	if (temp0 == 0) goto label_26;
	}
	{
	if ((longCompare((frame[2].l), (jlong(1000ll)))) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(941);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[2].l));
	}
label_26:;
	{
	LINE_NUMBER(942);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(943);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	LINE_NUMBER(944);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_2:;
	LINE_NUMBER(946);
	INST_ASTORE(10);
	popExceptionFrame(frameRef);
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_30;
	{
	LINE_NUMBER(947);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	}
label_30:;
	{
	LINE_NUMBER(948);
	throwException(ctx, (frame[10].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireShared_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:doAcquireShared", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(956);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED;
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(957);
	frame[3].i = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_9; }
	{
	LINE_NUMBER(959);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(962);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(963);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[6].i = temp0;
	LINE_NUMBER(964);
	if ((frame[6].i) < 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(965);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int(ctx, (frame[0].o), (frame[2].o), (frame[6].i));
	LINE_NUMBER(966);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[5].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(967);
	if ((frame[4].i) == 0) goto label_16;
	}
	LINE_NUMBER(968);
	SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_selfInterrupt(ctx);
label_16:;
	{
	LINE_NUMBER(969);
	frame[3].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(978);
	if ((frame[3].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(979);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_18:;
	LINE_NUMBER(970);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(973);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[5].o), (frame[2].o));
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(974);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(975);
	frame[4].i = (jint(1));
	}
label_20:;
	LINE_NUMBER(976);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_9
label_2:;
	LINE_NUMBER(978);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_23;
	{
	LINE_NUMBER(979);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_23:;
	{
	LINE_NUMBER(980);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedInterruptibly_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:doAcquireSharedInterruptibly", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(989);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED;
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(990);
	frame[3].i = (jint(1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(994);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(995);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(996);
	if ((frame[5].i) < 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(997);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int(ctx, (frame[0].o), (frame[2].o), (frame[5].i));
	LINE_NUMBER(998);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(999);
	frame[3].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1008);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1009);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_15:;
	LINE_NUMBER(1000);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(1003);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[4].o), (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1004);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1005);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	LINE_NUMBER(1006);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_2:;
	LINE_NUMBER(1008);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_20;
	{
	LINE_NUMBER(1009);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_20:;
	{
	LINE_NUMBER(1010);
	throwException(ctx, (frame[6].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedNanos_int_long_R_boolean(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:doAcquireSharedNanos", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1022);
	if ((longCompare((frame[2].l), (jlong(0)))) > 0) goto label_11;
	}
	{
	LINE_NUMBER(1023);
	popStackFrame(ctx);
	return (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1024);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = (temp0 + (frame[2].l));
	LINE_NUMBER(1025);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED;
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1026);
	frame[7].i = (jint(1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(1029);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1030);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1031);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	frame[9].i = temp0;
	LINE_NUMBER(1032);
	if ((frame[9].i) < 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1033);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int(ctx, (frame[0].o), (frame[6].o), (frame[9].i));
	LINE_NUMBER(1034);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[8].o)))->F_next = (jref) (jobject(nullptr));
	LINE_NUMBER(1035);
	frame[7].i = (jint(0));
	LINE_NUMBER(1036);
	frame[10].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1049);
	if ((frame[7].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1050);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	}
label_22:;
	{
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return (frame[10].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(1039);
	jlong temp0 = frame[4].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[2].l = (temp0 - temp1);
	LINE_NUMBER(1040);
	if ((longCompare((frame[2].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1041);
	frame[9].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1049);
	if ((frame[7].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1050);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	}
label_26:;
	{
	LINE_NUMBER(1041);
	popStackFrame(ctx);
	return (frame[9].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	{
	LINE_NUMBER(1042);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[8].o), (frame[6].o));
	if (temp0 == 0) goto label_28;
	}
	{
	if ((longCompare((frame[2].l), (jlong(1000ll)))) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(1044);
	SM_java_util_concurrent_locks_LockSupport_parkNanos_java_lang_Object_long(ctx, (frame[0].o), (frame[2].l));
	}
label_28:;
	{
	LINE_NUMBER(1045);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(1046);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(1047);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
label_2:;
	LINE_NUMBER(1049);
	INST_ASTORE(11);
	popExceptionFrame(frameRef);
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_32;
	{
	LINE_NUMBER(1050);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[6].o));
	}
label_32:;
	{
	LINE_NUMBER(1051);
	throwException(ctx, (frame[11].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:tryAcquire", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1083);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryRelease_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:tryRelease", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1109);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:tryAcquireShared", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1145);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:tryReleaseShared", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1170);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:isHeldExclusively", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1189);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquire_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:acquire", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1205);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[2].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE;
	LINE_NUMBER(1206);
	sp[1].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	LINE_NUMBER(1207);
	SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_selfInterrupt(ctx);
label_1:;
	LINE_NUMBER(1208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireInterruptibly_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:acquireInterruptibly", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1226);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1227);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1228);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(1229);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireInterruptibly_int(ctx, (frame[0].o), (frame[1].i));
	}
label_3:;
	LINE_NUMBER(1230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireNanos_int_long_R_boolean(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:tryAcquireNanos", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1251);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1252);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1253);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jlong temp1 = frame[2].l;
	LINE_NUMBER(1254);
	jint temp2 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireNanos_int_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_5;
	}
label_3:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(1253);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:release", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1268);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryRelease_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryRelease_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1269);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1270);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_waitStatus) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1271);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(1272);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1274);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireShared_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:acquireShared", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1289);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1290);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireShared_int(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	LINE_NUMBER(1291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireSharedInterruptibly_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:acquireSharedInterruptibly", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1308);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1309);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1310);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1311);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedInterruptibly_int(ctx, (frame[0].o), (frame[1].i));
	}
label_3:;
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireSharedNanos_int_long_R_boolean(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:tryAcquireSharedNanos", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(1332);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1333);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1334);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 >= 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jlong temp1 = frame[2].l;
	LINE_NUMBER(1335);
	jint temp2 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedNanos_int_long_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_5;
	}
label_3:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(1334);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_releaseShared_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:releaseShared", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1348);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1349);
	M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared(ctx, (frame[0].o));
	LINE_NUMBER(1350);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:hasQueuedThreads", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1369);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasContended_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:hasContended", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1382);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getFirstQueuedThread_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getFirstQueuedThread", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullGetFirstQueuedThread_R_java_lang_Thread(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullGetFirstQueuedThread_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:fullGetFirstQueuedThread", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1415);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_5;
	}
label_2:;
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1419);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_6:;
	{
	LINE_NUMBER(1429);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1430);
	frame[5].o = (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(1431);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(1432);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_thread;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1433);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1434);
	frame[5].o = (frame[6].o);
	}
label_14:;
	{
	LINE_NUMBER(1435);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[4].o)))->F_prev;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1436);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1437);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isQueued_java_lang_Thread_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:isQueued", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1451);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1452);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	}
label_3:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_4;
	{
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	if (sp[0].o != (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(1455);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1456);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_apparentlyFirstQueuedIsExclusive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:apparentlyFirstQueuedIsExclusive", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(1472);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_5;
label_2:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(1470);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedPredecessors_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:hasQueuedPredecessors", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1523);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1524);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1526);
	if ((frame[2].o) == (frame[1].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_next;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[3].o)))->F_thread;
	LINE_NUMBER(1527);
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_3:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(1526);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueueLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getQueueLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1544);
	frame[1].i = (jint(0));
	LINE_NUMBER(1545);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(1546);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	if (sp[0].o == nullptr) goto label_5;
	}
	LINE_NUMBER(1547);
	INST_IINC(1, 1);
label_5:;
	{
	LINE_NUMBER(1545);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1549);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueuedThreads_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getQueuedThreads", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1564);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1565);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(1566);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1567);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1568);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	}
label_6:;
	{
	LINE_NUMBER(1565);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1570);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getExclusiveQueuedThreads_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getExclusiveQueuedThreads", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1582);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1583);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(1584);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1585);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1586);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1587);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(1583);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1590);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getSharedQueuedThreads_R_java_util_Collection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getSharedQueuedThreads", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1602);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1603);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(1604);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1605);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_thread;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1606);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1607);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(1603);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1610);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1623);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1624);
	jint temp1 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean])(ctx, (frame[0].o));
	if (temp1 == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"non"_j));
	goto label_3;
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_3:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1625);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[State = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"empty queue]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:isOnSyncQueue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1639);
	if (((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus) == (-2)) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_prev;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1640);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1641);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_next;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1642);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1651);
	jint temp0 = (jint)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_findNodeFromTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_findNodeFromTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:findNodeFromTail", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1660);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail;
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1662);
	if ((frame[2].o) != (frame[1].o)) goto label_2;
	}
	{
	LINE_NUMBER(1663);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(1664);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1665);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1666);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_prev;
	frame[2].o = sp[0].o;
	goto label_1;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:transferForSignal", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1681);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, (frame[1].o), (-2), (jint(0)));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1682);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1690);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1691);
	frame[3].i = ((jint)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[2].o)))->F_waitStatus);
	LINE_NUMBER(1692);
	if ((frame[3].i) > 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, (frame[2].o), (frame[3].i), (jint(-1)));
	if (temp0 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1693);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_thread;
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1694);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:transferAfterCancelledWait", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1705);
	jint temp0 = (jint)SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(ctx, (frame[1].o), (-2), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1706);
	sp[0].o = (jobject)M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1707);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1715);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1716);
	SM_java_lang_Thread_yield(ctx);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(1717);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:fullyRelease", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1727);
	frame[2].i = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_2
	}
	{
	LINE_NUMBER(1729);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(1730);
	jint temp1 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean])(ctx, (frame[0].o), (frame[3].i));
	if (temp1 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(1731);
	frame[2].i = (jint(0));
	LINE_NUMBER(1732);
	frame[4].i = (frame[3].i);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1737);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1738);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(1732);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	{
	LINE_NUMBER(1734);
	clinit_java_lang_IllegalMonitorStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalMonitorStateException);
	init_java_lang_IllegalMonitorStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(1737);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(1738);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[1].o)))->F_waitStatus = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(1739);
	throwException(ctx, (frame[5].o));	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:owns", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1753);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_isOwnedBy_java_util_concurrent_locks_AbstractQueuedSynchronizer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_isOwnedBy_java_util_concurrent_locks_AbstractQueuedSynchronizer_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:hasWaiters", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1773);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1774);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not owner"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1775);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_hasWaiters_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_hasWaiters_R_boolean])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getWaitQueueLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1795);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1796);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not owner"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1797);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitQueueLength_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitQueueLength_R_int])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:getWaitingThreads", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1817);
	jint temp0 = (jint)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1818);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not owner"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1819);
	sp[0].o = (jobject)((func_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitingThreads_R_java_util_Collection) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_getWaitingThreads_R_java_util_Collection])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:compareAndSetHead", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2294);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_head = (jref) (frame[1].o);
	LINE_NUMBER(2295);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:compareAndSetTail", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2302);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer *) NULL_CHECK((frame[0].o)))->F_tail = (jref) (frame[2].o);
	LINE_NUMBER(2303);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:compareAndSetWaitStatus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2310);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_waitStatus = (frame[2].i);
	LINE_NUMBER(2311);
	popStackFrame(ctx, (jobject) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetNext_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer:compareAndSetNext", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2318);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[2].o);
	LINE_NUMBER(2319);
	popStackFrame(ctx, (jobject) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_AbstractQueuedSynchronizer[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_setExclusiveOwnerThread_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_getExclusiveOwnerThread_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setState_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetState_int_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireShared_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryRelease_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquire_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireShared_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireSharedInterruptibly_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireSharedNanos_int_long_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_releaseShared_int_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasContended_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getFirstQueuedThread_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullGetFirstQueuedThread_R_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isQueued_java_lang_Thread_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_apparentlyFirstQueuedIsExclusive_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedPredecessors_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueueLength_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getExclusiveQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getSharedQueuedThreads_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_findNodeFromTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean,
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
	{ "setExclusiveOwnerThread", "(Ljava/lang/Thread;)V" },
	{ "getExclusiveOwnerThread", "()Ljava/lang/Thread;" },
	{ "getState", "()I" },
	{ "setState", "(I)V" },
	{ "compareAndSetState", "(II)Z" },
	{ "enq", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;" },
	{ "addWaiter", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;" },
	{ "setHead", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "unparkSuccessor", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "doReleaseShared", "()V" },
	{ "setHeadAndPropagate", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;I)V" },
	{ "cancelAcquire", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V" },
	{ "parkAndCheckInterrupt", "()Z" },
	{ "acquireQueued", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;I)Z" },
	{ "doAcquireInterruptibly", "(I)V" },
	{ "doAcquireNanos", "(IJ)Z" },
	{ "doAcquireShared", "(I)V" },
	{ "doAcquireSharedInterruptibly", "(I)V" },
	{ "doAcquireSharedNanos", "(IJ)Z" },
	{ "tryAcquire", "(I)Z" },
	{ "tryRelease", "(I)Z" },
	{ "tryAcquireShared", "(I)I" },
	{ "tryReleaseShared", "(I)Z" },
	{ "isHeldExclusively", "()Z" },
	{ "acquire", "(I)V" },
	{ "acquireInterruptibly", "(I)V" },
	{ "tryAcquireNanos", "(IJ)Z" },
	{ "release", "(I)Z" },
	{ "acquireShared", "(I)V" },
	{ "acquireSharedInterruptibly", "(I)V" },
	{ "tryAcquireSharedNanos", "(IJ)Z" },
	{ "releaseShared", "(I)Z" },
	{ "hasQueuedThreads", "()Z" },
	{ "hasContended", "()Z" },
	{ "getFirstQueuedThread", "()Ljava/lang/Thread;" },
	{ "fullGetFirstQueuedThread", "()Ljava/lang/Thread;" },
	{ "isQueued", "(Ljava/lang/Thread;)Z" },
	{ "apparentlyFirstQueuedIsExclusive", "()Z" },
	{ "hasQueuedPredecessors", "()Z" },
	{ "getQueueLength", "()I" },
	{ "getQueuedThreads", "()Ljava/util/Collection;" },
	{ "getExclusiveQueuedThreads", "()Ljava/util/Collection;" },
	{ "getSharedQueuedThreads", "()Ljava/util/Collection;" },
	{ "isOnSyncQueue", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "findNodeFromTail", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "transferForSignal", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "transferAfterCancelledWait", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "fullyRelease", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)I" },
	{ "owns", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z" },
	{ "hasWaiters", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z" },
	{ "getWaitQueueLength", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I" },
	{ "getWaitingThreads", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;" },
	{ "compareAndSetHead", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
	{ "compareAndSetTail", "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
	&class_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer_serialVersionUID, "J", 26 },
	{ "head", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer, F_head), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 194 },
	{ "tail", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer, F_tail), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 194 },
	{ "state", &class_int, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer, F_state), "I", 66 },
	{ "spinForTimeoutThreshold", &class_long, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer_spinForTimeoutThreshold, "J", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_AbstractQueuedSynchronizer, 0, "()V", 4 },
	{ "getState", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getState_R_int, "()I", 20 },
	{ "setState", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setState_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_setState_int, "(I)V", 20 },
	{ "compareAndSetState", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetState_int_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetState_int_int_R_boolean, "(II)Z", 20 },
	{ "enq", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_enq_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 2 },
	{ "addWaiter", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_addWaiter_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 2 },
	{ "setHead", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", 2 },
	{ "unparkSuccessor", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_unparkSuccessor_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", 2 },
	{ "doReleaseShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_doReleaseShared, "()V", 2 },
	{ "setHeadAndPropagate", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_setHeadAndPropagate_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;I)V", 2 },
	{ "cancelAcquire", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_cancelAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", 2 },
	{ "shouldParkAfterFailedAcquire", (intptr_t) SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_shouldParkAfterFailedAcquire_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, 0, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 10 },
	{ "selfInterrupt", (intptr_t) SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_selfInterrupt, 0, "()V", 8 },
	{ "parkAndCheckInterrupt", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_parkAndCheckInterrupt_R_boolean, "()Z", 18 },
	{ "acquireQueued", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireQueued_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;I)Z", 16 },
	{ "doAcquireInterruptibly", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireInterruptibly_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireInterruptibly_int, "(I)V", 2 },
	{ "doAcquireNanos", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireNanos_int_long_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireNanos_int_long_R_boolean, "(IJ)Z", 2 },
	{ "doAcquireShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireShared_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireShared_int, "(I)V", 2 },
	{ "doAcquireSharedInterruptibly", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedInterruptibly_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedInterruptibly_int, "(I)V", 2 },
	{ "doAcquireSharedNanos", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedNanos_int_long_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_doAcquireSharedNanos_int_long_R_boolean, "(IJ)Z", 2 },
	{ "tryAcquire", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquire_int_R_boolean, "(I)Z", 4 },
	{ "tryRelease", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryRelease_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryRelease_int_R_boolean, "(I)Z", 4 },
	{ "tryAcquireShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireShared_int_R_int, "(I)I", 4 },
	{ "tryReleaseShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryReleaseShared_int_R_boolean, "(I)Z", 4 },
	{ "isHeldExclusively", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isHeldExclusively_R_boolean, "()Z", 4 },
	{ "acquire", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquire_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquire_int, "(I)V", 17 },
	{ "acquireInterruptibly", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireInterruptibly_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireInterruptibly_int, "(I)V", 17 },
	{ "tryAcquireNanos", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireNanos_int_long_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireNanos_int_long_R_boolean, "(IJ)Z", 17 },
	{ "release", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_release_int_R_boolean, "(I)Z", 17 },
	{ "acquireShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireShared_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireShared_int, "(I)V", 17 },
	{ "acquireSharedInterruptibly", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireSharedInterruptibly_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_acquireSharedInterruptibly_int, "(I)V", 17 },
	{ "tryAcquireSharedNanos", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireSharedNanos_int_long_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_tryAcquireSharedNanos_int_long_R_boolean, "(IJ)Z", 17 },
	{ "releaseShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_releaseShared_int_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_releaseShared_int_R_boolean, "(I)Z", 17 },
	{ "hasQueuedThreads", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedThreads_R_boolean, "()Z", 17 },
	{ "hasContended", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasContended_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasContended_R_boolean, "()Z", 17 },
	{ "getFirstQueuedThread", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getFirstQueuedThread_R_java_lang_Thread, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getFirstQueuedThread_R_java_lang_Thread, "()Ljava/lang/Thread;", 17 },
	{ "fullGetFirstQueuedThread", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullGetFirstQueuedThread_R_java_lang_Thread, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullGetFirstQueuedThread_R_java_lang_Thread, "()Ljava/lang/Thread;", 2 },
	{ "isQueued", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isQueued_java_lang_Thread_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isQueued_java_lang_Thread_R_boolean, "(Ljava/lang/Thread;)Z", 17 },
	{ "apparentlyFirstQueuedIsExclusive", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_apparentlyFirstQueuedIsExclusive_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_apparentlyFirstQueuedIsExclusive_R_boolean, "()Z", 16 },
	{ "hasQueuedPredecessors", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedPredecessors_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasQueuedPredecessors_R_boolean, "()Z", 17 },
	{ "getQueueLength", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueueLength_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueueLength_R_int, "()I", 17 },
	{ "getQueuedThreads", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueuedThreads_R_java_util_Collection, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getQueuedThreads_R_java_util_Collection, "()Ljava/util/Collection;", 17 },
	{ "getExclusiveQueuedThreads", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getExclusiveQueuedThreads_R_java_util_Collection, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getExclusiveQueuedThreads_R_java_util_Collection, "()Ljava/util/Collection;", 17 },
	{ "getSharedQueuedThreads", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getSharedQueuedThreads_R_java_util_Collection, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getSharedQueuedThreads_R_java_util_Collection, "()Ljava/util/Collection;", 17 },
	{ "toString", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_toString_R_java_lang_String, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isOnSyncQueue", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_isOnSyncQueue_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 16 },
	{ "findNodeFromTail", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_findNodeFromTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_findNodeFromTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 2 },
	{ "transferForSignal", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferForSignal_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 16 },
	{ "transferAfterCancelledWait", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_transferAfterCancelledWait_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 16 },
	{ "fullyRelease", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_fullyRelease_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_int, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)I", 16 },
	{ "owns", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_owns_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z", 17 },
	{ "hasWaiters", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_hasWaiters_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z", 17 },
	{ "getWaitQueueLength", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitQueueLength_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_int, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I", 17 },
	{ "getWaitingThreads", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_getWaitingThreads_java_util_concurrent_locks_AbstractQueuedSynchronizer$ConditionObject_R_java_util_Collection, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;", 17 },
	{ "compareAndSetHead", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetHead_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 50 },
	{ "compareAndSetTail", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetTail_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 50 },
	{ "compareAndSetWaitStatus", (intptr_t) SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetWaitStatus_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_int_int_R_boolean, 0, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;II)Z", 58 },
	{ "compareAndSetNext", (intptr_t) SM_java_util_concurrent_locks_AbstractQueuedSynchronizer_compareAndSetNext_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_R_boolean, 0, "(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)Z", 58 },
};

Class class_java_util_concurrent_locks_AbstractQueuedSynchronizer{
		.nativeName = (intptr_t) "java/util/concurrent/locks/AbstractQueuedSynchronizer",
		.parentClass = (intptr_t) &class_java_util_concurrent_locks_AbstractOwnableSynchronizer,
		.size = sizeof(java_util_concurrent_locks_AbstractQueuedSynchronizer),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 58,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 65,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_AbstractQueuedSynchronizer = registerClass(&class_java_util_concurrent_locks_AbstractQueuedSynchronizer);

}
